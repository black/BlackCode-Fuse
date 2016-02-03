#include <app/Android.android.animation.TimeAnimator.h>
#include <app/Android.android.content.ComponentName.h>
#include <app/Android.android.content.Intent.h>
#include <app/Android.android.content.res.Resources.h>
#include <app/Android.android.graphics.Canvas.h>
#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.android.graphics.Point.h>
#include <app/Android.android.graphics.Rect.h>
#include <app/Android.android.graphics.Shader.h>
#include <app/Android.android.graphics.SurfaceTexture.h>
#include <app/Android.android.os.Bundle.h>
#include <app/Android.android.os.IBinder.h>
#include <app/Android.android.os.IBinderDLRDeathRecipient.h>
#include <app/Android.android.os.IInterface.h>
#include <app/Android.android.os.Parcel.h>
#include <app/Android.android.text.Editable.h>
#include <app/Android.android.text.Spanned.h>
#include <app/Android.android.view.accessibility.AccessibilityEvent.h>
#include <app/Android.android.view.ActionMode.h>
#include <app/Android.android.view.ActionModeDLRCallback.h>
#include <app/Android.android.view.ActionProvider.h>
#include <app/Android.android.view.animation.Animation.h>
#include <app/Android.android.view.ContextMenu.h>
#include <app/Android.android.view.ContextMenuDLRContextMenuInfo.h>
#include <app/Android.android.view.DragEvent.h>
#include <app/Android.android.view.inputmethod.CompletionInfo.h>
#include <app/Android.android.view.inputmethod.CorrectionInfo.h>
#include <app/Android.android.view.inputmethod.ExtractedText.h>
#include <app/Android.android.view.inputmethod.ExtractedTextRequest.h>
#include <app/Android.android.view.KeyEvent.h>
#include <app/Android.android.view.Menu.h>
#include <app/Android.android.view.MenuItem.h>
#include <app/Android.android.view.MenuItemDLROnActionExpandListener.h>
#include <app/Android.android.view.MenuItemDLROnMenuItemClickListener.h>
#include <app/Android.android.view.MotionEvent.h>
#include <app/Android.android.view.SubMenu.h>
#include <app/Android.android.view.Surface.h>
#include <app/Android.android.view.SurfaceHolder.h>
#include <app/Android.android.view.SurfaceHolderDLRCallback.h>
#include <app/Android.android.view.View.h>
#include <app/Android.android.view.ViewParent.h>
#include <app/Android.android.widget.CompoundButton.h>
#include <app/Android.android.widget.SeekBar.h>
#include <app/Android.android.widget.TextView.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_animation_Animator.h>
#include <app/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h>
#include <app/Android.Fallbacks.Android_android_animation_TimeInterpolator.h>
#include <app/Android.Fallbacks.Android_android_content_Context.h>
#include <app/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <app/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h>
#include <app/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h>
#include <app/Android.Fallbacks.Android_android_net_Uri.h>
#include <app/Android.Fallbacks.Android_android_os_IBinder.h>
#include <app/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h>
#include <app/Android.Fallbacks.Android_android_os_IInterface.h>
#include <app/Android.Fallbacks.Android_android_os_Parcelable.h>
#include <app/Android.Fallbacks.Android_android_os_Vibrator.h>
#include <app/Android.Fallbacks.Android_android_text_Editable.h>
#include <app/Android.Fallbacks.Android_android_text_GetChars.h>
#include <app/Android.Fallbacks.Android_android_text_InputFilter.h>
#include <app/Android.Fallbacks.Android_android_text_Layout.h>
#include <app/Android.Fallbacks.Android_android_text_Spannable.h>
#include <app/Android.Fallbacks.Android_android_text_Spanned.h>
#include <app/Android.Fallbacks.Android_android_text_TextWatcher.h>
#include <app/Android.Fallbacks.Android_android_util_AttributeSet.h>
#include <app/Android.Fallbacks.Android_android_util_Property.h>
#include <app/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h>
#include <app/Android.Fallbacks.Android_android_view_ActionMode.h>
#include <app/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h>
#include <app/Android.Fallbacks.Android_android_view_ActionProvider.h>
#include <app/Android.Fallbacks.Android_android_view_animation_Animation.h>
#include <app/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h>
#include <app/Android.Fallbacks.Android_android_view_animation_Interpolator.h>
#include <app/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h>
#include <app/Android.Fallbacks.Android_android_view_ContextMenu.h>
#include <app/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h>
#include <app/Android.Fallbacks.Android_android_view_InputEvent.h>
#include <app/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h>
#include <app/Android.Fallbacks.Android_android_view_Menu.h>
#include <app/Android.Fallbacks.Android_android_view_MenuItem.h>
#include <app/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h>
#include <app/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h>
#include <app/Android.Fallbacks.Android_android_view_SubMenu.h>
#include <app/Android.Fallbacks.Android_android_view_SurfaceHolder.h>
#include <app/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h>
#include <app/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h>
#include <app/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h>
#include <app/Android.Fallbacks.Android_android_view_ViewGroup.h>
#include <app/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h>
#include <app/Android.Fallbacks.Android_android_view_ViewParent.h>
#include <app/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h>
#include <app/Android.Fallbacks.Android_android_webkit_ValueCallback.h>
#include <app/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h>
#include <app/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h>
#include <app/Android.Fallbacks.Android_android_widget_AbsSeekBar.h>
#include <app/Android.Fallbacks.Android_android_widget_CompoundButton.h>
#include <app/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h>
#include <app/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h>
#include <app/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h>
#include <app/Android.Fallbacks.Android_java_io_InputStream.h>
#include <app/Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <app/Android.Fallbacks.Android_java_lang_Runnable.h>
#include <app/Android.java.io.FileDescriptor.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Class.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.Runtime.CharArray.h>
#include <app/Android.Runtime.IntArray.h>
#include <app/Android.Runtime.ObjectArray__Android_android_content_Intent.h>
#include <app/Android.Runtime.ObjectArray__Android_android_text_InputFilter.h>
#include <app/Android.Runtime.ObjectArray__Android_android_view_MenuItem.h>
#include <app/Android.Runtime.ObjectArray__Android_java_lang_Object.h>
#include <app/Android.Runtime.ObjectArray__Android_java_lang_String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>

namespace app {
namespace Android {
namespace Fallbacks {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_animation_Animator__uType* Android_android_animation_Animator__typeof()
{
    static ::uStaticStrong<Android_android_animation_Animator__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_animation_Animator__uType*)::uAllocClassType(sizeof(Android_android_animation_Animator__uType), "Android.Fallbacks.Android_android_animation_Animator", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::animation::Animator__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_animation_Animator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_animation_Animator__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_375_ID;

Android_android_animation_TimeAnimatorDLRTimeListener__uType* Android_android_animation_TimeAnimatorDLRTimeListener__typeof()
{
    static ::uStaticStrong<Android_android_animation_TimeAnimatorDLRTimeListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_animation_TimeAnimatorDLRTimeListener__uType*)::uAllocClassType(sizeof(Android_android_animation_TimeAnimatorDLRTimeListener__uType), "Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onTimeUpdate = (void(*)(void*, ::app::Android::android::animation::TimeAnimator*, ::uLong, ::uLong))Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_animation_TimeAnimatorDLRTimeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_animation_TimeAnimatorDLRTimeListener__uType, __interface_1),
        ::app::Android::android::animation::TimeAnimatorDLRTimeListener__typeof(), offsetof(Android_android_animation_TimeAnimatorDLRTimeListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onTimeUpdate_375_ID", &Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_375_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("onTimeUpdate", Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate, 0, false, ::app::Android::android::animation::TimeAnimator__typeof(), ::app::Uno::Long__typeof(), ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("onTimeUpdate_IMPL_375", Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_IMPL_375, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Long__typeof(), ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate(Android_android_animation_TimeAnimatorDLRTimeListener* __this, ::app::Android::android::animation::TimeAnimator* arg0, ::uLong arg1, ::uLong arg2)
{
    Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_IMPL_375(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

void Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_IMPL_375(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uLong arg3_, ::uLong arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_375_ID,"android/animation/TimeAnimator$TimeListener","onTimeUpdate","(Landroid/animation/TimeAnimator;JJ)V",GetMethodID,"Id for fallback method android.animation.TimeAnimator$TimeListener.onTimeUpdate could not be cached",99);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_375_ID, _obArg2, ((jlong)arg3_), ((jlong)arg4_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_animation_TimeInterpolator__getInterpolation_379_ID;

Android_android_animation_TimeInterpolator__uType* Android_android_animation_TimeInterpolator__typeof()
{
    static ::uStaticStrong<Android_android_animation_TimeInterpolator__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_animation_TimeInterpolator__uType*)::uAllocClassType(sizeof(Android_android_animation_TimeInterpolator__uType), "Android.Fallbacks.Android_android_animation_TimeInterpolator", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_getInterpolation = (float(*)(void*, float))Android_android_animation_TimeInterpolator__getInterpolation;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_animation_TimeInterpolator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_animation_TimeInterpolator__uType, __interface_1),
        ::app::Android::android::animation::TimeInterpolator__typeof(), offsetof(Android_android_animation_TimeInterpolator__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("getInterpolation_379_ID", &Android_android_animation_TimeInterpolator__getInterpolation_379_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("getInterpolation", Android_android_animation_TimeInterpolator__getInterpolation, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("getInterpolation_IMPL_379", Android_android_animation_TimeInterpolator__getInterpolation_IMPL_379, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

float Android_android_animation_TimeInterpolator__getInterpolation(Android_android_animation_TimeInterpolator* __this, float arg0)
{
    return Android_android_animation_TimeInterpolator__getInterpolation_IMPL_379(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

float Android_android_animation_TimeInterpolator__getInterpolation_IMPL_379(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_animation_TimeInterpolator__getInterpolation_379_ID,"android/animation/TimeInterpolator","getInterpolation","(F)F",GetMethodID,"Id for fallback method android.animation.TimeInterpolator.getInterpolation could not be cached",94);
    
    float result;
    result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::Fallbacks::Android_android_animation_TimeInterpolator__getInterpolation_379_ID, ((jfloat)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_content_Context__getResources_44466_ID;
jmethodID Android_android_content_Context__getSystemService_44532_ID;

Android_android_content_Context__uType* Android_android_content_Context__typeof()
{
    static ::uStaticStrong<Android_android_content_Context__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_content_Context__uType*)::uAllocClassType(sizeof(Android_android_content_Context__uType), "Android.Fallbacks.Android_android_content_Context", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::content::Context__typeof());
    type->__fp_getResources = (::app::Android::android::content::res::Resources*(*)(::app::Android::android::content::Context*))Android_android_content_Context__getResources;
    type->__fp_getSystemService = (::app::Android::java::lang::Object*(*)(::app::Android::android::content::Context*, ::app::Android::java::lang::String*))Android_android_content_Context__getSystemService;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_content_Context__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_content_Context__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("getResources_44466_ID", &Android_android_content_Context__getResources_44466_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSystemService_44532_ID", &Android_android_content_Context__getSystemService_44532_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("getResources_IMPL_44466", Android_android_content_Context__getResources_IMPL_44466, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getSystemService_IMPL_44532", Android_android_content_Context__getSystemService_IMPL_44532, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Android::android::content::res::Resources* Android_android_content_Context__getResources(Android_android_content_Context* __this)
{
    return ::uCast< ::app::Android::android::content::res::Resources*>(Android_android_content_Context__getResources_IMPL_44466(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::content::res::Resources__typeof());
}

::uObject* Android_android_content_Context__getResources_IMPL_44466(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_content_Context__getResources_44466_ID,"android/content/Context","getResources","()Landroid/content/res/Resources;",GetMethodID,"Id for fallback method android.content.Context.getResources could not be cached",79);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_content_Context__getResources_44466_ID),result,::app::Android::android::content::res::Resources__typeof(),::app::Android::android::content::res::Resources*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::Object* Android_android_content_Context__getSystemService(Android_android_content_Context* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::java::lang::Object*>(Android_android_content_Context__getSystemService_IMPL_44532(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::java::lang::Object__typeof());
}

::uObject* Android_android_content_Context__getSystemService_IMPL_44532(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_content_Context__getSystemService_44532_ID,"android/content/Context","getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.content.Context.getSystemService could not be cached",83);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_content_Context__getSystemService_44532_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_graphics_drawable_Drawable__uType* Android_android_graphics_drawable_Drawable__typeof()
{
    static ::uStaticStrong<Android_android_graphics_drawable_Drawable__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_graphics_drawable_Drawable__uType*)::uAllocClassType(sizeof(Android_android_graphics_drawable_Drawable__uType), "Android.Fallbacks.Android_android_graphics_drawable_Drawable", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::graphics::drawable::Drawable__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_graphics_drawable_Drawable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_graphics_drawable_Drawable__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__resize_45127_ID;

Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__uType* Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__typeof()
{
    static ::uStaticStrong<Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__uType*)::uAllocClassType(sizeof(Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__uType), "Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory__typeof());
    type->__fp_resize = (::app::Android::android::graphics::Shader*(*)(::app::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory*, int, int))Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__resize;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__uType, __interface_1));

    type->SetFields(1,
        ::uNewField("resize_45127_ID", &Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__resize_45127_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("resize_IMPL_45127", Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__resize_IMPL_45127, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Android::android::graphics::Shader* Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__resize(Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory* __this, int arg0, int arg1)
{
    return ::uCast< ::app::Android::android::graphics::Shader*>(Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__resize_IMPL_45127(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1), ::app::Android::android::graphics::Shader__typeof());
}

::uObject* Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__resize_IMPL_45127(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__resize_45127_ID,"android/graphics/drawable/ShapeDrawable$ShaderFactory","resize","(II)Landroid/graphics/Shader;",GetMethodID,"Id for fallback method android.graphics.drawable.ShapeDrawable$ShaderFactory.resize could not be cached",103);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_graphics_drawable_ShapeDrawableDLRShaderFactory__resize_45127_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::android::graphics::Shader__typeof(),::app::Android::android::graphics::Shader*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_graphics_drawable_shapes_Shape__uType* Android_android_graphics_drawable_shapes_Shape__typeof()
{
    static ::uStaticStrong<Android_android_graphics_drawable_shapes_Shape__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_graphics_drawable_shapes_Shape__uType*)::uAllocClassType(sizeof(Android_android_graphics_drawable_shapes_Shape__uType), "Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::graphics::drawable::shapes::Shape__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_graphics_drawable_shapes_Shape__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_graphics_drawable_shapes_Shape__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_net_Uri__describeContents_45669_ID;
jmethodID Android_android_net_Uri__writeToParcel_45670_ID;

Android_android_net_Uri__uType* Android_android_net_Uri__typeof()
{
    static ::uStaticStrong<Android_android_net_Uri__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_net_Uri__uType*)::uAllocClassType(sizeof(Android_android_net_Uri__uType), "Android.Fallbacks.Android_android_net_Uri", false, 3, 0, 0);

    type->SetBaseType(::app::Android::android::net::Uri__typeof());
    type->__fp_describeContents = (int(*)(::app::Android::android::net::Uri*))Android_android_net_Uri__describeContents;
    type->__fp_writeToParcel = (void(*)(::app::Android::android::net::Uri*, ::app::Android::android::os::Parcel*, int))Android_android_net_Uri__writeToParcel;
    type->__interface_2.__fp_describeContents = (int(*)(void*))Android_android_net_Uri__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))Android_android_net_Uri__writeToParcel;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_net_Uri__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_net_Uri__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(Android_android_net_Uri__uType, __interface_2));

    type->SetFields(2,
        ::uNewField("describeContents_45669_ID", &Android_android_net_Uri__describeContents_45669_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_45670_ID", &Android_android_net_Uri__writeToParcel_45670_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("describeContents_IMPL_45669", Android_android_net_Uri__describeContents_IMPL_45669, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_45670", Android_android_net_Uri__writeToParcel_IMPL_45670, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

int Android_android_net_Uri__describeContents(Android_android_net_Uri* __this)
{
    return Android_android_net_Uri__describeContents_IMPL_45669(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_net_Uri__describeContents_IMPL_45669(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_net_Uri__describeContents_45669_ID,"android/net/Uri","describeContents","()I",GetMethodID,"Id for fallback method android.net.Uri.describeContents could not be cached",75);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_net_Uri__describeContents_45669_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_net_Uri__writeToParcel(Android_android_net_Uri* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    Android_android_net_Uri__writeToParcel_IMPL_45670(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Android_android_net_Uri__writeToParcel_IMPL_45670(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_net_Uri__writeToParcel_45670_ID,"android/net/Uri","writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.net.Uri.writeToParcel could not be cached",72);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_net_Uri__writeToParcel_45670_ID, _obArg2, ((jint)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_os_IBinder__dump_13823_ID;
jmethodID Android_android_os_IBinder__dumpAsync_13824_ID;
jmethodID Android_android_os_IBinder__getInterfaceDescriptor_13819_ID;
jmethodID Android_android_os_IBinder__isBinderAlive_13821_ID;
jmethodID Android_android_os_IBinder__linkToDeath_13826_ID;
jmethodID Android_android_os_IBinder__pingBinder_13820_ID;
jmethodID Android_android_os_IBinder__queryLocalInterface_13822_ID;
jmethodID Android_android_os_IBinder__transact_13825_ID;
jmethodID Android_android_os_IBinder__unlinkToDeath_13827_ID;

Android_android_os_IBinder__uType* Android_android_os_IBinder__typeof()
{
    static ::uStaticStrong<Android_android_os_IBinder__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_os_IBinder__uType*)::uAllocClassType(sizeof(Android_android_os_IBinder__uType), "Android.Fallbacks.Android_android_os_IBinder", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_getInterfaceDescriptor = (::app::Android::java::lang::String*(*)(void*))Android_android_os_IBinder__getInterfaceDescriptor;
    type->__interface_2.__fp_pingBinder = (bool(*)(void*))Android_android_os_IBinder__pingBinder;
    type->__interface_2.__fp_isBinderAlive = (bool(*)(void*))Android_android_os_IBinder__isBinderAlive;
    type->__interface_2.__fp_queryLocalInterface = (::uObject*(*)(void*, ::app::Android::java::lang::String*))Android_android_os_IBinder__queryLocalInterface;
    type->__interface_2.__fp_dump = (void(*)(void*, ::app::Android::java::io::FileDescriptor*, ::app::Android::Runtime::ObjectArray__Android_java_lang_String*))Android_android_os_IBinder__dump;
    type->__interface_2.__fp_dumpAsync = (void(*)(void*, ::app::Android::java::io::FileDescriptor*, ::app::Android::Runtime::ObjectArray__Android_java_lang_String*))Android_android_os_IBinder__dumpAsync;
    type->__interface_2.__fp_transact = (bool(*)(void*, int, ::app::Android::android::os::Parcel*, ::app::Android::android::os::Parcel*, int))Android_android_os_IBinder__transact;
    type->__interface_2.__fp_linkToDeath = (void(*)(void*, ::uObject*, int))Android_android_os_IBinder__linkToDeath;
    type->__interface_2.__fp_unlinkToDeath = (bool(*)(void*, ::uObject*, int))Android_android_os_IBinder__unlinkToDeath;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_os_IBinder__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_os_IBinder__uType, __interface_1),
        ::app::Android::android::os::IBinder__typeof(), offsetof(Android_android_os_IBinder__uType, __interface_2));

    type->SetFields(9,
        ::uNewField("dump_13823_ID", &Android_android_os_IBinder__dump_13823_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("dumpAsync_13824_ID", &Android_android_os_IBinder__dumpAsync_13824_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getInterfaceDescriptor_13819_ID", &Android_android_os_IBinder__getInterfaceDescriptor_13819_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isBinderAlive_13821_ID", &Android_android_os_IBinder__isBinderAlive_13821_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("linkToDeath_13826_ID", &Android_android_os_IBinder__linkToDeath_13826_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("pingBinder_13820_ID", &Android_android_os_IBinder__pingBinder_13820_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("queryLocalInterface_13822_ID", &Android_android_os_IBinder__queryLocalInterface_13822_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("transact_13825_ID", &Android_android_os_IBinder__transact_13825_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("unlinkToDeath_13827_ID", &Android_android_os_IBinder__unlinkToDeath_13827_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(18,
        ::uNewFunctionVoid("dump", Android_android_os_IBinder__dump, 0, false, ::app::Android::java::io::FileDescriptor__typeof(), ::app::Android::Runtime::ObjectArray__Android_java_lang_String__typeof()),
        ::uNewFunctionVoid("dump_IMPL_13823", Android_android_os_IBinder__dump_IMPL_13823, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("dumpAsync", Android_android_os_IBinder__dumpAsync, 0, false, ::app::Android::java::io::FileDescriptor__typeof(), ::app::Android::Runtime::ObjectArray__Android_java_lang_String__typeof()),
        ::uNewFunctionVoid("dumpAsync_IMPL_13824", Android_android_os_IBinder__dumpAsync_IMPL_13824, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getInterfaceDescriptor", Android_android_os_IBinder__getInterfaceDescriptor, 0, false, ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("getInterfaceDescriptor_IMPL_13819", Android_android_os_IBinder__getInterfaceDescriptor_IMPL_13819, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isBinderAlive", Android_android_os_IBinder__isBinderAlive, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isBinderAlive_IMPL_13821", Android_android_os_IBinder__isBinderAlive_IMPL_13821, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("linkToDeath", Android_android_os_IBinder__linkToDeath, 0, false, ::app::Android::android::os::IBinderDLRDeathRecipient__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("linkToDeath_IMPL_13826", Android_android_os_IBinder__linkToDeath_IMPL_13826, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("pingBinder", Android_android_os_IBinder__pingBinder, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("pingBinder_IMPL_13820", Android_android_os_IBinder__pingBinder_IMPL_13820, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("queryLocalInterface", Android_android_os_IBinder__queryLocalInterface, 0, false, ::app::Android::android::os::IInterface__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("queryLocalInterface_IMPL_13822", Android_android_os_IBinder__queryLocalInterface_IMPL_13822, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("transact", Android_android_os_IBinder__transact, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::os::Parcel__typeof(), ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("transact_IMPL_13825", Android_android_os_IBinder__transact_IMPL_13825, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("unlinkToDeath", Android_android_os_IBinder__unlinkToDeath, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::os::IBinderDLRDeathRecipient__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("unlinkToDeath_IMPL_13827", Android_android_os_IBinder__unlinkToDeath_IMPL_13827, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_os_IBinder__dump(Android_android_os_IBinder* __this, ::app::Android::java::io::FileDescriptor* arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1)
{
    Android_android_os_IBinder__dump_IMPL_13823(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void Android_android_os_IBinder__dump_IMPL_13823(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__dump_13823_ID,"android/os/IBinder","dump","(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.os.IBinder.dump could not be cached",66);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__dump_13823_ID, _obArg2, _obArg3);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_os_IBinder__dumpAsync(Android_android_os_IBinder* __this, ::app::Android::java::io::FileDescriptor* arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1)
{
    Android_android_os_IBinder__dumpAsync_IMPL_13824(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void Android_android_os_IBinder__dumpAsync_IMPL_13824(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__dumpAsync_13824_ID,"android/os/IBinder","dumpAsync","(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.os.IBinder.dumpAsync could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__dumpAsync_13824_ID, _obArg2, _obArg3);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::java::lang::String* Android_android_os_IBinder__getInterfaceDescriptor(Android_android_os_IBinder* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_os_IBinder__getInterfaceDescriptor_IMPL_13819(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_os_IBinder__getInterfaceDescriptor_IMPL_13819(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__getInterfaceDescriptor_13819_ID,"android/os/IBinder","getInterfaceDescriptor","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.IBinder.getInterfaceDescriptor could not be cached",84);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__getInterfaceDescriptor_13819_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_os_IBinder__isBinderAlive(Android_android_os_IBinder* __this)
{
    return Android_android_os_IBinder__isBinderAlive_IMPL_13821(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_os_IBinder__isBinderAlive_IMPL_13821(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__isBinderAlive_13821_ID,"android/os/IBinder","isBinderAlive","()Z",GetMethodID,"Id for fallback method android.os.IBinder.isBinderAlive could not be cached",75);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__isBinderAlive_13821_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_os_IBinder__linkToDeath(Android_android_os_IBinder* __this, ::uObject* arg0, int arg1)
{
    Android_android_os_IBinder__linkToDeath_IMPL_13826(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Android_android_os_IBinder__linkToDeath_IMPL_13826(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__linkToDeath_13826_ID,"android/os/IBinder","linkToDeath","(Landroid/os/IBinder$DeathRecipient;I)V",GetMethodID,"Id for fallback method android.os.IBinder.linkToDeath could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__linkToDeath_13826_ID, _obArg2, ((jint)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool Android_android_os_IBinder__pingBinder(Android_android_os_IBinder* __this)
{
    return Android_android_os_IBinder__pingBinder_IMPL_13820(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_os_IBinder__pingBinder_IMPL_13820(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__pingBinder_13820_ID,"android/os/IBinder","pingBinder","()Z",GetMethodID,"Id for fallback method android.os.IBinder.pingBinder could not be cached",72);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__pingBinder_13820_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_os_IBinder__queryLocalInterface(Android_android_os_IBinder* __this, ::app::Android::java::lang::String* arg0)
{
    return (::uObject*)Android_android_os_IBinder__queryLocalInterface_IMPL_13822(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_os_IBinder__queryLocalInterface_IMPL_13822(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__queryLocalInterface_13822_ID,"android/os/IBinder","queryLocalInterface","(Ljava/lang/String;)Landroid/os/IInterface;",GetMethodID,"Id for fallback method android.os.IBinder.queryLocalInterface could not be cached",81);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__queryLocalInterface_13822_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_os_IInterface__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_os_IBinder__transact(Android_android_os_IBinder* __this, int arg0, ::app::Android::android::os::Parcel* arg1, ::app::Android::android::os::Parcel* arg2, int arg3)
{
    return Android_android_os_IBinder__transact_IMPL_13825(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1, (::uObject*)arg2, arg3);
}

bool Android_android_os_IBinder__transact_IMPL_13825(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, ::uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__transact_13825_ID,"android/os/IBinder","transact","(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z",GetMethodID,"Id for fallback method android.os.IBinder.transact could not be cached",70);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__transact_13825_ID, ((jint)arg2_), _obArg3, _obArg4, ((jint)arg5_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_os_IBinder__unlinkToDeath(Android_android_os_IBinder* __this, ::uObject* arg0, int arg1)
{
    return Android_android_os_IBinder__unlinkToDeath_IMPL_13827(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

bool Android_android_os_IBinder__unlinkToDeath_IMPL_13827(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__unlinkToDeath_13827_ID,"android/os/IBinder","unlinkToDeath","(Landroid/os/IBinder$DeathRecipient;I)Z",GetMethodID,"Id for fallback method android.os.IBinder.unlinkToDeath could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__unlinkToDeath_13827_ID, _obArg2, ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_os_IBinderDLRDeathRecipient__binderDied_13818_ID;

Android_android_os_IBinderDLRDeathRecipient__uType* Android_android_os_IBinderDLRDeathRecipient__typeof()
{
    static ::uStaticStrong<Android_android_os_IBinderDLRDeathRecipient__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_os_IBinderDLRDeathRecipient__uType*)::uAllocClassType(sizeof(Android_android_os_IBinderDLRDeathRecipient__uType), "Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_binderDied = (void(*)(void*))Android_android_os_IBinderDLRDeathRecipient__binderDied;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_os_IBinderDLRDeathRecipient__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_os_IBinderDLRDeathRecipient__uType, __interface_1),
        ::app::Android::android::os::IBinderDLRDeathRecipient__typeof(), offsetof(Android_android_os_IBinderDLRDeathRecipient__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("binderDied_13818_ID", &Android_android_os_IBinderDLRDeathRecipient__binderDied_13818_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("binderDied", Android_android_os_IBinderDLRDeathRecipient__binderDied, 0, false),
        ::uNewFunctionVoid("binderDied_IMPL_13818", Android_android_os_IBinderDLRDeathRecipient__binderDied_IMPL_13818, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_os_IBinderDLRDeathRecipient__binderDied(Android_android_os_IBinderDLRDeathRecipient* __this)
{
    Android_android_os_IBinderDLRDeathRecipient__binderDied_IMPL_13818(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_os_IBinderDLRDeathRecipient__binderDied_IMPL_13818(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinderDLRDeathRecipient__binderDied_13818_ID,"android/os/IBinder$DeathRecipient","binderDied","()V",GetMethodID,"Id for fallback method android.os.IBinder$DeathRecipient.binderDied could not be cached",87);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinderDLRDeathRecipient__binderDied_13818_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_os_IInterface__asBinder_13836_ID;

Android_android_os_IInterface__uType* Android_android_os_IInterface__typeof()
{
    static ::uStaticStrong<Android_android_os_IInterface__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_os_IInterface__uType*)::uAllocClassType(sizeof(Android_android_os_IInterface__uType), "Android.Fallbacks.Android_android_os_IInterface", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_asBinder = (::uObject*(*)(void*))Android_android_os_IInterface__asBinder;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_os_IInterface__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_os_IInterface__uType, __interface_1),
        ::app::Android::android::os::IInterface__typeof(), offsetof(Android_android_os_IInterface__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("asBinder_13836_ID", &Android_android_os_IInterface__asBinder_13836_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("asBinder", Android_android_os_IInterface__asBinder, 0, false, ::app::Android::android::os::IBinder__typeof()),
        ::uNewFunction("asBinder_IMPL_13836", Android_android_os_IInterface__asBinder_IMPL_13836, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Android_android_os_IInterface__asBinder(Android_android_os_IInterface* __this)
{
    return (::uObject*)Android_android_os_IInterface__asBinder_IMPL_13836(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_os_IInterface__asBinder_IMPL_13836(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IInterface__asBinder_13836_ID,"android/os/IInterface","asBinder","()Landroid/os/IBinder;",GetMethodID,"Id for fallback method android.os.IInterface.asBinder could not be cached",73);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IInterface__asBinder_13836_ID),result,::app::Android::Fallbacks::Android_android_os_IBinder__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_os_Parcelable__describeContents_14065_ID;
jmethodID Android_android_os_Parcelable__writeToParcel_14066_ID;

Android_android_os_Parcelable__uType* Android_android_os_Parcelable__typeof()
{
    static ::uStaticStrong<Android_android_os_Parcelable__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_os_Parcelable__uType*)::uAllocClassType(sizeof(Android_android_os_Parcelable__uType), "Android.Fallbacks.Android_android_os_Parcelable", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_describeContents = (int(*)(void*))Android_android_os_Parcelable__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))Android_android_os_Parcelable__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_os_Parcelable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_os_Parcelable__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(Android_android_os_Parcelable__uType, __interface_2));

    type->SetFields(2,
        ::uNewField("describeContents_14065_ID", &Android_android_os_Parcelable__describeContents_14065_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_14066_ID", &Android_android_os_Parcelable__writeToParcel_14066_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("describeContents", Android_android_os_Parcelable__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_14065", Android_android_os_Parcelable__describeContents_IMPL_14065, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", Android_android_os_Parcelable__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_14066", Android_android_os_Parcelable__writeToParcel_IMPL_14066, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

int Android_android_os_Parcelable__describeContents(Android_android_os_Parcelable* __this)
{
    return Android_android_os_Parcelable__describeContents_IMPL_14065(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_os_Parcelable__describeContents_IMPL_14065(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_Parcelable__describeContents_14065_ID,"android/os/Parcelable","describeContents","()I",GetMethodID,"Id for fallback method android.os.Parcelable.describeContents could not be cached",81);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_Parcelable__describeContents_14065_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_os_Parcelable__writeToParcel(Android_android_os_Parcelable* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    Android_android_os_Parcelable__writeToParcel_IMPL_14066(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Android_android_os_Parcelable__writeToParcel_IMPL_14066(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_Parcelable__writeToParcel_14066_ID,"android/os/Parcelable","writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.os.Parcelable.writeToParcel could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_Parcelable__writeToParcel_14066_ID, _obArg2, ((jint)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_os_Vibrator__vibrate_44559_ID;

Android_android_os_Vibrator__uType* Android_android_os_Vibrator__typeof()
{
    static ::uStaticStrong<Android_android_os_Vibrator__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_os_Vibrator__uType*)::uAllocClassType(sizeof(Android_android_os_Vibrator__uType), "Android.Fallbacks.Android_android_os_Vibrator", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::os::Vibrator__typeof());
    type->__fp_vibrate = (void(*)(::app::Android::android::os::Vibrator*, ::uLong))Android_android_os_Vibrator__vibrate;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_os_Vibrator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_os_Vibrator__uType, __interface_1));

    type->SetFields(1,
        ::uNewField("vibrate_44559_ID", &Android_android_os_Vibrator__vibrate_44559_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(1,
        ::uNewFunctionVoid("vibrate_IMPL_44559", Android_android_os_Vibrator__vibrate_IMPL_44559, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_os_Vibrator__vibrate(Android_android_os_Vibrator* __this, ::uLong arg0)
{
    Android_android_os_Vibrator__vibrate_IMPL_44559(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_os_Vibrator__vibrate_IMPL_44559(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_Vibrator__vibrate_44559_ID,"android/os/Vibrator","vibrate","(J)V",GetMethodID,"Id for fallback method android.os.Vibrator.vibrate could not be cached",70);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_Vibrator__vibrate_44559_ID, ((jlong)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_text_Editable__append_19826_ID;
jmethodID Android_android_text_Editable__append_19827_ID;
jmethodID Android_android_text_Editable__append_19828_ID;
jmethodID Android_android_text_Editable__charAt_30511_ID;
jmethodID Android_android_text_Editable__clear_19829_ID;
jmethodID Android_android_text_Editable__clearSpans_19830_ID;
jmethodID Android_android_text_Editable__getChars_19833_ID;
jmethodID Android_android_text_Editable__getFilters_19832_ID;
jmethodID Android_android_text_Editable__getSpanEnd_20038_ID;
jmethodID Android_android_text_Editable__getSpanFlags_20039_ID;
jmethodID Android_android_text_Editable__getSpans_20036_ID;
jmethodID Android_android_text_Editable__getSpanStart_20037_ID;
jmethodID Android_android_text_Editable__insert_19823_ID;
jmethodID Android_android_text_Editable__insert_19824_ID;
jmethodID Android_android_text_Editable__j_delete_19825_ID;
jmethodID Android_android_text_Editable__length_30510_ID;
jmethodID Android_android_text_Editable__nextSpanTransition_20040_ID;
jmethodID Android_android_text_Editable__removeSpan_19987_ID;
jmethodID Android_android_text_Editable__replace_19821_ID;
jmethodID Android_android_text_Editable__replace_19822_ID;
jmethodID Android_android_text_Editable__setFilters_19831_ID;
jmethodID Android_android_text_Editable__setSpan_19986_ID;
jmethodID Android_android_text_Editable__subSequence_30512_ID;
jmethodID Android_android_text_Editable__toString_30513_ID;

Android_android_text_Editable__uType* Android_android_text_Editable__typeof()
{
    static ::uStaticStrong<Android_android_text_Editable__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_Editable__uType*)::uAllocClassType(sizeof(Android_android_text_Editable__uType), "Android.Fallbacks.Android_android_text_Editable", false, 7, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Android_android_text_Editable__toString;
    type->__interface_2.__fp_replace_1 = (::uObject*(*)(void*, int, int, ::uObject*, int, int))Android_android_text_Editable__replace_1;
    type->__interface_2.__fp_replace = (::uObject*(*)(void*, int, int, ::uObject*))Android_android_text_Editable__replace;
    type->__interface_2.__fp_insert_1 = (::uObject*(*)(void*, int, ::uObject*, int, int))Android_android_text_Editable__insert_1;
    type->__interface_2.__fp_insert = (::uObject*(*)(void*, int, ::uObject*))Android_android_text_Editable__insert;
    type->__interface_2.__fp_j_delete = (::uObject*(*)(void*, int, int))Android_android_text_Editable__j_delete;
    type->__interface_2.__fp_append_1 = (::uObject*(*)(void*, ::uObject*))Android_android_text_Editable__append_1;
    type->__interface_2.__fp_append_2 = (::uObject*(*)(void*, ::uObject*, int, int))Android_android_text_Editable__append_2;
    type->__interface_2.__fp_append = (::uObject*(*)(void*, ::uChar))Android_android_text_Editable__append;
    type->__interface_2.__fp_clear = (void(*)(void*))Android_android_text_Editable__clear;
    type->__interface_2.__fp_clearSpans = (void(*)(void*))Android_android_text_Editable__clearSpans;
    type->__interface_2.__fp_setFilters = (void(*)(void*, ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter*))Android_android_text_Editable__setFilters;
    type->__interface_2.__fp_getFilters = (::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter*(*)(void*))Android_android_text_Editable__getFilters;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_length = (int(*)(void*))Android_android_text_Editable__length;
    type->__interface_3.__fp_charAt = (::uChar(*)(void*, int))Android_android_text_Editable__charAt;
    type->__interface_3.__fp_subSequence = (::uObject*(*)(void*, int, int))Android_android_text_Editable__subSequence;
    type->__interface_3.__fp_toString = (::app::Android::java::lang::String*(*)(void*))Android_android_text_Editable__toString;
    type->__interface_4.__fp_getChars = (void(*)(void*, int, int, ::app::Android::Runtime::CharArray*, int))Android_android_text_Editable__getChars;
    type->__interface_5.__fp_setSpan = (void(*)(void*, ::app::Android::java::lang::Object*, int, int, int))Android_android_text_Editable__setSpan;
    type->__interface_5.__fp_removeSpan = (void(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Editable__removeSpan;
    type->__interface_6.__fp_getSpans = (::app::Android::Runtime::ObjectArray__Android_java_lang_Object*(*)(void*, int, int, ::app::Android::java::lang::Class*))Android_android_text_Editable__getSpans;
    type->__interface_6.__fp_getSpanStart = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Editable__getSpanStart;
    type->__interface_6.__fp_getSpanEnd = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Editable__getSpanEnd;
    type->__interface_6.__fp_getSpanFlags = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Editable__getSpanFlags;
    type->__interface_6.__fp_nextSpanTransition = (int(*)(void*, int, int, ::app::Android::java::lang::Class*))Android_android_text_Editable__nextSpanTransition;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_Editable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_Editable__uType, __interface_1),
        ::app::Android::android::text::Editable__typeof(), offsetof(Android_android_text_Editable__uType, __interface_2),
        ::app::Android::java::lang::CharSequence__typeof(), offsetof(Android_android_text_Editable__uType, __interface_3),
        ::app::Android::android::text::GetChars__typeof(), offsetof(Android_android_text_Editable__uType, __interface_4),
        ::app::Android::android::text::Spannable__typeof(), offsetof(Android_android_text_Editable__uType, __interface_5),
        ::app::Android::android::text::Spanned__typeof(), offsetof(Android_android_text_Editable__uType, __interface_6));

    type->SetFields(24,
        ::uNewField("append_19826_ID", &Android_android_text_Editable__append_19826_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("append_19827_ID", &Android_android_text_Editable__append_19827_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("append_19828_ID", &Android_android_text_Editable__append_19828_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("charAt_30511_ID", &Android_android_text_Editable__charAt_30511_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("clear_19829_ID", &Android_android_text_Editable__clear_19829_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("clearSpans_19830_ID", &Android_android_text_Editable__clearSpans_19830_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getChars_19833_ID", &Android_android_text_Editable__getChars_19833_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getFilters_19832_ID", &Android_android_text_Editable__getFilters_19832_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSpanEnd_20038_ID", &Android_android_text_Editable__getSpanEnd_20038_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSpanFlags_20039_ID", &Android_android_text_Editable__getSpanFlags_20039_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSpans_20036_ID", &Android_android_text_Editable__getSpans_20036_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSpanStart_20037_ID", &Android_android_text_Editable__getSpanStart_20037_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("insert_19823_ID", &Android_android_text_Editable__insert_19823_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("insert_19824_ID", &Android_android_text_Editable__insert_19824_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("j_delete_19825_ID", &Android_android_text_Editable__j_delete_19825_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("length_30510_ID", &Android_android_text_Editable__length_30510_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("nextSpanTransition_20040_ID", &Android_android_text_Editable__nextSpanTransition_20040_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("removeSpan_19987_ID", &Android_android_text_Editable__removeSpan_19987_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("replace_19821_ID", &Android_android_text_Editable__replace_19821_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("replace_19822_ID", &Android_android_text_Editable__replace_19822_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setFilters_19831_ID", &Android_android_text_Editable__setFilters_19831_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setSpan_19986_ID", &Android_android_text_Editable__setSpan_19986_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("subSequence_30512_ID", &Android_android_text_Editable__subSequence_30512_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_30513_ID", &Android_android_text_Editable__toString_30513_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(47,
        ::uNewFunction("append", Android_android_text_Editable__append, 0, false, ::app::Android::android::text::Editable__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("append", Android_android_text_Editable__append_1, 0, false, ::app::Android::android::text::Editable__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("append", Android_android_text_Editable__append_2, 0, false, ::app::Android::android::text::Editable__typeof(), ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("append_IMPL_19826", Android_android_text_Editable__append_IMPL_19826, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("append_IMPL_19827", Android_android_text_Editable__append_IMPL_19827, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("append_IMPL_19828", Android_android_text_Editable__append_IMPL_19828, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("charAt", Android_android_text_Editable__charAt, 0, false, ::app::Uno::Char__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("charAt_IMPL_30511", Android_android_text_Editable__charAt_IMPL_30511, 0, true, ::app::Uno::Char__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("clear", Android_android_text_Editable__clear, 0, false),
        ::uNewFunctionVoid("clear_IMPL_19829", Android_android_text_Editable__clear_IMPL_19829, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("clearSpans", Android_android_text_Editable__clearSpans, 0, false),
        ::uNewFunctionVoid("clearSpans_IMPL_19830", Android_android_text_Editable__clearSpans_IMPL_19830, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("getChars", Android_android_text_Editable__getChars, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Runtime::CharArray__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("getChars_IMPL_19833", Android_android_text_Editable__getChars_IMPL_19833, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getFilters", Android_android_text_Editable__getFilters, 0, false, ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter__typeof()),
        ::uNewFunction("getFilters_IMPL_19832", Android_android_text_Editable__getFilters_IMPL_19832, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getSpanEnd", Android_android_text_Editable__getSpanEnd, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::Object__typeof()),
        ::uNewFunction("getSpanEnd_IMPL_20038", Android_android_text_Editable__getSpanEnd_IMPL_20038, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getSpanFlags", Android_android_text_Editable__getSpanFlags, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::Object__typeof()),
        ::uNewFunction("getSpanFlags_IMPL_20039", Android_android_text_Editable__getSpanFlags_IMPL_20039, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getSpans", Android_android_text_Editable__getSpans, 0, false, ::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::Class__typeof()),
        ::uNewFunction("getSpans_IMPL_20036", Android_android_text_Editable__getSpans_IMPL_20036, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getSpanStart", Android_android_text_Editable__getSpanStart, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::Object__typeof()),
        ::uNewFunction("getSpanStart_IMPL_20037", Android_android_text_Editable__getSpanStart_IMPL_20037, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("insert", Android_android_text_Editable__insert, 0, false, ::app::Android::android::text::Editable__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("insert", Android_android_text_Editable__insert_1, 0, false, ::app::Android::android::text::Editable__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("insert_IMPL_19823", Android_android_text_Editable__insert_IMPL_19823, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("insert_IMPL_19824", Android_android_text_Editable__insert_IMPL_19824, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("j_delete", Android_android_text_Editable__j_delete, 0, false, ::app::Android::android::text::Editable__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("j_delete_IMPL_19825", Android_android_text_Editable__j_delete_IMPL_19825, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("length", Android_android_text_Editable__length, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("length_IMPL_30510", Android_android_text_Editable__length_IMPL_30510, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("nextSpanTransition", Android_android_text_Editable__nextSpanTransition, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::Class__typeof()),
        ::uNewFunction("nextSpanTransition_IMPL_20040", Android_android_text_Editable__nextSpanTransition_IMPL_20040, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("removeSpan", Android_android_text_Editable__removeSpan, 0, false, ::app::Android::java::lang::Object__typeof()),
        ::uNewFunctionVoid("removeSpan_IMPL_19987", Android_android_text_Editable__removeSpan_IMPL_19987, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("replace", Android_android_text_Editable__replace, 0, false, ::app::Android::android::text::Editable__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("replace", Android_android_text_Editable__replace_1, 0, false, ::app::Android::android::text::Editable__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("replace_IMPL_19821", Android_android_text_Editable__replace_IMPL_19821, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("replace_IMPL_19822", Android_android_text_Editable__replace_IMPL_19822, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setFilters", Android_android_text_Editable__setFilters, 0, false, ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter__typeof()),
        ::uNewFunctionVoid("setFilters_IMPL_19831", Android_android_text_Editable__setFilters_IMPL_19831, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setSpan", Android_android_text_Editable__setSpan, 0, false, ::app::Android::java::lang::Object__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setSpan_IMPL_19986", Android_android_text_Editable__setSpan_IMPL_19986, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("subSequence", Android_android_text_Editable__subSequence, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("subSequence_IMPL_30512", Android_android_text_Editable__subSequence_IMPL_30512, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("toString_IMPL_30513", Android_android_text_Editable__toString_IMPL_30513, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Android_android_text_Editable__append(Android_android_text_Editable* __this, ::uChar arg0)
{
    return (::uObject*)Android_android_text_Editable__append_IMPL_19828(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_text_Editable__append_1(Android_android_text_Editable* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_text_Editable__append_IMPL_19826(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_text_Editable__append_2(Android_android_text_Editable* __this, ::uObject* arg0, int arg1, int arg2)
{
    return (::uObject*)Android_android_text_Editable__append_IMPL_19827(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

::uObject* Android_android_text_Editable__append_IMPL_19826(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__append_19826_ID,"android/text/Editable","append","(Ljava/lang/CharSequence;)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.append could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__append_19826_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Editable__append_IMPL_19827(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__append_19827_ID,"android/text/Editable","append","(Ljava/lang/CharSequence;II)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.append could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__append_19827_ID, _obArg2, ((jint)arg3_), ((jint)arg4_)),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Editable__append_IMPL_19828(::uStatic* __this, bool arg0_, jobject arg1_, ::uChar arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__append_19828_ID,"android/text/Editable","append","(C)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.append could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__append_19828_ID, ((jchar)arg2_)),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uChar Android_android_text_Editable__charAt(Android_android_text_Editable* __this, int arg0)
{
    return Android_android_text_Editable__charAt_IMPL_30511(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uChar Android_android_text_Editable__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__charAt_30511_ID,"android/text/Editable","charAt","(I)C",GetMethodID,"Id for fallback method android.text.Editable.charAt could not be cached",71);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__charAt_30511_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_text_Editable__clear(Android_android_text_Editable* __this)
{
    Android_android_text_Editable__clear_IMPL_19829(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_text_Editable__clear_IMPL_19829(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__clear_19829_ID,"android/text/Editable","clear","()V",GetMethodID,"Id for fallback method android.text.Editable.clear could not be cached",70);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__clear_19829_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_text_Editable__clearSpans(Android_android_text_Editable* __this)
{
    Android_android_text_Editable__clearSpans_IMPL_19830(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_text_Editable__clearSpans_IMPL_19830(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__clearSpans_19830_ID,"android/text/Editable","clearSpans","()V",GetMethodID,"Id for fallback method android.text.Editable.clearSpans could not be cached",75);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__clearSpans_19830_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_text_Editable__getChars(Android_android_text_Editable* __this, int arg0, int arg1, ::app::Android::Runtime::CharArray* arg2, int arg3)
{
    Android_android_text_Editable__getChars_IMPL_19833(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2, arg3);
}

void Android_android_text_Editable__getChars_IMPL_19833(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__getChars_19833_ID,"android/text/Editable","getChars","(II[CI)V",GetMethodID,"Id for fallback method android.text.Editable.getChars could not be cached",73);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__getChars_19833_ID, ((jint)arg2_), ((jint)arg3_), _obArg4, ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter* Android_android_text_Editable__getFilters(Android_android_text_Editable* __this)
{
    return ::uCast< ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter*>(Android_android_text_Editable__getFilters_IMPL_19832(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter__typeof());
}

::uObject* Android_android_text_Editable__getFilters_IMPL_19832(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__getFilters_19832_ID,"android/text/Editable","getFilters","()[Landroid/text/InputFilter;",GetMethodID,"Id for fallback method android.text.Editable.getFilters could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__getFilters_19832_ID),result,::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter__typeof(),::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Editable__getSpanEnd(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Editable__getSpanEnd_IMPL_20038(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Editable__getSpanEnd_IMPL_20038(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__getSpanEnd_20038_ID,"android/text/Editable","getSpanEnd","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Editable.getSpanEnd could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__getSpanEnd_20038_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Editable__getSpanFlags(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Editable__getSpanFlags_IMPL_20039(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Editable__getSpanFlags_IMPL_20039(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__getSpanFlags_20039_ID,"android/text/Editable","getSpanFlags","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Editable.getSpanFlags could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__getSpanFlags_20039_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::Runtime::ObjectArray__Android_java_lang_Object* Android_android_text_Editable__getSpans(Android_android_text_Editable* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2)
{
    return ::uCast< ::app::Android::Runtime::ObjectArray__Android_java_lang_Object*>(Android_android_text_Editable__getSpans_IMPL_20036(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2), ::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof());
}

::uObject* Android_android_text_Editable__getSpans_IMPL_20036(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__getSpans_20036_ID,"android/text/Editable","getSpans","(IILjava/lang/Class;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method android.text.Editable.getSpans could not be cached",73);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__getSpans_20036_ID, ((jint)arg2_), ((jint)arg3_), _obArg4),result,::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof(),::app::Android::Runtime::ObjectArray__Android_java_lang_Object*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Editable__getSpanStart(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Editable__getSpanStart_IMPL_20037(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Editable__getSpanStart_IMPL_20037(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__getSpanStart_20037_ID,"android/text/Editable","getSpanStart","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Editable.getSpanStart could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__getSpanStart_20037_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Editable__insert(Android_android_text_Editable* __this, int arg0, ::uObject* arg1)
{
    return (::uObject*)Android_android_text_Editable__insert_IMPL_19824(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

::uObject* Android_android_text_Editable__insert_1(Android_android_text_Editable* __this, int arg0, ::uObject* arg1, int arg2, int arg3)
{
    return (::uObject*)Android_android_text_Editable__insert_IMPL_19823(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1, arg2, arg3);
}

::uObject* Android_android_text_Editable__insert_IMPL_19823(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__insert_19823_ID,"android/text/Editable","insert","(ILjava/lang/CharSequence;II)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.insert could not be cached",71);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__insert_19823_ID, ((jint)arg2_), _obArg3, ((jint)arg4_), ((jint)arg5_)),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Editable__insert_IMPL_19824(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__insert_19824_ID,"android/text/Editable","insert","(ILjava/lang/CharSequence;)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.insert could not be cached",71);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__insert_19824_ID, ((jint)arg2_), _obArg3),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Editable__j_delete(Android_android_text_Editable* __this, int arg0, int arg1)
{
    return (::uObject*)Android_android_text_Editable__j_delete_IMPL_19825(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_text_Editable__j_delete_IMPL_19825(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__j_delete_19825_ID,"android/text/Editable","delete","(II)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.delete could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__j_delete_19825_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Editable__length(Android_android_text_Editable* __this)
{
    return Android_android_text_Editable__length_IMPL_30510(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_text_Editable__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__length_30510_ID,"android/text/Editable","length","()I",GetMethodID,"Id for fallback method android.text.Editable.length could not be cached",71);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__length_30510_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Editable__nextSpanTransition(Android_android_text_Editable* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2)
{
    return Android_android_text_Editable__nextSpanTransition_IMPL_20040(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

int Android_android_text_Editable__nextSpanTransition_IMPL_20040(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__nextSpanTransition_20040_ID,"android/text/Editable","nextSpanTransition","(IILjava/lang/Class;)I",GetMethodID,"Id for fallback method android.text.Editable.nextSpanTransition could not be cached",83);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__nextSpanTransition_20040_ID, ((jint)arg2_), ((jint)arg3_), _obArg4));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_text_Editable__removeSpan(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0)
{
    Android_android_text_Editable__removeSpan_IMPL_19987(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_text_Editable__removeSpan_IMPL_19987(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__removeSpan_19987_ID,"android/text/Editable","removeSpan","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method android.text.Editable.removeSpan could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__removeSpan_19987_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* Android_android_text_Editable__replace(Android_android_text_Editable* __this, int arg0, int arg1, ::uObject* arg2)
{
    return (::uObject*)Android_android_text_Editable__replace_IMPL_19822(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

::uObject* Android_android_text_Editable__replace_1(Android_android_text_Editable* __this, int arg0, int arg1, ::uObject* arg2, int arg3, int arg4)
{
    return (::uObject*)Android_android_text_Editable__replace_IMPL_19821(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2, arg3, arg4);
}

::uObject* Android_android_text_Editable__replace_IMPL_19821(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__replace_19821_ID,"android/text/Editable","replace","(IILjava/lang/CharSequence;II)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.replace could not be cached",72);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__replace_19821_ID, ((jint)arg2_), ((jint)arg3_), _obArg4, ((jint)arg5_), ((jint)arg6_)),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Editable__replace_IMPL_19822(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__replace_19822_ID,"android/text/Editable","replace","(IILjava/lang/CharSequence;)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.replace could not be cached",72);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__replace_19822_ID, ((jint)arg2_), ((jint)arg3_), _obArg4),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_text_Editable__setFilters(Android_android_text_Editable* __this, ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter* arg0)
{
    Android_android_text_Editable__setFilters_IMPL_19831(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_text_Editable__setFilters_IMPL_19831(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__setFilters_19831_ID,"android/text/Editable","setFilters","([Landroid/text/InputFilter;)V",GetMethodID,"Id for fallback method android.text.Editable.setFilters could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__setFilters_19831_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_text_Editable__setSpan(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0, int arg1, int arg2, int arg3)
{
    Android_android_text_Editable__setSpan_IMPL_19986(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3);
}

void Android_android_text_Editable__setSpan_IMPL_19986(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__setSpan_19986_ID,"android/text/Editable","setSpan","(Ljava/lang/Object;III)V",GetMethodID,"Id for fallback method android.text.Editable.setSpan could not be cached",72);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__setSpan_19986_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* Android_android_text_Editable__subSequence(Android_android_text_Editable* __this, int arg0, int arg1)
{
    return (::uObject*)Android_android_text_Editable__subSequence_IMPL_30512(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_text_Editable__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__subSequence_30512_ID,"android/text/Editable","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.Editable.subSequence could not be cached",76);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__subSequence_30512_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_text_Editable__toString(Android_android_text_Editable* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_text_Editable__toString_IMPL_30513(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_text_Editable__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__toString_30513_ID,"android/text/Editable","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.text.Editable.toString could not be cached",73);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__toString_30513_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_text_GetChars__charAt_30511_ID;
jmethodID Android_android_text_GetChars__getChars_19833_ID;
jmethodID Android_android_text_GetChars__length_30510_ID;
jmethodID Android_android_text_GetChars__subSequence_30512_ID;
jmethodID Android_android_text_GetChars__toString_30513_ID;

Android_android_text_GetChars__uType* Android_android_text_GetChars__typeof()
{
    static ::uStaticStrong<Android_android_text_GetChars__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_GetChars__uType*)::uAllocClassType(sizeof(Android_android_text_GetChars__uType), "Android.Fallbacks.Android_android_text_GetChars", false, 4, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Android_android_text_GetChars__toString;
    type->__interface_2.__fp_getChars = (void(*)(void*, int, int, ::app::Android::Runtime::CharArray*, int))Android_android_text_GetChars__getChars;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_length = (int(*)(void*))Android_android_text_GetChars__length;
    type->__interface_3.__fp_charAt = (::uChar(*)(void*, int))Android_android_text_GetChars__charAt;
    type->__interface_3.__fp_subSequence = (::uObject*(*)(void*, int, int))Android_android_text_GetChars__subSequence;
    type->__interface_3.__fp_toString = (::app::Android::java::lang::String*(*)(void*))Android_android_text_GetChars__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_GetChars__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_GetChars__uType, __interface_1),
        ::app::Android::android::text::GetChars__typeof(), offsetof(Android_android_text_GetChars__uType, __interface_2),
        ::app::Android::java::lang::CharSequence__typeof(), offsetof(Android_android_text_GetChars__uType, __interface_3));

    type->SetFields(5,
        ::uNewField("charAt_30511_ID", &Android_android_text_GetChars__charAt_30511_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getChars_19833_ID", &Android_android_text_GetChars__getChars_19833_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("length_30510_ID", &Android_android_text_GetChars__length_30510_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("subSequence_30512_ID", &Android_android_text_GetChars__subSequence_30512_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_30513_ID", &Android_android_text_GetChars__toString_30513_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(9,
        ::uNewFunction("charAt", Android_android_text_GetChars__charAt, 0, false, ::app::Uno::Char__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("charAt_IMPL_30511", Android_android_text_GetChars__charAt_IMPL_30511, 0, true, ::app::Uno::Char__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("getChars", Android_android_text_GetChars__getChars, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Runtime::CharArray__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("getChars_IMPL_19833", Android_android_text_GetChars__getChars_IMPL_19833, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("length", Android_android_text_GetChars__length, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("length_IMPL_30510", Android_android_text_GetChars__length_IMPL_30510, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("subSequence", Android_android_text_GetChars__subSequence, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("subSequence_IMPL_30512", Android_android_text_GetChars__subSequence_IMPL_30512, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("toString_IMPL_30513", Android_android_text_GetChars__toString_IMPL_30513, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

::uChar Android_android_text_GetChars__charAt(Android_android_text_GetChars* __this, int arg0)
{
    return Android_android_text_GetChars__charAt_IMPL_30511(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uChar Android_android_text_GetChars__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_GetChars__charAt_30511_ID,"android/text/GetChars","charAt","(I)C",GetMethodID,"Id for fallback method android.text.GetChars.charAt could not be cached",71);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_GetChars__charAt_30511_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_text_GetChars__getChars(Android_android_text_GetChars* __this, int arg0, int arg1, ::app::Android::Runtime::CharArray* arg2, int arg3)
{
    Android_android_text_GetChars__getChars_IMPL_19833(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2, arg3);
}

void Android_android_text_GetChars__getChars_IMPL_19833(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_GetChars__getChars_19833_ID,"android/text/GetChars","getChars","(II[CI)V",GetMethodID,"Id for fallback method android.text.GetChars.getChars could not be cached",73);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_GetChars__getChars_19833_ID, ((jint)arg2_), ((jint)arg3_), _obArg4, ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int Android_android_text_GetChars__length(Android_android_text_GetChars* __this)
{
    return Android_android_text_GetChars__length_IMPL_30510(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_text_GetChars__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_GetChars__length_30510_ID,"android/text/GetChars","length","()I",GetMethodID,"Id for fallback method android.text.GetChars.length could not be cached",71);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_GetChars__length_30510_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_GetChars__subSequence(Android_android_text_GetChars* __this, int arg0, int arg1)
{
    return (::uObject*)Android_android_text_GetChars__subSequence_IMPL_30512(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_text_GetChars__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_GetChars__subSequence_30512_ID,"android/text/GetChars","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.GetChars.subSequence could not be cached",76);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_GetChars__subSequence_30512_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_text_GetChars__toString(Android_android_text_GetChars* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_text_GetChars__toString_IMPL_30513(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_text_GetChars__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_GetChars__toString_30513_ID,"android/text/GetChars","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.text.GetChars.toString could not be cached",73);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_GetChars__toString_30513_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_text_InputFilter__filter_19845_ID;

Android_android_text_InputFilter__uType* Android_android_text_InputFilter__typeof()
{
    static ::uStaticStrong<Android_android_text_InputFilter__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_InputFilter__uType*)::uAllocClassType(sizeof(Android_android_text_InputFilter__uType), "Android.Fallbacks.Android_android_text_InputFilter", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_filter = (::uObject*(*)(void*, ::uObject*, int, int, ::uObject*, int, int))Android_android_text_InputFilter__filter;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_InputFilter__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_InputFilter__uType, __interface_1),
        ::app::Android::android::text::InputFilter__typeof(), offsetof(Android_android_text_InputFilter__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("filter_19845_ID", &Android_android_text_InputFilter__filter_19845_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("filter", Android_android_text_InputFilter__filter, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::text::Spanned__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("filter_IMPL_19845", Android_android_text_InputFilter__filter_IMPL_19845, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Android_android_text_InputFilter__filter(Android_android_text_InputFilter* __this, ::uObject* arg0, int arg1, int arg2, ::uObject* arg3, int arg4, int arg5)
{
    return (::uObject*)Android_android_text_InputFilter__filter_IMPL_19845(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, (::uObject*)arg3, arg4, arg5);
}

::uObject* Android_android_text_InputFilter__filter_IMPL_19845(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, ::uObject* arg5_, int arg6_, int arg7_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_InputFilter__filter_19845_ID,"android/text/InputFilter","filter","(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.InputFilter.filter could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_InputFilter__filter_19845_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), _obArg5, ((jint)arg6_), ((jint)arg7_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_text_Layout__uType* Android_android_text_Layout__typeof()
{
    static ::uStaticStrong<Android_android_text_Layout__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_Layout__uType*)::uAllocClassType(sizeof(Android_android_text_Layout__uType), "Android.Fallbacks.Android_android_text_Layout", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::text::Layout__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_Layout__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_Layout__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_text_Spannable__charAt_30511_ID;
jmethodID Android_android_text_Spannable__getSpanEnd_20038_ID;
jmethodID Android_android_text_Spannable__getSpanFlags_20039_ID;
jmethodID Android_android_text_Spannable__getSpans_20036_ID;
jmethodID Android_android_text_Spannable__getSpanStart_20037_ID;
jmethodID Android_android_text_Spannable__length_30510_ID;
jmethodID Android_android_text_Spannable__nextSpanTransition_20040_ID;
jmethodID Android_android_text_Spannable__removeSpan_19987_ID;
jmethodID Android_android_text_Spannable__setSpan_19986_ID;
jmethodID Android_android_text_Spannable__subSequence_30512_ID;
jmethodID Android_android_text_Spannable__toString_30513_ID;

Android_android_text_Spannable__uType* Android_android_text_Spannable__typeof()
{
    static ::uStaticStrong<Android_android_text_Spannable__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_Spannable__uType*)::uAllocClassType(sizeof(Android_android_text_Spannable__uType), "Android.Fallbacks.Android_android_text_Spannable", false, 5, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Android_android_text_Spannable__toString;
    type->__interface_2.__fp_setSpan = (void(*)(void*, ::app::Android::java::lang::Object*, int, int, int))Android_android_text_Spannable__setSpan;
    type->__interface_2.__fp_removeSpan = (void(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spannable__removeSpan;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_getSpans = (::app::Android::Runtime::ObjectArray__Android_java_lang_Object*(*)(void*, int, int, ::app::Android::java::lang::Class*))Android_android_text_Spannable__getSpans;
    type->__interface_3.__fp_getSpanStart = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spannable__getSpanStart;
    type->__interface_3.__fp_getSpanEnd = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spannable__getSpanEnd;
    type->__interface_3.__fp_getSpanFlags = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spannable__getSpanFlags;
    type->__interface_3.__fp_nextSpanTransition = (int(*)(void*, int, int, ::app::Android::java::lang::Class*))Android_android_text_Spannable__nextSpanTransition;
    type->__interface_4.__fp_length = (int(*)(void*))Android_android_text_Spannable__length;
    type->__interface_4.__fp_charAt = (::uChar(*)(void*, int))Android_android_text_Spannable__charAt;
    type->__interface_4.__fp_subSequence = (::uObject*(*)(void*, int, int))Android_android_text_Spannable__subSequence;
    type->__interface_4.__fp_toString = (::app::Android::java::lang::String*(*)(void*))Android_android_text_Spannable__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_Spannable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_Spannable__uType, __interface_1),
        ::app::Android::android::text::Spannable__typeof(), offsetof(Android_android_text_Spannable__uType, __interface_2),
        ::app::Android::android::text::Spanned__typeof(), offsetof(Android_android_text_Spannable__uType, __interface_3),
        ::app::Android::java::lang::CharSequence__typeof(), offsetof(Android_android_text_Spannable__uType, __interface_4));

    type->SetFields(11,
        ::uNewField("charAt_30511_ID", &Android_android_text_Spannable__charAt_30511_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSpanEnd_20038_ID", &Android_android_text_Spannable__getSpanEnd_20038_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSpanFlags_20039_ID", &Android_android_text_Spannable__getSpanFlags_20039_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSpans_20036_ID", &Android_android_text_Spannable__getSpans_20036_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSpanStart_20037_ID", &Android_android_text_Spannable__getSpanStart_20037_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("length_30510_ID", &Android_android_text_Spannable__length_30510_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("nextSpanTransition_20040_ID", &Android_android_text_Spannable__nextSpanTransition_20040_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("removeSpan_19987_ID", &Android_android_text_Spannable__removeSpan_19987_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setSpan_19986_ID", &Android_android_text_Spannable__setSpan_19986_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("subSequence_30512_ID", &Android_android_text_Spannable__subSequence_30512_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_30513_ID", &Android_android_text_Spannable__toString_30513_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(21,
        ::uNewFunction("charAt", Android_android_text_Spannable__charAt, 0, false, ::app::Uno::Char__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("charAt_IMPL_30511", Android_android_text_Spannable__charAt_IMPL_30511, 0, true, ::app::Uno::Char__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getSpanEnd", Android_android_text_Spannable__getSpanEnd, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::Object__typeof()),
        ::uNewFunction("getSpanEnd_IMPL_20038", Android_android_text_Spannable__getSpanEnd_IMPL_20038, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getSpanFlags", Android_android_text_Spannable__getSpanFlags, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::Object__typeof()),
        ::uNewFunction("getSpanFlags_IMPL_20039", Android_android_text_Spannable__getSpanFlags_IMPL_20039, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getSpans", Android_android_text_Spannable__getSpans, 0, false, ::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::Class__typeof()),
        ::uNewFunction("getSpans_IMPL_20036", Android_android_text_Spannable__getSpans_IMPL_20036, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getSpanStart", Android_android_text_Spannable__getSpanStart, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::Object__typeof()),
        ::uNewFunction("getSpanStart_IMPL_20037", Android_android_text_Spannable__getSpanStart_IMPL_20037, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("length", Android_android_text_Spannable__length, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("length_IMPL_30510", Android_android_text_Spannable__length_IMPL_30510, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("nextSpanTransition", Android_android_text_Spannable__nextSpanTransition, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::Class__typeof()),
        ::uNewFunction("nextSpanTransition_IMPL_20040", Android_android_text_Spannable__nextSpanTransition_IMPL_20040, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("removeSpan", Android_android_text_Spannable__removeSpan, 0, false, ::app::Android::java::lang::Object__typeof()),
        ::uNewFunctionVoid("removeSpan_IMPL_19987", Android_android_text_Spannable__removeSpan_IMPL_19987, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setSpan", Android_android_text_Spannable__setSpan, 0, false, ::app::Android::java::lang::Object__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setSpan_IMPL_19986", Android_android_text_Spannable__setSpan_IMPL_19986, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("subSequence", Android_android_text_Spannable__subSequence, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("subSequence_IMPL_30512", Android_android_text_Spannable__subSequence_IMPL_30512, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("toString_IMPL_30513", Android_android_text_Spannable__toString_IMPL_30513, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

::uChar Android_android_text_Spannable__charAt(Android_android_text_Spannable* __this, int arg0)
{
    return Android_android_text_Spannable__charAt_IMPL_30511(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uChar Android_android_text_Spannable__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__charAt_30511_ID,"android/text/Spannable","charAt","(I)C",GetMethodID,"Id for fallback method android.text.Spannable.charAt could not be cached",72);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__charAt_30511_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spannable__getSpanEnd(Android_android_text_Spannable* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spannable__getSpanEnd_IMPL_20038(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Spannable__getSpanEnd_IMPL_20038(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__getSpanEnd_20038_ID,"android/text/Spannable","getSpanEnd","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spannable.getSpanEnd could not be cached",76);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__getSpanEnd_20038_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spannable__getSpanFlags(Android_android_text_Spannable* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spannable__getSpanFlags_IMPL_20039(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Spannable__getSpanFlags_IMPL_20039(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__getSpanFlags_20039_ID,"android/text/Spannable","getSpanFlags","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spannable.getSpanFlags could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__getSpanFlags_20039_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::Runtime::ObjectArray__Android_java_lang_Object* Android_android_text_Spannable__getSpans(Android_android_text_Spannable* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2)
{
    return ::uCast< ::app::Android::Runtime::ObjectArray__Android_java_lang_Object*>(Android_android_text_Spannable__getSpans_IMPL_20036(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2), ::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof());
}

::uObject* Android_android_text_Spannable__getSpans_IMPL_20036(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__getSpans_20036_ID,"android/text/Spannable","getSpans","(IILjava/lang/Class;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method android.text.Spannable.getSpans could not be cached",74);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__getSpans_20036_ID, ((jint)arg2_), ((jint)arg3_), _obArg4),result,::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof(),::app::Android::Runtime::ObjectArray__Android_java_lang_Object*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spannable__getSpanStart(Android_android_text_Spannable* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spannable__getSpanStart_IMPL_20037(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Spannable__getSpanStart_IMPL_20037(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__getSpanStart_20037_ID,"android/text/Spannable","getSpanStart","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spannable.getSpanStart could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__getSpanStart_20037_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spannable__length(Android_android_text_Spannable* __this)
{
    return Android_android_text_Spannable__length_IMPL_30510(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_text_Spannable__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__length_30510_ID,"android/text/Spannable","length","()I",GetMethodID,"Id for fallback method android.text.Spannable.length could not be cached",72);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__length_30510_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spannable__nextSpanTransition(Android_android_text_Spannable* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2)
{
    return Android_android_text_Spannable__nextSpanTransition_IMPL_20040(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

int Android_android_text_Spannable__nextSpanTransition_IMPL_20040(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__nextSpanTransition_20040_ID,"android/text/Spannable","nextSpanTransition","(IILjava/lang/Class;)I",GetMethodID,"Id for fallback method android.text.Spannable.nextSpanTransition could not be cached",84);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__nextSpanTransition_20040_ID, ((jint)arg2_), ((jint)arg3_), _obArg4));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_text_Spannable__removeSpan(Android_android_text_Spannable* __this, ::app::Android::java::lang::Object* arg0)
{
    Android_android_text_Spannable__removeSpan_IMPL_19987(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_text_Spannable__removeSpan_IMPL_19987(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__removeSpan_19987_ID,"android/text/Spannable","removeSpan","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method android.text.Spannable.removeSpan could not be cached",76);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__removeSpan_19987_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_text_Spannable__setSpan(Android_android_text_Spannable* __this, ::app::Android::java::lang::Object* arg0, int arg1, int arg2, int arg3)
{
    Android_android_text_Spannable__setSpan_IMPL_19986(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3);
}

void Android_android_text_Spannable__setSpan_IMPL_19986(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__setSpan_19986_ID,"android/text/Spannable","setSpan","(Ljava/lang/Object;III)V",GetMethodID,"Id for fallback method android.text.Spannable.setSpan could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__setSpan_19986_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* Android_android_text_Spannable__subSequence(Android_android_text_Spannable* __this, int arg0, int arg1)
{
    return (::uObject*)Android_android_text_Spannable__subSequence_IMPL_30512(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_text_Spannable__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__subSequence_30512_ID,"android/text/Spannable","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.Spannable.subSequence could not be cached",77);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__subSequence_30512_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_text_Spannable__toString(Android_android_text_Spannable* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_text_Spannable__toString_IMPL_30513(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_text_Spannable__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__toString_30513_ID,"android/text/Spannable","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.text.Spannable.toString could not be cached",74);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__toString_30513_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_text_Spanned__charAt_30511_ID;
jmethodID Android_android_text_Spanned__getSpanEnd_20038_ID;
jmethodID Android_android_text_Spanned__getSpanFlags_20039_ID;
jmethodID Android_android_text_Spanned__getSpans_20036_ID;
jmethodID Android_android_text_Spanned__getSpanStart_20037_ID;
jmethodID Android_android_text_Spanned__length_30510_ID;
jmethodID Android_android_text_Spanned__nextSpanTransition_20040_ID;
jmethodID Android_android_text_Spanned__subSequence_30512_ID;
jmethodID Android_android_text_Spanned__toString_30513_ID;

Android_android_text_Spanned__uType* Android_android_text_Spanned__typeof()
{
    static ::uStaticStrong<Android_android_text_Spanned__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_Spanned__uType*)::uAllocClassType(sizeof(Android_android_text_Spanned__uType), "Android.Fallbacks.Android_android_text_Spanned", false, 4, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Android_android_text_Spanned__toString;
    type->__interface_2.__fp_getSpans = (::app::Android::Runtime::ObjectArray__Android_java_lang_Object*(*)(void*, int, int, ::app::Android::java::lang::Class*))Android_android_text_Spanned__getSpans;
    type->__interface_2.__fp_getSpanStart = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spanned__getSpanStart;
    type->__interface_2.__fp_getSpanEnd = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spanned__getSpanEnd;
    type->__interface_2.__fp_getSpanFlags = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spanned__getSpanFlags;
    type->__interface_2.__fp_nextSpanTransition = (int(*)(void*, int, int, ::app::Android::java::lang::Class*))Android_android_text_Spanned__nextSpanTransition;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_length = (int(*)(void*))Android_android_text_Spanned__length;
    type->__interface_3.__fp_charAt = (::uChar(*)(void*, int))Android_android_text_Spanned__charAt;
    type->__interface_3.__fp_subSequence = (::uObject*(*)(void*, int, int))Android_android_text_Spanned__subSequence;
    type->__interface_3.__fp_toString = (::app::Android::java::lang::String*(*)(void*))Android_android_text_Spanned__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_Spanned__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_Spanned__uType, __interface_1),
        ::app::Android::android::text::Spanned__typeof(), offsetof(Android_android_text_Spanned__uType, __interface_2),
        ::app::Android::java::lang::CharSequence__typeof(), offsetof(Android_android_text_Spanned__uType, __interface_3));

    type->SetFields(9,
        ::uNewField("charAt_30511_ID", &Android_android_text_Spanned__charAt_30511_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSpanEnd_20038_ID", &Android_android_text_Spanned__getSpanEnd_20038_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSpanFlags_20039_ID", &Android_android_text_Spanned__getSpanFlags_20039_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSpans_20036_ID", &Android_android_text_Spanned__getSpans_20036_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSpanStart_20037_ID", &Android_android_text_Spanned__getSpanStart_20037_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("length_30510_ID", &Android_android_text_Spanned__length_30510_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("nextSpanTransition_20040_ID", &Android_android_text_Spanned__nextSpanTransition_20040_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("subSequence_30512_ID", &Android_android_text_Spanned__subSequence_30512_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_30513_ID", &Android_android_text_Spanned__toString_30513_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(17,
        ::uNewFunction("charAt", Android_android_text_Spanned__charAt, 0, false, ::app::Uno::Char__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("charAt_IMPL_30511", Android_android_text_Spanned__charAt_IMPL_30511, 0, true, ::app::Uno::Char__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getSpanEnd", Android_android_text_Spanned__getSpanEnd, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::Object__typeof()),
        ::uNewFunction("getSpanEnd_IMPL_20038", Android_android_text_Spanned__getSpanEnd_IMPL_20038, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getSpanFlags", Android_android_text_Spanned__getSpanFlags, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::Object__typeof()),
        ::uNewFunction("getSpanFlags_IMPL_20039", Android_android_text_Spanned__getSpanFlags_IMPL_20039, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getSpans", Android_android_text_Spanned__getSpans, 0, false, ::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::Class__typeof()),
        ::uNewFunction("getSpans_IMPL_20036", Android_android_text_Spanned__getSpans_IMPL_20036, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getSpanStart", Android_android_text_Spanned__getSpanStart, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::Object__typeof()),
        ::uNewFunction("getSpanStart_IMPL_20037", Android_android_text_Spanned__getSpanStart_IMPL_20037, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("length", Android_android_text_Spanned__length, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("length_IMPL_30510", Android_android_text_Spanned__length_IMPL_30510, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("nextSpanTransition", Android_android_text_Spanned__nextSpanTransition, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::Class__typeof()),
        ::uNewFunction("nextSpanTransition_IMPL_20040", Android_android_text_Spanned__nextSpanTransition_IMPL_20040, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("subSequence", Android_android_text_Spanned__subSequence, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("subSequence_IMPL_30512", Android_android_text_Spanned__subSequence_IMPL_30512, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("toString_IMPL_30513", Android_android_text_Spanned__toString_IMPL_30513, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

::uChar Android_android_text_Spanned__charAt(Android_android_text_Spanned* __this, int arg0)
{
    return Android_android_text_Spanned__charAt_IMPL_30511(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uChar Android_android_text_Spanned__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__charAt_30511_ID,"android/text/Spanned","charAt","(I)C",GetMethodID,"Id for fallback method android.text.Spanned.charAt could not be cached",70);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__charAt_30511_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spanned__getSpanEnd(Android_android_text_Spanned* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spanned__getSpanEnd_IMPL_20038(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Spanned__getSpanEnd_IMPL_20038(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__getSpanEnd_20038_ID,"android/text/Spanned","getSpanEnd","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spanned.getSpanEnd could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__getSpanEnd_20038_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spanned__getSpanFlags(Android_android_text_Spanned* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spanned__getSpanFlags_IMPL_20039(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Spanned__getSpanFlags_IMPL_20039(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__getSpanFlags_20039_ID,"android/text/Spanned","getSpanFlags","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spanned.getSpanFlags could not be cached",76);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__getSpanFlags_20039_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::Runtime::ObjectArray__Android_java_lang_Object* Android_android_text_Spanned__getSpans(Android_android_text_Spanned* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2)
{
    return ::uCast< ::app::Android::Runtime::ObjectArray__Android_java_lang_Object*>(Android_android_text_Spanned__getSpans_IMPL_20036(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2), ::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof());
}

::uObject* Android_android_text_Spanned__getSpans_IMPL_20036(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__getSpans_20036_ID,"android/text/Spanned","getSpans","(IILjava/lang/Class;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method android.text.Spanned.getSpans could not be cached",72);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__getSpans_20036_ID, ((jint)arg2_), ((jint)arg3_), _obArg4),result,::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof(),::app::Android::Runtime::ObjectArray__Android_java_lang_Object*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spanned__getSpanStart(Android_android_text_Spanned* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spanned__getSpanStart_IMPL_20037(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Spanned__getSpanStart_IMPL_20037(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__getSpanStart_20037_ID,"android/text/Spanned","getSpanStart","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spanned.getSpanStart could not be cached",76);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__getSpanStart_20037_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spanned__length(Android_android_text_Spanned* __this)
{
    return Android_android_text_Spanned__length_IMPL_30510(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_text_Spanned__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__length_30510_ID,"android/text/Spanned","length","()I",GetMethodID,"Id for fallback method android.text.Spanned.length could not be cached",70);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__length_30510_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spanned__nextSpanTransition(Android_android_text_Spanned* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2)
{
    return Android_android_text_Spanned__nextSpanTransition_IMPL_20040(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

int Android_android_text_Spanned__nextSpanTransition_IMPL_20040(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__nextSpanTransition_20040_ID,"android/text/Spanned","nextSpanTransition","(IILjava/lang/Class;)I",GetMethodID,"Id for fallback method android.text.Spanned.nextSpanTransition could not be cached",82);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__nextSpanTransition_20040_ID, ((jint)arg2_), ((jint)arg3_), _obArg4));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Spanned__subSequence(Android_android_text_Spanned* __this, int arg0, int arg1)
{
    return (::uObject*)Android_android_text_Spanned__subSequence_IMPL_30512(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_text_Spanned__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__subSequence_30512_ID,"android/text/Spanned","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.Spanned.subSequence could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__subSequence_30512_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_text_Spanned__toString(Android_android_text_Spanned* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_text_Spanned__toString_IMPL_30513(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_text_Spanned__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__toString_30513_ID,"android/text/Spanned","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.text.Spanned.toString could not be cached",72);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__toString_30513_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_text_TextWatcher__afterTextChanged_20153_ID;
jmethodID Android_android_text_TextWatcher__beforeTextChanged_20151_ID;
jmethodID Android_android_text_TextWatcher__onTextChanged_20152_ID;

Android_android_text_TextWatcher__uType* Android_android_text_TextWatcher__typeof()
{
    static ::uStaticStrong<Android_android_text_TextWatcher__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_TextWatcher__uType*)::uAllocClassType(sizeof(Android_android_text_TextWatcher__uType), "Android.Fallbacks.Android_android_text_TextWatcher", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_beforeTextChanged = (void(*)(void*, ::uObject*, int, int, int))Android_android_text_TextWatcher__beforeTextChanged;
    type->__interface_2.__fp_onTextChanged = (void(*)(void*, ::uObject*, int, int, int))Android_android_text_TextWatcher__onTextChanged;
    type->__interface_2.__fp_afterTextChanged = (void(*)(void*, ::uObject*))Android_android_text_TextWatcher__afterTextChanged;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_TextWatcher__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_TextWatcher__uType, __interface_1),
        ::app::Android::android::text::TextWatcher__typeof(), offsetof(Android_android_text_TextWatcher__uType, __interface_2));

    type->SetFields(3,
        ::uNewField("afterTextChanged_20153_ID", &Android_android_text_TextWatcher__afterTextChanged_20153_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("beforeTextChanged_20151_ID", &Android_android_text_TextWatcher__beforeTextChanged_20151_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onTextChanged_20152_ID", &Android_android_text_TextWatcher__onTextChanged_20152_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("afterTextChanged", Android_android_text_TextWatcher__afterTextChanged, 0, false, ::app::Android::android::text::Editable__typeof()),
        ::uNewFunctionVoid("afterTextChanged_IMPL_20153", Android_android_text_TextWatcher__afterTextChanged_IMPL_20153, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("beforeTextChanged", Android_android_text_TextWatcher__beforeTextChanged, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("beforeTextChanged_IMPL_20151", Android_android_text_TextWatcher__beforeTextChanged_IMPL_20151, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onTextChanged", Android_android_text_TextWatcher__onTextChanged, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onTextChanged_IMPL_20152", Android_android_text_TextWatcher__onTextChanged_IMPL_20152, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_text_TextWatcher__afterTextChanged(Android_android_text_TextWatcher* __this, ::uObject* arg0)
{
    Android_android_text_TextWatcher__afterTextChanged_IMPL_20153(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_text_TextWatcher__afterTextChanged_IMPL_20153(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_TextWatcher__afterTextChanged_20153_ID,"android/text/TextWatcher","afterTextChanged","(Landroid/text/Editable;)V",GetMethodID,"Id for fallback method android.text.TextWatcher.afterTextChanged could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_TextWatcher__afterTextChanged_20153_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_text_TextWatcher__beforeTextChanged(Android_android_text_TextWatcher* __this, ::uObject* arg0, int arg1, int arg2, int arg3)
{
    Android_android_text_TextWatcher__beforeTextChanged_IMPL_20151(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3);
}

void Android_android_text_TextWatcher__beforeTextChanged_IMPL_20151(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_TextWatcher__beforeTextChanged_20151_ID,"android/text/TextWatcher","beforeTextChanged","(Ljava/lang/CharSequence;III)V",GetMethodID,"Id for fallback method android.text.TextWatcher.beforeTextChanged could not be cached",85);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_TextWatcher__beforeTextChanged_20151_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_text_TextWatcher__onTextChanged(Android_android_text_TextWatcher* __this, ::uObject* arg0, int arg1, int arg2, int arg3)
{
    Android_android_text_TextWatcher__onTextChanged_IMPL_20152(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3);
}

void Android_android_text_TextWatcher__onTextChanged_IMPL_20152(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_TextWatcher__onTextChanged_20152_ID,"android/text/TextWatcher","onTextChanged","(Ljava/lang/CharSequence;III)V",GetMethodID,"Id for fallback method android.text.TextWatcher.onTextChanged could not be cached",81);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_TextWatcher__onTextChanged_20152_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_util_AttributeSet__getAttributeBooleanValue_20306_ID;
jmethodID Android_android_util_AttributeSet__getAttributeBooleanValue_20312_ID;
jmethodID Android_android_util_AttributeSet__getAttributeCount_20299_ID;
jmethodID Android_android_util_AttributeSet__getAttributeFloatValue_20310_ID;
jmethodID Android_android_util_AttributeSet__getAttributeFloatValue_20316_ID;
jmethodID Android_android_util_AttributeSet__getAttributeIntValue_20308_ID;
jmethodID Android_android_util_AttributeSet__getAttributeIntValue_20314_ID;
jmethodID Android_android_util_AttributeSet__getAttributeListValue_20305_ID;
jmethodID Android_android_util_AttributeSet__getAttributeListValue_20311_ID;
jmethodID Android_android_util_AttributeSet__getAttributeName_20300_ID;
jmethodID Android_android_util_AttributeSet__getAttributeNameResource_20304_ID;
jmethodID Android_android_util_AttributeSet__getAttributeResourceValue_20307_ID;
jmethodID Android_android_util_AttributeSet__getAttributeResourceValue_20313_ID;
jmethodID Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20309_ID;
jmethodID Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20315_ID;
jmethodID Android_android_util_AttributeSet__getAttributeValue_20301_ID;
jmethodID Android_android_util_AttributeSet__getAttributeValue_20302_ID;
jmethodID Android_android_util_AttributeSet__getClassAttribute_20318_ID;
jmethodID Android_android_util_AttributeSet__getIdAttribute_20317_ID;
jmethodID Android_android_util_AttributeSet__getIdAttributeResourceValue_20319_ID;
jmethodID Android_android_util_AttributeSet__getPositionDescription_20303_ID;
jmethodID Android_android_util_AttributeSet__getStyleAttribute_20320_ID;

Android_android_util_AttributeSet__uType* Android_android_util_AttributeSet__typeof()
{
    static ::uStaticStrong<Android_android_util_AttributeSet__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_util_AttributeSet__uType*)::uAllocClassType(sizeof(Android_android_util_AttributeSet__uType), "Android.Fallbacks.Android_android_util_AttributeSet", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_getAttributeCount = (int(*)(void*))Android_android_util_AttributeSet__getAttributeCount;
    type->__interface_2.__fp_getAttributeName = (::app::Android::java::lang::String*(*)(void*, int))Android_android_util_AttributeSet__getAttributeName;
    type->__interface_2.__fp_getAttributeValue = (::app::Android::java::lang::String*(*)(void*, int))Android_android_util_AttributeSet__getAttributeValue;
    type->__interface_2.__fp_getAttributeValue_1 = (::app::Android::java::lang::String*(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*))Android_android_util_AttributeSet__getAttributeValue_1;
    type->__interface_2.__fp_getPositionDescription = (::app::Android::java::lang::String*(*)(void*))Android_android_util_AttributeSet__getPositionDescription;
    type->__interface_2.__fp_getAttributeNameResource = (int(*)(void*, int))Android_android_util_AttributeSet__getAttributeNameResource;
    type->__interface_2.__fp_getAttributeListValue_1 = (int(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, ::app::Android::Runtime::ObjectArray__Android_java_lang_String*, int))Android_android_util_AttributeSet__getAttributeListValue_1;
    type->__interface_2.__fp_getAttributeBooleanValue_1 = (bool(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, bool))Android_android_util_AttributeSet__getAttributeBooleanValue_1;
    type->__interface_2.__fp_getAttributeResourceValue_1 = (int(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, int))Android_android_util_AttributeSet__getAttributeResourceValue_1;
    type->__interface_2.__fp_getAttributeIntValue_1 = (int(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, int))Android_android_util_AttributeSet__getAttributeIntValue_1;
    type->__interface_2.__fp_getAttributeUnsignedIntValue_1 = (int(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, int))Android_android_util_AttributeSet__getAttributeUnsignedIntValue_1;
    type->__interface_2.__fp_getAttributeFloatValue_1 = (float(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, float))Android_android_util_AttributeSet__getAttributeFloatValue_1;
    type->__interface_2.__fp_getAttributeListValue = (int(*)(void*, int, ::app::Android::Runtime::ObjectArray__Android_java_lang_String*, int))Android_android_util_AttributeSet__getAttributeListValue;
    type->__interface_2.__fp_getAttributeBooleanValue = (bool(*)(void*, int, bool))Android_android_util_AttributeSet__getAttributeBooleanValue;
    type->__interface_2.__fp_getAttributeResourceValue = (int(*)(void*, int, int))Android_android_util_AttributeSet__getAttributeResourceValue;
    type->__interface_2.__fp_getAttributeIntValue = (int(*)(void*, int, int))Android_android_util_AttributeSet__getAttributeIntValue;
    type->__interface_2.__fp_getAttributeUnsignedIntValue = (int(*)(void*, int, int))Android_android_util_AttributeSet__getAttributeUnsignedIntValue;
    type->__interface_2.__fp_getAttributeFloatValue = (float(*)(void*, int, float))Android_android_util_AttributeSet__getAttributeFloatValue;
    type->__interface_2.__fp_getIdAttribute = (::app::Android::java::lang::String*(*)(void*))Android_android_util_AttributeSet__getIdAttribute;
    type->__interface_2.__fp_getClassAttribute = (::app::Android::java::lang::String*(*)(void*))Android_android_util_AttributeSet__getClassAttribute;
    type->__interface_2.__fp_getIdAttributeResourceValue = (int(*)(void*, int))Android_android_util_AttributeSet__getIdAttributeResourceValue;
    type->__interface_2.__fp_getStyleAttribute = (int(*)(void*))Android_android_util_AttributeSet__getStyleAttribute;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_util_AttributeSet__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_util_AttributeSet__uType, __interface_1),
        ::app::Android::android::util::AttributeSet__typeof(), offsetof(Android_android_util_AttributeSet__uType, __interface_2));

    type->SetFields(22,
        ::uNewField("getAttributeBooleanValue_20306_ID", &Android_android_util_AttributeSet__getAttributeBooleanValue_20306_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeBooleanValue_20312_ID", &Android_android_util_AttributeSet__getAttributeBooleanValue_20312_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeCount_20299_ID", &Android_android_util_AttributeSet__getAttributeCount_20299_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeFloatValue_20310_ID", &Android_android_util_AttributeSet__getAttributeFloatValue_20310_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeFloatValue_20316_ID", &Android_android_util_AttributeSet__getAttributeFloatValue_20316_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeIntValue_20308_ID", &Android_android_util_AttributeSet__getAttributeIntValue_20308_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeIntValue_20314_ID", &Android_android_util_AttributeSet__getAttributeIntValue_20314_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeListValue_20305_ID", &Android_android_util_AttributeSet__getAttributeListValue_20305_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeListValue_20311_ID", &Android_android_util_AttributeSet__getAttributeListValue_20311_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeName_20300_ID", &Android_android_util_AttributeSet__getAttributeName_20300_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeNameResource_20304_ID", &Android_android_util_AttributeSet__getAttributeNameResource_20304_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeResourceValue_20307_ID", &Android_android_util_AttributeSet__getAttributeResourceValue_20307_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeResourceValue_20313_ID", &Android_android_util_AttributeSet__getAttributeResourceValue_20313_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeUnsignedIntValue_20309_ID", &Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20309_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeUnsignedIntValue_20315_ID", &Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20315_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeValue_20301_ID", &Android_android_util_AttributeSet__getAttributeValue_20301_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAttributeValue_20302_ID", &Android_android_util_AttributeSet__getAttributeValue_20302_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getClassAttribute_20318_ID", &Android_android_util_AttributeSet__getClassAttribute_20318_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getIdAttribute_20317_ID", &Android_android_util_AttributeSet__getIdAttribute_20317_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getIdAttributeResourceValue_20319_ID", &Android_android_util_AttributeSet__getIdAttributeResourceValue_20319_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getPositionDescription_20303_ID", &Android_android_util_AttributeSet__getPositionDescription_20303_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getStyleAttribute_20320_ID", &Android_android_util_AttributeSet__getStyleAttribute_20320_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(44,
        ::uNewFunction("getAttributeBooleanValue", Android_android_util_AttributeSet__getAttributeBooleanValue, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("getAttributeBooleanValue", Android_android_util_AttributeSet__getAttributeBooleanValue_1, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("getAttributeBooleanValue_IMPL_20306", Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20306, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("getAttributeBooleanValue_IMPL_20312", Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20312, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("getAttributeCount", Android_android_util_AttributeSet__getAttributeCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeCount_IMPL_20299", Android_android_util_AttributeSet__getAttributeCount_IMPL_20299, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getAttributeFloatValue", Android_android_util_AttributeSet__getAttributeFloatValue, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("getAttributeFloatValue", Android_android_util_AttributeSet__getAttributeFloatValue_1, 0, false, ::app::Uno::Float__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("getAttributeFloatValue_IMPL_20310", Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20310, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("getAttributeFloatValue_IMPL_20316", Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20316, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("getAttributeIntValue", Android_android_util_AttributeSet__getAttributeIntValue, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeIntValue", Android_android_util_AttributeSet__getAttributeIntValue_1, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeIntValue_IMPL_20308", Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20308, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeIntValue_IMPL_20314", Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20314, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeListValue", Android_android_util_AttributeSet__getAttributeListValue, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Runtime::ObjectArray__Android_java_lang_String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeListValue", Android_android_util_AttributeSet__getAttributeListValue_1, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::Runtime::ObjectArray__Android_java_lang_String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeListValue_IMPL_20305", Android_android_util_AttributeSet__getAttributeListValue_IMPL_20305, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeListValue_IMPL_20311", Android_android_util_AttributeSet__getAttributeListValue_IMPL_20311, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeName", Android_android_util_AttributeSet__getAttributeName, 0, false, ::app::Android::java::lang::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeName_IMPL_20300", Android_android_util_AttributeSet__getAttributeName_IMPL_20300, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeNameResource", Android_android_util_AttributeSet__getAttributeNameResource, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeNameResource_IMPL_20304", Android_android_util_AttributeSet__getAttributeNameResource_IMPL_20304, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeResourceValue", Android_android_util_AttributeSet__getAttributeResourceValue, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeResourceValue", Android_android_util_AttributeSet__getAttributeResourceValue_1, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeResourceValue_IMPL_20307", Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20307, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeResourceValue_IMPL_20313", Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20313, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeUnsignedIntValue", Android_android_util_AttributeSet__getAttributeUnsignedIntValue, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeUnsignedIntValue", Android_android_util_AttributeSet__getAttributeUnsignedIntValue_1, 0, false, ::app::Uno::Int__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeUnsignedIntValue_IMPL_20309", Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20309, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeUnsignedIntValue_IMPL_20315", Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20315, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeValue", Android_android_util_AttributeSet__getAttributeValue, 0, false, ::app::Android::java::lang::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeValue", Android_android_util_AttributeSet__getAttributeValue_1, 0, false, ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("getAttributeValue_IMPL_20301", Android_android_util_AttributeSet__getAttributeValue_IMPL_20301, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getAttributeValue_IMPL_20302", Android_android_util_AttributeSet__getAttributeValue_IMPL_20302, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getClassAttribute", Android_android_util_AttributeSet__getClassAttribute, 0, false, ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("getClassAttribute_IMPL_20318", Android_android_util_AttributeSet__getClassAttribute_IMPL_20318, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getIdAttribute", Android_android_util_AttributeSet__getIdAttribute, 0, false, ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("getIdAttribute_IMPL_20317", Android_android_util_AttributeSet__getIdAttribute_IMPL_20317, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getIdAttributeResourceValue", Android_android_util_AttributeSet__getIdAttributeResourceValue, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getIdAttributeResourceValue_IMPL_20319", Android_android_util_AttributeSet__getIdAttributeResourceValue_IMPL_20319, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getPositionDescription", Android_android_util_AttributeSet__getPositionDescription, 0, false, ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("getPositionDescription_IMPL_20303", Android_android_util_AttributeSet__getPositionDescription_IMPL_20303, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getStyleAttribute", Android_android_util_AttributeSet__getStyleAttribute, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getStyleAttribute_IMPL_20320", Android_android_util_AttributeSet__getStyleAttribute_IMPL_20320, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_util_AttributeSet__getAttributeBooleanValue(Android_android_util_AttributeSet* __this, int arg0, bool arg1)
{
    return Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20312(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

bool Android_android_util_AttributeSet__getAttributeBooleanValue_1(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, bool arg2)
{
    return Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20306(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

bool Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20306(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeBooleanValue_20306_ID,"android/util/AttributeSet","getAttributeBooleanValue","(Ljava/lang/String;Ljava/lang/String;Z)Z",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeBooleanValue could not be cached",93);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeBooleanValue_20306_ID, _obArg2, _obArg3, ((jboolean)arg4_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20312(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeBooleanValue_20312_ID,"android/util/AttributeSet","getAttributeBooleanValue","(IZ)Z",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeBooleanValue could not be cached",93);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeBooleanValue_20312_ID, ((jint)arg2_), ((jboolean)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeCount(Android_android_util_AttributeSet* __this)
{
    return Android_android_util_AttributeSet__getAttributeCount_IMPL_20299(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_util_AttributeSet__getAttributeCount_IMPL_20299(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeCount_20299_ID,"android/util/AttributeSet","getAttributeCount","()I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeCount could not be cached",86);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeCount_20299_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

float Android_android_util_AttributeSet__getAttributeFloatValue(Android_android_util_AttributeSet* __this, int arg0, float arg1)
{
    return Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20316(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

float Android_android_util_AttributeSet__getAttributeFloatValue_1(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, float arg2)
{
    return Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20310(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

float Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20310(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, float arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeFloatValue_20310_ID,"android/util/AttributeSet","getAttributeFloatValue","(Ljava/lang/String;Ljava/lang/String;F)F",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeFloatValue could not be cached",91);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    float result;
    result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeFloatValue_20310_ID, _obArg2, _obArg3, ((jfloat)arg4_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

float Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20316(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, float arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeFloatValue_20316_ID,"android/util/AttributeSet","getAttributeFloatValue","(IF)F",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeFloatValue could not be cached",91);
    
    float result;
    result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeFloatValue_20316_ID, ((jint)arg2_), ((jfloat)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeIntValue(Android_android_util_AttributeSet* __this, int arg0, int arg1)
{
    return Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20314(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

int Android_android_util_AttributeSet__getAttributeIntValue_1(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, int arg2)
{
    return Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20308(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

int Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20308(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeIntValue_20308_ID,"android/util/AttributeSet","getAttributeIntValue","(Ljava/lang/String;Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeIntValue could not be cached",89);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeIntValue_20308_ID, _obArg2, _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20314(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeIntValue_20314_ID,"android/util/AttributeSet","getAttributeIntValue","(II)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeIntValue could not be cached",89);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeIntValue_20314_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeListValue(Android_android_util_AttributeSet* __this, int arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1, int arg2)
{
    return Android_android_util_AttributeSet__getAttributeListValue_IMPL_20311(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1, arg2);
}

int Android_android_util_AttributeSet__getAttributeListValue_1(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg2, int arg3)
{
    return Android_android_util_AttributeSet__getAttributeListValue_IMPL_20305(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, (::uObject*)arg2, arg3);
}

int Android_android_util_AttributeSet__getAttributeListValue_IMPL_20305(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeListValue_20305_ID,"android/util/AttributeSet","getAttributeListValue","(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeListValue could not be cached",90);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeListValue_20305_ID, _obArg2, _obArg3, _obArg4, ((jint)arg5_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeListValue_IMPL_20311(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeListValue_20311_ID,"android/util/AttributeSet","getAttributeListValue","(I[Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeListValue could not be cached",90);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeListValue_20311_ID, ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_util_AttributeSet__getAttributeName(Android_android_util_AttributeSet* __this, int arg0)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_util_AttributeSet__getAttributeName_IMPL_20300(NULL, __this->_subclassed, __this->_javaObject, arg0), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_util_AttributeSet__getAttributeName_IMPL_20300(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeName_20300_ID,"android/util/AttributeSet","getAttributeName","(I)Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeName could not be cached",85);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeName_20300_ID, ((jint)arg2_)),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeNameResource(Android_android_util_AttributeSet* __this, int arg0)
{
    return Android_android_util_AttributeSet__getAttributeNameResource_IMPL_20304(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

int Android_android_util_AttributeSet__getAttributeNameResource_IMPL_20304(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeNameResource_20304_ID,"android/util/AttributeSet","getAttributeNameResource","(I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeNameResource could not be cached",93);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeNameResource_20304_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeResourceValue(Android_android_util_AttributeSet* __this, int arg0, int arg1)
{
    return Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20313(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

int Android_android_util_AttributeSet__getAttributeResourceValue_1(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, int arg2)
{
    return Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20307(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

int Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20307(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeResourceValue_20307_ID,"android/util/AttributeSet","getAttributeResourceValue","(Ljava/lang/String;Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeResourceValue could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeResourceValue_20307_ID, _obArg2, _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20313(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeResourceValue_20313_ID,"android/util/AttributeSet","getAttributeResourceValue","(II)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeResourceValue could not be cached",94);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeResourceValue_20313_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeUnsignedIntValue(Android_android_util_AttributeSet* __this, int arg0, int arg1)
{
    return Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20315(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

int Android_android_util_AttributeSet__getAttributeUnsignedIntValue_1(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, int arg2)
{
    return Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20309(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

int Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20309(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20309_ID,"android/util/AttributeSet","getAttributeUnsignedIntValue","(Ljava/lang/String;Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeUnsignedIntValue could not be cached",97);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20309_ID, _obArg2, _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20315(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20315_ID,"android/util/AttributeSet","getAttributeUnsignedIntValue","(II)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeUnsignedIntValue could not be cached",97);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20315_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_util_AttributeSet__getAttributeValue(Android_android_util_AttributeSet* __this, int arg0)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_util_AttributeSet__getAttributeValue_IMPL_20301(NULL, __this->_subclassed, __this->_javaObject, arg0), ::app::Android::java::lang::String__typeof());
}

::app::Android::java::lang::String* Android_android_util_AttributeSet__getAttributeValue_1(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_util_AttributeSet__getAttributeValue_IMPL_20302(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_util_AttributeSet__getAttributeValue_IMPL_20301(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeValue_20301_ID,"android/util/AttributeSet","getAttributeValue","(I)Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeValue could not be cached",86);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeValue_20301_ID, ((jint)arg2_)),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_util_AttributeSet__getAttributeValue_IMPL_20302(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeValue_20302_ID,"android/util/AttributeSet","getAttributeValue","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeValue could not be cached",86);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeValue_20302_ID, _obArg2, _obArg3),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_util_AttributeSet__getClassAttribute(Android_android_util_AttributeSet* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_util_AttributeSet__getClassAttribute_IMPL_20318(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_util_AttributeSet__getClassAttribute_IMPL_20318(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getClassAttribute_20318_ID,"android/util/AttributeSet","getClassAttribute","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getClassAttribute could not be cached",86);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getClassAttribute_20318_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_util_AttributeSet__getIdAttribute(Android_android_util_AttributeSet* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_util_AttributeSet__getIdAttribute_IMPL_20317(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_util_AttributeSet__getIdAttribute_IMPL_20317(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getIdAttribute_20317_ID,"android/util/AttributeSet","getIdAttribute","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getIdAttribute could not be cached",83);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getIdAttribute_20317_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getIdAttributeResourceValue(Android_android_util_AttributeSet* __this, int arg0)
{
    return Android_android_util_AttributeSet__getIdAttributeResourceValue_IMPL_20319(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

int Android_android_util_AttributeSet__getIdAttributeResourceValue_IMPL_20319(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getIdAttributeResourceValue_20319_ID,"android/util/AttributeSet","getIdAttributeResourceValue","(I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getIdAttributeResourceValue could not be cached",96);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getIdAttributeResourceValue_20319_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_util_AttributeSet__getPositionDescription(Android_android_util_AttributeSet* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_util_AttributeSet__getPositionDescription_IMPL_20303(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_util_AttributeSet__getPositionDescription_IMPL_20303(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getPositionDescription_20303_ID,"android/util/AttributeSet","getPositionDescription","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getPositionDescription could not be cached",91);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getPositionDescription_20303_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getStyleAttribute(Android_android_util_AttributeSet* __this)
{
    return Android_android_util_AttributeSet__getStyleAttribute_IMPL_20320(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_util_AttributeSet__getStyleAttribute_IMPL_20320(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getStyleAttribute_20320_ID,"android/util/AttributeSet","getStyleAttribute","()I",GetMethodID,"Id for fallback method android.util.AttributeSet.getStyleAttribute could not be cached",86);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getStyleAttribute_20320_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_util_Property__uType* Android_android_util_Property__typeof()
{
    static ::uStaticStrong<Android_android_util_Property__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_util_Property__uType*)::uAllocClassType(sizeof(Android_android_util_Property__uType), "Android.Fallbacks.Android_android_util_Property", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::util::Property__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_util_Property__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_util_Property__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_view_accessibility_AccessibilityNodeProvider__uType* Android_android_view_accessibility_AccessibilityNodeProvider__typeof()
{
    static ::uStaticStrong<Android_android_view_accessibility_AccessibilityNodeProvider__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_accessibility_AccessibilityNodeProvider__uType*)::uAllocClassType(sizeof(Android_android_view_accessibility_AccessibilityNodeProvider__uType), "Android.Fallbacks.Android_android_view_accessibility_AccessibilityNodeProvider", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::accessibility::AccessibilityNodeProvider__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_accessibility_AccessibilityNodeProvider__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_accessibility_AccessibilityNodeProvider__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_view_ActionMode__uType* Android_android_view_ActionMode__typeof()
{
    static ::uStaticStrong<Android_android_view_ActionMode__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ActionMode__uType*)::uAllocClassType(sizeof(Android_android_view_ActionMode__uType), "Android.Fallbacks.Android_android_view_ActionMode", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ActionMode__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ActionMode__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ActionMode__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ActionModeDLRCallback__onActionItemClicked_21611_ID;
jmethodID Android_android_view_ActionModeDLRCallback__onCreateActionMode_21609_ID;
jmethodID Android_android_view_ActionModeDLRCallback__onDestroyActionMode_21612_ID;
jmethodID Android_android_view_ActionModeDLRCallback__onPrepareActionMode_21610_ID;

Android_android_view_ActionModeDLRCallback__uType* Android_android_view_ActionModeDLRCallback__typeof()
{
    static ::uStaticStrong<Android_android_view_ActionModeDLRCallback__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ActionModeDLRCallback__uType*)::uAllocClassType(sizeof(Android_android_view_ActionModeDLRCallback__uType), "Android.Fallbacks.Android_android_view_ActionModeDLRCallback", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onCreateActionMode = (bool(*)(void*, ::app::Android::android::view::ActionMode*, ::uObject*))Android_android_view_ActionModeDLRCallback__onCreateActionMode;
    type->__interface_2.__fp_onPrepareActionMode = (bool(*)(void*, ::app::Android::android::view::ActionMode*, ::uObject*))Android_android_view_ActionModeDLRCallback__onPrepareActionMode;
    type->__interface_2.__fp_onActionItemClicked = (bool(*)(void*, ::app::Android::android::view::ActionMode*, ::uObject*))Android_android_view_ActionModeDLRCallback__onActionItemClicked;
    type->__interface_2.__fp_onDestroyActionMode = (void(*)(void*, ::app::Android::android::view::ActionMode*))Android_android_view_ActionModeDLRCallback__onDestroyActionMode;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ActionModeDLRCallback__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ActionModeDLRCallback__uType, __interface_1),
        ::app::Android::android::view::ActionModeDLRCallback__typeof(), offsetof(Android_android_view_ActionModeDLRCallback__uType, __interface_2));

    type->SetFields(4,
        ::uNewField("onActionItemClicked_21611_ID", &Android_android_view_ActionModeDLRCallback__onActionItemClicked_21611_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onCreateActionMode_21609_ID", &Android_android_view_ActionModeDLRCallback__onCreateActionMode_21609_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDestroyActionMode_21612_ID", &Android_android_view_ActionModeDLRCallback__onDestroyActionMode_21612_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onPrepareActionMode_21610_ID", &Android_android_view_ActionModeDLRCallback__onPrepareActionMode_21610_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(8,
        ::uNewFunction("onActionItemClicked", Android_android_view_ActionModeDLRCallback__onActionItemClicked, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::ActionMode__typeof(), ::app::Android::android::view::MenuItem__typeof()),
        ::uNewFunction("onActionItemClicked_IMPL_21611", Android_android_view_ActionModeDLRCallback__onActionItemClicked_IMPL_21611, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onCreateActionMode", Android_android_view_ActionModeDLRCallback__onCreateActionMode, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::ActionMode__typeof(), ::app::Android::android::view::Menu__typeof()),
        ::uNewFunction("onCreateActionMode_IMPL_21609", Android_android_view_ActionModeDLRCallback__onCreateActionMode_IMPL_21609, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onDestroyActionMode", Android_android_view_ActionModeDLRCallback__onDestroyActionMode, 0, false, ::app::Android::android::view::ActionMode__typeof()),
        ::uNewFunctionVoid("onDestroyActionMode_IMPL_21612", Android_android_view_ActionModeDLRCallback__onDestroyActionMode_IMPL_21612, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onPrepareActionMode", Android_android_view_ActionModeDLRCallback__onPrepareActionMode, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::ActionMode__typeof(), ::app::Android::android::view::Menu__typeof()),
        ::uNewFunction("onPrepareActionMode_IMPL_21610", Android_android_view_ActionModeDLRCallback__onPrepareActionMode_IMPL_21610, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_view_ActionModeDLRCallback__onActionItemClicked(Android_android_view_ActionModeDLRCallback* __this, ::app::Android::android::view::ActionMode* arg0, ::uObject* arg1)
{
    return Android_android_view_ActionModeDLRCallback__onActionItemClicked_IMPL_21611(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

bool Android_android_view_ActionModeDLRCallback__onActionItemClicked_IMPL_21611(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ActionModeDLRCallback__onActionItemClicked_21611_ID,"android/view/ActionMode$Callback","onActionItemClicked","(Landroid/view/ActionMode;Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.ActionMode$Callback.onActionItemClicked could not be cached",95);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ActionModeDLRCallback__onActionItemClicked_21611_ID, _obArg2, _obArg3));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_ActionModeDLRCallback__onCreateActionMode(Android_android_view_ActionModeDLRCallback* __this, ::app::Android::android::view::ActionMode* arg0, ::uObject* arg1)
{
    return Android_android_view_ActionModeDLRCallback__onCreateActionMode_IMPL_21609(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

bool Android_android_view_ActionModeDLRCallback__onCreateActionMode_IMPL_21609(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ActionModeDLRCallback__onCreateActionMode_21609_ID,"android/view/ActionMode$Callback","onCreateActionMode","(Landroid/view/ActionMode;Landroid/view/Menu;)Z",GetMethodID,"Id for fallback method android.view.ActionMode$Callback.onCreateActionMode could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ActionModeDLRCallback__onCreateActionMode_21609_ID, _obArg2, _obArg3));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_ActionModeDLRCallback__onDestroyActionMode(Android_android_view_ActionModeDLRCallback* __this, ::app::Android::android::view::ActionMode* arg0)
{
    Android_android_view_ActionModeDLRCallback__onDestroyActionMode_IMPL_21612(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_ActionModeDLRCallback__onDestroyActionMode_IMPL_21612(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ActionModeDLRCallback__onDestroyActionMode_21612_ID,"android/view/ActionMode$Callback","onDestroyActionMode","(Landroid/view/ActionMode;)V",GetMethodID,"Id for fallback method android.view.ActionMode$Callback.onDestroyActionMode could not be cached",95);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ActionModeDLRCallback__onDestroyActionMode_21612_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool Android_android_view_ActionModeDLRCallback__onPrepareActionMode(Android_android_view_ActionModeDLRCallback* __this, ::app::Android::android::view::ActionMode* arg0, ::uObject* arg1)
{
    return Android_android_view_ActionModeDLRCallback__onPrepareActionMode_IMPL_21610(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

bool Android_android_view_ActionModeDLRCallback__onPrepareActionMode_IMPL_21610(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ActionModeDLRCallback__onPrepareActionMode_21610_ID,"android/view/ActionMode$Callback","onPrepareActionMode","(Landroid/view/ActionMode;Landroid/view/Menu;)Z",GetMethodID,"Id for fallback method android.view.ActionMode$Callback.onPrepareActionMode could not be cached",95);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ActionModeDLRCallback__onPrepareActionMode_21610_ID, _obArg2, _obArg3));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_view_ActionProvider__uType* Android_android_view_ActionProvider__typeof()
{
    static ::uStaticStrong<Android_android_view_ActionProvider__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ActionProvider__uType*)::uAllocClassType(sizeof(Android_android_view_ActionProvider__uType), "Android.Fallbacks.Android_android_view_ActionProvider", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ActionProvider__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ActionProvider__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ActionProvider__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_view_animation_Animation__uType* Android_android_view_animation_Animation__typeof()
{
    static ::uStaticStrong<Android_android_view_animation_Animation__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_animation_Animation__uType*)::uAllocClassType(sizeof(Android_android_view_animation_Animation__uType), "Android.Fallbacks.Android_android_view_animation_Animation", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::animation::Animation__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_animation_Animation__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_animation_Animation__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd_21045_ID;
jmethodID Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat_21046_ID;
jmethodID Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart_21044_ID;

Android_android_view_animation_AnimationDLRAnimationListener__uType* Android_android_view_animation_AnimationDLRAnimationListener__typeof()
{
    static ::uStaticStrong<Android_android_view_animation_AnimationDLRAnimationListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_animation_AnimationDLRAnimationListener__uType*)::uAllocClassType(sizeof(Android_android_view_animation_AnimationDLRAnimationListener__uType), "Android.Fallbacks.Android_android_view_animation_AnimationDLRAnimationListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onAnimationStart = (void(*)(void*, ::app::Android::android::view::animation::Animation*))Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart;
    type->__interface_2.__fp_onAnimationEnd = (void(*)(void*, ::app::Android::android::view::animation::Animation*))Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd;
    type->__interface_2.__fp_onAnimationRepeat = (void(*)(void*, ::app::Android::android::view::animation::Animation*))Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_animation_AnimationDLRAnimationListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_animation_AnimationDLRAnimationListener__uType, __interface_1),
        ::app::Android::android::view::animation::AnimationDLRAnimationListener__typeof(), offsetof(Android_android_view_animation_AnimationDLRAnimationListener__uType, __interface_2));

    type->SetFields(3,
        ::uNewField("onAnimationEnd_21045_ID", &Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd_21045_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onAnimationRepeat_21046_ID", &Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat_21046_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onAnimationStart_21044_ID", &Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart_21044_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("onAnimationEnd", Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd, 0, false, ::app::Android::android::view::animation::Animation__typeof()),
        ::uNewFunctionVoid("onAnimationEnd_IMPL_21045", Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd_IMPL_21045, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onAnimationRepeat", Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat, 0, false, ::app::Android::android::view::animation::Animation__typeof()),
        ::uNewFunctionVoid("onAnimationRepeat_IMPL_21046", Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat_IMPL_21046, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onAnimationStart", Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart, 0, false, ::app::Android::android::view::animation::Animation__typeof()),
        ::uNewFunctionVoid("onAnimationStart_IMPL_21044", Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart_IMPL_21044, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd(Android_android_view_animation_AnimationDLRAnimationListener* __this, ::app::Android::android::view::animation::Animation* arg0)
{
    Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd_IMPL_21045(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd_IMPL_21045(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd_21045_ID,"android/view/animation/Animation$AnimationListener","onAnimationEnd","(Landroid/view/animation/Animation;)V",GetMethodID,"Id for fallback method android.view.animation.Animation$AnimationListener.onAnimationEnd could not be cached",108);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_animation_AnimationDLRAnimationListener__onAnimationEnd_21045_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat(Android_android_view_animation_AnimationDLRAnimationListener* __this, ::app::Android::android::view::animation::Animation* arg0)
{
    Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat_IMPL_21046(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat_IMPL_21046(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat_21046_ID,"android/view/animation/Animation$AnimationListener","onAnimationRepeat","(Landroid/view/animation/Animation;)V",GetMethodID,"Id for fallback method android.view.animation.Animation$AnimationListener.onAnimationRepeat could not be cached",111);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_animation_AnimationDLRAnimationListener__onAnimationRepeat_21046_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart(Android_android_view_animation_AnimationDLRAnimationListener* __this, ::app::Android::android::view::animation::Animation* arg0)
{
    Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart_IMPL_21044(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart_IMPL_21044(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart_21044_ID,"android/view/animation/Animation$AnimationListener","onAnimationStart","(Landroid/view/animation/Animation;)V",GetMethodID,"Id for fallback method android.view.animation.Animation$AnimationListener.onAnimationStart could not be cached",110);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_animation_AnimationDLRAnimationListener__onAnimationStart_21044_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_animation_Interpolator__getInterpolation_379_ID;

Android_android_view_animation_Interpolator__uType* Android_android_view_animation_Interpolator__typeof()
{
    static ::uStaticStrong<Android_android_view_animation_Interpolator__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_animation_Interpolator__uType*)::uAllocClassType(sizeof(Android_android_view_animation_Interpolator__uType), "Android.Fallbacks.Android_android_view_animation_Interpolator", false, 4, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_getInterpolation = (float(*)(void*, float))Android_android_view_animation_Interpolator__getInterpolation;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_animation_Interpolator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_animation_Interpolator__uType, __interface_1),
        ::app::Android::android::view::animation::Interpolator__typeof(), offsetof(Android_android_view_animation_Interpolator__uType, __interface_2),
        ::app::Android::android::animation::TimeInterpolator__typeof(), offsetof(Android_android_view_animation_Interpolator__uType, __interface_3));

    type->SetFields(1,
        ::uNewField("getInterpolation_379_ID", &Android_android_view_animation_Interpolator__getInterpolation_379_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("getInterpolation", Android_android_view_animation_Interpolator__getInterpolation, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("getInterpolation_IMPL_379", Android_android_view_animation_Interpolator__getInterpolation_IMPL_379, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

float Android_android_view_animation_Interpolator__getInterpolation(Android_android_view_animation_Interpolator* __this, float arg0)
{
    return Android_android_view_animation_Interpolator__getInterpolation_IMPL_379(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

float Android_android_view_animation_Interpolator__getInterpolation_IMPL_379(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_animation_Interpolator__getInterpolation_379_ID,"android/view/animation/Interpolator","getInterpolation","(F)F",GetMethodID,"Id for fallback method android.view.animation.Interpolator.getInterpolation could not be cached",95);
    
    float result;
    result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_animation_Interpolator__getInterpolation_379_ID, ((jfloat)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ChoreographerDLRFrameCallback__doFrame_21642_ID;

Android_android_view_ChoreographerDLRFrameCallback__uType* Android_android_view_ChoreographerDLRFrameCallback__typeof()
{
    static ::uStaticStrong<Android_android_view_ChoreographerDLRFrameCallback__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ChoreographerDLRFrameCallback__uType*)::uAllocClassType(sizeof(Android_android_view_ChoreographerDLRFrameCallback__uType), "Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_doFrame = (void(*)(void*, ::uLong))Android_android_view_ChoreographerDLRFrameCallback__doFrame;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ChoreographerDLRFrameCallback__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ChoreographerDLRFrameCallback__uType, __interface_1),
        ::app::Android::android::view::ChoreographerDLRFrameCallback__typeof(), offsetof(Android_android_view_ChoreographerDLRFrameCallback__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("doFrame_21642_ID", &Android_android_view_ChoreographerDLRFrameCallback__doFrame_21642_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("doFrame", Android_android_view_ChoreographerDLRFrameCallback__doFrame, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("doFrame_IMPL_21642", Android_android_view_ChoreographerDLRFrameCallback__doFrame_IMPL_21642, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_ChoreographerDLRFrameCallback__doFrame(Android_android_view_ChoreographerDLRFrameCallback* __this, ::uLong arg0)
{
    Android_android_view_ChoreographerDLRFrameCallback__doFrame_IMPL_21642(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_ChoreographerDLRFrameCallback__doFrame_IMPL_21642(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ChoreographerDLRFrameCallback__doFrame_21642_ID,"android/view/Choreographer$FrameCallback","doFrame","(J)V",GetMethodID,"Id for fallback method android.view.Choreographer$FrameCallback.doFrame could not be cached",91);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ChoreographerDLRFrameCallback__doFrame_21642_ID, ((jlong)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ContextMenu__add_22256_ID;
jmethodID Android_android_view_ContextMenu__add_22257_ID;
jmethodID Android_android_view_ContextMenu__add_22258_ID;
jmethodID Android_android_view_ContextMenu__add_22259_ID;
jmethodID Android_android_view_ContextMenu__addIntentOptions_22264_ID;
jmethodID Android_android_view_ContextMenu__addSubMenu_22260_ID;
jmethodID Android_android_view_ContextMenu__addSubMenu_22261_ID;
jmethodID Android_android_view_ContextMenu__addSubMenu_22262_ID;
jmethodID Android_android_view_ContextMenu__addSubMenu_22263_ID;
jmethodID Android_android_view_ContextMenu__clear_22267_ID;
jmethodID Android_android_view_ContextMenu__clearHeader_21655_ID;
jmethodID Android_android_view_ContextMenu__close_22275_ID;
jmethodID Android_android_view_ContextMenu__findItem_22272_ID;
jmethodID Android_android_view_ContextMenu__getItem_22274_ID;
jmethodID Android_android_view_ContextMenu__hasVisibleItems_22271_ID;
jmethodID Android_android_view_ContextMenu__isShortcutKey_22277_ID;
jmethodID Android_android_view_ContextMenu__performIdentifierAction_22278_ID;
jmethodID Android_android_view_ContextMenu__performShortcut_22276_ID;
jmethodID Android_android_view_ContextMenu__removeGroup_22266_ID;
jmethodID Android_android_view_ContextMenu__removeItem_22265_ID;
jmethodID Android_android_view_ContextMenu__setGroupCheckable_22268_ID;
jmethodID Android_android_view_ContextMenu__setGroupEnabled_22270_ID;
jmethodID Android_android_view_ContextMenu__setGroupVisible_22269_ID;
jmethodID Android_android_view_ContextMenu__setHeaderIcon_21652_ID;
jmethodID Android_android_view_ContextMenu__setHeaderIcon_21653_ID;
jmethodID Android_android_view_ContextMenu__setHeaderTitle_21650_ID;
jmethodID Android_android_view_ContextMenu__setHeaderTitle_21651_ID;
jmethodID Android_android_view_ContextMenu__setHeaderView_21654_ID;
jmethodID Android_android_view_ContextMenu__setQwertyMode_22279_ID;
jmethodID Android_android_view_ContextMenu__size_22273_ID;

Android_android_view_ContextMenu__uType* Android_android_view_ContextMenu__typeof()
{
    static ::uStaticStrong<Android_android_view_ContextMenu__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ContextMenu__uType*)::uAllocClassType(sizeof(Android_android_view_ContextMenu__uType), "Android.Fallbacks.Android_android_view_ContextMenu", false, 4, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_setHeaderTitle_1 = (::uObject*(*)(void*, int))Android_android_view_ContextMenu__setHeaderTitle_1;
    type->__interface_2.__fp_setHeaderTitle = (::uObject*(*)(void*, ::uObject*))Android_android_view_ContextMenu__setHeaderTitle;
    type->__interface_2.__fp_setHeaderIcon_1 = (::uObject*(*)(void*, int))Android_android_view_ContextMenu__setHeaderIcon_1;
    type->__interface_2.__fp_setHeaderIcon = (::uObject*(*)(void*, ::app::Android::android::graphics::drawable::Drawable*))Android_android_view_ContextMenu__setHeaderIcon;
    type->__interface_2.__fp_setHeaderView = (::uObject*(*)(void*, ::app::Android::android::view::View*))Android_android_view_ContextMenu__setHeaderView;
    type->__interface_2.__fp_clearHeader = (void(*)(void*))Android_android_view_ContextMenu__clearHeader;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_add = (::uObject*(*)(void*, ::uObject*))Android_android_view_ContextMenu__add;
    type->__interface_3.__fp_add_1 = (::uObject*(*)(void*, int))Android_android_view_ContextMenu__add_1;
    type->__interface_3.__fp_add_2 = (::uObject*(*)(void*, int, int, int, ::uObject*))Android_android_view_ContextMenu__add_2;
    type->__interface_3.__fp_add_3 = (::uObject*(*)(void*, int, int, int, int))Android_android_view_ContextMenu__add_3;
    type->__interface_3.__fp_addSubMenu = (::uObject*(*)(void*, ::uObject*))Android_android_view_ContextMenu__addSubMenu;
    type->__interface_3.__fp_addSubMenu_1 = (::uObject*(*)(void*, int))Android_android_view_ContextMenu__addSubMenu_1;
    type->__interface_3.__fp_addSubMenu_2 = (::uObject*(*)(void*, int, int, int, ::uObject*))Android_android_view_ContextMenu__addSubMenu_2;
    type->__interface_3.__fp_addSubMenu_3 = (::uObject*(*)(void*, int, int, int, int))Android_android_view_ContextMenu__addSubMenu_3;
    type->__interface_3.__fp_addIntentOptions = (int(*)(void*, int, int, int, ::app::Android::android::content::ComponentName*, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent*, ::app::Android::android::content::Intent*, int, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem*))Android_android_view_ContextMenu__addIntentOptions;
    type->__interface_3.__fp_removeItem = (void(*)(void*, int))Android_android_view_ContextMenu__removeItem;
    type->__interface_3.__fp_removeGroup = (void(*)(void*, int))Android_android_view_ContextMenu__removeGroup;
    type->__interface_3.__fp_clear = (void(*)(void*))Android_android_view_ContextMenu__clear;
    type->__interface_3.__fp_setGroupCheckable = (void(*)(void*, int, bool, bool))Android_android_view_ContextMenu__setGroupCheckable;
    type->__interface_3.__fp_setGroupVisible = (void(*)(void*, int, bool))Android_android_view_ContextMenu__setGroupVisible;
    type->__interface_3.__fp_setGroupEnabled = (void(*)(void*, int, bool))Android_android_view_ContextMenu__setGroupEnabled;
    type->__interface_3.__fp_hasVisibleItems = (bool(*)(void*))Android_android_view_ContextMenu__hasVisibleItems;
    type->__interface_3.__fp_findItem = (::uObject*(*)(void*, int))Android_android_view_ContextMenu__findItem;
    type->__interface_3.__fp_size = (int(*)(void*))Android_android_view_ContextMenu__size;
    type->__interface_3.__fp_getItem = (::uObject*(*)(void*, int))Android_android_view_ContextMenu__getItem;
    type->__interface_3.__fp_close = (void(*)(void*))Android_android_view_ContextMenu__close;
    type->__interface_3.__fp_performShortcut = (bool(*)(void*, int, ::app::Android::android::view::KeyEvent*, int))Android_android_view_ContextMenu__performShortcut;
    type->__interface_3.__fp_isShortcutKey = (bool(*)(void*, int, ::app::Android::android::view::KeyEvent*))Android_android_view_ContextMenu__isShortcutKey;
    type->__interface_3.__fp_performIdentifierAction = (bool(*)(void*, int, int))Android_android_view_ContextMenu__performIdentifierAction;
    type->__interface_3.__fp_setQwertyMode = (void(*)(void*, bool))Android_android_view_ContextMenu__setQwertyMode;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ContextMenu__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ContextMenu__uType, __interface_1),
        ::app::Android::android::view::ContextMenu__typeof(), offsetof(Android_android_view_ContextMenu__uType, __interface_2),
        ::app::Android::android::view::Menu__typeof(), offsetof(Android_android_view_ContextMenu__uType, __interface_3));

    type->SetFields(30,
        ::uNewField("add_22256_ID", &Android_android_view_ContextMenu__add_22256_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("add_22257_ID", &Android_android_view_ContextMenu__add_22257_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("add_22258_ID", &Android_android_view_ContextMenu__add_22258_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("add_22259_ID", &Android_android_view_ContextMenu__add_22259_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addIntentOptions_22264_ID", &Android_android_view_ContextMenu__addIntentOptions_22264_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addSubMenu_22260_ID", &Android_android_view_ContextMenu__addSubMenu_22260_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addSubMenu_22261_ID", &Android_android_view_ContextMenu__addSubMenu_22261_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addSubMenu_22262_ID", &Android_android_view_ContextMenu__addSubMenu_22262_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addSubMenu_22263_ID", &Android_android_view_ContextMenu__addSubMenu_22263_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("clear_22267_ID", &Android_android_view_ContextMenu__clear_22267_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("clearHeader_21655_ID", &Android_android_view_ContextMenu__clearHeader_21655_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("close_22275_ID", &Android_android_view_ContextMenu__close_22275_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("findItem_22272_ID", &Android_android_view_ContextMenu__findItem_22272_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getItem_22274_ID", &Android_android_view_ContextMenu__getItem_22274_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hasVisibleItems_22271_ID", &Android_android_view_ContextMenu__hasVisibleItems_22271_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isShortcutKey_22277_ID", &Android_android_view_ContextMenu__isShortcutKey_22277_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performIdentifierAction_22278_ID", &Android_android_view_ContextMenu__performIdentifierAction_22278_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performShortcut_22276_ID", &Android_android_view_ContextMenu__performShortcut_22276_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("removeGroup_22266_ID", &Android_android_view_ContextMenu__removeGroup_22266_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("removeItem_22265_ID", &Android_android_view_ContextMenu__removeItem_22265_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setGroupCheckable_22268_ID", &Android_android_view_ContextMenu__setGroupCheckable_22268_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setGroupEnabled_22270_ID", &Android_android_view_ContextMenu__setGroupEnabled_22270_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setGroupVisible_22269_ID", &Android_android_view_ContextMenu__setGroupVisible_22269_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHeaderIcon_21652_ID", &Android_android_view_ContextMenu__setHeaderIcon_21652_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHeaderIcon_21653_ID", &Android_android_view_ContextMenu__setHeaderIcon_21653_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHeaderTitle_21650_ID", &Android_android_view_ContextMenu__setHeaderTitle_21650_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHeaderTitle_21651_ID", &Android_android_view_ContextMenu__setHeaderTitle_21651_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHeaderView_21654_ID", &Android_android_view_ContextMenu__setHeaderView_21654_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setQwertyMode_22279_ID", &Android_android_view_ContextMenu__setQwertyMode_22279_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("size_22273_ID", &Android_android_view_ContextMenu__size_22273_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(60,
        ::uNewFunction("add", Android_android_view_ContextMenu__add, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("add", Android_android_view_ContextMenu__add_1, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("add", Android_android_view_ContextMenu__add_2, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("add", Android_android_view_ContextMenu__add_3, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("add_IMPL_22256", Android_android_view_ContextMenu__add_IMPL_22256, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("add_IMPL_22257", Android_android_view_ContextMenu__add_IMPL_22257, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("add_IMPL_22258", Android_android_view_ContextMenu__add_IMPL_22258, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("add_IMPL_22259", Android_android_view_ContextMenu__add_IMPL_22259, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("addIntentOptions", Android_android_view_ContextMenu__addIntentOptions, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::content::ComponentName__typeof(), ::app::Android::Runtime::ObjectArray__Android_android_content_Intent__typeof(), ::app::Android::android::content::Intent__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem__typeof()),
        ::uNewFunction("addIntentOptions_IMPL_22264", Android_android_view_ContextMenu__addIntentOptions_IMPL_22264, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("addSubMenu", Android_android_view_ContextMenu__addSubMenu, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("addSubMenu", Android_android_view_ContextMenu__addSubMenu_1, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("addSubMenu", Android_android_view_ContextMenu__addSubMenu_2, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("addSubMenu", Android_android_view_ContextMenu__addSubMenu_3, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("addSubMenu_IMPL_22260", Android_android_view_ContextMenu__addSubMenu_IMPL_22260, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("addSubMenu_IMPL_22261", Android_android_view_ContextMenu__addSubMenu_IMPL_22261, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("addSubMenu_IMPL_22262", Android_android_view_ContextMenu__addSubMenu_IMPL_22262, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("addSubMenu_IMPL_22263", Android_android_view_ContextMenu__addSubMenu_IMPL_22263, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("clear", Android_android_view_ContextMenu__clear, 0, false),
        ::uNewFunctionVoid("clear_IMPL_22267", Android_android_view_ContextMenu__clear_IMPL_22267, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("clearHeader", Android_android_view_ContextMenu__clearHeader, 0, false),
        ::uNewFunctionVoid("clearHeader_IMPL_21655", Android_android_view_ContextMenu__clearHeader_IMPL_21655, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("close", Android_android_view_ContextMenu__close, 0, false),
        ::uNewFunctionVoid("close_IMPL_22275", Android_android_view_ContextMenu__close_IMPL_22275, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("findItem", Android_android_view_ContextMenu__findItem, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("findItem_IMPL_22272", Android_android_view_ContextMenu__findItem_IMPL_22272, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getItem", Android_android_view_ContextMenu__getItem, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getItem_IMPL_22274", Android_android_view_ContextMenu__getItem_IMPL_22274, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("hasVisibleItems", Android_android_view_ContextMenu__hasVisibleItems, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("hasVisibleItems_IMPL_22271", Android_android_view_ContextMenu__hasVisibleItems_IMPL_22271, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isShortcutKey", Android_android_view_ContextMenu__isShortcutKey, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::view::KeyEvent__typeof()),
        ::uNewFunction("isShortcutKey_IMPL_22277", Android_android_view_ContextMenu__isShortcutKey_IMPL_22277, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("performIdentifierAction", Android_android_view_ContextMenu__performIdentifierAction, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performIdentifierAction_IMPL_22278", Android_android_view_ContextMenu__performIdentifierAction_IMPL_22278, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performShortcut", Android_android_view_ContextMenu__performShortcut, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::view::KeyEvent__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performShortcut_IMPL_22276", Android_android_view_ContextMenu__performShortcut_IMPL_22276, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("removeGroup", Android_android_view_ContextMenu__removeGroup, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("removeGroup_IMPL_22266", Android_android_view_ContextMenu__removeGroup_IMPL_22266, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("removeItem", Android_android_view_ContextMenu__removeItem, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("removeItem_IMPL_22265", Android_android_view_ContextMenu__removeItem_IMPL_22265, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setGroupCheckable", Android_android_view_ContextMenu__setGroupCheckable, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupCheckable_IMPL_22268", Android_android_view_ContextMenu__setGroupCheckable_IMPL_22268, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupEnabled", Android_android_view_ContextMenu__setGroupEnabled, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupEnabled_IMPL_22270", Android_android_view_ContextMenu__setGroupEnabled_IMPL_22270, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupVisible", Android_android_view_ContextMenu__setGroupVisible, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupVisible_IMPL_22269", Android_android_view_ContextMenu__setGroupVisible_IMPL_22269, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("setHeaderIcon", Android_android_view_ContextMenu__setHeaderIcon, 0, false, ::app::Android::android::view::ContextMenu__typeof(), ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunction("setHeaderIcon", Android_android_view_ContextMenu__setHeaderIcon_1, 0, false, ::app::Android::android::view::ContextMenu__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setHeaderIcon_IMPL_21652", Android_android_view_ContextMenu__setHeaderIcon_IMPL_21652, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setHeaderIcon_IMPL_21653", Android_android_view_ContextMenu__setHeaderIcon_IMPL_21653, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setHeaderTitle", Android_android_view_ContextMenu__setHeaderTitle, 0, false, ::app::Android::android::view::ContextMenu__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("setHeaderTitle", Android_android_view_ContextMenu__setHeaderTitle_1, 0, false, ::app::Android::android::view::ContextMenu__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setHeaderTitle_IMPL_21650", Android_android_view_ContextMenu__setHeaderTitle_IMPL_21650, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setHeaderTitle_IMPL_21651", Android_android_view_ContextMenu__setHeaderTitle_IMPL_21651, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setHeaderView", Android_android_view_ContextMenu__setHeaderView, 0, false, ::app::Android::android::view::ContextMenu__typeof(), ::app::Android::android::view::View__typeof()),
        ::uNewFunction("setHeaderView_IMPL_21654", Android_android_view_ContextMenu__setHeaderView_IMPL_21654, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setQwertyMode", Android_android_view_ContextMenu__setQwertyMode, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setQwertyMode_IMPL_22279", Android_android_view_ContextMenu__setQwertyMode_IMPL_22279, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("size", Android_android_view_ContextMenu__size, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("size_IMPL_22273", Android_android_view_ContextMenu__size_IMPL_22273, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Android_android_view_ContextMenu__add(Android_android_view_ContextMenu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_ContextMenu__add_IMPL_22256(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_ContextMenu__add_1(Android_android_view_ContextMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_ContextMenu__add_IMPL_22257(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_ContextMenu__add_2(Android_android_view_ContextMenu* __this, int arg0, int arg1, int arg2, ::uObject* arg3)
{
    return (::uObject*)Android_android_view_ContextMenu__add_IMPL_22258(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3);
}

::uObject* Android_android_view_ContextMenu__add_3(Android_android_view_ContextMenu* __this, int arg0, int arg1, int arg2, int arg3)
{
    return (::uObject*)Android_android_view_ContextMenu__add_IMPL_22259(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

::uObject* Android_android_view_ContextMenu__add_IMPL_22256(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__add_22256_ID,"android/view/ContextMenu","add","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.ContextMenu.add could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__add_22256_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ContextMenu__add_IMPL_22257(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__add_22257_ID,"android/view/ContextMenu","add","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.ContextMenu.add could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__add_22257_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ContextMenu__add_IMPL_22258(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__add_22258_ID,"android/view/ContextMenu","add","(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.ContextMenu.add could not be cached",71);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__add_22258_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ContextMenu__add_IMPL_22259(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__add_22259_ID,"android/view/ContextMenu","add","(IIII)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.ContextMenu.add could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__add_22259_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_ContextMenu__addIntentOptions(Android_android_view_ContextMenu* __this, int arg0, int arg1, int arg2, ::app::Android::android::content::ComponentName* arg3, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent* arg4, ::app::Android::android::content::Intent* arg5, int arg6, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem* arg7)
{
    return Android_android_view_ContextMenu__addIntentOptions_IMPL_22264(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3, (::uObject*)arg4, (::uObject*)arg5, arg6, (::uObject*)arg7);
}

int Android_android_view_ContextMenu__addIntentOptions_IMPL_22264(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_, ::uObject* arg6_, ::uObject* arg7_, int arg8_, ::uObject* arg9_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__addIntentOptions_22264_ID,"android/view/ContextMenu","addIntentOptions","(IIILandroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I[Landroid/view/MenuItem;)I",GetMethodID,"Id for fallback method android.view.ContextMenu.addIntentOptions could not be cached",84);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    jobject _obArg6 = ((!arg6_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg6_));
    jobject _obArg7 = ((!arg7_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg7_));
    jobject _obArg9 = ((!arg9_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg9_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__addIntentOptions_22264_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5, _obArg6, _obArg7, ((jint)arg8_), _obArg9));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ContextMenu__addSubMenu(Android_android_view_ContextMenu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_ContextMenu__addSubMenu_IMPL_22260(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_ContextMenu__addSubMenu_1(Android_android_view_ContextMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_ContextMenu__addSubMenu_IMPL_22261(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_ContextMenu__addSubMenu_2(Android_android_view_ContextMenu* __this, int arg0, int arg1, int arg2, ::uObject* arg3)
{
    return (::uObject*)Android_android_view_ContextMenu__addSubMenu_IMPL_22262(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3);
}

::uObject* Android_android_view_ContextMenu__addSubMenu_3(Android_android_view_ContextMenu* __this, int arg0, int arg1, int arg2, int arg3)
{
    return (::uObject*)Android_android_view_ContextMenu__addSubMenu_IMPL_22263(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

::uObject* Android_android_view_ContextMenu__addSubMenu_IMPL_22260(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__addSubMenu_22260_ID,"android/view/ContextMenu","addSubMenu","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.ContextMenu.addSubMenu could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__addSubMenu_22260_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ContextMenu__addSubMenu_IMPL_22261(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__addSubMenu_22261_ID,"android/view/ContextMenu","addSubMenu","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.ContextMenu.addSubMenu could not be cached",78);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__addSubMenu_22261_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ContextMenu__addSubMenu_IMPL_22262(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__addSubMenu_22262_ID,"android/view/ContextMenu","addSubMenu","(IIILjava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.ContextMenu.addSubMenu could not be cached",78);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__addSubMenu_22262_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ContextMenu__addSubMenu_IMPL_22263(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__addSubMenu_22263_ID,"android/view/ContextMenu","addSubMenu","(IIII)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.ContextMenu.addSubMenu could not be cached",78);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__addSubMenu_22263_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_ContextMenu__clear(Android_android_view_ContextMenu* __this)
{
    Android_android_view_ContextMenu__clear_IMPL_22267(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_ContextMenu__clear_IMPL_22267(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__clear_22267_ID,"android/view/ContextMenu","clear","()V",GetMethodID,"Id for fallback method android.view.ContextMenu.clear could not be cached",73);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__clear_22267_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ContextMenu__clearHeader(Android_android_view_ContextMenu* __this)
{
    Android_android_view_ContextMenu__clearHeader_IMPL_21655(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_ContextMenu__clearHeader_IMPL_21655(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__clearHeader_21655_ID,"android/view/ContextMenu","clearHeader","()V",GetMethodID,"Id for fallback method android.view.ContextMenu.clearHeader could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__clearHeader_21655_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ContextMenu__close(Android_android_view_ContextMenu* __this)
{
    Android_android_view_ContextMenu__close_IMPL_22275(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_ContextMenu__close_IMPL_22275(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__close_22275_ID,"android/view/ContextMenu","close","()V",GetMethodID,"Id for fallback method android.view.ContextMenu.close could not be cached",73);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__close_22275_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* Android_android_view_ContextMenu__findItem(Android_android_view_ContextMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_ContextMenu__findItem_IMPL_22272(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_ContextMenu__findItem_IMPL_22272(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__findItem_22272_ID,"android/view/ContextMenu","findItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.ContextMenu.findItem could not be cached",76);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__findItem_22272_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ContextMenu__getItem(Android_android_view_ContextMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_ContextMenu__getItem_IMPL_22274(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_ContextMenu__getItem_IMPL_22274(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__getItem_22274_ID,"android/view/ContextMenu","getItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.ContextMenu.getItem could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__getItem_22274_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_ContextMenu__hasVisibleItems(Android_android_view_ContextMenu* __this)
{
    return Android_android_view_ContextMenu__hasVisibleItems_IMPL_22271(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_ContextMenu__hasVisibleItems_IMPL_22271(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__hasVisibleItems_22271_ID,"android/view/ContextMenu","hasVisibleItems","()Z",GetMethodID,"Id for fallback method android.view.ContextMenu.hasVisibleItems could not be cached",83);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__hasVisibleItems_22271_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_ContextMenu__isShortcutKey(Android_android_view_ContextMenu* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1)
{
    return Android_android_view_ContextMenu__isShortcutKey_IMPL_22277(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool Android_android_view_ContextMenu__isShortcutKey_IMPL_22277(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__isShortcutKey_22277_ID,"android/view/ContextMenu","isShortcutKey","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.view.ContextMenu.isShortcutKey could not be cached",81);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__isShortcutKey_22277_ID, ((jint)arg2_), _obArg3));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_ContextMenu__performIdentifierAction(Android_android_view_ContextMenu* __this, int arg0, int arg1)
{
    return Android_android_view_ContextMenu__performIdentifierAction_IMPL_22278(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

bool Android_android_view_ContextMenu__performIdentifierAction_IMPL_22278(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__performIdentifierAction_22278_ID,"android/view/ContextMenu","performIdentifierAction","(II)Z",GetMethodID,"Id for fallback method android.view.ContextMenu.performIdentifierAction could not be cached",91);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__performIdentifierAction_22278_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_ContextMenu__performShortcut(Android_android_view_ContextMenu* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1, int arg2)
{
    return Android_android_view_ContextMenu__performShortcut_IMPL_22276(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1, arg2);
}

bool Android_android_view_ContextMenu__performShortcut_IMPL_22276(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__performShortcut_22276_ID,"android/view/ContextMenu","performShortcut","(ILandroid/view/KeyEvent;I)Z",GetMethodID,"Id for fallback method android.view.ContextMenu.performShortcut could not be cached",83);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__performShortcut_22276_ID, ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_ContextMenu__removeGroup(Android_android_view_ContextMenu* __this, int arg0)
{
    Android_android_view_ContextMenu__removeGroup_IMPL_22266(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_ContextMenu__removeGroup_IMPL_22266(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__removeGroup_22266_ID,"android/view/ContextMenu","removeGroup","(I)V",GetMethodID,"Id for fallback method android.view.ContextMenu.removeGroup could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__removeGroup_22266_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ContextMenu__removeItem(Android_android_view_ContextMenu* __this, int arg0)
{
    Android_android_view_ContextMenu__removeItem_IMPL_22265(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_ContextMenu__removeItem_IMPL_22265(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__removeItem_22265_ID,"android/view/ContextMenu","removeItem","(I)V",GetMethodID,"Id for fallback method android.view.ContextMenu.removeItem could not be cached",78);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__removeItem_22265_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ContextMenu__setGroupCheckable(Android_android_view_ContextMenu* __this, int arg0, bool arg1, bool arg2)
{
    Android_android_view_ContextMenu__setGroupCheckable_IMPL_22268(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2);
}

void Android_android_view_ContextMenu__setGroupCheckable_IMPL_22268(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__setGroupCheckable_22268_ID,"android/view/ContextMenu","setGroupCheckable","(IZZ)V",GetMethodID,"Id for fallback method android.view.ContextMenu.setGroupCheckable could not be cached",85);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__setGroupCheckable_22268_ID, ((jint)arg2_), ((jboolean)arg3_), ((jboolean)arg4_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ContextMenu__setGroupEnabled(Android_android_view_ContextMenu* __this, int arg0, bool arg1)
{
    Android_android_view_ContextMenu__setGroupEnabled_IMPL_22270(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Android_android_view_ContextMenu__setGroupEnabled_IMPL_22270(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__setGroupEnabled_22270_ID,"android/view/ContextMenu","setGroupEnabled","(IZ)V",GetMethodID,"Id for fallback method android.view.ContextMenu.setGroupEnabled could not be cached",83);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__setGroupEnabled_22270_ID, ((jint)arg2_), ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ContextMenu__setGroupVisible(Android_android_view_ContextMenu* __this, int arg0, bool arg1)
{
    Android_android_view_ContextMenu__setGroupVisible_IMPL_22269(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Android_android_view_ContextMenu__setGroupVisible_IMPL_22269(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__setGroupVisible_22269_ID,"android/view/ContextMenu","setGroupVisible","(IZ)V",GetMethodID,"Id for fallback method android.view.ContextMenu.setGroupVisible could not be cached",83);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__setGroupVisible_22269_ID, ((jint)arg2_), ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* Android_android_view_ContextMenu__setHeaderIcon(Android_android_view_ContextMenu* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return (::uObject*)Android_android_view_ContextMenu__setHeaderIcon_IMPL_21653(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_ContextMenu__setHeaderIcon_1(Android_android_view_ContextMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_ContextMenu__setHeaderIcon_IMPL_21652(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_ContextMenu__setHeaderIcon_IMPL_21652(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__setHeaderIcon_21652_ID,"android/view/ContextMenu","setHeaderIcon","(I)Landroid/view/ContextMenu;",GetMethodID,"Id for fallback method android.view.ContextMenu.setHeaderIcon could not be cached",81);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__setHeaderIcon_21652_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_ContextMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ContextMenu__setHeaderIcon_IMPL_21653(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__setHeaderIcon_21653_ID,"android/view/ContextMenu","setHeaderIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/ContextMenu;",GetMethodID,"Id for fallback method android.view.ContextMenu.setHeaderIcon could not be cached",81);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__setHeaderIcon_21653_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_ContextMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ContextMenu__setHeaderTitle(Android_android_view_ContextMenu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_ContextMenu__setHeaderTitle_IMPL_21651(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_ContextMenu__setHeaderTitle_1(Android_android_view_ContextMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_ContextMenu__setHeaderTitle_IMPL_21650(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_ContextMenu__setHeaderTitle_IMPL_21650(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__setHeaderTitle_21650_ID,"android/view/ContextMenu","setHeaderTitle","(I)Landroid/view/ContextMenu;",GetMethodID,"Id for fallback method android.view.ContextMenu.setHeaderTitle could not be cached",82);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__setHeaderTitle_21650_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_ContextMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ContextMenu__setHeaderTitle_IMPL_21651(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__setHeaderTitle_21651_ID,"android/view/ContextMenu","setHeaderTitle","(Ljava/lang/CharSequence;)Landroid/view/ContextMenu;",GetMethodID,"Id for fallback method android.view.ContextMenu.setHeaderTitle could not be cached",82);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__setHeaderTitle_21651_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_ContextMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ContextMenu__setHeaderView(Android_android_view_ContextMenu* __this, ::app::Android::android::view::View* arg0)
{
    return (::uObject*)Android_android_view_ContextMenu__setHeaderView_IMPL_21654(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_ContextMenu__setHeaderView_IMPL_21654(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__setHeaderView_21654_ID,"android/view/ContextMenu","setHeaderView","(Landroid/view/View;)Landroid/view/ContextMenu;",GetMethodID,"Id for fallback method android.view.ContextMenu.setHeaderView could not be cached",81);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__setHeaderView_21654_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_ContextMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_ContextMenu__setQwertyMode(Android_android_view_ContextMenu* __this, bool arg0)
{
    Android_android_view_ContextMenu__setQwertyMode_IMPL_22279(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_ContextMenu__setQwertyMode_IMPL_22279(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__setQwertyMode_22279_ID,"android/view/ContextMenu","setQwertyMode","(Z)V",GetMethodID,"Id for fallback method android.view.ContextMenu.setQwertyMode could not be cached",81);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__setQwertyMode_22279_ID, ((jboolean)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int Android_android_view_ContextMenu__size(Android_android_view_ContextMenu* __this)
{
    return Android_android_view_ContextMenu__size_IMPL_22273(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_ContextMenu__size_IMPL_22273(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ContextMenu__size_22273_ID,"android/view/ContextMenu","size","()I",GetMethodID,"Id for fallback method android.view.ContextMenu.size could not be cached",72);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ContextMenu__size_22273_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_view_ContextMenuDLRContextMenuInfo__uType* Android_android_view_ContextMenuDLRContextMenuInfo__typeof()
{
    static ::uStaticStrong<Android_android_view_ContextMenuDLRContextMenuInfo__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ContextMenuDLRContextMenuInfo__uType*)::uAllocClassType(sizeof(Android_android_view_ContextMenuDLRContextMenuInfo__uType), "Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ContextMenuDLRContextMenuInfo__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ContextMenuDLRContextMenuInfo__uType, __interface_1),
        ::app::Android::android::view::ContextMenuDLRContextMenuInfo__typeof(), offsetof(Android_android_view_ContextMenuDLRContextMenuInfo__uType, __interface_2));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_InputEvent__writeToParcel_45621_ID;

Android_android_view_InputEvent__uType* Android_android_view_InputEvent__typeof()
{
    static ::uStaticStrong<Android_android_view_InputEvent__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_InputEvent__uType*)::uAllocClassType(sizeof(Android_android_view_InputEvent__uType), "Android.Fallbacks.Android_android_view_InputEvent", false, 3, 0, 0);

    type->SetBaseType(::app::Android::android::view::InputEvent__typeof());
    type->__fp_writeToParcel = (void(*)(::app::Android::android::view::InputEvent*, ::app::Android::android::os::Parcel*, int))Android_android_view_InputEvent__writeToParcel;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))Android_android_view_InputEvent__writeToParcel;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_InputEvent__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_InputEvent__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(Android_android_view_InputEvent__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("writeToParcel_45621_ID", &Android_android_view_InputEvent__writeToParcel_45621_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(1,
        ::uNewFunctionVoid("writeToParcel_IMPL_45621", Android_android_view_InputEvent__writeToParcel_IMPL_45621, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_InputEvent__writeToParcel(Android_android_view_InputEvent* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    Android_android_view_InputEvent__writeToParcel_IMPL_45621(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Android_android_view_InputEvent__writeToParcel_IMPL_45621(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_InputEvent__writeToParcel_45621_ID,"android/view/InputEvent","writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.view.InputEvent.writeToParcel could not be cached",80);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_InputEvent__writeToParcel_45621_ID, _obArg2, ((jint)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_inputmethod_InputConnection__beginBatchEdit_21376_ID;
jmethodID Android_android_view_inputmethod_InputConnection__clearMetaKeyStates_21379_ID;
jmethodID Android_android_view_inputmethod_InputConnection__commitCompletion_21371_ID;
jmethodID Android_android_view_inputmethod_InputConnection__commitCorrection_21372_ID;
jmethodID Android_android_view_inputmethod_InputConnection__commitText_21370_ID;
jmethodID Android_android_view_inputmethod_InputConnection__deleteSurroundingText_21366_ID;
jmethodID Android_android_view_inputmethod_InputConnection__endBatchEdit_21377_ID;
jmethodID Android_android_view_inputmethod_InputConnection__finishComposingText_21369_ID;
jmethodID Android_android_view_inputmethod_InputConnection__getCursorCapsMode_21364_ID;
jmethodID Android_android_view_inputmethod_InputConnection__getExtractedText_21365_ID;
jmethodID Android_android_view_inputmethod_InputConnection__getSelectedText_21363_ID;
jmethodID Android_android_view_inputmethod_InputConnection__getTextAfterCursor_21362_ID;
jmethodID Android_android_view_inputmethod_InputConnection__getTextBeforeCursor_21361_ID;
jmethodID Android_android_view_inputmethod_InputConnection__performContextMenuAction_21375_ID;
jmethodID Android_android_view_inputmethod_InputConnection__performEditorAction_21374_ID;
jmethodID Android_android_view_inputmethod_InputConnection__performPrivateCommand_21381_ID;
jmethodID Android_android_view_inputmethod_InputConnection__reportFullscreenMode_21380_ID;
jmethodID Android_android_view_inputmethod_InputConnection__sendKeyEvent_21378_ID;
jmethodID Android_android_view_inputmethod_InputConnection__setComposingRegion_21368_ID;
jmethodID Android_android_view_inputmethod_InputConnection__setComposingText_21367_ID;
jmethodID Android_android_view_inputmethod_InputConnection__setSelection_21373_ID;

Android_android_view_inputmethod_InputConnection__uType* Android_android_view_inputmethod_InputConnection__typeof()
{
    static ::uStaticStrong<Android_android_view_inputmethod_InputConnection__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_inputmethod_InputConnection__uType*)::uAllocClassType(sizeof(Android_android_view_inputmethod_InputConnection__uType), "Android.Fallbacks.Android_android_view_inputmethod_InputConnection", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_getTextBeforeCursor = (::uObject*(*)(void*, int, int))Android_android_view_inputmethod_InputConnection__getTextBeforeCursor;
    type->__interface_2.__fp_getTextAfterCursor = (::uObject*(*)(void*, int, int))Android_android_view_inputmethod_InputConnection__getTextAfterCursor;
    type->__interface_2.__fp_getSelectedText = (::uObject*(*)(void*, int))Android_android_view_inputmethod_InputConnection__getSelectedText;
    type->__interface_2.__fp_getCursorCapsMode = (int(*)(void*, int))Android_android_view_inputmethod_InputConnection__getCursorCapsMode;
    type->__interface_2.__fp_getExtractedText = (::app::Android::android::view::inputmethod::ExtractedText*(*)(void*, ::app::Android::android::view::inputmethod::ExtractedTextRequest*, int))Android_android_view_inputmethod_InputConnection__getExtractedText;
    type->__interface_2.__fp_deleteSurroundingText = (bool(*)(void*, int, int))Android_android_view_inputmethod_InputConnection__deleteSurroundingText;
    type->__interface_2.__fp_setComposingText = (bool(*)(void*, ::uObject*, int))Android_android_view_inputmethod_InputConnection__setComposingText;
    type->__interface_2.__fp_setComposingRegion = (bool(*)(void*, int, int))Android_android_view_inputmethod_InputConnection__setComposingRegion;
    type->__interface_2.__fp_finishComposingText = (bool(*)(void*))Android_android_view_inputmethod_InputConnection__finishComposingText;
    type->__interface_2.__fp_commitText = (bool(*)(void*, ::uObject*, int))Android_android_view_inputmethod_InputConnection__commitText;
    type->__interface_2.__fp_commitCompletion = (bool(*)(void*, ::app::Android::android::view::inputmethod::CompletionInfo*))Android_android_view_inputmethod_InputConnection__commitCompletion;
    type->__interface_2.__fp_commitCorrection = (bool(*)(void*, ::app::Android::android::view::inputmethod::CorrectionInfo*))Android_android_view_inputmethod_InputConnection__commitCorrection;
    type->__interface_2.__fp_setSelection = (bool(*)(void*, int, int))Android_android_view_inputmethod_InputConnection__setSelection;
    type->__interface_2.__fp_performEditorAction = (bool(*)(void*, int))Android_android_view_inputmethod_InputConnection__performEditorAction;
    type->__interface_2.__fp_performContextMenuAction = (bool(*)(void*, int))Android_android_view_inputmethod_InputConnection__performContextMenuAction;
    type->__interface_2.__fp_beginBatchEdit = (bool(*)(void*))Android_android_view_inputmethod_InputConnection__beginBatchEdit;
    type->__interface_2.__fp_endBatchEdit = (bool(*)(void*))Android_android_view_inputmethod_InputConnection__endBatchEdit;
    type->__interface_2.__fp_sendKeyEvent = (bool(*)(void*, ::app::Android::android::view::KeyEvent*))Android_android_view_inputmethod_InputConnection__sendKeyEvent;
    type->__interface_2.__fp_clearMetaKeyStates = (bool(*)(void*, int))Android_android_view_inputmethod_InputConnection__clearMetaKeyStates;
    type->__interface_2.__fp_reportFullscreenMode = (bool(*)(void*, bool))Android_android_view_inputmethod_InputConnection__reportFullscreenMode;
    type->__interface_2.__fp_performPrivateCommand = (bool(*)(void*, ::app::Android::java::lang::String*, ::app::Android::android::os::Bundle*))Android_android_view_inputmethod_InputConnection__performPrivateCommand;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_inputmethod_InputConnection__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_inputmethod_InputConnection__uType, __interface_1),
        ::app::Android::android::view::inputmethod::InputConnection__typeof(), offsetof(Android_android_view_inputmethod_InputConnection__uType, __interface_2));

    type->SetFields(21,
        ::uNewField("beginBatchEdit_21376_ID", &Android_android_view_inputmethod_InputConnection__beginBatchEdit_21376_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("clearMetaKeyStates_21379_ID", &Android_android_view_inputmethod_InputConnection__clearMetaKeyStates_21379_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("commitCompletion_21371_ID", &Android_android_view_inputmethod_InputConnection__commitCompletion_21371_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("commitCorrection_21372_ID", &Android_android_view_inputmethod_InputConnection__commitCorrection_21372_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("commitText_21370_ID", &Android_android_view_inputmethod_InputConnection__commitText_21370_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("deleteSurroundingText_21366_ID", &Android_android_view_inputmethod_InputConnection__deleteSurroundingText_21366_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("endBatchEdit_21377_ID", &Android_android_view_inputmethod_InputConnection__endBatchEdit_21377_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("finishComposingText_21369_ID", &Android_android_view_inputmethod_InputConnection__finishComposingText_21369_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getCursorCapsMode_21364_ID", &Android_android_view_inputmethod_InputConnection__getCursorCapsMode_21364_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getExtractedText_21365_ID", &Android_android_view_inputmethod_InputConnection__getExtractedText_21365_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSelectedText_21363_ID", &Android_android_view_inputmethod_InputConnection__getSelectedText_21363_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getTextAfterCursor_21362_ID", &Android_android_view_inputmethod_InputConnection__getTextAfterCursor_21362_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getTextBeforeCursor_21361_ID", &Android_android_view_inputmethod_InputConnection__getTextBeforeCursor_21361_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performContextMenuAction_21375_ID", &Android_android_view_inputmethod_InputConnection__performContextMenuAction_21375_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performEditorAction_21374_ID", &Android_android_view_inputmethod_InputConnection__performEditorAction_21374_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performPrivateCommand_21381_ID", &Android_android_view_inputmethod_InputConnection__performPrivateCommand_21381_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("reportFullscreenMode_21380_ID", &Android_android_view_inputmethod_InputConnection__reportFullscreenMode_21380_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("sendKeyEvent_21378_ID", &Android_android_view_inputmethod_InputConnection__sendKeyEvent_21378_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setComposingRegion_21368_ID", &Android_android_view_inputmethod_InputConnection__setComposingRegion_21368_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setComposingText_21367_ID", &Android_android_view_inputmethod_InputConnection__setComposingText_21367_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setSelection_21373_ID", &Android_android_view_inputmethod_InputConnection__setSelection_21373_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(42,
        ::uNewFunction("beginBatchEdit", Android_android_view_inputmethod_InputConnection__beginBatchEdit, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("beginBatchEdit_IMPL_21376", Android_android_view_inputmethod_InputConnection__beginBatchEdit_IMPL_21376, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("clearMetaKeyStates", Android_android_view_inputmethod_InputConnection__clearMetaKeyStates, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("clearMetaKeyStates_IMPL_21379", Android_android_view_inputmethod_InputConnection__clearMetaKeyStates_IMPL_21379, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("commitCompletion", Android_android_view_inputmethod_InputConnection__commitCompletion, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::inputmethod::CompletionInfo__typeof()),
        ::uNewFunction("commitCompletion_IMPL_21371", Android_android_view_inputmethod_InputConnection__commitCompletion_IMPL_21371, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("commitCorrection", Android_android_view_inputmethod_InputConnection__commitCorrection, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::inputmethod::CorrectionInfo__typeof()),
        ::uNewFunction("commitCorrection_IMPL_21372", Android_android_view_inputmethod_InputConnection__commitCorrection_IMPL_21372, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("commitText", Android_android_view_inputmethod_InputConnection__commitText, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("commitText_IMPL_21370", Android_android_view_inputmethod_InputConnection__commitText_IMPL_21370, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("deleteSurroundingText", Android_android_view_inputmethod_InputConnection__deleteSurroundingText, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("deleteSurroundingText_IMPL_21366", Android_android_view_inputmethod_InputConnection__deleteSurroundingText_IMPL_21366, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("endBatchEdit", Android_android_view_inputmethod_InputConnection__endBatchEdit, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("endBatchEdit_IMPL_21377", Android_android_view_inputmethod_InputConnection__endBatchEdit_IMPL_21377, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("finishComposingText", Android_android_view_inputmethod_InputConnection__finishComposingText, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("finishComposingText_IMPL_21369", Android_android_view_inputmethod_InputConnection__finishComposingText_IMPL_21369, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getCursorCapsMode", Android_android_view_inputmethod_InputConnection__getCursorCapsMode, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getCursorCapsMode_IMPL_21364", Android_android_view_inputmethod_InputConnection__getCursorCapsMode_IMPL_21364, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getExtractedText", Android_android_view_inputmethod_InputConnection__getExtractedText, 0, false, ::app::Android::android::view::inputmethod::ExtractedText__typeof(), ::app::Android::android::view::inputmethod::ExtractedTextRequest__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getExtractedText_IMPL_21365", Android_android_view_inputmethod_InputConnection__getExtractedText_IMPL_21365, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getSelectedText", Android_android_view_inputmethod_InputConnection__getSelectedText, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getSelectedText_IMPL_21363", Android_android_view_inputmethod_InputConnection__getSelectedText_IMPL_21363, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getTextAfterCursor", Android_android_view_inputmethod_InputConnection__getTextAfterCursor, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getTextAfterCursor_IMPL_21362", Android_android_view_inputmethod_InputConnection__getTextAfterCursor_IMPL_21362, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getTextBeforeCursor", Android_android_view_inputmethod_InputConnection__getTextBeforeCursor, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getTextBeforeCursor_IMPL_21361", Android_android_view_inputmethod_InputConnection__getTextBeforeCursor_IMPL_21361, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performContextMenuAction", Android_android_view_inputmethod_InputConnection__performContextMenuAction, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performContextMenuAction_IMPL_21375", Android_android_view_inputmethod_InputConnection__performContextMenuAction_IMPL_21375, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performEditorAction", Android_android_view_inputmethod_InputConnection__performEditorAction, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performEditorAction_IMPL_21374", Android_android_view_inputmethod_InputConnection__performEditorAction_IMPL_21374, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performPrivateCommand", Android_android_view_inputmethod_InputConnection__performPrivateCommand, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::java::lang::String__typeof(), ::app::Android::android::os::Bundle__typeof()),
        ::uNewFunction("performPrivateCommand_IMPL_21381", Android_android_view_inputmethod_InputConnection__performPrivateCommand_IMPL_21381, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("reportFullscreenMode", Android_android_view_inputmethod_InputConnection__reportFullscreenMode, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("reportFullscreenMode_IMPL_21380", Android_android_view_inputmethod_InputConnection__reportFullscreenMode_IMPL_21380, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("sendKeyEvent", Android_android_view_inputmethod_InputConnection__sendKeyEvent, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::KeyEvent__typeof()),
        ::uNewFunction("sendKeyEvent_IMPL_21378", Android_android_view_inputmethod_InputConnection__sendKeyEvent_IMPL_21378, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setComposingRegion", Android_android_view_inputmethod_InputConnection__setComposingRegion, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setComposingRegion_IMPL_21368", Android_android_view_inputmethod_InputConnection__setComposingRegion_IMPL_21368, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setComposingText", Android_android_view_inputmethod_InputConnection__setComposingText, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setComposingText_IMPL_21367", Android_android_view_inputmethod_InputConnection__setComposingText_IMPL_21367, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setSelection", Android_android_view_inputmethod_InputConnection__setSelection, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setSelection_IMPL_21373", Android_android_view_inputmethod_InputConnection__setSelection_IMPL_21373, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_view_inputmethod_InputConnection__beginBatchEdit(Android_android_view_inputmethod_InputConnection* __this)
{
    return Android_android_view_inputmethod_InputConnection__beginBatchEdit_IMPL_21376(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_inputmethod_InputConnection__beginBatchEdit_IMPL_21376(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__beginBatchEdit_21376_ID,"android/view/inputmethod/InputConnection","beginBatchEdit","()Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.beginBatchEdit could not be cached",98);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__beginBatchEdit_21376_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__clearMetaKeyStates(Android_android_view_inputmethod_InputConnection* __this, int arg0)
{
    return Android_android_view_inputmethod_InputConnection__clearMetaKeyStates_IMPL_21379(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

bool Android_android_view_inputmethod_InputConnection__clearMetaKeyStates_IMPL_21379(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__clearMetaKeyStates_21379_ID,"android/view/inputmethod/InputConnection","clearMetaKeyStates","(I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.clearMetaKeyStates could not be cached",102);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__clearMetaKeyStates_21379_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__commitCompletion(Android_android_view_inputmethod_InputConnection* __this, ::app::Android::android::view::inputmethod::CompletionInfo* arg0)
{
    return Android_android_view_inputmethod_InputConnection__commitCompletion_IMPL_21371(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_inputmethod_InputConnection__commitCompletion_IMPL_21371(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__commitCompletion_21371_ID,"android/view/inputmethod/InputConnection","commitCompletion","(Landroid/view/inputmethod/CompletionInfo;)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.commitCompletion could not be cached",100);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__commitCompletion_21371_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__commitCorrection(Android_android_view_inputmethod_InputConnection* __this, ::app::Android::android::view::inputmethod::CorrectionInfo* arg0)
{
    return Android_android_view_inputmethod_InputConnection__commitCorrection_IMPL_21372(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_inputmethod_InputConnection__commitCorrection_IMPL_21372(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__commitCorrection_21372_ID,"android/view/inputmethod/InputConnection","commitCorrection","(Landroid/view/inputmethod/CorrectionInfo;)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.commitCorrection could not be cached",100);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__commitCorrection_21372_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__commitText(Android_android_view_inputmethod_InputConnection* __this, ::uObject* arg0, int arg1)
{
    return Android_android_view_inputmethod_InputConnection__commitText_IMPL_21370(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

bool Android_android_view_inputmethod_InputConnection__commitText_IMPL_21370(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__commitText_21370_ID,"android/view/inputmethod/InputConnection","commitText","(Ljava/lang/CharSequence;I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.commitText could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__commitText_21370_ID, _obArg2, ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__deleteSurroundingText(Android_android_view_inputmethod_InputConnection* __this, int arg0, int arg1)
{
    return Android_android_view_inputmethod_InputConnection__deleteSurroundingText_IMPL_21366(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

bool Android_android_view_inputmethod_InputConnection__deleteSurroundingText_IMPL_21366(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__deleteSurroundingText_21366_ID,"android/view/inputmethod/InputConnection","deleteSurroundingText","(II)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.deleteSurroundingText could not be cached",105);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__deleteSurroundingText_21366_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__endBatchEdit(Android_android_view_inputmethod_InputConnection* __this)
{
    return Android_android_view_inputmethod_InputConnection__endBatchEdit_IMPL_21377(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_inputmethod_InputConnection__endBatchEdit_IMPL_21377(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__endBatchEdit_21377_ID,"android/view/inputmethod/InputConnection","endBatchEdit","()Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.endBatchEdit could not be cached",96);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__endBatchEdit_21377_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__finishComposingText(Android_android_view_inputmethod_InputConnection* __this)
{
    return Android_android_view_inputmethod_InputConnection__finishComposingText_IMPL_21369(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_inputmethod_InputConnection__finishComposingText_IMPL_21369(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__finishComposingText_21369_ID,"android/view/inputmethod/InputConnection","finishComposingText","()Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.finishComposingText could not be cached",103);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__finishComposingText_21369_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_inputmethod_InputConnection__getCursorCapsMode(Android_android_view_inputmethod_InputConnection* __this, int arg0)
{
    return Android_android_view_inputmethod_InputConnection__getCursorCapsMode_IMPL_21364(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

int Android_android_view_inputmethod_InputConnection__getCursorCapsMode_IMPL_21364(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__getCursorCapsMode_21364_ID,"android/view/inputmethod/InputConnection","getCursorCapsMode","(I)I",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.getCursorCapsMode could not be cached",101);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__getCursorCapsMode_21364_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::inputmethod::ExtractedText* Android_android_view_inputmethod_InputConnection__getExtractedText(Android_android_view_inputmethod_InputConnection* __this, ::app::Android::android::view::inputmethod::ExtractedTextRequest* arg0, int arg1)
{
    return ::uCast< ::app::Android::android::view::inputmethod::ExtractedText*>(Android_android_view_inputmethod_InputConnection__getExtractedText_IMPL_21365(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1), ::app::Android::android::view::inputmethod::ExtractedText__typeof());
}

::uObject* Android_android_view_inputmethod_InputConnection__getExtractedText_IMPL_21365(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__getExtractedText_21365_ID,"android/view/inputmethod/InputConnection","getExtractedText","(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.getExtractedText could not be cached",100);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__getExtractedText_21365_ID, _obArg2, ((jint)arg3_)),result,::app::Android::android::view::inputmethod::ExtractedText__typeof(),::app::Android::android::view::inputmethod::ExtractedText*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_inputmethod_InputConnection__getSelectedText(Android_android_view_inputmethod_InputConnection* __this, int arg0)
{
    return (::uObject*)Android_android_view_inputmethod_InputConnection__getSelectedText_IMPL_21363(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_inputmethod_InputConnection__getSelectedText_IMPL_21363(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__getSelectedText_21363_ID,"android/view/inputmethod/InputConnection","getSelectedText","(I)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.getSelectedText could not be cached",99);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__getSelectedText_21363_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_inputmethod_InputConnection__getTextAfterCursor(Android_android_view_inputmethod_InputConnection* __this, int arg0, int arg1)
{
    return (::uObject*)Android_android_view_inputmethod_InputConnection__getTextAfterCursor_IMPL_21362(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_view_inputmethod_InputConnection__getTextAfterCursor_IMPL_21362(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__getTextAfterCursor_21362_ID,"android/view/inputmethod/InputConnection","getTextAfterCursor","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.getTextAfterCursor could not be cached",102);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__getTextAfterCursor_21362_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_inputmethod_InputConnection__getTextBeforeCursor(Android_android_view_inputmethod_InputConnection* __this, int arg0, int arg1)
{
    return (::uObject*)Android_android_view_inputmethod_InputConnection__getTextBeforeCursor_IMPL_21361(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_view_inputmethod_InputConnection__getTextBeforeCursor_IMPL_21361(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__getTextBeforeCursor_21361_ID,"android/view/inputmethod/InputConnection","getTextBeforeCursor","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.getTextBeforeCursor could not be cached",103);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__getTextBeforeCursor_21361_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__performContextMenuAction(Android_android_view_inputmethod_InputConnection* __this, int arg0)
{
    return Android_android_view_inputmethod_InputConnection__performContextMenuAction_IMPL_21375(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

bool Android_android_view_inputmethod_InputConnection__performContextMenuAction_IMPL_21375(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__performContextMenuAction_21375_ID,"android/view/inputmethod/InputConnection","performContextMenuAction","(I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.performContextMenuAction could not be cached",108);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__performContextMenuAction_21375_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__performEditorAction(Android_android_view_inputmethod_InputConnection* __this, int arg0)
{
    return Android_android_view_inputmethod_InputConnection__performEditorAction_IMPL_21374(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

bool Android_android_view_inputmethod_InputConnection__performEditorAction_IMPL_21374(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__performEditorAction_21374_ID,"android/view/inputmethod/InputConnection","performEditorAction","(I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.performEditorAction could not be cached",103);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__performEditorAction_21374_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__performPrivateCommand(Android_android_view_inputmethod_InputConnection* __this, ::app::Android::java::lang::String* arg0, ::app::Android::android::os::Bundle* arg1)
{
    return Android_android_view_inputmethod_InputConnection__performPrivateCommand_IMPL_21381(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

bool Android_android_view_inputmethod_InputConnection__performPrivateCommand_IMPL_21381(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__performPrivateCommand_21381_ID,"android/view/inputmethod/InputConnection","performPrivateCommand","(Ljava/lang/String;Landroid/os/Bundle;)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.performPrivateCommand could not be cached",105);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__performPrivateCommand_21381_ID, _obArg2, _obArg3));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__reportFullscreenMode(Android_android_view_inputmethod_InputConnection* __this, bool arg0)
{
    return Android_android_view_inputmethod_InputConnection__reportFullscreenMode_IMPL_21380(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

bool Android_android_view_inputmethod_InputConnection__reportFullscreenMode_IMPL_21380(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__reportFullscreenMode_21380_ID,"android/view/inputmethod/InputConnection","reportFullscreenMode","(Z)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.reportFullscreenMode could not be cached",104);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__reportFullscreenMode_21380_ID, ((jboolean)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__sendKeyEvent(Android_android_view_inputmethod_InputConnection* __this, ::app::Android::android::view::KeyEvent* arg0)
{
    return Android_android_view_inputmethod_InputConnection__sendKeyEvent_IMPL_21378(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_inputmethod_InputConnection__sendKeyEvent_IMPL_21378(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__sendKeyEvent_21378_ID,"android/view/inputmethod/InputConnection","sendKeyEvent","(Landroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.sendKeyEvent could not be cached",96);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__sendKeyEvent_21378_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__setComposingRegion(Android_android_view_inputmethod_InputConnection* __this, int arg0, int arg1)
{
    return Android_android_view_inputmethod_InputConnection__setComposingRegion_IMPL_21368(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

bool Android_android_view_inputmethod_InputConnection__setComposingRegion_IMPL_21368(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__setComposingRegion_21368_ID,"android/view/inputmethod/InputConnection","setComposingRegion","(II)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.setComposingRegion could not be cached",102);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__setComposingRegion_21368_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__setComposingText(Android_android_view_inputmethod_InputConnection* __this, ::uObject* arg0, int arg1)
{
    return Android_android_view_inputmethod_InputConnection__setComposingText_IMPL_21367(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

bool Android_android_view_inputmethod_InputConnection__setComposingText_IMPL_21367(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__setComposingText_21367_ID,"android/view/inputmethod/InputConnection","setComposingText","(Ljava/lang/CharSequence;I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.setComposingText could not be cached",100);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__setComposingText_21367_ID, _obArg2, ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_inputmethod_InputConnection__setSelection(Android_android_view_inputmethod_InputConnection* __this, int arg0, int arg1)
{
    return Android_android_view_inputmethod_InputConnection__setSelection_IMPL_21373(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

bool Android_android_view_inputmethod_InputConnection__setSelection_IMPL_21373(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__setSelection_21373_ID,"android/view/inputmethod/InputConnection","setSelection","(II)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputConnection.setSelection could not be cached",96);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__setSelection_21373_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_Menu__add_22256_ID;
jmethodID Android_android_view_Menu__add_22257_ID;
jmethodID Android_android_view_Menu__add_22258_ID;
jmethodID Android_android_view_Menu__add_22259_ID;
jmethodID Android_android_view_Menu__addIntentOptions_22264_ID;
jmethodID Android_android_view_Menu__addSubMenu_22260_ID;
jmethodID Android_android_view_Menu__addSubMenu_22261_ID;
jmethodID Android_android_view_Menu__addSubMenu_22262_ID;
jmethodID Android_android_view_Menu__addSubMenu_22263_ID;
jmethodID Android_android_view_Menu__clear_22267_ID;
jmethodID Android_android_view_Menu__close_22275_ID;
jmethodID Android_android_view_Menu__findItem_22272_ID;
jmethodID Android_android_view_Menu__getItem_22274_ID;
jmethodID Android_android_view_Menu__hasVisibleItems_22271_ID;
jmethodID Android_android_view_Menu__isShortcutKey_22277_ID;
jmethodID Android_android_view_Menu__performIdentifierAction_22278_ID;
jmethodID Android_android_view_Menu__performShortcut_22276_ID;
jmethodID Android_android_view_Menu__removeGroup_22266_ID;
jmethodID Android_android_view_Menu__removeItem_22265_ID;
jmethodID Android_android_view_Menu__setGroupCheckable_22268_ID;
jmethodID Android_android_view_Menu__setGroupEnabled_22270_ID;
jmethodID Android_android_view_Menu__setGroupVisible_22269_ID;
jmethodID Android_android_view_Menu__setQwertyMode_22279_ID;
jmethodID Android_android_view_Menu__size_22273_ID;

Android_android_view_Menu__uType* Android_android_view_Menu__typeof()
{
    static ::uStaticStrong<Android_android_view_Menu__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_Menu__uType*)::uAllocClassType(sizeof(Android_android_view_Menu__uType), "Android.Fallbacks.Android_android_view_Menu", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_add = (::uObject*(*)(void*, ::uObject*))Android_android_view_Menu__add;
    type->__interface_2.__fp_add_1 = (::uObject*(*)(void*, int))Android_android_view_Menu__add_1;
    type->__interface_2.__fp_add_2 = (::uObject*(*)(void*, int, int, int, ::uObject*))Android_android_view_Menu__add_2;
    type->__interface_2.__fp_add_3 = (::uObject*(*)(void*, int, int, int, int))Android_android_view_Menu__add_3;
    type->__interface_2.__fp_addSubMenu = (::uObject*(*)(void*, ::uObject*))Android_android_view_Menu__addSubMenu;
    type->__interface_2.__fp_addSubMenu_1 = (::uObject*(*)(void*, int))Android_android_view_Menu__addSubMenu_1;
    type->__interface_2.__fp_addSubMenu_2 = (::uObject*(*)(void*, int, int, int, ::uObject*))Android_android_view_Menu__addSubMenu_2;
    type->__interface_2.__fp_addSubMenu_3 = (::uObject*(*)(void*, int, int, int, int))Android_android_view_Menu__addSubMenu_3;
    type->__interface_2.__fp_addIntentOptions = (int(*)(void*, int, int, int, ::app::Android::android::content::ComponentName*, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent*, ::app::Android::android::content::Intent*, int, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem*))Android_android_view_Menu__addIntentOptions;
    type->__interface_2.__fp_removeItem = (void(*)(void*, int))Android_android_view_Menu__removeItem;
    type->__interface_2.__fp_removeGroup = (void(*)(void*, int))Android_android_view_Menu__removeGroup;
    type->__interface_2.__fp_clear = (void(*)(void*))Android_android_view_Menu__clear;
    type->__interface_2.__fp_setGroupCheckable = (void(*)(void*, int, bool, bool))Android_android_view_Menu__setGroupCheckable;
    type->__interface_2.__fp_setGroupVisible = (void(*)(void*, int, bool))Android_android_view_Menu__setGroupVisible;
    type->__interface_2.__fp_setGroupEnabled = (void(*)(void*, int, bool))Android_android_view_Menu__setGroupEnabled;
    type->__interface_2.__fp_hasVisibleItems = (bool(*)(void*))Android_android_view_Menu__hasVisibleItems;
    type->__interface_2.__fp_findItem = (::uObject*(*)(void*, int))Android_android_view_Menu__findItem;
    type->__interface_2.__fp_size = (int(*)(void*))Android_android_view_Menu__size;
    type->__interface_2.__fp_getItem = (::uObject*(*)(void*, int))Android_android_view_Menu__getItem;
    type->__interface_2.__fp_close = (void(*)(void*))Android_android_view_Menu__close;
    type->__interface_2.__fp_performShortcut = (bool(*)(void*, int, ::app::Android::android::view::KeyEvent*, int))Android_android_view_Menu__performShortcut;
    type->__interface_2.__fp_isShortcutKey = (bool(*)(void*, int, ::app::Android::android::view::KeyEvent*))Android_android_view_Menu__isShortcutKey;
    type->__interface_2.__fp_performIdentifierAction = (bool(*)(void*, int, int))Android_android_view_Menu__performIdentifierAction;
    type->__interface_2.__fp_setQwertyMode = (void(*)(void*, bool))Android_android_view_Menu__setQwertyMode;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_Menu__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_Menu__uType, __interface_1),
        ::app::Android::android::view::Menu__typeof(), offsetof(Android_android_view_Menu__uType, __interface_2));

    type->SetFields(24,
        ::uNewField("add_22256_ID", &Android_android_view_Menu__add_22256_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("add_22257_ID", &Android_android_view_Menu__add_22257_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("add_22258_ID", &Android_android_view_Menu__add_22258_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("add_22259_ID", &Android_android_view_Menu__add_22259_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addIntentOptions_22264_ID", &Android_android_view_Menu__addIntentOptions_22264_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addSubMenu_22260_ID", &Android_android_view_Menu__addSubMenu_22260_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addSubMenu_22261_ID", &Android_android_view_Menu__addSubMenu_22261_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addSubMenu_22262_ID", &Android_android_view_Menu__addSubMenu_22262_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addSubMenu_22263_ID", &Android_android_view_Menu__addSubMenu_22263_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("clear_22267_ID", &Android_android_view_Menu__clear_22267_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("close_22275_ID", &Android_android_view_Menu__close_22275_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("findItem_22272_ID", &Android_android_view_Menu__findItem_22272_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getItem_22274_ID", &Android_android_view_Menu__getItem_22274_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hasVisibleItems_22271_ID", &Android_android_view_Menu__hasVisibleItems_22271_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isShortcutKey_22277_ID", &Android_android_view_Menu__isShortcutKey_22277_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performIdentifierAction_22278_ID", &Android_android_view_Menu__performIdentifierAction_22278_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performShortcut_22276_ID", &Android_android_view_Menu__performShortcut_22276_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("removeGroup_22266_ID", &Android_android_view_Menu__removeGroup_22266_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("removeItem_22265_ID", &Android_android_view_Menu__removeItem_22265_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setGroupCheckable_22268_ID", &Android_android_view_Menu__setGroupCheckable_22268_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setGroupEnabled_22270_ID", &Android_android_view_Menu__setGroupEnabled_22270_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setGroupVisible_22269_ID", &Android_android_view_Menu__setGroupVisible_22269_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setQwertyMode_22279_ID", &Android_android_view_Menu__setQwertyMode_22279_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("size_22273_ID", &Android_android_view_Menu__size_22273_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(48,
        ::uNewFunction("add", Android_android_view_Menu__add, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("add", Android_android_view_Menu__add_1, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("add", Android_android_view_Menu__add_2, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("add", Android_android_view_Menu__add_3, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("add_IMPL_22256", Android_android_view_Menu__add_IMPL_22256, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("add_IMPL_22257", Android_android_view_Menu__add_IMPL_22257, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("add_IMPL_22258", Android_android_view_Menu__add_IMPL_22258, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("add_IMPL_22259", Android_android_view_Menu__add_IMPL_22259, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("addIntentOptions", Android_android_view_Menu__addIntentOptions, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::content::ComponentName__typeof(), ::app::Android::Runtime::ObjectArray__Android_android_content_Intent__typeof(), ::app::Android::android::content::Intent__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem__typeof()),
        ::uNewFunction("addIntentOptions_IMPL_22264", Android_android_view_Menu__addIntentOptions_IMPL_22264, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("addSubMenu", Android_android_view_Menu__addSubMenu, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("addSubMenu", Android_android_view_Menu__addSubMenu_1, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("addSubMenu", Android_android_view_Menu__addSubMenu_2, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("addSubMenu", Android_android_view_Menu__addSubMenu_3, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("addSubMenu_IMPL_22260", Android_android_view_Menu__addSubMenu_IMPL_22260, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("addSubMenu_IMPL_22261", Android_android_view_Menu__addSubMenu_IMPL_22261, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("addSubMenu_IMPL_22262", Android_android_view_Menu__addSubMenu_IMPL_22262, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("addSubMenu_IMPL_22263", Android_android_view_Menu__addSubMenu_IMPL_22263, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("clear", Android_android_view_Menu__clear, 0, false),
        ::uNewFunctionVoid("clear_IMPL_22267", Android_android_view_Menu__clear_IMPL_22267, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("close", Android_android_view_Menu__close, 0, false),
        ::uNewFunctionVoid("close_IMPL_22275", Android_android_view_Menu__close_IMPL_22275, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("findItem", Android_android_view_Menu__findItem, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("findItem_IMPL_22272", Android_android_view_Menu__findItem_IMPL_22272, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getItem", Android_android_view_Menu__getItem, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getItem_IMPL_22274", Android_android_view_Menu__getItem_IMPL_22274, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("hasVisibleItems", Android_android_view_Menu__hasVisibleItems, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("hasVisibleItems_IMPL_22271", Android_android_view_Menu__hasVisibleItems_IMPL_22271, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isShortcutKey", Android_android_view_Menu__isShortcutKey, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::view::KeyEvent__typeof()),
        ::uNewFunction("isShortcutKey_IMPL_22277", Android_android_view_Menu__isShortcutKey_IMPL_22277, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("performIdentifierAction", Android_android_view_Menu__performIdentifierAction, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performIdentifierAction_IMPL_22278", Android_android_view_Menu__performIdentifierAction_IMPL_22278, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performShortcut", Android_android_view_Menu__performShortcut, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::view::KeyEvent__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performShortcut_IMPL_22276", Android_android_view_Menu__performShortcut_IMPL_22276, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("removeGroup", Android_android_view_Menu__removeGroup, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("removeGroup_IMPL_22266", Android_android_view_Menu__removeGroup_IMPL_22266, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("removeItem", Android_android_view_Menu__removeItem, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("removeItem_IMPL_22265", Android_android_view_Menu__removeItem_IMPL_22265, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setGroupCheckable", Android_android_view_Menu__setGroupCheckable, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupCheckable_IMPL_22268", Android_android_view_Menu__setGroupCheckable_IMPL_22268, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupEnabled", Android_android_view_Menu__setGroupEnabled, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupEnabled_IMPL_22270", Android_android_view_Menu__setGroupEnabled_IMPL_22270, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupVisible", Android_android_view_Menu__setGroupVisible, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupVisible_IMPL_22269", Android_android_view_Menu__setGroupVisible_IMPL_22269, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setQwertyMode", Android_android_view_Menu__setQwertyMode, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setQwertyMode_IMPL_22279", Android_android_view_Menu__setQwertyMode_IMPL_22279, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("size", Android_android_view_Menu__size, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("size_IMPL_22273", Android_android_view_Menu__size_IMPL_22273, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Android_android_view_Menu__add(Android_android_view_Menu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_Menu__add_IMPL_22256(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_Menu__add_1(Android_android_view_Menu* __this, int arg0)
{
    return (::uObject*)Android_android_view_Menu__add_IMPL_22257(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_Menu__add_2(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, ::uObject* arg3)
{
    return (::uObject*)Android_android_view_Menu__add_IMPL_22258(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3);
}

::uObject* Android_android_view_Menu__add_3(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, int arg3)
{
    return (::uObject*)Android_android_view_Menu__add_IMPL_22259(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

::uObject* Android_android_view_Menu__add_IMPL_22256(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__add_22256_ID,"android/view/Menu","add","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__add_22256_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__add_IMPL_22257(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__add_22257_ID,"android/view/Menu","add","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__add_22257_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__add_IMPL_22258(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__add_22258_ID,"android/view/Menu","add","(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__add_22258_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__add_IMPL_22259(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__add_22259_ID,"android/view/Menu","add","(IIII)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__add_22259_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_Menu__addIntentOptions(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, ::app::Android::android::content::ComponentName* arg3, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent* arg4, ::app::Android::android::content::Intent* arg5, int arg6, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem* arg7)
{
    return Android_android_view_Menu__addIntentOptions_IMPL_22264(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3, (::uObject*)arg4, (::uObject*)arg5, arg6, (::uObject*)arg7);
}

int Android_android_view_Menu__addIntentOptions_IMPL_22264(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_, ::uObject* arg6_, ::uObject* arg7_, int arg8_, ::uObject* arg9_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__addIntentOptions_22264_ID,"android/view/Menu","addIntentOptions","(IIILandroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I[Landroid/view/MenuItem;)I",GetMethodID,"Id for fallback method android.view.Menu.addIntentOptions could not be cached",77);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    jobject _obArg6 = ((!arg6_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg6_));
    jobject _obArg7 = ((!arg7_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg7_));
    jobject _obArg9 = ((!arg9_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg9_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__addIntentOptions_22264_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5, _obArg6, _obArg7, ((jint)arg8_), _obArg9));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__addSubMenu(Android_android_view_Menu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_Menu__addSubMenu_IMPL_22260(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_Menu__addSubMenu_1(Android_android_view_Menu* __this, int arg0)
{
    return (::uObject*)Android_android_view_Menu__addSubMenu_IMPL_22261(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_Menu__addSubMenu_2(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, ::uObject* arg3)
{
    return (::uObject*)Android_android_view_Menu__addSubMenu_IMPL_22262(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3);
}

::uObject* Android_android_view_Menu__addSubMenu_3(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, int arg3)
{
    return (::uObject*)Android_android_view_Menu__addSubMenu_IMPL_22263(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

::uObject* Android_android_view_Menu__addSubMenu_IMPL_22260(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22260_ID,"android/view/Menu","addSubMenu","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22260_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__addSubMenu_IMPL_22261(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22261_ID,"android/view/Menu","addSubMenu","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22261_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__addSubMenu_IMPL_22262(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22262_ID,"android/view/Menu","addSubMenu","(IIILjava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22262_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__addSubMenu_IMPL_22263(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22263_ID,"android/view/Menu","addSubMenu","(IIII)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22263_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_Menu__clear(Android_android_view_Menu* __this)
{
    Android_android_view_Menu__clear_IMPL_22267(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_Menu__clear_IMPL_22267(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__clear_22267_ID,"android/view/Menu","clear","()V",GetMethodID,"Id for fallback method android.view.Menu.clear could not be cached",66);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__clear_22267_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_Menu__close(Android_android_view_Menu* __this)
{
    Android_android_view_Menu__close_IMPL_22275(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_Menu__close_IMPL_22275(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__close_22275_ID,"android/view/Menu","close","()V",GetMethodID,"Id for fallback method android.view.Menu.close could not be cached",66);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__close_22275_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* Android_android_view_Menu__findItem(Android_android_view_Menu* __this, int arg0)
{
    return (::uObject*)Android_android_view_Menu__findItem_IMPL_22272(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_Menu__findItem_IMPL_22272(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__findItem_22272_ID,"android/view/Menu","findItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.findItem could not be cached",69);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__findItem_22272_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__getItem(Android_android_view_Menu* __this, int arg0)
{
    return (::uObject*)Android_android_view_Menu__getItem_IMPL_22274(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_Menu__getItem_IMPL_22274(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__getItem_22274_ID,"android/view/Menu","getItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.getItem could not be cached",68);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__getItem_22274_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_Menu__hasVisibleItems(Android_android_view_Menu* __this)
{
    return Android_android_view_Menu__hasVisibleItems_IMPL_22271(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_Menu__hasVisibleItems_IMPL_22271(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__hasVisibleItems_22271_ID,"android/view/Menu","hasVisibleItems","()Z",GetMethodID,"Id for fallback method android.view.Menu.hasVisibleItems could not be cached",76);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__hasVisibleItems_22271_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_Menu__isShortcutKey(Android_android_view_Menu* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1)
{
    return Android_android_view_Menu__isShortcutKey_IMPL_22277(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool Android_android_view_Menu__isShortcutKey_IMPL_22277(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__isShortcutKey_22277_ID,"android/view/Menu","isShortcutKey","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.view.Menu.isShortcutKey could not be cached",74);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__isShortcutKey_22277_ID, ((jint)arg2_), _obArg3));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_Menu__performIdentifierAction(Android_android_view_Menu* __this, int arg0, int arg1)
{
    return Android_android_view_Menu__performIdentifierAction_IMPL_22278(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

bool Android_android_view_Menu__performIdentifierAction_IMPL_22278(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__performIdentifierAction_22278_ID,"android/view/Menu","performIdentifierAction","(II)Z",GetMethodID,"Id for fallback method android.view.Menu.performIdentifierAction could not be cached",84);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__performIdentifierAction_22278_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_Menu__performShortcut(Android_android_view_Menu* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1, int arg2)
{
    return Android_android_view_Menu__performShortcut_IMPL_22276(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1, arg2);
}

bool Android_android_view_Menu__performShortcut_IMPL_22276(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__performShortcut_22276_ID,"android/view/Menu","performShortcut","(ILandroid/view/KeyEvent;I)Z",GetMethodID,"Id for fallback method android.view.Menu.performShortcut could not be cached",76);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__performShortcut_22276_ID, ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_Menu__removeGroup(Android_android_view_Menu* __this, int arg0)
{
    Android_android_view_Menu__removeGroup_IMPL_22266(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_Menu__removeGroup_IMPL_22266(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__removeGroup_22266_ID,"android/view/Menu","removeGroup","(I)V",GetMethodID,"Id for fallback method android.view.Menu.removeGroup could not be cached",72);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__removeGroup_22266_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_Menu__removeItem(Android_android_view_Menu* __this, int arg0)
{
    Android_android_view_Menu__removeItem_IMPL_22265(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_Menu__removeItem_IMPL_22265(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__removeItem_22265_ID,"android/view/Menu","removeItem","(I)V",GetMethodID,"Id for fallback method android.view.Menu.removeItem could not be cached",71);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__removeItem_22265_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_Menu__setGroupCheckable(Android_android_view_Menu* __this, int arg0, bool arg1, bool arg2)
{
    Android_android_view_Menu__setGroupCheckable_IMPL_22268(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2);
}

void Android_android_view_Menu__setGroupCheckable_IMPL_22268(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__setGroupCheckable_22268_ID,"android/view/Menu","setGroupCheckable","(IZZ)V",GetMethodID,"Id for fallback method android.view.Menu.setGroupCheckable could not be cached",78);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__setGroupCheckable_22268_ID, ((jint)arg2_), ((jboolean)arg3_), ((jboolean)arg4_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_Menu__setGroupEnabled(Android_android_view_Menu* __this, int arg0, bool arg1)
{
    Android_android_view_Menu__setGroupEnabled_IMPL_22270(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Android_android_view_Menu__setGroupEnabled_IMPL_22270(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__setGroupEnabled_22270_ID,"android/view/Menu","setGroupEnabled","(IZ)V",GetMethodID,"Id for fallback method android.view.Menu.setGroupEnabled could not be cached",76);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__setGroupEnabled_22270_ID, ((jint)arg2_), ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_Menu__setGroupVisible(Android_android_view_Menu* __this, int arg0, bool arg1)
{
    Android_android_view_Menu__setGroupVisible_IMPL_22269(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Android_android_view_Menu__setGroupVisible_IMPL_22269(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__setGroupVisible_22269_ID,"android/view/Menu","setGroupVisible","(IZ)V",GetMethodID,"Id for fallback method android.view.Menu.setGroupVisible could not be cached",76);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__setGroupVisible_22269_ID, ((jint)arg2_), ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_Menu__setQwertyMode(Android_android_view_Menu* __this, bool arg0)
{
    Android_android_view_Menu__setQwertyMode_IMPL_22279(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_Menu__setQwertyMode_IMPL_22279(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__setQwertyMode_22279_ID,"android/view/Menu","setQwertyMode","(Z)V",GetMethodID,"Id for fallback method android.view.Menu.setQwertyMode could not be cached",74);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__setQwertyMode_22279_ID, ((jboolean)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int Android_android_view_Menu__size(Android_android_view_Menu* __this)
{
    return Android_android_view_Menu__size_IMPL_22273(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_Menu__size_IMPL_22273(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__size_22273_ID,"android/view/Menu","size","()I",GetMethodID,"Id for fallback method android.view.Menu.size could not be cached",65);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__size_22273_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_MenuItem__collapseActionView_22332_ID;
jmethodID Android_android_view_MenuItem__expandActionView_22331_ID;
jmethodID Android_android_view_MenuItem__getActionProvider_22330_ID;
jmethodID Android_android_view_MenuItem__getActionView_22328_ID;
jmethodID Android_android_view_MenuItem__getAlphabeticShortcut_22311_ID;
jmethodID Android_android_view_MenuItem__getGroupId_22295_ID;
jmethodID Android_android_view_MenuItem__getIcon_22304_ID;
jmethodID Android_android_view_MenuItem__getIntent_22306_ID;
jmethodID Android_android_view_MenuItem__getItemId_22294_ID;
jmethodID Android_android_view_MenuItem__getMenuInfo_22323_ID;
jmethodID Android_android_view_MenuItem__getNumericShortcut_22309_ID;
jmethodID Android_android_view_MenuItem__getOrder_22296_ID;
jmethodID Android_android_view_MenuItem__getSubMenu_22321_ID;
jmethodID Android_android_view_MenuItem__getTitle_22299_ID;
jmethodID Android_android_view_MenuItem__getTitleCondensed_22301_ID;
jmethodID Android_android_view_MenuItem__hasSubMenu_22320_ID;
jmethodID Android_android_view_MenuItem__isActionViewExpanded_22333_ID;
jmethodID Android_android_view_MenuItem__isCheckable_22313_ID;
jmethodID Android_android_view_MenuItem__isChecked_22315_ID;
jmethodID Android_android_view_MenuItem__isEnabled_22319_ID;
jmethodID Android_android_view_MenuItem__isVisible_22317_ID;
jmethodID Android_android_view_MenuItem__setActionProvider_22329_ID;
jmethodID Android_android_view_MenuItem__setActionView_22326_ID;
jmethodID Android_android_view_MenuItem__setActionView_22327_ID;
jmethodID Android_android_view_MenuItem__setAlphabeticShortcut_22310_ID;
jmethodID Android_android_view_MenuItem__setCheckable_22312_ID;
jmethodID Android_android_view_MenuItem__setChecked_22314_ID;
jmethodID Android_android_view_MenuItem__setEnabled_22318_ID;
jmethodID Android_android_view_MenuItem__setIcon_22302_ID;
jmethodID Android_android_view_MenuItem__setIcon_22303_ID;
jmethodID Android_android_view_MenuItem__setIntent_22305_ID;
jmethodID Android_android_view_MenuItem__setNumericShortcut_22308_ID;
jmethodID Android_android_view_MenuItem__setOnActionExpandListener_22334_ID;
jmethodID Android_android_view_MenuItem__setOnMenuItemClickListener_22322_ID;
jmethodID Android_android_view_MenuItem__setShortcut_22307_ID;
jmethodID Android_android_view_MenuItem__setShowAsAction_22324_ID;
jmethodID Android_android_view_MenuItem__setShowAsActionFlags_22325_ID;
jmethodID Android_android_view_MenuItem__setTitle_22297_ID;
jmethodID Android_android_view_MenuItem__setTitle_22298_ID;
jmethodID Android_android_view_MenuItem__setTitleCondensed_22300_ID;
jmethodID Android_android_view_MenuItem__setVisible_22316_ID;

Android_android_view_MenuItem__uType* Android_android_view_MenuItem__typeof()
{
    static ::uStaticStrong<Android_android_view_MenuItem__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_MenuItem__uType*)::uAllocClassType(sizeof(Android_android_view_MenuItem__uType), "Android.Fallbacks.Android_android_view_MenuItem", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_getItemId = (int(*)(void*))Android_android_view_MenuItem__getItemId;
    type->__interface_2.__fp_getGroupId = (int(*)(void*))Android_android_view_MenuItem__getGroupId;
    type->__interface_2.__fp_getOrder = (int(*)(void*))Android_android_view_MenuItem__getOrder;
    type->__interface_2.__fp_setTitle = (::uObject*(*)(void*, ::uObject*))Android_android_view_MenuItem__setTitle;
    type->__interface_2.__fp_setTitle_1 = (::uObject*(*)(void*, int))Android_android_view_MenuItem__setTitle_1;
    type->__interface_2.__fp_getTitle = (::uObject*(*)(void*))Android_android_view_MenuItem__getTitle;
    type->__interface_2.__fp_setTitleCondensed = (::uObject*(*)(void*, ::uObject*))Android_android_view_MenuItem__setTitleCondensed;
    type->__interface_2.__fp_getTitleCondensed = (::uObject*(*)(void*))Android_android_view_MenuItem__getTitleCondensed;
    type->__interface_2.__fp_setIcon = (::uObject*(*)(void*, ::app::Android::android::graphics::drawable::Drawable*))Android_android_view_MenuItem__setIcon;
    type->__interface_2.__fp_setIcon_1 = (::uObject*(*)(void*, int))Android_android_view_MenuItem__setIcon_1;
    type->__interface_2.__fp_getIcon = (::app::Android::android::graphics::drawable::Drawable*(*)(void*))Android_android_view_MenuItem__getIcon;
    type->__interface_2.__fp_setIntent = (::uObject*(*)(void*, ::app::Android::android::content::Intent*))Android_android_view_MenuItem__setIntent;
    type->__interface_2.__fp_getIntent = (::app::Android::android::content::Intent*(*)(void*))Android_android_view_MenuItem__getIntent;
    type->__interface_2.__fp_setShortcut = (::uObject*(*)(void*, ::uChar, ::uChar))Android_android_view_MenuItem__setShortcut;
    type->__interface_2.__fp_setNumericShortcut = (::uObject*(*)(void*, ::uChar))Android_android_view_MenuItem__setNumericShortcut;
    type->__interface_2.__fp_getNumericShortcut = (::uChar(*)(void*))Android_android_view_MenuItem__getNumericShortcut;
    type->__interface_2.__fp_setAlphabeticShortcut = (::uObject*(*)(void*, ::uChar))Android_android_view_MenuItem__setAlphabeticShortcut;
    type->__interface_2.__fp_getAlphabeticShortcut = (::uChar(*)(void*))Android_android_view_MenuItem__getAlphabeticShortcut;
    type->__interface_2.__fp_setCheckable = (::uObject*(*)(void*, bool))Android_android_view_MenuItem__setCheckable;
    type->__interface_2.__fp_isCheckable = (bool(*)(void*))Android_android_view_MenuItem__isCheckable;
    type->__interface_2.__fp_setChecked = (::uObject*(*)(void*, bool))Android_android_view_MenuItem__setChecked;
    type->__interface_2.__fp_isChecked = (bool(*)(void*))Android_android_view_MenuItem__isChecked;
    type->__interface_2.__fp_setVisible = (::uObject*(*)(void*, bool))Android_android_view_MenuItem__setVisible;
    type->__interface_2.__fp_isVisible = (bool(*)(void*))Android_android_view_MenuItem__isVisible;
    type->__interface_2.__fp_setEnabled = (::uObject*(*)(void*, bool))Android_android_view_MenuItem__setEnabled;
    type->__interface_2.__fp_isEnabled = (bool(*)(void*))Android_android_view_MenuItem__isEnabled;
    type->__interface_2.__fp_hasSubMenu = (bool(*)(void*))Android_android_view_MenuItem__hasSubMenu;
    type->__interface_2.__fp_getSubMenu = (::uObject*(*)(void*))Android_android_view_MenuItem__getSubMenu;
    type->__interface_2.__fp_setOnMenuItemClickListener = (::uObject*(*)(void*, ::uObject*))Android_android_view_MenuItem__setOnMenuItemClickListener;
    type->__interface_2.__fp_getMenuInfo = (::uObject*(*)(void*))Android_android_view_MenuItem__getMenuInfo;
    type->__interface_2.__fp_setShowAsAction = (void(*)(void*, int))Android_android_view_MenuItem__setShowAsAction;
    type->__interface_2.__fp_setShowAsActionFlags = (::uObject*(*)(void*, int))Android_android_view_MenuItem__setShowAsActionFlags;
    type->__interface_2.__fp_setActionView_1 = (::uObject*(*)(void*, ::app::Android::android::view::View*))Android_android_view_MenuItem__setActionView_1;
    type->__interface_2.__fp_setActionView = (::uObject*(*)(void*, int))Android_android_view_MenuItem__setActionView;
    type->__interface_2.__fp_getActionView = (::app::Android::android::view::View*(*)(void*))Android_android_view_MenuItem__getActionView;
    type->__interface_2.__fp_setActionProvider = (::uObject*(*)(void*, ::app::Android::android::view::ActionProvider*))Android_android_view_MenuItem__setActionProvider;
    type->__interface_2.__fp_getActionProvider = (::app::Android::android::view::ActionProvider*(*)(void*))Android_android_view_MenuItem__getActionProvider;
    type->__interface_2.__fp_expandActionView = (bool(*)(void*))Android_android_view_MenuItem__expandActionView;
    type->__interface_2.__fp_collapseActionView = (bool(*)(void*))Android_android_view_MenuItem__collapseActionView;
    type->__interface_2.__fp_isActionViewExpanded = (bool(*)(void*))Android_android_view_MenuItem__isActionViewExpanded;
    type->__interface_2.__fp_setOnActionExpandListener = (::uObject*(*)(void*, ::uObject*))Android_android_view_MenuItem__setOnActionExpandListener;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_MenuItem__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_MenuItem__uType, __interface_1),
        ::app::Android::android::view::MenuItem__typeof(), offsetof(Android_android_view_MenuItem__uType, __interface_2));

    type->SetFields(41,
        ::uNewField("collapseActionView_22332_ID", &Android_android_view_MenuItem__collapseActionView_22332_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("expandActionView_22331_ID", &Android_android_view_MenuItem__expandActionView_22331_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getActionProvider_22330_ID", &Android_android_view_MenuItem__getActionProvider_22330_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getActionView_22328_ID", &Android_android_view_MenuItem__getActionView_22328_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getAlphabeticShortcut_22311_ID", &Android_android_view_MenuItem__getAlphabeticShortcut_22311_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getGroupId_22295_ID", &Android_android_view_MenuItem__getGroupId_22295_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getIcon_22304_ID", &Android_android_view_MenuItem__getIcon_22304_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getIntent_22306_ID", &Android_android_view_MenuItem__getIntent_22306_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getItemId_22294_ID", &Android_android_view_MenuItem__getItemId_22294_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getMenuInfo_22323_ID", &Android_android_view_MenuItem__getMenuInfo_22323_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getNumericShortcut_22309_ID", &Android_android_view_MenuItem__getNumericShortcut_22309_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getOrder_22296_ID", &Android_android_view_MenuItem__getOrder_22296_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSubMenu_22321_ID", &Android_android_view_MenuItem__getSubMenu_22321_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getTitle_22299_ID", &Android_android_view_MenuItem__getTitle_22299_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getTitleCondensed_22301_ID", &Android_android_view_MenuItem__getTitleCondensed_22301_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hasSubMenu_22320_ID", &Android_android_view_MenuItem__hasSubMenu_22320_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isActionViewExpanded_22333_ID", &Android_android_view_MenuItem__isActionViewExpanded_22333_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isCheckable_22313_ID", &Android_android_view_MenuItem__isCheckable_22313_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isChecked_22315_ID", &Android_android_view_MenuItem__isChecked_22315_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isEnabled_22319_ID", &Android_android_view_MenuItem__isEnabled_22319_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isVisible_22317_ID", &Android_android_view_MenuItem__isVisible_22317_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setActionProvider_22329_ID", &Android_android_view_MenuItem__setActionProvider_22329_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setActionView_22326_ID", &Android_android_view_MenuItem__setActionView_22326_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setActionView_22327_ID", &Android_android_view_MenuItem__setActionView_22327_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setAlphabeticShortcut_22310_ID", &Android_android_view_MenuItem__setAlphabeticShortcut_22310_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setCheckable_22312_ID", &Android_android_view_MenuItem__setCheckable_22312_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setChecked_22314_ID", &Android_android_view_MenuItem__setChecked_22314_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setEnabled_22318_ID", &Android_android_view_MenuItem__setEnabled_22318_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setIcon_22302_ID", &Android_android_view_MenuItem__setIcon_22302_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setIcon_22303_ID", &Android_android_view_MenuItem__setIcon_22303_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setIntent_22305_ID", &Android_android_view_MenuItem__setIntent_22305_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setNumericShortcut_22308_ID", &Android_android_view_MenuItem__setNumericShortcut_22308_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setOnActionExpandListener_22334_ID", &Android_android_view_MenuItem__setOnActionExpandListener_22334_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setOnMenuItemClickListener_22322_ID", &Android_android_view_MenuItem__setOnMenuItemClickListener_22322_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setShortcut_22307_ID", &Android_android_view_MenuItem__setShortcut_22307_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setShowAsAction_22324_ID", &Android_android_view_MenuItem__setShowAsAction_22324_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setShowAsActionFlags_22325_ID", &Android_android_view_MenuItem__setShowAsActionFlags_22325_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setTitle_22297_ID", &Android_android_view_MenuItem__setTitle_22297_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setTitle_22298_ID", &Android_android_view_MenuItem__setTitle_22298_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setTitleCondensed_22300_ID", &Android_android_view_MenuItem__setTitleCondensed_22300_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setVisible_22316_ID", &Android_android_view_MenuItem__setVisible_22316_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(82,
        ::uNewFunction("collapseActionView", Android_android_view_MenuItem__collapseActionView, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("collapseActionView_IMPL_22332", Android_android_view_MenuItem__collapseActionView_IMPL_22332, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("expandActionView", Android_android_view_MenuItem__expandActionView, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("expandActionView_IMPL_22331", Android_android_view_MenuItem__expandActionView_IMPL_22331, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getActionProvider", Android_android_view_MenuItem__getActionProvider, 0, false, ::app::Android::android::view::ActionProvider__typeof()),
        ::uNewFunction("getActionProvider_IMPL_22330", Android_android_view_MenuItem__getActionProvider_IMPL_22330, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getActionView", Android_android_view_MenuItem__getActionView, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunction("getActionView_IMPL_22328", Android_android_view_MenuItem__getActionView_IMPL_22328, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getAlphabeticShortcut", Android_android_view_MenuItem__getAlphabeticShortcut, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("getAlphabeticShortcut_IMPL_22311", Android_android_view_MenuItem__getAlphabeticShortcut_IMPL_22311, 0, true, ::app::Uno::Char__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getGroupId", Android_android_view_MenuItem__getGroupId, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getGroupId_IMPL_22295", Android_android_view_MenuItem__getGroupId_IMPL_22295, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getIcon", Android_android_view_MenuItem__getIcon, 0, false, ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunction("getIcon_IMPL_22304", Android_android_view_MenuItem__getIcon_IMPL_22304, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getIntent", Android_android_view_MenuItem__getIntent, 0, false, ::app::Android::android::content::Intent__typeof()),
        ::uNewFunction("getIntent_IMPL_22306", Android_android_view_MenuItem__getIntent_IMPL_22306, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getItemId", Android_android_view_MenuItem__getItemId, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getItemId_IMPL_22294", Android_android_view_MenuItem__getItemId_IMPL_22294, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getMenuInfo", Android_android_view_MenuItem__getMenuInfo, 0, false, ::app::Android::android::view::ContextMenuDLRContextMenuInfo__typeof()),
        ::uNewFunction("getMenuInfo_IMPL_22323", Android_android_view_MenuItem__getMenuInfo_IMPL_22323, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getNumericShortcut", Android_android_view_MenuItem__getNumericShortcut, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunction("getNumericShortcut_IMPL_22309", Android_android_view_MenuItem__getNumericShortcut_IMPL_22309, 0, true, ::app::Uno::Char__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getOrder", Android_android_view_MenuItem__getOrder, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getOrder_IMPL_22296", Android_android_view_MenuItem__getOrder_IMPL_22296, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getSubMenu", Android_android_view_MenuItem__getSubMenu, 0, false, ::app::Android::android::view::SubMenu__typeof()),
        ::uNewFunction("getSubMenu_IMPL_22321", Android_android_view_MenuItem__getSubMenu_IMPL_22321, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getTitle", Android_android_view_MenuItem__getTitle, 0, false, ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("getTitle_IMPL_22299", Android_android_view_MenuItem__getTitle_IMPL_22299, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getTitleCondensed", Android_android_view_MenuItem__getTitleCondensed, 0, false, ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("getTitleCondensed_IMPL_22301", Android_android_view_MenuItem__getTitleCondensed_IMPL_22301, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("hasSubMenu", Android_android_view_MenuItem__hasSubMenu, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("hasSubMenu_IMPL_22320", Android_android_view_MenuItem__hasSubMenu_IMPL_22320, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isActionViewExpanded", Android_android_view_MenuItem__isActionViewExpanded, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isActionViewExpanded_IMPL_22333", Android_android_view_MenuItem__isActionViewExpanded_IMPL_22333, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isCheckable", Android_android_view_MenuItem__isCheckable, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isCheckable_IMPL_22313", Android_android_view_MenuItem__isCheckable_IMPL_22313, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isChecked", Android_android_view_MenuItem__isChecked, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isChecked_IMPL_22315", Android_android_view_MenuItem__isChecked_IMPL_22315, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isEnabled", Android_android_view_MenuItem__isEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isEnabled_IMPL_22319", Android_android_view_MenuItem__isEnabled_IMPL_22319, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isVisible", Android_android_view_MenuItem__isVisible, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isVisible_IMPL_22317", Android_android_view_MenuItem__isVisible_IMPL_22317, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("setActionProvider", Android_android_view_MenuItem__setActionProvider, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Android::android::view::ActionProvider__typeof()),
        ::uNewFunction("setActionProvider_IMPL_22329", Android_android_view_MenuItem__setActionProvider_IMPL_22329, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setActionView", Android_android_view_MenuItem__setActionView, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setActionView", Android_android_view_MenuItem__setActionView_1, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Android::android::view::View__typeof()),
        ::uNewFunction("setActionView_IMPL_22326", Android_android_view_MenuItem__setActionView_IMPL_22326, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setActionView_IMPL_22327", Android_android_view_MenuItem__setActionView_IMPL_22327, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setAlphabeticShortcut", Android_android_view_MenuItem__setAlphabeticShortcut, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("setAlphabeticShortcut_IMPL_22310", Android_android_view_MenuItem__setAlphabeticShortcut_IMPL_22310, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("setCheckable", Android_android_view_MenuItem__setCheckable, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("setCheckable_IMPL_22312", Android_android_view_MenuItem__setCheckable_IMPL_22312, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("setChecked", Android_android_view_MenuItem__setChecked, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("setChecked_IMPL_22314", Android_android_view_MenuItem__setChecked_IMPL_22314, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("setEnabled", Android_android_view_MenuItem__setEnabled, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("setEnabled_IMPL_22318", Android_android_view_MenuItem__setEnabled_IMPL_22318, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("setIcon", Android_android_view_MenuItem__setIcon, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunction("setIcon", Android_android_view_MenuItem__setIcon_1, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setIcon_IMPL_22302", Android_android_view_MenuItem__setIcon_IMPL_22302, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setIcon_IMPL_22303", Android_android_view_MenuItem__setIcon_IMPL_22303, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setIntent", Android_android_view_MenuItem__setIntent, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Android::android::content::Intent__typeof()),
        ::uNewFunction("setIntent_IMPL_22305", Android_android_view_MenuItem__setIntent_IMPL_22305, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setNumericShortcut", Android_android_view_MenuItem__setNumericShortcut, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("setNumericShortcut_IMPL_22308", Android_android_view_MenuItem__setNumericShortcut_IMPL_22308, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("setOnActionExpandListener", Android_android_view_MenuItem__setOnActionExpandListener, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Android::android::view::MenuItemDLROnActionExpandListener__typeof()),
        ::uNewFunction("setOnActionExpandListener_IMPL_22334", Android_android_view_MenuItem__setOnActionExpandListener_IMPL_22334, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setOnMenuItemClickListener", Android_android_view_MenuItem__setOnMenuItemClickListener, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Android::android::view::MenuItemDLROnMenuItemClickListener__typeof()),
        ::uNewFunction("setOnMenuItemClickListener_IMPL_22322", Android_android_view_MenuItem__setOnMenuItemClickListener_IMPL_22322, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setShortcut", Android_android_view_MenuItem__setShortcut, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("setShortcut_IMPL_22307", Android_android_view_MenuItem__setShortcut_IMPL_22307, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Char__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunctionVoid("setShowAsAction", Android_android_view_MenuItem__setShowAsAction, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setShowAsAction_IMPL_22324", Android_android_view_MenuItem__setShowAsAction_IMPL_22324, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setShowAsActionFlags", Android_android_view_MenuItem__setShowAsActionFlags, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setShowAsActionFlags_IMPL_22325", Android_android_view_MenuItem__setShowAsActionFlags_IMPL_22325, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setTitle", Android_android_view_MenuItem__setTitle, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("setTitle", Android_android_view_MenuItem__setTitle_1, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setTitle_IMPL_22297", Android_android_view_MenuItem__setTitle_IMPL_22297, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setTitle_IMPL_22298", Android_android_view_MenuItem__setTitle_IMPL_22298, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setTitleCondensed", Android_android_view_MenuItem__setTitleCondensed, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("setTitleCondensed_IMPL_22300", Android_android_view_MenuItem__setTitleCondensed_IMPL_22300, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setVisible", Android_android_view_MenuItem__setVisible, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("setVisible_IMPL_22316", Android_android_view_MenuItem__setVisible_IMPL_22316, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_view_MenuItem__collapseActionView(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__collapseActionView_IMPL_22332(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__collapseActionView_IMPL_22332(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__collapseActionView_22332_ID,"android/view/MenuItem","collapseActionView","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.collapseActionView could not be cached",83);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__collapseActionView_22332_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__expandActionView(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__expandActionView_IMPL_22331(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__expandActionView_IMPL_22331(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__expandActionView_22331_ID,"android/view/MenuItem","expandActionView","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.expandActionView could not be cached",81);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__expandActionView_22331_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::ActionProvider* Android_android_view_MenuItem__getActionProvider(Android_android_view_MenuItem* __this)
{
    return ::uCast< ::app::Android::android::view::ActionProvider*>(Android_android_view_MenuItem__getActionProvider_IMPL_22330(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::view::ActionProvider__typeof());
}

::uObject* Android_android_view_MenuItem__getActionProvider_IMPL_22330(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getActionProvider_22330_ID,"android/view/MenuItem","getActionProvider","()Landroid/view/ActionProvider;",GetMethodID,"Id for fallback method android.view.MenuItem.getActionProvider could not be cached",82);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getActionProvider_22330_ID),result,::app::Android::Fallbacks::Android_android_view_ActionProvider__typeof(),::app::Android::android::view::ActionProvider*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::View* Android_android_view_MenuItem__getActionView(Android_android_view_MenuItem* __this)
{
    return ::uCast< ::app::Android::android::view::View*>(Android_android_view_MenuItem__getActionView_IMPL_22328(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::view::View__typeof());
}

::uObject* Android_android_view_MenuItem__getActionView_IMPL_22328(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getActionView_22328_ID,"android/view/MenuItem","getActionView","()Landroid/view/View;",GetMethodID,"Id for fallback method android.view.MenuItem.getActionView could not be cached",78);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getActionView_22328_ID),result,::app::Android::android::view::View__typeof(),::app::Android::android::view::View*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uChar Android_android_view_MenuItem__getAlphabeticShortcut(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__getAlphabeticShortcut_IMPL_22311(NULL, __this->_subclassed, __this->_javaObject);
}

::uChar Android_android_view_MenuItem__getAlphabeticShortcut_IMPL_22311(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getAlphabeticShortcut_22311_ID,"android/view/MenuItem","getAlphabeticShortcut","()C",GetMethodID,"Id for fallback method android.view.MenuItem.getAlphabeticShortcut could not be cached",86);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getAlphabeticShortcut_22311_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_MenuItem__getGroupId(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__getGroupId_IMPL_22295(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_MenuItem__getGroupId_IMPL_22295(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getGroupId_22295_ID,"android/view/MenuItem","getGroupId","()I",GetMethodID,"Id for fallback method android.view.MenuItem.getGroupId could not be cached",75);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getGroupId_22295_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::graphics::drawable::Drawable* Android_android_view_MenuItem__getIcon(Android_android_view_MenuItem* __this)
{
    return ::uCast< ::app::Android::android::graphics::drawable::Drawable*>(Android_android_view_MenuItem__getIcon_IMPL_22304(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::graphics::drawable::Drawable__typeof());
}

::uObject* Android_android_view_MenuItem__getIcon_IMPL_22304(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getIcon_22304_ID,"android/view/MenuItem","getIcon","()Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.view.MenuItem.getIcon could not be cached",72);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getIcon_22304_ID),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::content::Intent* Android_android_view_MenuItem__getIntent(Android_android_view_MenuItem* __this)
{
    return ::uCast< ::app::Android::android::content::Intent*>(Android_android_view_MenuItem__getIntent_IMPL_22306(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::content::Intent__typeof());
}

::uObject* Android_android_view_MenuItem__getIntent_IMPL_22306(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getIntent_22306_ID,"android/view/MenuItem","getIntent","()Landroid/content/Intent;",GetMethodID,"Id for fallback method android.view.MenuItem.getIntent could not be cached",74);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getIntent_22306_ID),result,::app::Android::android::content::Intent__typeof(),::app::Android::android::content::Intent*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_MenuItem__getItemId(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__getItemId_IMPL_22294(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_MenuItem__getItemId_IMPL_22294(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getItemId_22294_ID,"android/view/MenuItem","getItemId","()I",GetMethodID,"Id for fallback method android.view.MenuItem.getItemId could not be cached",74);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getItemId_22294_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__getMenuInfo(Android_android_view_MenuItem* __this)
{
    return (::uObject*)Android_android_view_MenuItem__getMenuInfo_IMPL_22323(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_view_MenuItem__getMenuInfo_IMPL_22323(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getMenuInfo_22323_ID,"android/view/MenuItem","getMenuInfo","()Landroid/view/ContextMenu$ContextMenuInfo;",GetMethodID,"Id for fallback method android.view.MenuItem.getMenuInfo could not be cached",76);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getMenuInfo_22323_ID),result,::app::Android::Fallbacks::Android_android_view_ContextMenuDLRContextMenuInfo__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uChar Android_android_view_MenuItem__getNumericShortcut(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__getNumericShortcut_IMPL_22309(NULL, __this->_subclassed, __this->_javaObject);
}

::uChar Android_android_view_MenuItem__getNumericShortcut_IMPL_22309(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getNumericShortcut_22309_ID,"android/view/MenuItem","getNumericShortcut","()C",GetMethodID,"Id for fallback method android.view.MenuItem.getNumericShortcut could not be cached",83);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getNumericShortcut_22309_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_MenuItem__getOrder(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__getOrder_IMPL_22296(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_MenuItem__getOrder_IMPL_22296(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getOrder_22296_ID,"android/view/MenuItem","getOrder","()I",GetMethodID,"Id for fallback method android.view.MenuItem.getOrder could not be cached",73);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getOrder_22296_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__getSubMenu(Android_android_view_MenuItem* __this)
{
    return (::uObject*)Android_android_view_MenuItem__getSubMenu_IMPL_22321(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_view_MenuItem__getSubMenu_IMPL_22321(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getSubMenu_22321_ID,"android/view/MenuItem","getSubMenu","()Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.MenuItem.getSubMenu could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getSubMenu_22321_ID),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__getTitle(Android_android_view_MenuItem* __this)
{
    return (::uObject*)Android_android_view_MenuItem__getTitle_IMPL_22299(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_view_MenuItem__getTitle_IMPL_22299(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getTitle_22299_ID,"android/view/MenuItem","getTitle","()Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.view.MenuItem.getTitle could not be cached",73);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getTitle_22299_ID),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__getTitleCondensed(Android_android_view_MenuItem* __this)
{
    return (::uObject*)Android_android_view_MenuItem__getTitleCondensed_IMPL_22301(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_view_MenuItem__getTitleCondensed_IMPL_22301(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getTitleCondensed_22301_ID,"android/view/MenuItem","getTitleCondensed","()Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.view.MenuItem.getTitleCondensed could not be cached",82);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getTitleCondensed_22301_ID),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__hasSubMenu(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__hasSubMenu_IMPL_22320(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__hasSubMenu_IMPL_22320(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__hasSubMenu_22320_ID,"android/view/MenuItem","hasSubMenu","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.hasSubMenu could not be cached",75);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__hasSubMenu_22320_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__isActionViewExpanded(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__isActionViewExpanded_IMPL_22333(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__isActionViewExpanded_IMPL_22333(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__isActionViewExpanded_22333_ID,"android/view/MenuItem","isActionViewExpanded","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isActionViewExpanded could not be cached",85);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__isActionViewExpanded_22333_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__isCheckable(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__isCheckable_IMPL_22313(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__isCheckable_IMPL_22313(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__isCheckable_22313_ID,"android/view/MenuItem","isCheckable","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isCheckable could not be cached",76);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__isCheckable_22313_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__isChecked(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__isChecked_IMPL_22315(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__isChecked_IMPL_22315(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__isChecked_22315_ID,"android/view/MenuItem","isChecked","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isChecked could not be cached",74);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__isChecked_22315_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__isEnabled(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__isEnabled_IMPL_22319(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__isEnabled_IMPL_22319(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__isEnabled_22319_ID,"android/view/MenuItem","isEnabled","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isEnabled could not be cached",74);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__isEnabled_22319_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__isVisible(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__isVisible_IMPL_22317(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__isVisible_IMPL_22317(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__isVisible_22317_ID,"android/view/MenuItem","isVisible","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isVisible could not be cached",74);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__isVisible_22317_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setActionProvider(Android_android_view_MenuItem* __this, ::app::Android::android::view::ActionProvider* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setActionProvider_IMPL_22329(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setActionProvider_IMPL_22329(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setActionProvider_22329_ID,"android/view/MenuItem","setActionProvider","(Landroid/view/ActionProvider;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setActionProvider could not be cached",82);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setActionProvider_22329_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setActionView(Android_android_view_MenuItem* __this, int arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setActionView_IMPL_22327(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setActionView_1(Android_android_view_MenuItem* __this, ::app::Android::android::view::View* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setActionView_IMPL_22326(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setActionView_IMPL_22326(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setActionView_22326_ID,"android/view/MenuItem","setActionView","(Landroid/view/View;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setActionView could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setActionView_22326_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setActionView_IMPL_22327(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setActionView_22327_ID,"android/view/MenuItem","setActionView","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setActionView could not be cached",78);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setActionView_22327_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setAlphabeticShortcut(Android_android_view_MenuItem* __this, ::uChar arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setAlphabeticShortcut_IMPL_22310(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setAlphabeticShortcut_IMPL_22310(::uStatic* __this, bool arg0_, jobject arg1_, ::uChar arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setAlphabeticShortcut_22310_ID,"android/view/MenuItem","setAlphabeticShortcut","(C)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setAlphabeticShortcut could not be cached",86);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setAlphabeticShortcut_22310_ID, ((jchar)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setCheckable(Android_android_view_MenuItem* __this, bool arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setCheckable_IMPL_22312(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setCheckable_IMPL_22312(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setCheckable_22312_ID,"android/view/MenuItem","setCheckable","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setCheckable could not be cached",77);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setCheckable_22312_ID, ((jboolean)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setChecked(Android_android_view_MenuItem* __this, bool arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setChecked_IMPL_22314(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setChecked_IMPL_22314(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setChecked_22314_ID,"android/view/MenuItem","setChecked","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setChecked could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setChecked_22314_ID, ((jboolean)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setEnabled(Android_android_view_MenuItem* __this, bool arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setEnabled_IMPL_22318(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setEnabled_IMPL_22318(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setEnabled_22318_ID,"android/view/MenuItem","setEnabled","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setEnabled could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setEnabled_22318_ID, ((jboolean)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setIcon(Android_android_view_MenuItem* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setIcon_IMPL_22302(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setIcon_1(Android_android_view_MenuItem* __this, int arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setIcon_IMPL_22303(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setIcon_IMPL_22302(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setIcon_22302_ID,"android/view/MenuItem","setIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setIcon could not be cached",72);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setIcon_22302_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setIcon_IMPL_22303(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setIcon_22303_ID,"android/view/MenuItem","setIcon","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setIcon could not be cached",72);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setIcon_22303_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setIntent(Android_android_view_MenuItem* __this, ::app::Android::android::content::Intent* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setIntent_IMPL_22305(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setIntent_IMPL_22305(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setIntent_22305_ID,"android/view/MenuItem","setIntent","(Landroid/content/Intent;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setIntent could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setIntent_22305_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setNumericShortcut(Android_android_view_MenuItem* __this, ::uChar arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setNumericShortcut_IMPL_22308(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setNumericShortcut_IMPL_22308(::uStatic* __this, bool arg0_, jobject arg1_, ::uChar arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setNumericShortcut_22308_ID,"android/view/MenuItem","setNumericShortcut","(C)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setNumericShortcut could not be cached",83);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setNumericShortcut_22308_ID, ((jchar)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setOnActionExpandListener(Android_android_view_MenuItem* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setOnActionExpandListener_IMPL_22334(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setOnActionExpandListener_IMPL_22334(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setOnActionExpandListener_22334_ID,"android/view/MenuItem","setOnActionExpandListener","(Landroid/view/MenuItem$OnActionExpandListener;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setOnActionExpandListener could not be cached",90);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setOnActionExpandListener_22334_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setOnMenuItemClickListener(Android_android_view_MenuItem* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setOnMenuItemClickListener_IMPL_22322(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setOnMenuItemClickListener_IMPL_22322(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setOnMenuItemClickListener_22322_ID,"android/view/MenuItem","setOnMenuItemClickListener","(Landroid/view/MenuItem$OnMenuItemClickListener;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setOnMenuItemClickListener could not be cached",91);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setOnMenuItemClickListener_22322_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setShortcut(Android_android_view_MenuItem* __this, ::uChar arg0, ::uChar arg1)
{
    return (::uObject*)Android_android_view_MenuItem__setShortcut_IMPL_22307(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_view_MenuItem__setShortcut_IMPL_22307(::uStatic* __this, bool arg0_, jobject arg1_, ::uChar arg2_, ::uChar arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setShortcut_22307_ID,"android/view/MenuItem","setShortcut","(CC)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setShortcut could not be cached",76);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setShortcut_22307_ID, ((jchar)arg2_), ((jchar)arg3_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_MenuItem__setShowAsAction(Android_android_view_MenuItem* __this, int arg0)
{
    Android_android_view_MenuItem__setShowAsAction_IMPL_22324(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_MenuItem__setShowAsAction_IMPL_22324(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setShowAsAction_22324_ID,"android/view/MenuItem","setShowAsAction","(I)V",GetMethodID,"Id for fallback method android.view.MenuItem.setShowAsAction could not be cached",80);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setShowAsAction_22324_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* Android_android_view_MenuItem__setShowAsActionFlags(Android_android_view_MenuItem* __this, int arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setShowAsActionFlags_IMPL_22325(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setShowAsActionFlags_IMPL_22325(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setShowAsActionFlags_22325_ID,"android/view/MenuItem","setShowAsActionFlags","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setShowAsActionFlags could not be cached",85);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setShowAsActionFlags_22325_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setTitle(Android_android_view_MenuItem* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setTitle_IMPL_22297(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setTitle_1(Android_android_view_MenuItem* __this, int arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setTitle_IMPL_22298(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setTitle_IMPL_22297(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setTitle_22297_ID,"android/view/MenuItem","setTitle","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setTitle could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setTitle_22297_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setTitle_IMPL_22298(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setTitle_22298_ID,"android/view/MenuItem","setTitle","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setTitle could not be cached",73);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setTitle_22298_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setTitleCondensed(Android_android_view_MenuItem* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setTitleCondensed_IMPL_22300(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setTitleCondensed_IMPL_22300(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setTitleCondensed_22300_ID,"android/view/MenuItem","setTitleCondensed","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setTitleCondensed could not be cached",82);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setTitleCondensed_22300_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setVisible(Android_android_view_MenuItem* __this, bool arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setVisible_IMPL_22316(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setVisible_IMPL_22316(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setVisible_22316_ID,"android/view/MenuItem","setVisible","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setVisible could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setVisible_22316_ID, ((jboolean)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_22292_ID;
jmethodID Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_22291_ID;

Android_android_view_MenuItemDLROnActionExpandListener__uType* Android_android_view_MenuItemDLROnActionExpandListener__typeof()
{
    static ::uStaticStrong<Android_android_view_MenuItemDLROnActionExpandListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_MenuItemDLROnActionExpandListener__uType*)::uAllocClassType(sizeof(Android_android_view_MenuItemDLROnActionExpandListener__uType), "Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onMenuItemActionExpand = (bool(*)(void*, ::uObject*))Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand;
    type->__interface_2.__fp_onMenuItemActionCollapse = (bool(*)(void*, ::uObject*))Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_MenuItemDLROnActionExpandListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_MenuItemDLROnActionExpandListener__uType, __interface_1),
        ::app::Android::android::view::MenuItemDLROnActionExpandListener__typeof(), offsetof(Android_android_view_MenuItemDLROnActionExpandListener__uType, __interface_2));

    type->SetFields(2,
        ::uNewField("onMenuItemActionCollapse_22292_ID", &Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_22292_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onMenuItemActionExpand_22291_ID", &Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_22291_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("onMenuItemActionCollapse", Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::MenuItem__typeof()),
        ::uNewFunction("onMenuItemActionCollapse_IMPL_22292", Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_IMPL_22292, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onMenuItemActionExpand", Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::MenuItem__typeof()),
        ::uNewFunction("onMenuItemActionExpand_IMPL_22291", Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_IMPL_22291, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse(Android_android_view_MenuItemDLROnActionExpandListener* __this, ::uObject* arg0)
{
    return Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_IMPL_22292(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_IMPL_22292(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_22292_ID,"android/view/MenuItem$OnActionExpandListener","onMenuItemActionCollapse","(Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.MenuItem$OnActionExpandListener.onMenuItemActionCollapse could not be cached",112);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_22292_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand(Android_android_view_MenuItemDLROnActionExpandListener* __this, ::uObject* arg0)
{
    return Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_IMPL_22291(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_IMPL_22291(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_22291_ID,"android/view/MenuItem$OnActionExpandListener","onMenuItemActionExpand","(Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.MenuItem$OnActionExpandListener.onMenuItemActionExpand could not be cached",110);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_22291_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_22293_ID;

Android_android_view_MenuItemDLROnMenuItemClickListener__uType* Android_android_view_MenuItemDLROnMenuItemClickListener__typeof()
{
    static ::uStaticStrong<Android_android_view_MenuItemDLROnMenuItemClickListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_MenuItemDLROnMenuItemClickListener__uType*)::uAllocClassType(sizeof(Android_android_view_MenuItemDLROnMenuItemClickListener__uType), "Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemClickListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onMenuItemClick = (bool(*)(void*, ::uObject*))Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_MenuItemDLROnMenuItemClickListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_MenuItemDLROnMenuItemClickListener__uType, __interface_1),
        ::app::Android::android::view::MenuItemDLROnMenuItemClickListener__typeof(), offsetof(Android_android_view_MenuItemDLROnMenuItemClickListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onMenuItemClick_22293_ID", &Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_22293_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("onMenuItemClick", Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::MenuItem__typeof()),
        ::uNewFunction("onMenuItemClick_IMPL_22293", Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_IMPL_22293, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick(Android_android_view_MenuItemDLROnMenuItemClickListener* __this, ::uObject* arg0)
{
    return Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_IMPL_22293(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_IMPL_22293(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_22293_ID,"android/view/MenuItem$OnMenuItemClickListener","onMenuItemClick","(Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.MenuItem$OnMenuItemClickListener.onMenuItemClick could not be cached",104);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_22293_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_SubMenu__add_22256_ID;
jmethodID Android_android_view_SubMenu__add_22257_ID;
jmethodID Android_android_view_SubMenu__add_22258_ID;
jmethodID Android_android_view_SubMenu__add_22259_ID;
jmethodID Android_android_view_SubMenu__addIntentOptions_22264_ID;
jmethodID Android_android_view_SubMenu__addSubMenu_22260_ID;
jmethodID Android_android_view_SubMenu__addSubMenu_22261_ID;
jmethodID Android_android_view_SubMenu__addSubMenu_22262_ID;
jmethodID Android_android_view_SubMenu__addSubMenu_22263_ID;
jmethodID Android_android_view_SubMenu__clear_22267_ID;
jmethodID Android_android_view_SubMenu__clearHeader_22582_ID;
jmethodID Android_android_view_SubMenu__close_22275_ID;
jmethodID Android_android_view_SubMenu__findItem_22272_ID;
jmethodID Android_android_view_SubMenu__getItem_22274_ID;
jmethodID Android_android_view_SubMenu__getItem_22585_ID;
jmethodID Android_android_view_SubMenu__hasVisibleItems_22271_ID;
jmethodID Android_android_view_SubMenu__isShortcutKey_22277_ID;
jmethodID Android_android_view_SubMenu__performIdentifierAction_22278_ID;
jmethodID Android_android_view_SubMenu__performShortcut_22276_ID;
jmethodID Android_android_view_SubMenu__removeGroup_22266_ID;
jmethodID Android_android_view_SubMenu__removeItem_22265_ID;
jmethodID Android_android_view_SubMenu__setGroupCheckable_22268_ID;
jmethodID Android_android_view_SubMenu__setGroupEnabled_22270_ID;
jmethodID Android_android_view_SubMenu__setGroupVisible_22269_ID;
jmethodID Android_android_view_SubMenu__setHeaderIcon_22579_ID;
jmethodID Android_android_view_SubMenu__setHeaderIcon_22580_ID;
jmethodID Android_android_view_SubMenu__setHeaderTitle_22577_ID;
jmethodID Android_android_view_SubMenu__setHeaderTitle_22578_ID;
jmethodID Android_android_view_SubMenu__setHeaderView_22581_ID;
jmethodID Android_android_view_SubMenu__setIcon_22583_ID;
jmethodID Android_android_view_SubMenu__setIcon_22584_ID;
jmethodID Android_android_view_SubMenu__setQwertyMode_22279_ID;
jmethodID Android_android_view_SubMenu__size_22273_ID;

Android_android_view_SubMenu__uType* Android_android_view_SubMenu__typeof()
{
    static ::uStaticStrong<Android_android_view_SubMenu__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_SubMenu__uType*)::uAllocClassType(sizeof(Android_android_view_SubMenu__uType), "Android.Fallbacks.Android_android_view_SubMenu", false, 4, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_setHeaderTitle_1 = (::uObject*(*)(void*, int))Android_android_view_SubMenu__setHeaderTitle_1;
    type->__interface_2.__fp_setHeaderTitle = (::uObject*(*)(void*, ::uObject*))Android_android_view_SubMenu__setHeaderTitle;
    type->__interface_2.__fp_setHeaderIcon_1 = (::uObject*(*)(void*, int))Android_android_view_SubMenu__setHeaderIcon_1;
    type->__interface_2.__fp_setHeaderIcon = (::uObject*(*)(void*, ::app::Android::android::graphics::drawable::Drawable*))Android_android_view_SubMenu__setHeaderIcon;
    type->__interface_2.__fp_setHeaderView = (::uObject*(*)(void*, ::app::Android::android::view::View*))Android_android_view_SubMenu__setHeaderView;
    type->__interface_2.__fp_clearHeader = (void(*)(void*))Android_android_view_SubMenu__clearHeader;
    type->__interface_2.__fp_setIcon_1 = (::uObject*(*)(void*, int))Android_android_view_SubMenu__setIcon_1;
    type->__interface_2.__fp_setIcon = (::uObject*(*)(void*, ::app::Android::android::graphics::drawable::Drawable*))Android_android_view_SubMenu__setIcon;
    type->__interface_2.__fp_getItem = (::uObject*(*)(void*))Android_android_view_SubMenu__getItem;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_add = (::uObject*(*)(void*, ::uObject*))Android_android_view_SubMenu__add;
    type->__interface_3.__fp_add_1 = (::uObject*(*)(void*, int))Android_android_view_SubMenu__add_1;
    type->__interface_3.__fp_add_2 = (::uObject*(*)(void*, int, int, int, ::uObject*))Android_android_view_SubMenu__add_2;
    type->__interface_3.__fp_add_3 = (::uObject*(*)(void*, int, int, int, int))Android_android_view_SubMenu__add_3;
    type->__interface_3.__fp_addSubMenu = (::uObject*(*)(void*, ::uObject*))Android_android_view_SubMenu__addSubMenu;
    type->__interface_3.__fp_addSubMenu_1 = (::uObject*(*)(void*, int))Android_android_view_SubMenu__addSubMenu_1;
    type->__interface_3.__fp_addSubMenu_2 = (::uObject*(*)(void*, int, int, int, ::uObject*))Android_android_view_SubMenu__addSubMenu_2;
    type->__interface_3.__fp_addSubMenu_3 = (::uObject*(*)(void*, int, int, int, int))Android_android_view_SubMenu__addSubMenu_3;
    type->__interface_3.__fp_addIntentOptions = (int(*)(void*, int, int, int, ::app::Android::android::content::ComponentName*, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent*, ::app::Android::android::content::Intent*, int, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem*))Android_android_view_SubMenu__addIntentOptions;
    type->__interface_3.__fp_removeItem = (void(*)(void*, int))Android_android_view_SubMenu__removeItem;
    type->__interface_3.__fp_removeGroup = (void(*)(void*, int))Android_android_view_SubMenu__removeGroup;
    type->__interface_3.__fp_clear = (void(*)(void*))Android_android_view_SubMenu__clear;
    type->__interface_3.__fp_setGroupCheckable = (void(*)(void*, int, bool, bool))Android_android_view_SubMenu__setGroupCheckable;
    type->__interface_3.__fp_setGroupVisible = (void(*)(void*, int, bool))Android_android_view_SubMenu__setGroupVisible;
    type->__interface_3.__fp_setGroupEnabled = (void(*)(void*, int, bool))Android_android_view_SubMenu__setGroupEnabled;
    type->__interface_3.__fp_hasVisibleItems = (bool(*)(void*))Android_android_view_SubMenu__hasVisibleItems;
    type->__interface_3.__fp_findItem = (::uObject*(*)(void*, int))Android_android_view_SubMenu__findItem;
    type->__interface_3.__fp_size = (int(*)(void*))Android_android_view_SubMenu__size;
    type->__interface_3.__fp_getItem = (::uObject*(*)(void*, int))Android_android_view_SubMenu__getItem_1;
    type->__interface_3.__fp_close = (void(*)(void*))Android_android_view_SubMenu__close;
    type->__interface_3.__fp_performShortcut = (bool(*)(void*, int, ::app::Android::android::view::KeyEvent*, int))Android_android_view_SubMenu__performShortcut;
    type->__interface_3.__fp_isShortcutKey = (bool(*)(void*, int, ::app::Android::android::view::KeyEvent*))Android_android_view_SubMenu__isShortcutKey;
    type->__interface_3.__fp_performIdentifierAction = (bool(*)(void*, int, int))Android_android_view_SubMenu__performIdentifierAction;
    type->__interface_3.__fp_setQwertyMode = (void(*)(void*, bool))Android_android_view_SubMenu__setQwertyMode;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_SubMenu__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_SubMenu__uType, __interface_1),
        ::app::Android::android::view::SubMenu__typeof(), offsetof(Android_android_view_SubMenu__uType, __interface_2),
        ::app::Android::android::view::Menu__typeof(), offsetof(Android_android_view_SubMenu__uType, __interface_3));

    type->SetFields(33,
        ::uNewField("add_22256_ID", &Android_android_view_SubMenu__add_22256_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("add_22257_ID", &Android_android_view_SubMenu__add_22257_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("add_22258_ID", &Android_android_view_SubMenu__add_22258_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("add_22259_ID", &Android_android_view_SubMenu__add_22259_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addIntentOptions_22264_ID", &Android_android_view_SubMenu__addIntentOptions_22264_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addSubMenu_22260_ID", &Android_android_view_SubMenu__addSubMenu_22260_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addSubMenu_22261_ID", &Android_android_view_SubMenu__addSubMenu_22261_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addSubMenu_22262_ID", &Android_android_view_SubMenu__addSubMenu_22262_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addSubMenu_22263_ID", &Android_android_view_SubMenu__addSubMenu_22263_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("clear_22267_ID", &Android_android_view_SubMenu__clear_22267_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("clearHeader_22582_ID", &Android_android_view_SubMenu__clearHeader_22582_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("close_22275_ID", &Android_android_view_SubMenu__close_22275_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("findItem_22272_ID", &Android_android_view_SubMenu__findItem_22272_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getItem_22274_ID", &Android_android_view_SubMenu__getItem_22274_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getItem_22585_ID", &Android_android_view_SubMenu__getItem_22585_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hasVisibleItems_22271_ID", &Android_android_view_SubMenu__hasVisibleItems_22271_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isShortcutKey_22277_ID", &Android_android_view_SubMenu__isShortcutKey_22277_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performIdentifierAction_22278_ID", &Android_android_view_SubMenu__performIdentifierAction_22278_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performShortcut_22276_ID", &Android_android_view_SubMenu__performShortcut_22276_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("removeGroup_22266_ID", &Android_android_view_SubMenu__removeGroup_22266_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("removeItem_22265_ID", &Android_android_view_SubMenu__removeItem_22265_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setGroupCheckable_22268_ID", &Android_android_view_SubMenu__setGroupCheckable_22268_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setGroupEnabled_22270_ID", &Android_android_view_SubMenu__setGroupEnabled_22270_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setGroupVisible_22269_ID", &Android_android_view_SubMenu__setGroupVisible_22269_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHeaderIcon_22579_ID", &Android_android_view_SubMenu__setHeaderIcon_22579_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHeaderIcon_22580_ID", &Android_android_view_SubMenu__setHeaderIcon_22580_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHeaderTitle_22577_ID", &Android_android_view_SubMenu__setHeaderTitle_22577_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHeaderTitle_22578_ID", &Android_android_view_SubMenu__setHeaderTitle_22578_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHeaderView_22581_ID", &Android_android_view_SubMenu__setHeaderView_22581_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setIcon_22583_ID", &Android_android_view_SubMenu__setIcon_22583_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setIcon_22584_ID", &Android_android_view_SubMenu__setIcon_22584_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setQwertyMode_22279_ID", &Android_android_view_SubMenu__setQwertyMode_22279_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("size_22273_ID", &Android_android_view_SubMenu__size_22273_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(66,
        ::uNewFunction("add", Android_android_view_SubMenu__add, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("add", Android_android_view_SubMenu__add_1, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("add", Android_android_view_SubMenu__add_2, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("add", Android_android_view_SubMenu__add_3, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("add_IMPL_22256", Android_android_view_SubMenu__add_IMPL_22256, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("add_IMPL_22257", Android_android_view_SubMenu__add_IMPL_22257, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("add_IMPL_22258", Android_android_view_SubMenu__add_IMPL_22258, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("add_IMPL_22259", Android_android_view_SubMenu__add_IMPL_22259, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("addIntentOptions", Android_android_view_SubMenu__addIntentOptions, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::content::ComponentName__typeof(), ::app::Android::Runtime::ObjectArray__Android_android_content_Intent__typeof(), ::app::Android::android::content::Intent__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem__typeof()),
        ::uNewFunction("addIntentOptions_IMPL_22264", Android_android_view_SubMenu__addIntentOptions_IMPL_22264, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("addSubMenu", Android_android_view_SubMenu__addSubMenu, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("addSubMenu", Android_android_view_SubMenu__addSubMenu_1, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("addSubMenu", Android_android_view_SubMenu__addSubMenu_2, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("addSubMenu", Android_android_view_SubMenu__addSubMenu_3, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("addSubMenu_IMPL_22260", Android_android_view_SubMenu__addSubMenu_IMPL_22260, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("addSubMenu_IMPL_22261", Android_android_view_SubMenu__addSubMenu_IMPL_22261, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("addSubMenu_IMPL_22262", Android_android_view_SubMenu__addSubMenu_IMPL_22262, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("addSubMenu_IMPL_22263", Android_android_view_SubMenu__addSubMenu_IMPL_22263, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("clear", Android_android_view_SubMenu__clear, 0, false),
        ::uNewFunctionVoid("clear_IMPL_22267", Android_android_view_SubMenu__clear_IMPL_22267, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("clearHeader", Android_android_view_SubMenu__clearHeader, 0, false),
        ::uNewFunctionVoid("clearHeader_IMPL_22582", Android_android_view_SubMenu__clearHeader_IMPL_22582, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("close", Android_android_view_SubMenu__close, 0, false),
        ::uNewFunctionVoid("close_IMPL_22275", Android_android_view_SubMenu__close_IMPL_22275, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("findItem", Android_android_view_SubMenu__findItem, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("findItem_IMPL_22272", Android_android_view_SubMenu__findItem_IMPL_22272, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getItem", Android_android_view_SubMenu__getItem, 0, false, ::app::Android::android::view::MenuItem__typeof()),
        ::uNewFunction("getItem", Android_android_view_SubMenu__getItem_1, 0, false, ::app::Android::android::view::MenuItem__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getItem_IMPL_22274", Android_android_view_SubMenu__getItem_IMPL_22274, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getItem_IMPL_22585", Android_android_view_SubMenu__getItem_IMPL_22585, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("hasVisibleItems", Android_android_view_SubMenu__hasVisibleItems, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("hasVisibleItems_IMPL_22271", Android_android_view_SubMenu__hasVisibleItems_IMPL_22271, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isShortcutKey", Android_android_view_SubMenu__isShortcutKey, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::view::KeyEvent__typeof()),
        ::uNewFunction("isShortcutKey_IMPL_22277", Android_android_view_SubMenu__isShortcutKey_IMPL_22277, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("performIdentifierAction", Android_android_view_SubMenu__performIdentifierAction, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performIdentifierAction_IMPL_22278", Android_android_view_SubMenu__performIdentifierAction_IMPL_22278, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performShortcut", Android_android_view_SubMenu__performShortcut, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::view::KeyEvent__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performShortcut_IMPL_22276", Android_android_view_SubMenu__performShortcut_IMPL_22276, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("removeGroup", Android_android_view_SubMenu__removeGroup, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("removeGroup_IMPL_22266", Android_android_view_SubMenu__removeGroup_IMPL_22266, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("removeItem", Android_android_view_SubMenu__removeItem, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("removeItem_IMPL_22265", Android_android_view_SubMenu__removeItem_IMPL_22265, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setGroupCheckable", Android_android_view_SubMenu__setGroupCheckable, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupCheckable_IMPL_22268", Android_android_view_SubMenu__setGroupCheckable_IMPL_22268, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupEnabled", Android_android_view_SubMenu__setGroupEnabled, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupEnabled_IMPL_22270", Android_android_view_SubMenu__setGroupEnabled_IMPL_22270, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupVisible", Android_android_view_SubMenu__setGroupVisible, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGroupVisible_IMPL_22269", Android_android_view_SubMenu__setGroupVisible_IMPL_22269, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("setHeaderIcon", Android_android_view_SubMenu__setHeaderIcon, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunction("setHeaderIcon", Android_android_view_SubMenu__setHeaderIcon_1, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setHeaderIcon_IMPL_22579", Android_android_view_SubMenu__setHeaderIcon_IMPL_22579, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setHeaderIcon_IMPL_22580", Android_android_view_SubMenu__setHeaderIcon_IMPL_22580, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setHeaderTitle", Android_android_view_SubMenu__setHeaderTitle, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunction("setHeaderTitle", Android_android_view_SubMenu__setHeaderTitle_1, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setHeaderTitle_IMPL_22577", Android_android_view_SubMenu__setHeaderTitle_IMPL_22577, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setHeaderTitle_IMPL_22578", Android_android_view_SubMenu__setHeaderTitle_IMPL_22578, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setHeaderView", Android_android_view_SubMenu__setHeaderView, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Android::android::view::View__typeof()),
        ::uNewFunction("setHeaderView_IMPL_22581", Android_android_view_SubMenu__setHeaderView_IMPL_22581, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("setIcon", Android_android_view_SubMenu__setIcon, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunction("setIcon", Android_android_view_SubMenu__setIcon_1, 0, false, ::app::Android::android::view::SubMenu__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setIcon_IMPL_22583", Android_android_view_SubMenu__setIcon_IMPL_22583, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("setIcon_IMPL_22584", Android_android_view_SubMenu__setIcon_IMPL_22584, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setQwertyMode", Android_android_view_SubMenu__setQwertyMode, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setQwertyMode_IMPL_22279", Android_android_view_SubMenu__setQwertyMode_IMPL_22279, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("size", Android_android_view_SubMenu__size, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("size_IMPL_22273", Android_android_view_SubMenu__size_IMPL_22273, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Android_android_view_SubMenu__add(Android_android_view_SubMenu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_SubMenu__add_IMPL_22256(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_SubMenu__add_1(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__add_IMPL_22257(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__add_2(Android_android_view_SubMenu* __this, int arg0, int arg1, int arg2, ::uObject* arg3)
{
    return (::uObject*)Android_android_view_SubMenu__add_IMPL_22258(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3);
}

::uObject* Android_android_view_SubMenu__add_3(Android_android_view_SubMenu* __this, int arg0, int arg1, int arg2, int arg3)
{
    return (::uObject*)Android_android_view_SubMenu__add_IMPL_22259(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

::uObject* Android_android_view_SubMenu__add_IMPL_22256(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__add_22256_ID,"android/view/SubMenu","add","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__add_22256_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__add_IMPL_22257(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__add_22257_ID,"android/view/SubMenu","add","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__add_22257_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__add_IMPL_22258(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__add_22258_ID,"android/view/SubMenu","add","(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__add_22258_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__add_IMPL_22259(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__add_22259_ID,"android/view/SubMenu","add","(IIII)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__add_22259_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_SubMenu__addIntentOptions(Android_android_view_SubMenu* __this, int arg0, int arg1, int arg2, ::app::Android::android::content::ComponentName* arg3, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent* arg4, ::app::Android::android::content::Intent* arg5, int arg6, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem* arg7)
{
    return Android_android_view_SubMenu__addIntentOptions_IMPL_22264(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3, (::uObject*)arg4, (::uObject*)arg5, arg6, (::uObject*)arg7);
}

int Android_android_view_SubMenu__addIntentOptions_IMPL_22264(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_, ::uObject* arg6_, ::uObject* arg7_, int arg8_, ::uObject* arg9_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__addIntentOptions_22264_ID,"android/view/SubMenu","addIntentOptions","(IIILandroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I[Landroid/view/MenuItem;)I",GetMethodID,"Id for fallback method android.view.SubMenu.addIntentOptions could not be cached",80);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    jobject _obArg6 = ((!arg6_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg6_));
    jobject _obArg7 = ((!arg7_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg7_));
    jobject _obArg9 = ((!arg9_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg9_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__addIntentOptions_22264_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5, _obArg6, _obArg7, ((jint)arg8_), _obArg9));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__addSubMenu(Android_android_view_SubMenu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_SubMenu__addSubMenu_IMPL_22260(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_SubMenu__addSubMenu_1(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__addSubMenu_IMPL_22261(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__addSubMenu_2(Android_android_view_SubMenu* __this, int arg0, int arg1, int arg2, ::uObject* arg3)
{
    return (::uObject*)Android_android_view_SubMenu__addSubMenu_IMPL_22262(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3);
}

::uObject* Android_android_view_SubMenu__addSubMenu_3(Android_android_view_SubMenu* __this, int arg0, int arg1, int arg2, int arg3)
{
    return (::uObject*)Android_android_view_SubMenu__addSubMenu_IMPL_22263(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

::uObject* Android_android_view_SubMenu__addSubMenu_IMPL_22260(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22260_ID,"android/view/SubMenu","addSubMenu","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22260_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__addSubMenu_IMPL_22261(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22261_ID,"android/view/SubMenu","addSubMenu","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22261_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__addSubMenu_IMPL_22262(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22262_ID,"android/view/SubMenu","addSubMenu","(IIILjava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22262_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__addSubMenu_IMPL_22263(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22263_ID,"android/view/SubMenu","addSubMenu","(IIII)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22263_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_SubMenu__clear(Android_android_view_SubMenu* __this)
{
    Android_android_view_SubMenu__clear_IMPL_22267(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_SubMenu__clear_IMPL_22267(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__clear_22267_ID,"android/view/SubMenu","clear","()V",GetMethodID,"Id for fallback method android.view.SubMenu.clear could not be cached",69);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__clear_22267_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SubMenu__clearHeader(Android_android_view_SubMenu* __this)
{
    Android_android_view_SubMenu__clearHeader_IMPL_22582(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_SubMenu__clearHeader_IMPL_22582(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__clearHeader_22582_ID,"android/view/SubMenu","clearHeader","()V",GetMethodID,"Id for fallback method android.view.SubMenu.clearHeader could not be cached",75);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__clearHeader_22582_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SubMenu__close(Android_android_view_SubMenu* __this)
{
    Android_android_view_SubMenu__close_IMPL_22275(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_SubMenu__close_IMPL_22275(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__close_22275_ID,"android/view/SubMenu","close","()V",GetMethodID,"Id for fallback method android.view.SubMenu.close could not be cached",69);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__close_22275_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* Android_android_view_SubMenu__findItem(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__findItem_IMPL_22272(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__findItem_IMPL_22272(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__findItem_22272_ID,"android/view/SubMenu","findItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.findItem could not be cached",72);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__findItem_22272_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__getItem(Android_android_view_SubMenu* __this)
{
    return (::uObject*)Android_android_view_SubMenu__getItem_IMPL_22585(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_view_SubMenu__getItem_1(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__getItem_IMPL_22274(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__getItem_IMPL_22274(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__getItem_22274_ID,"android/view/SubMenu","getItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.getItem could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__getItem_22274_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__getItem_IMPL_22585(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__getItem_22585_ID,"android/view/SubMenu","getItem","()Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.getItem could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__getItem_22585_ID),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_SubMenu__hasVisibleItems(Android_android_view_SubMenu* __this)
{
    return Android_android_view_SubMenu__hasVisibleItems_IMPL_22271(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_SubMenu__hasVisibleItems_IMPL_22271(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__hasVisibleItems_22271_ID,"android/view/SubMenu","hasVisibleItems","()Z",GetMethodID,"Id for fallback method android.view.SubMenu.hasVisibleItems could not be cached",79);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__hasVisibleItems_22271_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_SubMenu__isShortcutKey(Android_android_view_SubMenu* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1)
{
    return Android_android_view_SubMenu__isShortcutKey_IMPL_22277(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool Android_android_view_SubMenu__isShortcutKey_IMPL_22277(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__isShortcutKey_22277_ID,"android/view/SubMenu","isShortcutKey","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.view.SubMenu.isShortcutKey could not be cached",77);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__isShortcutKey_22277_ID, ((jint)arg2_), _obArg3));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_SubMenu__performIdentifierAction(Android_android_view_SubMenu* __this, int arg0, int arg1)
{
    return Android_android_view_SubMenu__performIdentifierAction_IMPL_22278(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

bool Android_android_view_SubMenu__performIdentifierAction_IMPL_22278(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__performIdentifierAction_22278_ID,"android/view/SubMenu","performIdentifierAction","(II)Z",GetMethodID,"Id for fallback method android.view.SubMenu.performIdentifierAction could not be cached",87);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__performIdentifierAction_22278_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_SubMenu__performShortcut(Android_android_view_SubMenu* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1, int arg2)
{
    return Android_android_view_SubMenu__performShortcut_IMPL_22276(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1, arg2);
}

bool Android_android_view_SubMenu__performShortcut_IMPL_22276(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__performShortcut_22276_ID,"android/view/SubMenu","performShortcut","(ILandroid/view/KeyEvent;I)Z",GetMethodID,"Id for fallback method android.view.SubMenu.performShortcut could not be cached",79);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__performShortcut_22276_ID, ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_SubMenu__removeGroup(Android_android_view_SubMenu* __this, int arg0)
{
    Android_android_view_SubMenu__removeGroup_IMPL_22266(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_SubMenu__removeGroup_IMPL_22266(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__removeGroup_22266_ID,"android/view/SubMenu","removeGroup","(I)V",GetMethodID,"Id for fallback method android.view.SubMenu.removeGroup could not be cached",75);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__removeGroup_22266_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SubMenu__removeItem(Android_android_view_SubMenu* __this, int arg0)
{
    Android_android_view_SubMenu__removeItem_IMPL_22265(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_SubMenu__removeItem_IMPL_22265(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__removeItem_22265_ID,"android/view/SubMenu","removeItem","(I)V",GetMethodID,"Id for fallback method android.view.SubMenu.removeItem could not be cached",74);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__removeItem_22265_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SubMenu__setGroupCheckable(Android_android_view_SubMenu* __this, int arg0, bool arg1, bool arg2)
{
    Android_android_view_SubMenu__setGroupCheckable_IMPL_22268(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2);
}

void Android_android_view_SubMenu__setGroupCheckable_IMPL_22268(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setGroupCheckable_22268_ID,"android/view/SubMenu","setGroupCheckable","(IZZ)V",GetMethodID,"Id for fallback method android.view.SubMenu.setGroupCheckable could not be cached",81);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setGroupCheckable_22268_ID, ((jint)arg2_), ((jboolean)arg3_), ((jboolean)arg4_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SubMenu__setGroupEnabled(Android_android_view_SubMenu* __this, int arg0, bool arg1)
{
    Android_android_view_SubMenu__setGroupEnabled_IMPL_22270(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Android_android_view_SubMenu__setGroupEnabled_IMPL_22270(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setGroupEnabled_22270_ID,"android/view/SubMenu","setGroupEnabled","(IZ)V",GetMethodID,"Id for fallback method android.view.SubMenu.setGroupEnabled could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setGroupEnabled_22270_ID, ((jint)arg2_), ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SubMenu__setGroupVisible(Android_android_view_SubMenu* __this, int arg0, bool arg1)
{
    Android_android_view_SubMenu__setGroupVisible_IMPL_22269(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Android_android_view_SubMenu__setGroupVisible_IMPL_22269(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setGroupVisible_22269_ID,"android/view/SubMenu","setGroupVisible","(IZ)V",GetMethodID,"Id for fallback method android.view.SubMenu.setGroupVisible could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setGroupVisible_22269_ID, ((jint)arg2_), ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* Android_android_view_SubMenu__setHeaderIcon(Android_android_view_SubMenu* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setHeaderIcon_IMPL_22580(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_SubMenu__setHeaderIcon_1(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setHeaderIcon_IMPL_22579(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__setHeaderIcon_IMPL_22579(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderIcon_22579_ID,"android/view/SubMenu","setHeaderIcon","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderIcon could not be cached",77);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderIcon_22579_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__setHeaderIcon_IMPL_22580(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderIcon_22580_ID,"android/view/SubMenu","setHeaderIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderIcon could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderIcon_22580_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__setHeaderTitle(Android_android_view_SubMenu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setHeaderTitle_IMPL_22578(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_SubMenu__setHeaderTitle_1(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setHeaderTitle_IMPL_22577(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__setHeaderTitle_IMPL_22577(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderTitle_22577_ID,"android/view/SubMenu","setHeaderTitle","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderTitle could not be cached",78);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderTitle_22577_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__setHeaderTitle_IMPL_22578(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderTitle_22578_ID,"android/view/SubMenu","setHeaderTitle","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderTitle could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderTitle_22578_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__setHeaderView(Android_android_view_SubMenu* __this, ::app::Android::android::view::View* arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setHeaderView_IMPL_22581(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_SubMenu__setHeaderView_IMPL_22581(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderView_22581_ID,"android/view/SubMenu","setHeaderView","(Landroid/view/View;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderView could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderView_22581_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__setIcon(Android_android_view_SubMenu* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setIcon_IMPL_22584(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_SubMenu__setIcon_1(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setIcon_IMPL_22583(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__setIcon_IMPL_22583(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setIcon_22583_ID,"android/view/SubMenu","setIcon","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setIcon could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setIcon_22583_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__setIcon_IMPL_22584(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setIcon_22584_ID,"android/view/SubMenu","setIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setIcon could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setIcon_22584_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_SubMenu__setQwertyMode(Android_android_view_SubMenu* __this, bool arg0)
{
    Android_android_view_SubMenu__setQwertyMode_IMPL_22279(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_SubMenu__setQwertyMode_IMPL_22279(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setQwertyMode_22279_ID,"android/view/SubMenu","setQwertyMode","(Z)V",GetMethodID,"Id for fallback method android.view.SubMenu.setQwertyMode could not be cached",77);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setQwertyMode_22279_ID, ((jboolean)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int Android_android_view_SubMenu__size(Android_android_view_SubMenu* __this)
{
    return Android_android_view_SubMenu__size_IMPL_22273(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_SubMenu__size_IMPL_22273(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__size_22273_ID,"android/view/SubMenu","size","()I",GetMethodID,"Id for fallback method android.view.SubMenu.size could not be cached",68);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__size_22273_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_SurfaceHolder__addCallback_22610_ID;
jmethodID Android_android_view_SurfaceHolder__getSurface_22622_ID;
jmethodID Android_android_view_SurfaceHolder__getSurfaceFrame_22621_ID;
jmethodID Android_android_view_SurfaceHolder__isCreating_22612_ID;
jmethodID Android_android_view_SurfaceHolder__lockCanvas_22618_ID;
jmethodID Android_android_view_SurfaceHolder__lockCanvas_22619_ID;
jmethodID Android_android_view_SurfaceHolder__removeCallback_22611_ID;
jmethodID Android_android_view_SurfaceHolder__setFixedSize_22614_ID;
jmethodID Android_android_view_SurfaceHolder__setFormat_22616_ID;
jmethodID Android_android_view_SurfaceHolder__setKeepScreenOn_22617_ID;
jmethodID Android_android_view_SurfaceHolder__setSizeFromLayout_22615_ID;
jmethodID Android_android_view_SurfaceHolder__setType_22613_ID;
jmethodID Android_android_view_SurfaceHolder__unlockCanvasAndPost_22620_ID;

Android_android_view_SurfaceHolder__uType* Android_android_view_SurfaceHolder__typeof()
{
    static ::uStaticStrong<Android_android_view_SurfaceHolder__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_SurfaceHolder__uType*)::uAllocClassType(sizeof(Android_android_view_SurfaceHolder__uType), "Android.Fallbacks.Android_android_view_SurfaceHolder", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_addCallback = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolder__addCallback;
    type->__interface_2.__fp_removeCallback = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolder__removeCallback;
    type->__interface_2.__fp_isCreating = (bool(*)(void*))Android_android_view_SurfaceHolder__isCreating;
    type->__interface_2.__fp_setType = (void(*)(void*, int))Android_android_view_SurfaceHolder__setType;
    type->__interface_2.__fp_setFixedSize = (void(*)(void*, int, int))Android_android_view_SurfaceHolder__setFixedSize;
    type->__interface_2.__fp_setSizeFromLayout = (void(*)(void*))Android_android_view_SurfaceHolder__setSizeFromLayout;
    type->__interface_2.__fp_setFormat = (void(*)(void*, int))Android_android_view_SurfaceHolder__setFormat;
    type->__interface_2.__fp_setKeepScreenOn = (void(*)(void*, bool))Android_android_view_SurfaceHolder__setKeepScreenOn;
    type->__interface_2.__fp_lockCanvas = (::app::Android::android::graphics::Canvas*(*)(void*))Android_android_view_SurfaceHolder__lockCanvas;
    type->__interface_2.__fp_lockCanvas_1 = (::app::Android::android::graphics::Canvas*(*)(void*, ::app::Android::android::graphics::Rect*))Android_android_view_SurfaceHolder__lockCanvas_1;
    type->__interface_2.__fp_unlockCanvasAndPost = (void(*)(void*, ::app::Android::android::graphics::Canvas*))Android_android_view_SurfaceHolder__unlockCanvasAndPost;
    type->__interface_2.__fp_getSurfaceFrame = (::app::Android::android::graphics::Rect*(*)(void*))Android_android_view_SurfaceHolder__getSurfaceFrame;
    type->__interface_2.__fp_getSurface = (::app::Android::android::view::Surface*(*)(void*))Android_android_view_SurfaceHolder__getSurface;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_SurfaceHolder__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_SurfaceHolder__uType, __interface_1),
        ::app::Android::android::view::SurfaceHolder__typeof(), offsetof(Android_android_view_SurfaceHolder__uType, __interface_2));

    type->SetFields(13,
        ::uNewField("addCallback_22610_ID", &Android_android_view_SurfaceHolder__addCallback_22610_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSurface_22622_ID", &Android_android_view_SurfaceHolder__getSurface_22622_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSurfaceFrame_22621_ID", &Android_android_view_SurfaceHolder__getSurfaceFrame_22621_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isCreating_22612_ID", &Android_android_view_SurfaceHolder__isCreating_22612_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("lockCanvas_22618_ID", &Android_android_view_SurfaceHolder__lockCanvas_22618_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("lockCanvas_22619_ID", &Android_android_view_SurfaceHolder__lockCanvas_22619_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("removeCallback_22611_ID", &Android_android_view_SurfaceHolder__removeCallback_22611_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setFixedSize_22614_ID", &Android_android_view_SurfaceHolder__setFixedSize_22614_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setFormat_22616_ID", &Android_android_view_SurfaceHolder__setFormat_22616_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setKeepScreenOn_22617_ID", &Android_android_view_SurfaceHolder__setKeepScreenOn_22617_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setSizeFromLayout_22615_ID", &Android_android_view_SurfaceHolder__setSizeFromLayout_22615_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setType_22613_ID", &Android_android_view_SurfaceHolder__setType_22613_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("unlockCanvasAndPost_22620_ID", &Android_android_view_SurfaceHolder__unlockCanvasAndPost_22620_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(26,
        ::uNewFunctionVoid("addCallback", Android_android_view_SurfaceHolder__addCallback, 0, false, ::app::Android::android::view::SurfaceHolderDLRCallback__typeof()),
        ::uNewFunctionVoid("addCallback_IMPL_22610", Android_android_view_SurfaceHolder__addCallback_IMPL_22610, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getSurface", Android_android_view_SurfaceHolder__getSurface, 0, false, ::app::Android::android::view::Surface__typeof()),
        ::uNewFunction("getSurface_IMPL_22622", Android_android_view_SurfaceHolder__getSurface_IMPL_22622, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getSurfaceFrame", Android_android_view_SurfaceHolder__getSurfaceFrame, 0, false, ::app::Android::android::graphics::Rect__typeof()),
        ::uNewFunction("getSurfaceFrame_IMPL_22621", Android_android_view_SurfaceHolder__getSurfaceFrame_IMPL_22621, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isCreating", Android_android_view_SurfaceHolder__isCreating, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isCreating_IMPL_22612", Android_android_view_SurfaceHolder__isCreating_IMPL_22612, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("lockCanvas", Android_android_view_SurfaceHolder__lockCanvas, 0, false, ::app::Android::android::graphics::Canvas__typeof()),
        ::uNewFunction("lockCanvas", Android_android_view_SurfaceHolder__lockCanvas_1, 0, false, ::app::Android::android::graphics::Canvas__typeof(), ::app::Android::android::graphics::Rect__typeof()),
        ::uNewFunction("lockCanvas_IMPL_22618", Android_android_view_SurfaceHolder__lockCanvas_IMPL_22618, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("lockCanvas_IMPL_22619", Android_android_view_SurfaceHolder__lockCanvas_IMPL_22619, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("removeCallback", Android_android_view_SurfaceHolder__removeCallback, 0, false, ::app::Android::android::view::SurfaceHolderDLRCallback__typeof()),
        ::uNewFunctionVoid("removeCallback_IMPL_22611", Android_android_view_SurfaceHolder__removeCallback_IMPL_22611, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setFixedSize", Android_android_view_SurfaceHolder__setFixedSize, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setFixedSize_IMPL_22614", Android_android_view_SurfaceHolder__setFixedSize_IMPL_22614, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setFormat", Android_android_view_SurfaceHolder__setFormat, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setFormat_IMPL_22616", Android_android_view_SurfaceHolder__setFormat_IMPL_22616, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setKeepScreenOn", Android_android_view_SurfaceHolder__setKeepScreenOn, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setKeepScreenOn_IMPL_22617", Android_android_view_SurfaceHolder__setKeepScreenOn_IMPL_22617, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setSizeFromLayout", Android_android_view_SurfaceHolder__setSizeFromLayout, 0, false),
        ::uNewFunctionVoid("setSizeFromLayout_IMPL_22615", Android_android_view_SurfaceHolder__setSizeFromLayout_IMPL_22615, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("setType", Android_android_view_SurfaceHolder__setType, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setType_IMPL_22613", Android_android_view_SurfaceHolder__setType_IMPL_22613, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("unlockCanvasAndPost", Android_android_view_SurfaceHolder__unlockCanvasAndPost, 0, false, ::app::Android::android::graphics::Canvas__typeof()),
        ::uNewFunctionVoid("unlockCanvasAndPost_IMPL_22620", Android_android_view_SurfaceHolder__unlockCanvasAndPost_IMPL_22620, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_SurfaceHolder__addCallback(Android_android_view_SurfaceHolder* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolder__addCallback_IMPL_22610(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolder__addCallback_IMPL_22610(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__addCallback_22610_ID,"android/view/SurfaceHolder","addCallback","(Landroid/view/SurfaceHolder$Callback;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.addCallback could not be cached",81);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__addCallback_22610_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::android::view::Surface* Android_android_view_SurfaceHolder__getSurface(Android_android_view_SurfaceHolder* __this)
{
    return ::uCast< ::app::Android::android::view::Surface*>(Android_android_view_SurfaceHolder__getSurface_IMPL_22622(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::view::Surface__typeof());
}

::uObject* Android_android_view_SurfaceHolder__getSurface_IMPL_22622(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__getSurface_22622_ID,"android/view/SurfaceHolder","getSurface","()Landroid/view/Surface;",GetMethodID,"Id for fallback method android.view.SurfaceHolder.getSurface could not be cached",80);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__getSurface_22622_ID),result,::app::Android::android::view::Surface__typeof(),::app::Android::android::view::Surface*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::graphics::Rect* Android_android_view_SurfaceHolder__getSurfaceFrame(Android_android_view_SurfaceHolder* __this)
{
    return ::uCast< ::app::Android::android::graphics::Rect*>(Android_android_view_SurfaceHolder__getSurfaceFrame_IMPL_22621(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::graphics::Rect__typeof());
}

::uObject* Android_android_view_SurfaceHolder__getSurfaceFrame_IMPL_22621(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__getSurfaceFrame_22621_ID,"android/view/SurfaceHolder","getSurfaceFrame","()Landroid/graphics/Rect;",GetMethodID,"Id for fallback method android.view.SurfaceHolder.getSurfaceFrame could not be cached",85);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__getSurfaceFrame_22621_ID),result,::app::Android::android::graphics::Rect__typeof(),::app::Android::android::graphics::Rect*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_SurfaceHolder__isCreating(Android_android_view_SurfaceHolder* __this)
{
    return Android_android_view_SurfaceHolder__isCreating_IMPL_22612(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_SurfaceHolder__isCreating_IMPL_22612(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__isCreating_22612_ID,"android/view/SurfaceHolder","isCreating","()Z",GetMethodID,"Id for fallback method android.view.SurfaceHolder.isCreating could not be cached",80);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__isCreating_22612_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::graphics::Canvas* Android_android_view_SurfaceHolder__lockCanvas(Android_android_view_SurfaceHolder* __this)
{
    return ::uCast< ::app::Android::android::graphics::Canvas*>(Android_android_view_SurfaceHolder__lockCanvas_IMPL_22618(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::graphics::Canvas__typeof());
}

::app::Android::android::graphics::Canvas* Android_android_view_SurfaceHolder__lockCanvas_1(Android_android_view_SurfaceHolder* __this, ::app::Android::android::graphics::Rect* arg0)
{
    return ::uCast< ::app::Android::android::graphics::Canvas*>(Android_android_view_SurfaceHolder__lockCanvas_IMPL_22619(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::android::graphics::Canvas__typeof());
}

::uObject* Android_android_view_SurfaceHolder__lockCanvas_IMPL_22618(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__lockCanvas_22618_ID,"android/view/SurfaceHolder","lockCanvas","()Landroid/graphics/Canvas;",GetMethodID,"Id for fallback method android.view.SurfaceHolder.lockCanvas could not be cached",80);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__lockCanvas_22618_ID),result,::app::Android::android::graphics::Canvas__typeof(),::app::Android::android::graphics::Canvas*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SurfaceHolder__lockCanvas_IMPL_22619(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__lockCanvas_22619_ID,"android/view/SurfaceHolder","lockCanvas","(Landroid/graphics/Rect;)Landroid/graphics/Canvas;",GetMethodID,"Id for fallback method android.view.SurfaceHolder.lockCanvas could not be cached",80);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__lockCanvas_22619_ID, _obArg2),result,::app::Android::android::graphics::Canvas__typeof(),::app::Android::android::graphics::Canvas*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_SurfaceHolder__removeCallback(Android_android_view_SurfaceHolder* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolder__removeCallback_IMPL_22611(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolder__removeCallback_IMPL_22611(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__removeCallback_22611_ID,"android/view/SurfaceHolder","removeCallback","(Landroid/view/SurfaceHolder$Callback;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.removeCallback could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__removeCallback_22611_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolder__setFixedSize(Android_android_view_SurfaceHolder* __this, int arg0, int arg1)
{
    Android_android_view_SurfaceHolder__setFixedSize_IMPL_22614(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Android_android_view_SurfaceHolder__setFixedSize_IMPL_22614(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setFixedSize_22614_ID,"android/view/SurfaceHolder","setFixedSize","(II)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setFixedSize could not be cached",82);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setFixedSize_22614_ID, ((jint)arg2_), ((jint)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolder__setFormat(Android_android_view_SurfaceHolder* __this, int arg0)
{
    Android_android_view_SurfaceHolder__setFormat_IMPL_22616(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_SurfaceHolder__setFormat_IMPL_22616(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setFormat_22616_ID,"android/view/SurfaceHolder","setFormat","(I)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setFormat could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setFormat_22616_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolder__setKeepScreenOn(Android_android_view_SurfaceHolder* __this, bool arg0)
{
    Android_android_view_SurfaceHolder__setKeepScreenOn_IMPL_22617(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_SurfaceHolder__setKeepScreenOn_IMPL_22617(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setKeepScreenOn_22617_ID,"android/view/SurfaceHolder","setKeepScreenOn","(Z)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setKeepScreenOn could not be cached",85);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setKeepScreenOn_22617_ID, ((jboolean)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolder__setSizeFromLayout(Android_android_view_SurfaceHolder* __this)
{
    Android_android_view_SurfaceHolder__setSizeFromLayout_IMPL_22615(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_SurfaceHolder__setSizeFromLayout_IMPL_22615(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setSizeFromLayout_22615_ID,"android/view/SurfaceHolder","setSizeFromLayout","()V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setSizeFromLayout could not be cached",87);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setSizeFromLayout_22615_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolder__setType(Android_android_view_SurfaceHolder* __this, int arg0)
{
    Android_android_view_SurfaceHolder__setType_IMPL_22613(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_SurfaceHolder__setType_IMPL_22613(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setType_22613_ID,"android/view/SurfaceHolder","setType","(I)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setType could not be cached",77);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setType_22613_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolder__unlockCanvasAndPost(Android_android_view_SurfaceHolder* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    Android_android_view_SurfaceHolder__unlockCanvasAndPost_IMPL_22620(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolder__unlockCanvasAndPost_IMPL_22620(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__unlockCanvasAndPost_22620_ID,"android/view/SurfaceHolder","unlockCanvasAndPost","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.unlockCanvasAndPost could not be cached",89);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__unlockCanvasAndPost_22620_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_22607_ID;
jmethodID Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_22606_ID;
jmethodID Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_22608_ID;

Android_android_view_SurfaceHolderDLRCallback__uType* Android_android_view_SurfaceHolderDLRCallback__typeof()
{
    static ::uStaticStrong<Android_android_view_SurfaceHolderDLRCallback__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_SurfaceHolderDLRCallback__uType*)::uAllocClassType(sizeof(Android_android_view_SurfaceHolderDLRCallback__uType), "Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_surfaceCreated = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolderDLRCallback__surfaceCreated;
    type->__interface_2.__fp_surfaceChanged = (void(*)(void*, ::uObject*, int, int, int))Android_android_view_SurfaceHolderDLRCallback__surfaceChanged;
    type->__interface_2.__fp_surfaceDestroyed = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback__uType, __interface_1),
        ::app::Android::android::view::SurfaceHolderDLRCallback__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback__uType, __interface_2));

    type->SetFields(3,
        ::uNewField("surfaceChanged_22607_ID", &Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_22607_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("surfaceCreated_22606_ID", &Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_22606_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("surfaceDestroyed_22608_ID", &Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_22608_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("surfaceChanged", Android_android_view_SurfaceHolderDLRCallback__surfaceChanged, 0, false, ::app::Android::android::view::SurfaceHolder__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("surfaceChanged_IMPL_22607", Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_IMPL_22607, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("surfaceCreated", Android_android_view_SurfaceHolderDLRCallback__surfaceCreated, 0, false, ::app::Android::android::view::SurfaceHolder__typeof()),
        ::uNewFunctionVoid("surfaceCreated_IMPL_22606", Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_IMPL_22606, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("surfaceDestroyed", Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed, 0, false, ::app::Android::android::view::SurfaceHolder__typeof()),
        ::uNewFunctionVoid("surfaceDestroyed_IMPL_22608", Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_IMPL_22608, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_SurfaceHolderDLRCallback__surfaceChanged(Android_android_view_SurfaceHolderDLRCallback* __this, ::uObject* arg0, int arg1, int arg2, int arg3)
{
    Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_IMPL_22607(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3);
}

void Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_IMPL_22607(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_22607_ID,"android/view/SurfaceHolder$Callback","surfaceChanged","(Landroid/view/SurfaceHolder;III)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback.surfaceChanged could not be cached",93);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_22607_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolderDLRCallback__surfaceCreated(Android_android_view_SurfaceHolderDLRCallback* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_IMPL_22606(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_IMPL_22606(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_22606_ID,"android/view/SurfaceHolder$Callback","surfaceCreated","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback.surfaceCreated could not be cached",93);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_22606_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed(Android_android_view_SurfaceHolderDLRCallback* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_IMPL_22608(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_IMPL_22608(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_22608_ID,"android/view/SurfaceHolder$Callback","surfaceDestroyed","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback.surfaceDestroyed could not be cached",95);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_22608_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_22607_ID;
jmethodID Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_22606_ID;
jmethodID Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_22608_ID;
jmethodID Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_22609_ID;

Android_android_view_SurfaceHolderDLRCallback2__uType* Android_android_view_SurfaceHolderDLRCallback2__typeof()
{
    static ::uStaticStrong<Android_android_view_SurfaceHolderDLRCallback2__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_SurfaceHolderDLRCallback2__uType*)::uAllocClassType(sizeof(Android_android_view_SurfaceHolderDLRCallback2__uType), "Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2", false, 4, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_surfaceRedrawNeeded = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_surfaceCreated = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated;
    type->__interface_3.__fp_surfaceChanged = (void(*)(void*, ::uObject*, int, int, int))Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged;
    type->__interface_3.__fp_surfaceDestroyed = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback2__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback2__uType, __interface_1),
        ::app::Android::android::view::SurfaceHolderDLRCallback2__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback2__uType, __interface_2),
        ::app::Android::android::view::SurfaceHolderDLRCallback__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback2__uType, __interface_3));

    type->SetFields(4,
        ::uNewField("surfaceChanged_22607_ID", &Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_22607_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("surfaceCreated_22606_ID", &Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_22606_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("surfaceDestroyed_22608_ID", &Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_22608_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("surfaceRedrawNeeded_22609_ID", &Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_22609_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("surfaceChanged", Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged, 0, false, ::app::Android::android::view::SurfaceHolder__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("surfaceChanged_IMPL_22607", Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_IMPL_22607, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("surfaceCreated", Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated, 0, false, ::app::Android::android::view::SurfaceHolder__typeof()),
        ::uNewFunctionVoid("surfaceCreated_IMPL_22606", Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_IMPL_22606, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("surfaceDestroyed", Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed, 0, false, ::app::Android::android::view::SurfaceHolder__typeof()),
        ::uNewFunctionVoid("surfaceDestroyed_IMPL_22608", Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_IMPL_22608, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("surfaceRedrawNeeded", Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded, 0, false, ::app::Android::android::view::SurfaceHolder__typeof()),
        ::uNewFunctionVoid("surfaceRedrawNeeded_IMPL_22609", Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_IMPL_22609, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged(Android_android_view_SurfaceHolderDLRCallback2* __this, ::uObject* arg0, int arg1, int arg2, int arg3)
{
    Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_IMPL_22607(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_IMPL_22607(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_22607_ID,"android/view/SurfaceHolder$Callback2","surfaceChanged","(Landroid/view/SurfaceHolder;III)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback2.surfaceChanged could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_22607_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated(Android_android_view_SurfaceHolderDLRCallback2* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_IMPL_22606(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_IMPL_22606(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_22606_ID,"android/view/SurfaceHolder$Callback2","surfaceCreated","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback2.surfaceCreated could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_22606_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed(Android_android_view_SurfaceHolderDLRCallback2* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_IMPL_22608(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_IMPL_22608(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_22608_ID,"android/view/SurfaceHolder$Callback2","surfaceDestroyed","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback2.surfaceDestroyed could not be cached",96);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_22608_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded(Android_android_view_SurfaceHolderDLRCallback2* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_IMPL_22609(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_IMPL_22609(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_22609_ID,"android/view/SurfaceHolder$Callback2","surfaceRedrawNeeded","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback2.surfaceRedrawNeeded could not be cached",99);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_22609_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_22642_ID;
jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_22644_ID;
jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_22643_ID;
jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_22645_ID;

Android_android_view_TextureViewDLRSurfaceTextureListener__uType* Android_android_view_TextureViewDLRSurfaceTextureListener__typeof()
{
    static ::uStaticStrong<Android_android_view_TextureViewDLRSurfaceTextureListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_TextureViewDLRSurfaceTextureListener__uType*)::uAllocClassType(sizeof(Android_android_view_TextureViewDLRSurfaceTextureListener__uType), "Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTextureListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onSurfaceTextureAvailable = (void(*)(void*, ::app::Android::android::graphics::SurfaceTexture*, int, int))Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable;
    type->__interface_2.__fp_onSurfaceTextureSizeChanged = (void(*)(void*, ::app::Android::android::graphics::SurfaceTexture*, int, int))Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged;
    type->__interface_2.__fp_onSurfaceTextureDestroyed = (bool(*)(void*, ::app::Android::android::graphics::SurfaceTexture*))Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed;
    type->__interface_2.__fp_onSurfaceTextureUpdated = (void(*)(void*, ::app::Android::android::graphics::SurfaceTexture*))Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_TextureViewDLRSurfaceTextureListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_TextureViewDLRSurfaceTextureListener__uType, __interface_1),
        ::app::Android::android::view::TextureViewDLRSurfaceTextureListener__typeof(), offsetof(Android_android_view_TextureViewDLRSurfaceTextureListener__uType, __interface_2));

    type->SetFields(4,
        ::uNewField("onSurfaceTextureAvailable_22642_ID", &Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_22642_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onSurfaceTextureDestroyed_22644_ID", &Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_22644_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onSurfaceTextureSizeChanged_22643_ID", &Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_22643_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onSurfaceTextureUpdated_22645_ID", &Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_22645_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("onSurfaceTextureAvailable", Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable, 0, false, ::app::Android::android::graphics::SurfaceTexture__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onSurfaceTextureAvailable_IMPL_22642", Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_IMPL_22642, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("onSurfaceTextureDestroyed", Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::graphics::SurfaceTexture__typeof()),
        ::uNewFunction("onSurfaceTextureDestroyed_IMPL_22644", Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_IMPL_22644, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onSurfaceTextureSizeChanged", Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged, 0, false, ::app::Android::android::graphics::SurfaceTexture__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onSurfaceTextureSizeChanged_IMPL_22643", Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_IMPL_22643, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onSurfaceTextureUpdated", Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated, 0, false, ::app::Android::android::graphics::SurfaceTexture__typeof()),
        ::uNewFunctionVoid("onSurfaceTextureUpdated_IMPL_22645", Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_IMPL_22645, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2)
{
    Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_IMPL_22642(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_IMPL_22642(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_22642_ID,"android/view/TextureView$SurfaceTextureListener","onSurfaceTextureAvailable","(Landroid/graphics/SurfaceTexture;II)V",GetMethodID,"Id for fallback method android.view.TextureView$SurfaceTextureListener.onSurfaceTextureAvailable could not be cached",116);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_22642_ID, _obArg2, ((jint)arg3_), ((jint)arg4_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* arg0)
{
    return Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_IMPL_22644(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_IMPL_22644(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_22644_ID,"android/view/TextureView$SurfaceTextureListener","onSurfaceTextureDestroyed","(Landroid/graphics/SurfaceTexture;)Z",GetMethodID,"Id for fallback method android.view.TextureView$SurfaceTextureListener.onSurfaceTextureDestroyed could not be cached",116);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_22644_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2)
{
    Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_IMPL_22643(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_IMPL_22643(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_22643_ID,"android/view/TextureView$SurfaceTextureListener","onSurfaceTextureSizeChanged","(Landroid/graphics/SurfaceTexture;II)V",GetMethodID,"Id for fallback method android.view.TextureView$SurfaceTextureListener.onSurfaceTextureSizeChanged could not be cached",118);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_22643_ID, _obArg2, ((jint)arg3_), ((jint)arg4_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* arg0)
{
    Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_IMPL_22645(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_IMPL_22645(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_22645_ID,"android/view/TextureView$SurfaceTextureListener","onSurfaceTextureUpdated","(Landroid/graphics/SurfaceTexture;)V",GetMethodID,"Id for fallback method android.view.TextureView$SurfaceTextureListener.onSurfaceTextureUpdated could not be cached",114);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_22645_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow_22717_ID;
jmethodID Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow_22718_ID;

Android_android_view_ViewDLROnAttachStateChangeListener__uType* Android_android_view_ViewDLROnAttachStateChangeListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnAttachStateChangeListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnAttachStateChangeListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnAttachStateChangeListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChangeListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onViewAttachedToWindow = (void(*)(void*, ::app::Android::android::view::View*))Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow;
    type->__interface_2.__fp_onViewDetachedFromWindow = (void(*)(void*, ::app::Android::android::view::View*))Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnAttachStateChangeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnAttachStateChangeListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnAttachStateChangeListener__typeof(), offsetof(Android_android_view_ViewDLROnAttachStateChangeListener__uType, __interface_2));

    type->SetFields(2,
        ::uNewField("onViewAttachedToWindow_22717_ID", &Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow_22717_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onViewDetachedFromWindow_22718_ID", &Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow_22718_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("onViewAttachedToWindow", Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("onViewAttachedToWindow_IMPL_22717", Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow_IMPL_22717, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onViewDetachedFromWindow", Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("onViewDetachedFromWindow_IMPL_22718", Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow_IMPL_22718, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow(Android_android_view_ViewDLROnAttachStateChangeListener* __this, ::app::Android::android::view::View* arg0)
{
    Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow_IMPL_22717(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow_IMPL_22717(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow_22717_ID,"android/view/View$OnAttachStateChangeListener","onViewAttachedToWindow","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.View$OnAttachStateChangeListener.onViewAttachedToWindow could not be cached",111);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow_22717_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow(Android_android_view_ViewDLROnAttachStateChangeListener* __this, ::app::Android::android::view::View* arg0)
{
    Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow_IMPL_22718(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow_IMPL_22718(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow_22718_ID,"android/view/View$OnAttachStateChangeListener","onViewDetachedFromWindow","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.View$OnAttachStateChangeListener.onViewDetachedFromWindow could not be cached",113);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow_22718_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnClickListener__onClick_22719_ID;

Android_android_view_ViewDLROnClickListener__uType* Android_android_view_ViewDLROnClickListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnClickListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnClickListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnClickListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnClickListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onClick = (void(*)(void*, ::app::Android::android::view::View*))Android_android_view_ViewDLROnClickListener__onClick;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnClickListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnClickListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnClickListener__typeof(), offsetof(Android_android_view_ViewDLROnClickListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onClick_22719_ID", &Android_android_view_ViewDLROnClickListener__onClick_22719_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("onClick", Android_android_view_ViewDLROnClickListener__onClick, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("onClick_IMPL_22719", Android_android_view_ViewDLROnClickListener__onClick_IMPL_22719, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_ViewDLROnClickListener__onClick(Android_android_view_ViewDLROnClickListener* __this, ::app::Android::android::view::View* arg0)
{
    Android_android_view_ViewDLROnClickListener__onClick_IMPL_22719(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_ViewDLROnClickListener__onClick_IMPL_22719(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnClickListener__onClick_22719_ID,"android/view/View$OnClickListener","onClick","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.View$OnClickListener.onClick could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnClickListener__onClick_22719_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu_22720_ID;

Android_android_view_ViewDLROnCreateContextMenuListener__uType* Android_android_view_ViewDLROnCreateContextMenuListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnCreateContextMenuListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnCreateContextMenuListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnCreateContextMenuListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMenuListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onCreateContextMenu = (void(*)(void*, ::uObject*, ::app::Android::android::view::View*, ::uObject*))Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnCreateContextMenuListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnCreateContextMenuListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnCreateContextMenuListener__typeof(), offsetof(Android_android_view_ViewDLROnCreateContextMenuListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onCreateContextMenu_22720_ID", &Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu_22720_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("onCreateContextMenu", Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu, 0, false, ::app::Android::android::view::ContextMenu__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::view::ContextMenuDLRContextMenuInfo__typeof()),
        ::uNewFunctionVoid("onCreateContextMenu_IMPL_22720", Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu_IMPL_22720, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu(Android_android_view_ViewDLROnCreateContextMenuListener* __this, ::uObject* arg0, ::app::Android::android::view::View* arg1, ::uObject* arg2)
{
    Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu_IMPL_22720(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, (::uObject*)arg2);
}

void Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu_IMPL_22720(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu_22720_ID,"android/view/View$OnCreateContextMenuListener","onCreateContextMenu","(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",GetMethodID,"Id for fallback method android.view.View$OnCreateContextMenuListener.onCreateContextMenu could not be cached",108);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnCreateContextMenuListener__onCreateContextMenu_22720_ID, _obArg2, _obArg3, _obArg4);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnDragListener__onDrag_22721_ID;

Android_android_view_ViewDLROnDragListener__uType* Android_android_view_ViewDLROnDragListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnDragListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnDragListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnDragListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnDragListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onDrag = (bool(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::DragEvent*))Android_android_view_ViewDLROnDragListener__onDrag;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnDragListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnDragListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnDragListener__typeof(), offsetof(Android_android_view_ViewDLROnDragListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onDrag_22721_ID", &Android_android_view_ViewDLROnDragListener__onDrag_22721_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("onDrag", Android_android_view_ViewDLROnDragListener__onDrag, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::view::DragEvent__typeof()),
        ::uNewFunction("onDrag_IMPL_22721", Android_android_view_ViewDLROnDragListener__onDrag_IMPL_22721, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_view_ViewDLROnDragListener__onDrag(Android_android_view_ViewDLROnDragListener* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::DragEvent* arg1)
{
    return Android_android_view_ViewDLROnDragListener__onDrag_IMPL_22721(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

bool Android_android_view_ViewDLROnDragListener__onDrag_IMPL_22721(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnDragListener__onDrag_22721_ID,"android/view/View$OnDragListener","onDrag","(Landroid/view/View;Landroid/view/DragEvent;)Z",GetMethodID,"Id for fallback method android.view.View$OnDragListener.onDrag could not be cached",82);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnDragListener__onDrag_22721_ID, _obArg2, _obArg3));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_22722_ID;

Android_android_view_ViewDLROnFocusChangeListener__uType* Android_android_view_ViewDLROnFocusChangeListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnFocusChangeListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnFocusChangeListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnFocusChangeListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onFocusChange = (void(*)(void*, ::app::Android::android::view::View*, bool))Android_android_view_ViewDLROnFocusChangeListener__onFocusChange;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnFocusChangeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnFocusChangeListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnFocusChangeListener__typeof(), offsetof(Android_android_view_ViewDLROnFocusChangeListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onFocusChange_22722_ID", &Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_22722_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("onFocusChange", Android_android_view_ViewDLROnFocusChangeListener__onFocusChange, 0, false, ::app::Android::android::view::View__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("onFocusChange_IMPL_22722", Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_IMPL_22722, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_ViewDLROnFocusChangeListener__onFocusChange(Android_android_view_ViewDLROnFocusChangeListener* __this, ::app::Android::android::view::View* arg0, bool arg1)
{
    Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_IMPL_22722(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_IMPL_22722(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_22722_ID,"android/view/View$OnFocusChangeListener","onFocusChange","(Landroid/view/View;Z)V",GetMethodID,"Id for fallback method android.view.View$OnFocusChangeListener.onFocusChange could not be cached",96);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_22722_ID, _obArg2, ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion_22723_ID;

Android_android_view_ViewDLROnGenericMotionListener__uType* Android_android_view_ViewDLROnGenericMotionListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnGenericMotionListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnGenericMotionListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnGenericMotionListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onGenericMotion = (bool(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnGenericMotionListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnGenericMotionListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnGenericMotionListener__typeof(), offsetof(Android_android_view_ViewDLROnGenericMotionListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onGenericMotion_22723_ID", &Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion_22723_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("onGenericMotion", Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::view::MotionEvent__typeof()),
        ::uNewFunction("onGenericMotion_IMPL_22723", Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion_IMPL_22723, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion(Android_android_view_ViewDLROnGenericMotionListener* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::MotionEvent* arg1)
{
    return Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion_IMPL_22723(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

bool Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion_IMPL_22723(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion_22723_ID,"android/view/View$OnGenericMotionListener","onGenericMotion","(Landroid/view/View;Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.view.View$OnGenericMotionListener.onGenericMotion could not be cached",100);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnGenericMotionListener__onGenericMotion_22723_ID, _obArg2, _obArg3));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnHoverListener__onHover_22724_ID;

Android_android_view_ViewDLROnHoverListener__uType* Android_android_view_ViewDLROnHoverListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnHoverListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnHoverListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnHoverListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnHoverListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onHover = (bool(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))Android_android_view_ViewDLROnHoverListener__onHover;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnHoverListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnHoverListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnHoverListener__typeof(), offsetof(Android_android_view_ViewDLROnHoverListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onHover_22724_ID", &Android_android_view_ViewDLROnHoverListener__onHover_22724_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("onHover", Android_android_view_ViewDLROnHoverListener__onHover, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::view::MotionEvent__typeof()),
        ::uNewFunction("onHover_IMPL_22724", Android_android_view_ViewDLROnHoverListener__onHover_IMPL_22724, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_view_ViewDLROnHoverListener__onHover(Android_android_view_ViewDLROnHoverListener* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::MotionEvent* arg1)
{
    return Android_android_view_ViewDLROnHoverListener__onHover_IMPL_22724(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

bool Android_android_view_ViewDLROnHoverListener__onHover_IMPL_22724(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnHoverListener__onHover_22724_ID,"android/view/View$OnHoverListener","onHover","(Landroid/view/View;Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.view.View$OnHoverListener.onHover could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnHoverListener__onHover_22724_ID, _obArg2, _obArg3));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnKeyListener__onKey_22725_ID;

Android_android_view_ViewDLROnKeyListener__uType* Android_android_view_ViewDLROnKeyListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnKeyListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnKeyListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnKeyListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnKeyListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onKey = (bool(*)(void*, ::app::Android::android::view::View*, int, ::app::Android::android::view::KeyEvent*))Android_android_view_ViewDLROnKeyListener__onKey;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnKeyListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnKeyListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnKeyListener__typeof(), offsetof(Android_android_view_ViewDLROnKeyListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onKey_22725_ID", &Android_android_view_ViewDLROnKeyListener__onKey_22725_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("onKey", Android_android_view_ViewDLROnKeyListener__onKey, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::View__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::view::KeyEvent__typeof()),
        ::uNewFunction("onKey_IMPL_22725", Android_android_view_ViewDLROnKeyListener__onKey_IMPL_22725, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_view_ViewDLROnKeyListener__onKey(Android_android_view_ViewDLROnKeyListener* __this, ::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2)
{
    return Android_android_view_ViewDLROnKeyListener__onKey_IMPL_22725(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, (::uObject*)arg2);
}

bool Android_android_view_ViewDLROnKeyListener__onKey_IMPL_22725(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnKeyListener__onKey_22725_ID,"android/view/View$OnKeyListener","onKey","(Landroid/view/View;ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.view.View$OnKeyListener.onKey could not be cached",80);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnKeyListener__onKey_22725_ID, _obArg2, ((jint)arg3_), _obArg4));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange_22726_ID;

Android_android_view_ViewDLROnLayoutChangeListener__uType* Android_android_view_ViewDLROnLayoutChangeListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnLayoutChangeListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnLayoutChangeListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnLayoutChangeListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onLayoutChange = (void(*)(void*, ::app::Android::android::view::View*, int, int, int, int, int, int, int, int))Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnLayoutChangeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnLayoutChangeListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnLayoutChangeListener__typeof(), offsetof(Android_android_view_ViewDLROnLayoutChangeListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onLayoutChange_22726_ID", &Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange_22726_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("onLayoutChange", Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange, 0, false, ::app::Android::android::view::View__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onLayoutChange_IMPL_22726", Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange_IMPL_22726, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange(Android_android_view_ViewDLROnLayoutChangeListener* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8)
{
    Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange_IMPL_22726(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

void Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange_IMPL_22726(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_, int arg7_, int arg8_, int arg9_, int arg10_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange_22726_ID,"android/view/View$OnLayoutChangeListener","onLayoutChange","(Landroid/view/View;IIIIIIII)V",GetMethodID,"Id for fallback method android.view.View$OnLayoutChangeListener.onLayoutChange could not be cached",98);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnLayoutChangeListener__onLayoutChange_22726_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_), ((jint)arg7_), ((jint)arg8_), ((jint)arg9_), ((jint)arg10_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnLongClickListener__onLongClick_22727_ID;

Android_android_view_ViewDLROnLongClickListener__uType* Android_android_view_ViewDLROnLongClickListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnLongClickListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnLongClickListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnLongClickListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onLongClick = (bool(*)(void*, ::app::Android::android::view::View*))Android_android_view_ViewDLROnLongClickListener__onLongClick;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnLongClickListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnLongClickListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnLongClickListener__typeof(), offsetof(Android_android_view_ViewDLROnLongClickListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onLongClick_22727_ID", &Android_android_view_ViewDLROnLongClickListener__onLongClick_22727_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("onLongClick", Android_android_view_ViewDLROnLongClickListener__onLongClick, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::View__typeof()),
        ::uNewFunction("onLongClick_IMPL_22727", Android_android_view_ViewDLROnLongClickListener__onLongClick_IMPL_22727, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_view_ViewDLROnLongClickListener__onLongClick(Android_android_view_ViewDLROnLongClickListener* __this, ::app::Android::android::view::View* arg0)
{
    return Android_android_view_ViewDLROnLongClickListener__onLongClick_IMPL_22727(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_ViewDLROnLongClickListener__onLongClick_IMPL_22727(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnLongClickListener__onLongClick_22727_ID,"android/view/View$OnLongClickListener","onLongClick","(Landroid/view/View;)Z",GetMethodID,"Id for fallback method android.view.View$OnLongClickListener.onLongClick could not be cached",92);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnLongClickListener__onLongClick_22727_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange_22728_ID;

Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__uType* Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibilityChangeListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onSystemUiVisibilityChange = (void(*)(void*, int))Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnSystemUiVisibilityChangeListener__typeof(), offsetof(Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onSystemUiVisibilityChange_22728_ID", &Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange_22728_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("onSystemUiVisibilityChange", Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onSystemUiVisibilityChange_IMPL_22728", Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange_IMPL_22728, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange(Android_android_view_ViewDLROnSystemUiVisibilityChangeListener* __this, int arg0)
{
    Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange_IMPL_22728(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange_IMPL_22728(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange_22728_ID,"android/view/View$OnSystemUiVisibilityChangeListener","onSystemUiVisibilityChange","(I)V",GetMethodID,"Id for fallback method android.view.View$OnSystemUiVisibilityChangeListener.onSystemUiVisibilityChange could not be cached",122);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnSystemUiVisibilityChangeListener__onSystemUiVisibilityChange_22728_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnTouchListener__onTouch_22729_ID;

Android_android_view_ViewDLROnTouchListener__uType* Android_android_view_ViewDLROnTouchListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnTouchListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnTouchListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnTouchListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnTouchListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onTouch = (bool(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))Android_android_view_ViewDLROnTouchListener__onTouch;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnTouchListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnTouchListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnTouchListener__typeof(), offsetof(Android_android_view_ViewDLROnTouchListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onTouch_22729_ID", &Android_android_view_ViewDLROnTouchListener__onTouch_22729_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("onTouch", Android_android_view_ViewDLROnTouchListener__onTouch, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::view::MotionEvent__typeof()),
        ::uNewFunction("onTouch_IMPL_22729", Android_android_view_ViewDLROnTouchListener__onTouch_IMPL_22729, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_view_ViewDLROnTouchListener__onTouch(Android_android_view_ViewDLROnTouchListener* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::MotionEvent* arg1)
{
    return Android_android_view_ViewDLROnTouchListener__onTouch_IMPL_22729(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

bool Android_android_view_ViewDLROnTouchListener__onTouch_IMPL_22729(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnTouchListener__onTouch_22729_ID,"android/view/View$OnTouchListener","onTouch","(Landroid/view/View;Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.view.View$OnTouchListener.onTouch could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnTouchListener__onTouch_22729_ID, _obArg2, _obArg3));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_view_ViewGroup__uType* Android_android_view_ViewGroup__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewGroup__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewGroup__uType*)::uAllocClassType(sizeof(Android_android_view_ViewGroup__uType), "Android.Fallbacks.Android_android_view_ViewGroup", false, 3, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroup__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewGroup__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewGroup__uType, __interface_1),
        ::app::Android::android::view::ViewParent__typeof(), offsetof(Android_android_view_ViewGroup__uType, __interface_2));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded_23350_ID;
jmethodID Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved_23351_ID;

Android_android_view_ViewGroupDLROnHierarchyChangeListener__uType* Android_android_view_ViewGroupDLROnHierarchyChangeListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewGroupDLROnHierarchyChangeListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewGroupDLROnHierarchyChangeListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewGroupDLROnHierarchyChangeListener__uType), "Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyChangeListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onChildViewAdded = (void(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::View*))Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded;
    type->__interface_2.__fp_onChildViewRemoved = (void(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::View*))Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewGroupDLROnHierarchyChangeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewGroupDLROnHierarchyChangeListener__uType, __interface_1),
        ::app::Android::android::view::ViewGroupDLROnHierarchyChangeListener__typeof(), offsetof(Android_android_view_ViewGroupDLROnHierarchyChangeListener__uType, __interface_2));

    type->SetFields(2,
        ::uNewField("onChildViewAdded_23350_ID", &Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded_23350_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onChildViewRemoved_23351_ID", &Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved_23351_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("onChildViewAdded", Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded, 0, false, ::app::Android::android::view::View__typeof(), ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("onChildViewAdded_IMPL_23350", Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded_IMPL_23350, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onChildViewRemoved", Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved, 0, false, ::app::Android::android::view::View__typeof(), ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("onChildViewRemoved_IMPL_23351", Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved_IMPL_23351, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded(Android_android_view_ViewGroupDLROnHierarchyChangeListener* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1)
{
    Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded_IMPL_23350(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded_IMPL_23350(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded_23350_ID,"android/view/ViewGroup$OnHierarchyChangeListener","onChildViewAdded","(Landroid/view/View;Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewGroup$OnHierarchyChangeListener.onChildViewAdded could not be cached",108);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewAdded_23350_ID, _obArg2, _obArg3);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved(Android_android_view_ViewGroupDLROnHierarchyChangeListener* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1)
{
    Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved_IMPL_23351(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved_IMPL_23351(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved_23351_ID,"android/view/ViewGroup$OnHierarchyChangeListener","onChildViewRemoved","(Landroid/view/View;Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewGroup$OnHierarchyChangeListener.onChildViewRemoved could not be cached",110);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewGroupDLROnHierarchyChangeListener__onChildViewRemoved_23351_ID, _obArg2, _obArg3);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewParent__bringChildToFront_23532_ID;
jmethodID Android_android_view_ViewParent__canResolveLayoutDirection_23545_ID;
jmethodID Android_android_view_ViewParent__canResolveTextAlignment_23551_ID;
jmethodID Android_android_view_ViewParent__canResolveTextDirection_23548_ID;
jmethodID Android_android_view_ViewParent__childDrawableStateChanged_23537_ID;
jmethodID Android_android_view_ViewParent__childHasTransientStateChanged_23541_ID;
jmethodID Android_android_view_ViewParent__clearChildFocus_23529_ID;
jmethodID Android_android_view_ViewParent__createContextMenu_23535_ID;
jmethodID Android_android_view_ViewParent__focusableViewAvailable_23533_ID;
jmethodID Android_android_view_ViewParent__focusSearch_23531_ID;
jmethodID Android_android_view_ViewParent__getChildVisibleRect_23530_ID;
jmethodID Android_android_view_ViewParent__getLayoutDirection_23547_ID;
jmethodID Android_android_view_ViewParent__getParent_23526_ID;
jmethodID Android_android_view_ViewParent__getParentForAccessibility_23543_ID;
jmethodID Android_android_view_ViewParent__getTextAlignment_23553_ID;
jmethodID Android_android_view_ViewParent__getTextDirection_23550_ID;
jmethodID Android_android_view_ViewParent__invalidateChild_23524_ID;
jmethodID Android_android_view_ViewParent__invalidateChildInParent_23525_ID;
jmethodID Android_android_view_ViewParent__isLayoutDirectionResolved_23546_ID;
jmethodID Android_android_view_ViewParent__isLayoutRequested_23522_ID;
jmethodID Android_android_view_ViewParent__isTextAlignmentResolved_23552_ID;
jmethodID Android_android_view_ViewParent__isTextDirectionResolved_23549_ID;
jmethodID Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged_23544_ID;
jmethodID Android_android_view_ViewParent__recomputeViewAttributes_23528_ID;
jmethodID Android_android_view_ViewParent__requestChildFocus_23527_ID;
jmethodID Android_android_view_ViewParent__requestChildRectangleOnScreen_23539_ID;
jmethodID Android_android_view_ViewParent__requestDisallowInterceptTouchEvent_23538_ID;
jmethodID Android_android_view_ViewParent__requestFitSystemWindows_23542_ID;
jmethodID Android_android_view_ViewParent__requestLayout_23521_ID;
jmethodID Android_android_view_ViewParent__requestSendAccessibilityEvent_23540_ID;
jmethodID Android_android_view_ViewParent__requestTransparentRegion_23523_ID;
jmethodID Android_android_view_ViewParent__showContextMenuForChild_23534_ID;
jmethodID Android_android_view_ViewParent__startActionModeForChild_23536_ID;

Android_android_view_ViewParent__uType* Android_android_view_ViewParent__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewParent__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewParent__uType*)::uAllocClassType(sizeof(Android_android_view_ViewParent__uType), "Android.Fallbacks.Android_android_view_ViewParent", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_requestLayout = (void(*)(void*))Android_android_view_ViewParent__requestLayout;
    type->__interface_2.__fp_isLayoutRequested = (bool(*)(void*))Android_android_view_ViewParent__isLayoutRequested;
    type->__interface_2.__fp_requestTransparentRegion = (void(*)(void*, ::app::Android::android::view::View*))Android_android_view_ViewParent__requestTransparentRegion;
    type->__interface_2.__fp_invalidateChild = (void(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*))Android_android_view_ViewParent__invalidateChild;
    type->__interface_2.__fp_invalidateChildInParent = (::uObject*(*)(void*, ::app::Android::Runtime::IntArray*, ::app::Android::android::graphics::Rect*))Android_android_view_ViewParent__invalidateChildInParent;
    type->__interface_2.__fp_getParent = (::uObject*(*)(void*))Android_android_view_ViewParent__getParent;
    type->__interface_2.__fp_requestChildFocus = (void(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::View*))Android_android_view_ViewParent__requestChildFocus;
    type->__interface_2.__fp_recomputeViewAttributes = (void(*)(void*, ::app::Android::android::view::View*))Android_android_view_ViewParent__recomputeViewAttributes;
    type->__interface_2.__fp_clearChildFocus = (void(*)(void*, ::app::Android::android::view::View*))Android_android_view_ViewParent__clearChildFocus;
    type->__interface_2.__fp_getChildVisibleRect = (bool(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*, ::app::Android::android::graphics::Point*))Android_android_view_ViewParent__getChildVisibleRect;
    type->__interface_2.__fp_focusSearch = (::app::Android::android::view::View*(*)(void*, ::app::Android::android::view::View*, int))Android_android_view_ViewParent__focusSearch;
    type->__interface_2.__fp_bringChildToFront = (void(*)(void*, ::app::Android::android::view::View*))Android_android_view_ViewParent__bringChildToFront;
    type->__interface_2.__fp_focusableViewAvailable = (void(*)(void*, ::app::Android::android::view::View*))Android_android_view_ViewParent__focusableViewAvailable;
    type->__interface_2.__fp_showContextMenuForChild = (bool(*)(void*, ::app::Android::android::view::View*))Android_android_view_ViewParent__showContextMenuForChild;
    type->__interface_2.__fp_createContextMenu = (void(*)(void*, ::uObject*))Android_android_view_ViewParent__createContextMenu;
    type->__interface_2.__fp_startActionModeForChild = (::app::Android::android::view::ActionMode*(*)(void*, ::app::Android::android::view::View*, ::uObject*))Android_android_view_ViewParent__startActionModeForChild;
    type->__interface_2.__fp_childDrawableStateChanged = (void(*)(void*, ::app::Android::android::view::View*))Android_android_view_ViewParent__childDrawableStateChanged;
    type->__interface_2.__fp_requestDisallowInterceptTouchEvent = (void(*)(void*, bool))Android_android_view_ViewParent__requestDisallowInterceptTouchEvent;
    type->__interface_2.__fp_requestChildRectangleOnScreen = (bool(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*, bool))Android_android_view_ViewParent__requestChildRectangleOnScreen;
    type->__interface_2.__fp_requestSendAccessibilityEvent = (bool(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))Android_android_view_ViewParent__requestSendAccessibilityEvent;
    type->__interface_2.__fp_childHasTransientStateChanged = (void(*)(void*, ::app::Android::android::view::View*, bool))Android_android_view_ViewParent__childHasTransientStateChanged;
    type->__interface_2.__fp_requestFitSystemWindows = (void(*)(void*))Android_android_view_ViewParent__requestFitSystemWindows;
    type->__interface_2.__fp_getParentForAccessibility = (::uObject*(*)(void*))Android_android_view_ViewParent__getParentForAccessibility;
    type->__interface_2.__fp_notifySubtreeAccessibilityStateChanged = (void(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::View*, int))Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged;
    type->__interface_2.__fp_canResolveLayoutDirection = (bool(*)(void*))Android_android_view_ViewParent__canResolveLayoutDirection;
    type->__interface_2.__fp_isLayoutDirectionResolved = (bool(*)(void*))Android_android_view_ViewParent__isLayoutDirectionResolved;
    type->__interface_2.__fp_getLayoutDirection = (int(*)(void*))Android_android_view_ViewParent__getLayoutDirection;
    type->__interface_2.__fp_canResolveTextDirection = (bool(*)(void*))Android_android_view_ViewParent__canResolveTextDirection;
    type->__interface_2.__fp_isTextDirectionResolved = (bool(*)(void*))Android_android_view_ViewParent__isTextDirectionResolved;
    type->__interface_2.__fp_getTextDirection = (int(*)(void*))Android_android_view_ViewParent__getTextDirection;
    type->__interface_2.__fp_canResolveTextAlignment = (bool(*)(void*))Android_android_view_ViewParent__canResolveTextAlignment;
    type->__interface_2.__fp_isTextAlignmentResolved = (bool(*)(void*))Android_android_view_ViewParent__isTextAlignmentResolved;
    type->__interface_2.__fp_getTextAlignment = (int(*)(void*))Android_android_view_ViewParent__getTextAlignment;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewParent__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewParent__uType, __interface_1),
        ::app::Android::android::view::ViewParent__typeof(), offsetof(Android_android_view_ViewParent__uType, __interface_2));

    type->SetFields(33,
        ::uNewField("bringChildToFront_23532_ID", &Android_android_view_ViewParent__bringChildToFront_23532_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("canResolveLayoutDirection_23545_ID", &Android_android_view_ViewParent__canResolveLayoutDirection_23545_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("canResolveTextAlignment_23551_ID", &Android_android_view_ViewParent__canResolveTextAlignment_23551_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("canResolveTextDirection_23548_ID", &Android_android_view_ViewParent__canResolveTextDirection_23548_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("childDrawableStateChanged_23537_ID", &Android_android_view_ViewParent__childDrawableStateChanged_23537_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("childHasTransientStateChanged_23541_ID", &Android_android_view_ViewParent__childHasTransientStateChanged_23541_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("clearChildFocus_23529_ID", &Android_android_view_ViewParent__clearChildFocus_23529_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("createContextMenu_23535_ID", &Android_android_view_ViewParent__createContextMenu_23535_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("focusableViewAvailable_23533_ID", &Android_android_view_ViewParent__focusableViewAvailable_23533_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("focusSearch_23531_ID", &Android_android_view_ViewParent__focusSearch_23531_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getChildVisibleRect_23530_ID", &Android_android_view_ViewParent__getChildVisibleRect_23530_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getLayoutDirection_23547_ID", &Android_android_view_ViewParent__getLayoutDirection_23547_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getParent_23526_ID", &Android_android_view_ViewParent__getParent_23526_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getParentForAccessibility_23543_ID", &Android_android_view_ViewParent__getParentForAccessibility_23543_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getTextAlignment_23553_ID", &Android_android_view_ViewParent__getTextAlignment_23553_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getTextDirection_23550_ID", &Android_android_view_ViewParent__getTextDirection_23550_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("invalidateChild_23524_ID", &Android_android_view_ViewParent__invalidateChild_23524_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("invalidateChildInParent_23525_ID", &Android_android_view_ViewParent__invalidateChildInParent_23525_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isLayoutDirectionResolved_23546_ID", &Android_android_view_ViewParent__isLayoutDirectionResolved_23546_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isLayoutRequested_23522_ID", &Android_android_view_ViewParent__isLayoutRequested_23522_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isTextAlignmentResolved_23552_ID", &Android_android_view_ViewParent__isTextAlignmentResolved_23552_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isTextDirectionResolved_23549_ID", &Android_android_view_ViewParent__isTextDirectionResolved_23549_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("notifySubtreeAccessibilityStateChanged_23544_ID", &Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged_23544_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("recomputeViewAttributes_23528_ID", &Android_android_view_ViewParent__recomputeViewAttributes_23528_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestChildFocus_23527_ID", &Android_android_view_ViewParent__requestChildFocus_23527_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestChildRectangleOnScreen_23539_ID", &Android_android_view_ViewParent__requestChildRectangleOnScreen_23539_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestDisallowInterceptTouchEvent_23538_ID", &Android_android_view_ViewParent__requestDisallowInterceptTouchEvent_23538_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestFitSystemWindows_23542_ID", &Android_android_view_ViewParent__requestFitSystemWindows_23542_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestLayout_23521_ID", &Android_android_view_ViewParent__requestLayout_23521_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestSendAccessibilityEvent_23540_ID", &Android_android_view_ViewParent__requestSendAccessibilityEvent_23540_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestTransparentRegion_23523_ID", &Android_android_view_ViewParent__requestTransparentRegion_23523_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("showContextMenuForChild_23534_ID", &Android_android_view_ViewParent__showContextMenuForChild_23534_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("startActionModeForChild_23536_ID", &Android_android_view_ViewParent__startActionModeForChild_23536_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(66,
        ::uNewFunctionVoid("bringChildToFront", Android_android_view_ViewParent__bringChildToFront, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("bringChildToFront_IMPL_23532", Android_android_view_ViewParent__bringChildToFront_IMPL_23532, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("canResolveLayoutDirection", Android_android_view_ViewParent__canResolveLayoutDirection, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("canResolveLayoutDirection_IMPL_23545", Android_android_view_ViewParent__canResolveLayoutDirection_IMPL_23545, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("canResolveTextAlignment", Android_android_view_ViewParent__canResolveTextAlignment, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("canResolveTextAlignment_IMPL_23551", Android_android_view_ViewParent__canResolveTextAlignment_IMPL_23551, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("canResolveTextDirection", Android_android_view_ViewParent__canResolveTextDirection, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("canResolveTextDirection_IMPL_23548", Android_android_view_ViewParent__canResolveTextDirection_IMPL_23548, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("childDrawableStateChanged", Android_android_view_ViewParent__childDrawableStateChanged, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("childDrawableStateChanged_IMPL_23537", Android_android_view_ViewParent__childDrawableStateChanged_IMPL_23537, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("childHasTransientStateChanged", Android_android_view_ViewParent__childHasTransientStateChanged, 0, false, ::app::Android::android::view::View__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("childHasTransientStateChanged_IMPL_23541", Android_android_view_ViewParent__childHasTransientStateChanged_IMPL_23541, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("clearChildFocus", Android_android_view_ViewParent__clearChildFocus, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("clearChildFocus_IMPL_23529", Android_android_view_ViewParent__clearChildFocus_IMPL_23529, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("createContextMenu", Android_android_view_ViewParent__createContextMenu, 0, false, ::app::Android::android::view::ContextMenu__typeof()),
        ::uNewFunctionVoid("createContextMenu_IMPL_23535", Android_android_view_ViewParent__createContextMenu_IMPL_23535, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("focusableViewAvailable", Android_android_view_ViewParent__focusableViewAvailable, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("focusableViewAvailable_IMPL_23533", Android_android_view_ViewParent__focusableViewAvailable_IMPL_23533, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("focusSearch", Android_android_view_ViewParent__focusSearch, 0, false, ::app::Android::android::view::View__typeof(), ::app::Android::android::view::View__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("focusSearch_IMPL_23531", Android_android_view_ViewParent__focusSearch_IMPL_23531, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getChildVisibleRect", Android_android_view_ViewParent__getChildVisibleRect, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::graphics::Rect__typeof(), ::app::Android::android::graphics::Point__typeof()),
        ::uNewFunction("getChildVisibleRect_IMPL_23530", Android_android_view_ViewParent__getChildVisibleRect_IMPL_23530, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getLayoutDirection", Android_android_view_ViewParent__getLayoutDirection, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getLayoutDirection_IMPL_23547", Android_android_view_ViewParent__getLayoutDirection_IMPL_23547, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getParent", Android_android_view_ViewParent__getParent, 0, false, ::app::Android::android::view::ViewParent__typeof()),
        ::uNewFunction("getParent_IMPL_23526", Android_android_view_ViewParent__getParent_IMPL_23526, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getParentForAccessibility", Android_android_view_ViewParent__getParentForAccessibility, 0, false, ::app::Android::android::view::ViewParent__typeof()),
        ::uNewFunction("getParentForAccessibility_IMPL_23543", Android_android_view_ViewParent__getParentForAccessibility_IMPL_23543, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getTextAlignment", Android_android_view_ViewParent__getTextAlignment, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getTextAlignment_IMPL_23553", Android_android_view_ViewParent__getTextAlignment_IMPL_23553, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getTextDirection", Android_android_view_ViewParent__getTextDirection, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getTextDirection_IMPL_23550", Android_android_view_ViewParent__getTextDirection_IMPL_23550, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("invalidateChild", Android_android_view_ViewParent__invalidateChild, 0, false, ::app::Android::android::view::View__typeof(), ::app::Android::android::graphics::Rect__typeof()),
        ::uNewFunctionVoid("invalidateChild_IMPL_23524", Android_android_view_ViewParent__invalidateChild_IMPL_23524, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("invalidateChildInParent", Android_android_view_ViewParent__invalidateChildInParent, 0, false, ::app::Android::android::view::ViewParent__typeof(), ::app::Android::Runtime::IntArray__typeof(), ::app::Android::android::graphics::Rect__typeof()),
        ::uNewFunction("invalidateChildInParent_IMPL_23525", Android_android_view_ViewParent__invalidateChildInParent_IMPL_23525, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("isLayoutDirectionResolved", Android_android_view_ViewParent__isLayoutDirectionResolved, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isLayoutDirectionResolved_IMPL_23546", Android_android_view_ViewParent__isLayoutDirectionResolved_IMPL_23546, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isLayoutRequested", Android_android_view_ViewParent__isLayoutRequested, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isLayoutRequested_IMPL_23522", Android_android_view_ViewParent__isLayoutRequested_IMPL_23522, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isTextAlignmentResolved", Android_android_view_ViewParent__isTextAlignmentResolved, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isTextAlignmentResolved_IMPL_23552", Android_android_view_ViewParent__isTextAlignmentResolved_IMPL_23552, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isTextDirectionResolved", Android_android_view_ViewParent__isTextDirectionResolved, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isTextDirectionResolved_IMPL_23549", Android_android_view_ViewParent__isTextDirectionResolved_IMPL_23549, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("notifySubtreeAccessibilityStateChanged", Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged, 0, false, ::app::Android::android::view::View__typeof(), ::app::Android::android::view::View__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("notifySubtreeAccessibilityStateChanged_IMPL_23544", Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged_IMPL_23544, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("recomputeViewAttributes", Android_android_view_ViewParent__recomputeViewAttributes, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("recomputeViewAttributes_IMPL_23528", Android_android_view_ViewParent__recomputeViewAttributes_IMPL_23528, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("requestChildFocus", Android_android_view_ViewParent__requestChildFocus, 0, false, ::app::Android::android::view::View__typeof(), ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("requestChildFocus_IMPL_23527", Android_android_view_ViewParent__requestChildFocus_IMPL_23527, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("requestChildRectangleOnScreen", Android_android_view_ViewParent__requestChildRectangleOnScreen, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::graphics::Rect__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("requestChildRectangleOnScreen_IMPL_23539", Android_android_view_ViewParent__requestChildRectangleOnScreen_IMPL_23539, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("requestDisallowInterceptTouchEvent", Android_android_view_ViewParent__requestDisallowInterceptTouchEvent, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("requestDisallowInterceptTouchEvent_IMPL_23538", Android_android_view_ViewParent__requestDisallowInterceptTouchEvent_IMPL_23538, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("requestFitSystemWindows", Android_android_view_ViewParent__requestFitSystemWindows, 0, false),
        ::uNewFunctionVoid("requestFitSystemWindows_IMPL_23542", Android_android_view_ViewParent__requestFitSystemWindows_IMPL_23542, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("requestLayout", Android_android_view_ViewParent__requestLayout, 0, false),
        ::uNewFunctionVoid("requestLayout_IMPL_23521", Android_android_view_ViewParent__requestLayout_IMPL_23521, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("requestSendAccessibilityEvent", Android_android_view_ViewParent__requestSendAccessibilityEvent, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::view::accessibility::AccessibilityEvent__typeof()),
        ::uNewFunction("requestSendAccessibilityEvent_IMPL_23540", Android_android_view_ViewParent__requestSendAccessibilityEvent_IMPL_23540, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("requestTransparentRegion", Android_android_view_ViewParent__requestTransparentRegion, 0, false, ::app::Android::android::view::View__typeof()),
        ::uNewFunctionVoid("requestTransparentRegion_IMPL_23523", Android_android_view_ViewParent__requestTransparentRegion_IMPL_23523, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("showContextMenuForChild", Android_android_view_ViewParent__showContextMenuForChild, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::View__typeof()),
        ::uNewFunction("showContextMenuForChild_IMPL_23534", Android_android_view_ViewParent__showContextMenuForChild_IMPL_23534, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("startActionModeForChild", Android_android_view_ViewParent__startActionModeForChild, 0, false, ::app::Android::android::view::ActionMode__typeof(), ::app::Android::android::view::View__typeof(), ::app::Android::android::view::ActionModeDLRCallback__typeof()),
        ::uNewFunction("startActionModeForChild_IMPL_23536", Android_android_view_ViewParent__startActionModeForChild_IMPL_23536, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_view_ViewParent__bringChildToFront(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0)
{
    Android_android_view_ViewParent__bringChildToFront_IMPL_23532(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_ViewParent__bringChildToFront_IMPL_23532(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__bringChildToFront_23532_ID,"android/view/ViewParent","bringChildToFront","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewParent.bringChildToFront could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__bringChildToFront_23532_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool Android_android_view_ViewParent__canResolveLayoutDirection(Android_android_view_ViewParent* __this)
{
    return Android_android_view_ViewParent__canResolveLayoutDirection_IMPL_23545(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_ViewParent__canResolveLayoutDirection_IMPL_23545(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__canResolveLayoutDirection_23545_ID,"android/view/ViewParent","canResolveLayoutDirection","()Z",GetMethodID,"Id for fallback method android.view.ViewParent.canResolveLayoutDirection could not be cached",92);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__canResolveLayoutDirection_23545_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_ViewParent__canResolveTextAlignment(Android_android_view_ViewParent* __this)
{
    return Android_android_view_ViewParent__canResolveTextAlignment_IMPL_23551(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_ViewParent__canResolveTextAlignment_IMPL_23551(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__canResolveTextAlignment_23551_ID,"android/view/ViewParent","canResolveTextAlignment","()Z",GetMethodID,"Id for fallback method android.view.ViewParent.canResolveTextAlignment could not be cached",90);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__canResolveTextAlignment_23551_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_ViewParent__canResolveTextDirection(Android_android_view_ViewParent* __this)
{
    return Android_android_view_ViewParent__canResolveTextDirection_IMPL_23548(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_ViewParent__canResolveTextDirection_IMPL_23548(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__canResolveTextDirection_23548_ID,"android/view/ViewParent","canResolveTextDirection","()Z",GetMethodID,"Id for fallback method android.view.ViewParent.canResolveTextDirection could not be cached",90);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__canResolveTextDirection_23548_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_ViewParent__childDrawableStateChanged(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0)
{
    Android_android_view_ViewParent__childDrawableStateChanged_IMPL_23537(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_ViewParent__childDrawableStateChanged_IMPL_23537(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__childDrawableStateChanged_23537_ID,"android/view/ViewParent","childDrawableStateChanged","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewParent.childDrawableStateChanged could not be cached",92);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__childDrawableStateChanged_23537_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ViewParent__childHasTransientStateChanged(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, bool arg1)
{
    Android_android_view_ViewParent__childHasTransientStateChanged_IMPL_23541(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Android_android_view_ViewParent__childHasTransientStateChanged_IMPL_23541(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__childHasTransientStateChanged_23541_ID,"android/view/ViewParent","childHasTransientStateChanged","(Landroid/view/View;Z)V",GetMethodID,"Id for fallback method android.view.ViewParent.childHasTransientStateChanged could not be cached",96);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__childHasTransientStateChanged_23541_ID, _obArg2, ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ViewParent__clearChildFocus(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0)
{
    Android_android_view_ViewParent__clearChildFocus_IMPL_23529(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_ViewParent__clearChildFocus_IMPL_23529(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__clearChildFocus_23529_ID,"android/view/ViewParent","clearChildFocus","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewParent.clearChildFocus could not be cached",82);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__clearChildFocus_23529_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ViewParent__createContextMenu(Android_android_view_ViewParent* __this, ::uObject* arg0)
{
    Android_android_view_ViewParent__createContextMenu_IMPL_23535(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_ViewParent__createContextMenu_IMPL_23535(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__createContextMenu_23535_ID,"android/view/ViewParent","createContextMenu","(Landroid/view/ContextMenu;)V",GetMethodID,"Id for fallback method android.view.ViewParent.createContextMenu could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__createContextMenu_23535_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ViewParent__focusableViewAvailable(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0)
{
    Android_android_view_ViewParent__focusableViewAvailable_IMPL_23533(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_ViewParent__focusableViewAvailable_IMPL_23533(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__focusableViewAvailable_23533_ID,"android/view/ViewParent","focusableViewAvailable","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewParent.focusableViewAvailable could not be cached",89);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__focusableViewAvailable_23533_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::android::view::View* Android_android_view_ViewParent__focusSearch(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, int arg1)
{
    return ::uCast< ::app::Android::android::view::View*>(Android_android_view_ViewParent__focusSearch_IMPL_23531(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1), ::app::Android::android::view::View__typeof());
}

::uObject* Android_android_view_ViewParent__focusSearch_IMPL_23531(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__focusSearch_23531_ID,"android/view/ViewParent","focusSearch","(Landroid/view/View;I)Landroid/view/View;",GetMethodID,"Id for fallback method android.view.ViewParent.focusSearch could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__focusSearch_23531_ID, _obArg2, ((jint)arg3_)),result,::app::Android::android::view::View__typeof(),::app::Android::android::view::View*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_ViewParent__getChildVisibleRect(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, ::app::Android::android::graphics::Point* arg2)
{
    return Android_android_view_ViewParent__getChildVisibleRect_IMPL_23530(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, (::uObject*)arg2);
}

bool Android_android_view_ViewParent__getChildVisibleRect_IMPL_23530(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__getChildVisibleRect_23530_ID,"android/view/ViewParent","getChildVisibleRect","(Landroid/view/View;Landroid/graphics/Rect;Landroid/graphics/Point;)Z",GetMethodID,"Id for fallback method android.view.ViewParent.getChildVisibleRect could not be cached",86);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__getChildVisibleRect_23530_ID, _obArg2, _obArg3, _obArg4));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_ViewParent__getLayoutDirection(Android_android_view_ViewParent* __this)
{
    return Android_android_view_ViewParent__getLayoutDirection_IMPL_23547(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_ViewParent__getLayoutDirection_IMPL_23547(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__getLayoutDirection_23547_ID,"android/view/ViewParent","getLayoutDirection","()I",GetMethodID,"Id for fallback method android.view.ViewParent.getLayoutDirection could not be cached",85);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__getLayoutDirection_23547_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ViewParent__getParent(Android_android_view_ViewParent* __this)
{
    return (::uObject*)Android_android_view_ViewParent__getParent_IMPL_23526(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_view_ViewParent__getParent_IMPL_23526(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__getParent_23526_ID,"android/view/ViewParent","getParent","()Landroid/view/ViewParent;",GetMethodID,"Id for fallback method android.view.ViewParent.getParent could not be cached",76);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__getParent_23526_ID),result,::app::Android::Fallbacks::Android_android_view_ViewParent__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_ViewParent__getParentForAccessibility(Android_android_view_ViewParent* __this)
{
    return (::uObject*)Android_android_view_ViewParent__getParentForAccessibility_IMPL_23543(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_view_ViewParent__getParentForAccessibility_IMPL_23543(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__getParentForAccessibility_23543_ID,"android/view/ViewParent","getParentForAccessibility","()Landroid/view/ViewParent;",GetMethodID,"Id for fallback method android.view.ViewParent.getParentForAccessibility could not be cached",92);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__getParentForAccessibility_23543_ID),result,::app::Android::Fallbacks::Android_android_view_ViewParent__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_ViewParent__getTextAlignment(Android_android_view_ViewParent* __this)
{
    return Android_android_view_ViewParent__getTextAlignment_IMPL_23553(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_ViewParent__getTextAlignment_IMPL_23553(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__getTextAlignment_23553_ID,"android/view/ViewParent","getTextAlignment","()I",GetMethodID,"Id for fallback method android.view.ViewParent.getTextAlignment could not be cached",83);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__getTextAlignment_23553_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_ViewParent__getTextDirection(Android_android_view_ViewParent* __this)
{
    return Android_android_view_ViewParent__getTextDirection_IMPL_23550(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_ViewParent__getTextDirection_IMPL_23550(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__getTextDirection_23550_ID,"android/view/ViewParent","getTextDirection","()I",GetMethodID,"Id for fallback method android.view.ViewParent.getTextDirection could not be cached",83);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__getTextDirection_23550_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_ViewParent__invalidateChild(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1)
{
    Android_android_view_ViewParent__invalidateChild_IMPL_23524(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void Android_android_view_ViewParent__invalidateChild_IMPL_23524(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__invalidateChild_23524_ID,"android/view/ViewParent","invalidateChild","(Landroid/view/View;Landroid/graphics/Rect;)V",GetMethodID,"Id for fallback method android.view.ViewParent.invalidateChild could not be cached",82);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__invalidateChild_23524_ID, _obArg2, _obArg3);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* Android_android_view_ViewParent__invalidateChildInParent(Android_android_view_ViewParent* __this, ::app::Android::Runtime::IntArray* arg0, ::app::Android::android::graphics::Rect* arg1)
{
    return (::uObject*)Android_android_view_ViewParent__invalidateChildInParent_IMPL_23525(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

::uObject* Android_android_view_ViewParent__invalidateChildInParent_IMPL_23525(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__invalidateChildInParent_23525_ID,"android/view/ViewParent","invalidateChildInParent","([ILandroid/graphics/Rect;)Landroid/view/ViewParent;",GetMethodID,"Id for fallback method android.view.ViewParent.invalidateChildInParent could not be cached",90);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__invalidateChildInParent_23525_ID, _obArg2, _obArg3),result,::app::Android::Fallbacks::Android_android_view_ViewParent__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_ViewParent__isLayoutDirectionResolved(Android_android_view_ViewParent* __this)
{
    return Android_android_view_ViewParent__isLayoutDirectionResolved_IMPL_23546(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_ViewParent__isLayoutDirectionResolved_IMPL_23546(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__isLayoutDirectionResolved_23546_ID,"android/view/ViewParent","isLayoutDirectionResolved","()Z",GetMethodID,"Id for fallback method android.view.ViewParent.isLayoutDirectionResolved could not be cached",92);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__isLayoutDirectionResolved_23546_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_ViewParent__isLayoutRequested(Android_android_view_ViewParent* __this)
{
    return Android_android_view_ViewParent__isLayoutRequested_IMPL_23522(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_ViewParent__isLayoutRequested_IMPL_23522(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__isLayoutRequested_23522_ID,"android/view/ViewParent","isLayoutRequested","()Z",GetMethodID,"Id for fallback method android.view.ViewParent.isLayoutRequested could not be cached",84);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__isLayoutRequested_23522_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_ViewParent__isTextAlignmentResolved(Android_android_view_ViewParent* __this)
{
    return Android_android_view_ViewParent__isTextAlignmentResolved_IMPL_23552(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_ViewParent__isTextAlignmentResolved_IMPL_23552(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__isTextAlignmentResolved_23552_ID,"android/view/ViewParent","isTextAlignmentResolved","()Z",GetMethodID,"Id for fallback method android.view.ViewParent.isTextAlignmentResolved could not be cached",90);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__isTextAlignmentResolved_23552_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_ViewParent__isTextDirectionResolved(Android_android_view_ViewParent* __this)
{
    return Android_android_view_ViewParent__isTextDirectionResolved_IMPL_23549(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_ViewParent__isTextDirectionResolved_IMPL_23549(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__isTextDirectionResolved_23549_ID,"android/view/ViewParent","isTextDirectionResolved","()Z",GetMethodID,"Id for fallback method android.view.ViewParent.isTextDirectionResolved could not be cached",90);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__isTextDirectionResolved_23549_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1, int arg2)
{
    Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged_IMPL_23544(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

void Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged_IMPL_23544(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged_23544_ID,"android/view/ViewParent","notifySubtreeAccessibilityStateChanged","(Landroid/view/View;Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.view.ViewParent.notifySubtreeAccessibilityStateChanged could not be cached",105);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged_23544_ID, _obArg2, _obArg3, ((jint)arg4_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ViewParent__recomputeViewAttributes(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0)
{
    Android_android_view_ViewParent__recomputeViewAttributes_IMPL_23528(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_ViewParent__recomputeViewAttributes_IMPL_23528(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__recomputeViewAttributes_23528_ID,"android/view/ViewParent","recomputeViewAttributes","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewParent.recomputeViewAttributes could not be cached",90);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__recomputeViewAttributes_23528_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ViewParent__requestChildFocus(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1)
{
    Android_android_view_ViewParent__requestChildFocus_IMPL_23527(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void Android_android_view_ViewParent__requestChildFocus_IMPL_23527(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__requestChildFocus_23527_ID,"android/view/ViewParent","requestChildFocus","(Landroid/view/View;Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewParent.requestChildFocus could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__requestChildFocus_23527_ID, _obArg2, _obArg3);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool Android_android_view_ViewParent__requestChildRectangleOnScreen(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, bool arg2)
{
    return Android_android_view_ViewParent__requestChildRectangleOnScreen_IMPL_23539(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

bool Android_android_view_ViewParent__requestChildRectangleOnScreen_IMPL_23539(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__requestChildRectangleOnScreen_23539_ID,"android/view/ViewParent","requestChildRectangleOnScreen","(Landroid/view/View;Landroid/graphics/Rect;Z)Z",GetMethodID,"Id for fallback method android.view.ViewParent.requestChildRectangleOnScreen could not be cached",96);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__requestChildRectangleOnScreen_23539_ID, _obArg2, _obArg3, ((jboolean)arg4_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_ViewParent__requestDisallowInterceptTouchEvent(Android_android_view_ViewParent* __this, bool arg0)
{
    Android_android_view_ViewParent__requestDisallowInterceptTouchEvent_IMPL_23538(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_ViewParent__requestDisallowInterceptTouchEvent_IMPL_23538(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__requestDisallowInterceptTouchEvent_23538_ID,"android/view/ViewParent","requestDisallowInterceptTouchEvent","(Z)V",GetMethodID,"Id for fallback method android.view.ViewParent.requestDisallowInterceptTouchEvent could not be cached",101);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__requestDisallowInterceptTouchEvent_23538_ID, ((jboolean)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ViewParent__requestFitSystemWindows(Android_android_view_ViewParent* __this)
{
    Android_android_view_ViewParent__requestFitSystemWindows_IMPL_23542(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_ViewParent__requestFitSystemWindows_IMPL_23542(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__requestFitSystemWindows_23542_ID,"android/view/ViewParent","requestFitSystemWindows","()V",GetMethodID,"Id for fallback method android.view.ViewParent.requestFitSystemWindows could not be cached",90);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__requestFitSystemWindows_23542_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_view_ViewParent__requestLayout(Android_android_view_ViewParent* __this)
{
    Android_android_view_ViewParent__requestLayout_IMPL_23521(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_ViewParent__requestLayout_IMPL_23521(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__requestLayout_23521_ID,"android/view/ViewParent","requestLayout","()V",GetMethodID,"Id for fallback method android.view.ViewParent.requestLayout could not be cached",80);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__requestLayout_23521_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool Android_android_view_ViewParent__requestSendAccessibilityEvent(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::accessibility::AccessibilityEvent* arg1)
{
    return Android_android_view_ViewParent__requestSendAccessibilityEvent_IMPL_23540(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

bool Android_android_view_ViewParent__requestSendAccessibilityEvent_IMPL_23540(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__requestSendAccessibilityEvent_23540_ID,"android/view/ViewParent","requestSendAccessibilityEvent","(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z",GetMethodID,"Id for fallback method android.view.ViewParent.requestSendAccessibilityEvent could not be cached",96);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__requestSendAccessibilityEvent_23540_ID, _obArg2, _obArg3));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_ViewParent__requestTransparentRegion(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0)
{
    Android_android_view_ViewParent__requestTransparentRegion_IMPL_23523(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_ViewParent__requestTransparentRegion_IMPL_23523(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__requestTransparentRegion_23523_ID,"android/view/ViewParent","requestTransparentRegion","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewParent.requestTransparentRegion could not be cached",91);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__requestTransparentRegion_23523_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool Android_android_view_ViewParent__showContextMenuForChild(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0)
{
    return Android_android_view_ViewParent__showContextMenuForChild_IMPL_23534(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_ViewParent__showContextMenuForChild_IMPL_23534(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__showContextMenuForChild_23534_ID,"android/view/ViewParent","showContextMenuForChild","(Landroid/view/View;)Z",GetMethodID,"Id for fallback method android.view.ViewParent.showContextMenuForChild could not be cached",90);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__showContextMenuForChild_23534_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::ActionMode* Android_android_view_ViewParent__startActionModeForChild(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::uObject* arg1)
{
    return ::uCast< ::app::Android::android::view::ActionMode*>(Android_android_view_ViewParent__startActionModeForChild_IMPL_23536(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1), ::app::Android::android::view::ActionMode__typeof());
}

::uObject* Android_android_view_ViewParent__startActionModeForChild_IMPL_23536(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewParent__startActionModeForChild_23536_ID,"android/view/ViewParent","startActionModeForChild","(Landroid/view/View;Landroid/view/ActionMode$Callback;)Landroid/view/ActionMode;",GetMethodID,"Id for fallback method android.view.ViewParent.startActionModeForChild could not be cached",90);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewParent__startActionModeForChild_23536_ID, _obArg2, _obArg3),result,::app::Android::Fallbacks::Android_android_view_ActionMode__typeof(),::app::Android::android::view::ActionMode*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_webkit_GeolocationPermissionsDLRCallback__invoke_23945_ID;

Android_android_webkit_GeolocationPermissionsDLRCallback__uType* Android_android_webkit_GeolocationPermissionsDLRCallback__typeof()
{
    static ::uStaticStrong<Android_android_webkit_GeolocationPermissionsDLRCallback__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_webkit_GeolocationPermissionsDLRCallback__uType*)::uAllocClassType(sizeof(Android_android_webkit_GeolocationPermissionsDLRCallback__uType), "Android.Fallbacks.Android_android_webkit_GeolocationPermissionsDLRCallback", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_invoke = (void(*)(void*, ::app::Android::java::lang::String*, bool, bool))Android_android_webkit_GeolocationPermissionsDLRCallback__invoke;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_webkit_GeolocationPermissionsDLRCallback__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_webkit_GeolocationPermissionsDLRCallback__uType, __interface_1),
        ::app::Android::android::webkit::GeolocationPermissionsDLRCallback__typeof(), offsetof(Android_android_webkit_GeolocationPermissionsDLRCallback__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("invoke_23945_ID", &Android_android_webkit_GeolocationPermissionsDLRCallback__invoke_23945_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("invoke", Android_android_webkit_GeolocationPermissionsDLRCallback__invoke, 0, false, ::app::Android::java::lang::String__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("invoke_IMPL_23945", Android_android_webkit_GeolocationPermissionsDLRCallback__invoke_IMPL_23945, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_webkit_GeolocationPermissionsDLRCallback__invoke(Android_android_webkit_GeolocationPermissionsDLRCallback* __this, ::app::Android::java::lang::String* arg0, bool arg1, bool arg2)
{
    Android_android_webkit_GeolocationPermissionsDLRCallback__invoke_IMPL_23945(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

void Android_android_webkit_GeolocationPermissionsDLRCallback__invoke_IMPL_23945(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_webkit_GeolocationPermissionsDLRCallback__invoke_23945_ID,"android/webkit/GeolocationPermissions$Callback","invoke","(Ljava/lang/String;ZZ)V",GetMethodID,"Id for fallback method android.webkit.GeolocationPermissions$Callback.invoke could not be cached",96);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_webkit_GeolocationPermissionsDLRCallback__invoke_23945_ID, _obArg2, ((jboolean)arg3_), ((jboolean)arg4_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_webkit_ValueCallback__onReceiveValue_23991_ID;

Android_android_webkit_ValueCallback__uType* Android_android_webkit_ValueCallback__typeof()
{
    static ::uStaticStrong<Android_android_webkit_ValueCallback__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_webkit_ValueCallback__uType*)::uAllocClassType(sizeof(Android_android_webkit_ValueCallback__uType), "Android.Fallbacks.Android_android_webkit_ValueCallback", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onReceiveValue = (void(*)(void*, ::app::Android::java::lang::Object*))Android_android_webkit_ValueCallback__onReceiveValue;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_webkit_ValueCallback__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_webkit_ValueCallback__uType, __interface_1),
        ::app::Android::android::webkit::ValueCallback__typeof(), offsetof(Android_android_webkit_ValueCallback__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onReceiveValue_23991_ID", &Android_android_webkit_ValueCallback__onReceiveValue_23991_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("onReceiveValue", Android_android_webkit_ValueCallback__onReceiveValue, 0, false, ::app::Android::java::lang::Object__typeof()),
        ::uNewFunctionVoid("onReceiveValue_IMPL_23991", Android_android_webkit_ValueCallback__onReceiveValue_IMPL_23991, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_webkit_ValueCallback__onReceiveValue(Android_android_webkit_ValueCallback* __this, ::app::Android::java::lang::Object* arg0)
{
    Android_android_webkit_ValueCallback__onReceiveValue_IMPL_23991(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_webkit_ValueCallback__onReceiveValue_IMPL_23991(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_webkit_ValueCallback__onReceiveValue_23991_ID,"android/webkit/ValueCallback","onReceiveValue","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method android.webkit.ValueCallback.onReceiveValue could not be cached",86);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_webkit_ValueCallback__onReceiveValue_23991_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden_23998_ID;

Android_android_webkit_WebChromeClientDLRCustomViewCallback__uType* Android_android_webkit_WebChromeClientDLRCustomViewCallback__typeof()
{
    static ::uStaticStrong<Android_android_webkit_WebChromeClientDLRCustomViewCallback__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_webkit_WebChromeClientDLRCustomViewCallback__uType*)::uAllocClassType(sizeof(Android_android_webkit_WebChromeClientDLRCustomViewCallback__uType), "Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCustomViewCallback", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onCustomViewHidden = (void(*)(void*))Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_webkit_WebChromeClientDLRCustomViewCallback__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_webkit_WebChromeClientDLRCustomViewCallback__uType, __interface_1),
        ::app::Android::android::webkit::WebChromeClientDLRCustomViewCallback__typeof(), offsetof(Android_android_webkit_WebChromeClientDLRCustomViewCallback__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onCustomViewHidden_23998_ID", &Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden_23998_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("onCustomViewHidden", Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden, 0, false),
        ::uNewFunctionVoid("onCustomViewHidden_IMPL_23998", Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden_IMPL_23998, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden(Android_android_webkit_WebChromeClientDLRCustomViewCallback* __this)
{
    Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden_IMPL_23998(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden_IMPL_23998(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden_23998_ID,"android/webkit/WebChromeClient$CustomViewCallback","onCustomViewHidden","()V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient$CustomViewCallback.onCustomViewHidden could not be cached",111);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_webkit_WebChromeClientDLRCustomViewCallback__onCustomViewHidden_23998_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota_24174_ID;

Android_android_webkit_WebStorageDLRQuotaUpdater__uType* Android_android_webkit_WebStorageDLRQuotaUpdater__typeof()
{
    static ::uStaticStrong<Android_android_webkit_WebStorageDLRQuotaUpdater__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_webkit_WebStorageDLRQuotaUpdater__uType*)::uAllocClassType(sizeof(Android_android_webkit_WebStorageDLRQuotaUpdater__uType), "Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_updateQuota = (void(*)(void*, ::uLong))Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_webkit_WebStorageDLRQuotaUpdater__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_webkit_WebStorageDLRQuotaUpdater__uType, __interface_1),
        ::app::Android::android::webkit::WebStorageDLRQuotaUpdater__typeof(), offsetof(Android_android_webkit_WebStorageDLRQuotaUpdater__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("updateQuota_24174_ID", &Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota_24174_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("updateQuota", Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota, 0, false, ::app::Uno::Long__typeof()),
        ::uNewFunctionVoid("updateQuota_IMPL_24174", Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota_IMPL_24174, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota(Android_android_webkit_WebStorageDLRQuotaUpdater* __this, ::uLong arg0)
{
    Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota_IMPL_24174(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota_IMPL_24174(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota_24174_ID,"android/webkit/WebStorage$QuotaUpdater","updateQuota","(J)V",GetMethodID,"Id for fallback method android.webkit.WebStorage$QuotaUpdater.updateQuota could not be cached",93);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_webkit_WebStorageDLRQuotaUpdater__updateQuota_24174_ID, ((jlong)arg2_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_widget_AbsSeekBar__uType* Android_android_widget_AbsSeekBar__typeof()
{
    static ::uStaticStrong<Android_android_widget_AbsSeekBar__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_widget_AbsSeekBar__uType*)::uAllocClassType(sizeof(Android_android_widget_AbsSeekBar__uType), "Android.Fallbacks.Android_android_widget_AbsSeekBar", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::AbsSeekBar__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_widget_AbsSeekBar__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_widget_AbsSeekBar__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_widget_CompoundButton__uType* Android_android_widget_CompoundButton__typeof()
{
    static ::uStaticStrong<Android_android_widget_CompoundButton__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_widget_CompoundButton__uType*)::uAllocClassType(sizeof(Android_android_widget_CompoundButton__uType), "Android.Fallbacks.Android_android_widget_CompoundButton", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::CompoundButton__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_widget_CompoundButton__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_widget_CompoundButton__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_24924_ID;

Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType* Android_android_widget_CompoundButtonDLROnCheckedChangeListener__typeof()
{
    static ::uStaticStrong<Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType*)::uAllocClassType(sizeof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType), "Android.Fallbacks.Android_android_widget_CompoundButtonDLROnCheckedChangeListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onCheckedChanged = (void(*)(void*, ::app::Android::android::widget::CompoundButton*, bool))Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType, __interface_1),
        ::app::Android::android::widget::CompoundButtonDLROnCheckedChangeListener__typeof(), offsetof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onCheckedChanged_24924_ID", &Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_24924_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("onCheckedChanged", Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged, 0, false, ::app::Android::android::widget::CompoundButton__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("onCheckedChanged_IMPL_24924", Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_IMPL_24924, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged(Android_android_widget_CompoundButtonDLROnCheckedChangeListener* __this, ::app::Android::android::widget::CompoundButton* arg0, bool arg1)
{
    Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_IMPL_24924(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_IMPL_24924(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_24924_ID,"android/widget/CompoundButton$OnCheckedChangeListener","onCheckedChanged","(Landroid/widget/CompoundButton;Z)V",GetMethodID,"Id for fallback method android.widget.CompoundButton$OnCheckedChangeListener.onCheckedChanged could not be cached",113);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_24924_ID, _obArg2, ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_26181_ID;
jmethodID Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_26182_ID;
jmethodID Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_26183_ID;

Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType* Android_android_widget_SeekBarDLROnSeekBarChangeListener__typeof()
{
    static ::uStaticStrong<Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType*)::uAllocClassType(sizeof(Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType), "Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarChangeListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onProgressChanged = (void(*)(void*, ::app::Android::android::widget::SeekBar*, int, bool))Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged;
    type->__interface_2.__fp_onStartTrackingTouch = (void(*)(void*, ::app::Android::android::widget::SeekBar*))Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch;
    type->__interface_2.__fp_onStopTrackingTouch = (void(*)(void*, ::app::Android::android::widget::SeekBar*))Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType, __interface_1),
        ::app::Android::android::widget::SeekBarDLROnSeekBarChangeListener__typeof(), offsetof(Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType, __interface_2));

    type->SetFields(3,
        ::uNewField("onProgressChanged_26181_ID", &Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_26181_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onStartTrackingTouch_26182_ID", &Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_26182_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onStopTrackingTouch_26183_ID", &Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_26183_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("onProgressChanged", Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged, 0, false, ::app::Android::android::widget::SeekBar__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("onProgressChanged_IMPL_26181", Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_IMPL_26181, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("onStartTrackingTouch", Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch, 0, false, ::app::Android::android::widget::SeekBar__typeof()),
        ::uNewFunctionVoid("onStartTrackingTouch_IMPL_26182", Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_IMPL_26182, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onStopTrackingTouch", Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch, 0, false, ::app::Android::android::widget::SeekBar__typeof()),
        ::uNewFunctionVoid("onStopTrackingTouch_IMPL_26183", Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_IMPL_26183, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::app::Android::android::widget::SeekBar* arg0, int arg1, bool arg2)
{
    Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_IMPL_26181(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_IMPL_26181(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_26181_ID,"android/widget/SeekBar$OnSeekBarChangeListener","onProgressChanged","(Landroid/widget/SeekBar;IZ)V",GetMethodID,"Id for fallback method android.widget.SeekBar$OnSeekBarChangeListener.onProgressChanged could not be cached",107);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_26181_ID, _obArg2, ((jint)arg3_), ((jboolean)arg4_));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::app::Android::android::widget::SeekBar* arg0)
{
    Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_IMPL_26182(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_IMPL_26182(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_26182_ID,"android/widget/SeekBar$OnSeekBarChangeListener","onStartTrackingTouch","(Landroid/widget/SeekBar;)V",GetMethodID,"Id for fallback method android.widget.SeekBar$OnSeekBarChangeListener.onStartTrackingTouch could not be cached",110);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_26182_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::app::Android::android::widget::SeekBar* arg0)
{
    Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_IMPL_26183(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_IMPL_26183(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_26183_ID,"android/widget/SeekBar$OnSeekBarChangeListener","onStopTrackingTouch","(Landroid/widget/SeekBar;)V",GetMethodID,"Id for fallback method android.widget.SeekBar$OnSeekBarChangeListener.onStopTrackingTouch could not be cached",109);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_26183_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_26520_ID;

Android_android_widget_TextViewDLROnEditorActionListener__uType* Android_android_widget_TextViewDLROnEditorActionListener__typeof()
{
    static ::uStaticStrong<Android_android_widget_TextViewDLROnEditorActionListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_widget_TextViewDLROnEditorActionListener__uType*)::uAllocClassType(sizeof(Android_android_widget_TextViewDLROnEditorActionListener__uType), "Android.Fallbacks.Android_android_widget_TextViewDLROnEditorActionListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onEditorAction = (bool(*)(void*, ::app::Android::android::widget::TextView*, int, ::app::Android::android::view::KeyEvent*))Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_widget_TextViewDLROnEditorActionListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_widget_TextViewDLROnEditorActionListener__uType, __interface_1),
        ::app::Android::android::widget::TextViewDLROnEditorActionListener__typeof(), offsetof(Android_android_widget_TextViewDLROnEditorActionListener__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("onEditorAction_26520_ID", &Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_26520_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("onEditorAction", Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::widget::TextView__typeof(), ::app::Uno::Int__typeof(), ::app::Android::android::view::KeyEvent__typeof()),
        ::uNewFunction("onEditorAction_IMPL_26520", Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_IMPL_26520, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

bool Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction(Android_android_widget_TextViewDLROnEditorActionListener* __this, ::app::Android::android::widget::TextView* arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2)
{
    return Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_IMPL_26520(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, (::uObject*)arg2);
}

bool Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_IMPL_26520(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_26520_ID,"android/widget/TextView$OnEditorActionListener","onEditorAction","(Landroid/widget/TextView;ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView$OnEditorActionListener.onEditorAction could not be cached",104);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_26520_ID, _obArg2, ((jint)arg3_), _obArg4));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_java_io_InputStream__uType* Android_java_io_InputStream__typeof()
{
    static ::uStaticStrong<Android_java_io_InputStream__uType*> type;
    if (type != NULL) return type;

    type = (Android_java_io_InputStream__uType*)::uAllocClassType(sizeof(Android_java_io_InputStream__uType), "Android.Fallbacks.Android_java_io_InputStream", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::io::InputStream__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_java_io_InputStream__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_java_io_InputStream__uType, __interface_1));

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_java_lang_CharSequence__charAt_30511_ID;
jmethodID Android_java_lang_CharSequence__length_30510_ID;
jmethodID Android_java_lang_CharSequence__subSequence_30512_ID;
jmethodID Android_java_lang_CharSequence__toString_30513_ID;

Android_java_lang_CharSequence__uType* Android_java_lang_CharSequence__typeof()
{
    static ::uStaticStrong<Android_java_lang_CharSequence__uType*> type;
    if (type != NULL) return type;

    type = (Android_java_lang_CharSequence__uType*)::uAllocClassType(sizeof(Android_java_lang_CharSequence__uType), "Android.Fallbacks.Android_java_lang_CharSequence", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Android_java_lang_CharSequence__toString;
    type->__interface_2.__fp_length = (int(*)(void*))Android_java_lang_CharSequence__length;
    type->__interface_2.__fp_charAt = (::uChar(*)(void*, int))Android_java_lang_CharSequence__charAt;
    type->__interface_2.__fp_subSequence = (::uObject*(*)(void*, int, int))Android_java_lang_CharSequence__subSequence;
    type->__interface_2.__fp_toString = (::app::Android::java::lang::String*(*)(void*))Android_java_lang_CharSequence__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_java_lang_CharSequence__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_java_lang_CharSequence__uType, __interface_1),
        ::app::Android::java::lang::CharSequence__typeof(), offsetof(Android_java_lang_CharSequence__uType, __interface_2));

    type->SetFields(4,
        ::uNewField("charAt_30511_ID", &Android_java_lang_CharSequence__charAt_30511_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("length_30510_ID", &Android_java_lang_CharSequence__length_30510_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("subSequence_30512_ID", &Android_java_lang_CharSequence__subSequence_30512_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_30513_ID", &Android_java_lang_CharSequence__toString_30513_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(7,
        ::uNewFunction("charAt", Android_java_lang_CharSequence__charAt, 0, false, ::app::Uno::Char__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("charAt_IMPL_30511", Android_java_lang_CharSequence__charAt_IMPL_30511, 0, true, ::app::Uno::Char__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("length", Android_java_lang_CharSequence__length, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("length_IMPL_30510", Android_java_lang_CharSequence__length_IMPL_30510, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("subSequence", Android_java_lang_CharSequence__subSequence, 0, false, ::app::Android::java::lang::CharSequence__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("subSequence_IMPL_30512", Android_java_lang_CharSequence__subSequence_IMPL_30512, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("toString_IMPL_30513", Android_java_lang_CharSequence__toString_IMPL_30513, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

::uChar Android_java_lang_CharSequence__charAt(Android_java_lang_CharSequence* __this, int arg0)
{
    return Android_java_lang_CharSequence__charAt_IMPL_30511(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uChar Android_java_lang_CharSequence__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_java_lang_CharSequence__charAt_30511_ID,"java/lang/CharSequence","charAt","(I)C",GetMethodID,"Id for fallback method java.lang.CharSequence.charAt could not be cached",72);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_java_lang_CharSequence__charAt_30511_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Android_java_lang_CharSequence__length(Android_java_lang_CharSequence* __this)
{
    return Android_java_lang_CharSequence__length_IMPL_30510(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_java_lang_CharSequence__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_java_lang_CharSequence__length_30510_ID,"java/lang/CharSequence","length","()I",GetMethodID,"Id for fallback method java.lang.CharSequence.length could not be cached",72);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_java_lang_CharSequence__length_30510_ID));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_java_lang_CharSequence__subSequence(Android_java_lang_CharSequence* __this, int arg0, int arg1)
{
    return (::uObject*)Android_java_lang_CharSequence__subSequence_IMPL_30512(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_java_lang_CharSequence__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_java_lang_CharSequence__subSequence_30512_ID,"java/lang/CharSequence","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method java.lang.CharSequence.subSequence could not be cached",77);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_java_lang_CharSequence__subSequence_30512_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_java_lang_CharSequence__toString(Android_java_lang_CharSequence* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_java_lang_CharSequence__toString_IMPL_30513(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_java_lang_CharSequence__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_java_lang_CharSequence__toString_30513_ID,"java/lang/CharSequence","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.CharSequence.toString could not be cached",74);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_java_lang_CharSequence__toString_30513_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_java_lang_Runnable__run_31342_ID;

Android_java_lang_Runnable__uType* Android_java_lang_Runnable__typeof()
{
    static ::uStaticStrong<Android_java_lang_Runnable__uType*> type;
    if (type != NULL) return type;

    type = (Android_java_lang_Runnable__uType*)::uAllocClassType(sizeof(Android_java_lang_Runnable__uType), "Android.Fallbacks.Android_java_lang_Runnable", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_run = (void(*)(void*))Android_java_lang_Runnable__run;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_java_lang_Runnable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_java_lang_Runnable__uType, __interface_1),
        ::app::Android::java::lang::Runnable__typeof(), offsetof(Android_java_lang_Runnable__uType, __interface_2));

    type->SetFields(1,
        ::uNewField("run_31342_ID", &Android_java_lang_Runnable__run_31342_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("run", Android_java_lang_Runnable__run, 0, false),
        ::uNewFunctionVoid("run_IMPL_31342", Android_java_lang_Runnable__run_IMPL_31342, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Android_java_lang_Runnable__run(Android_java_lang_Runnable* __this)
{
    Android_java_lang_Runnable__run_IMPL_31342(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_java_lang_Runnable__run_IMPL_31342(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_java_lang_Runnable__run_31342_ID,"java/lang/Runnable","run","()V",GetMethodID,"Id for fallback method java.lang.Runnable.run could not be cached",65);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_java_lang_Runnable__run_31342_ID);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

}}}
