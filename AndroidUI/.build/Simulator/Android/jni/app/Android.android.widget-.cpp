#include <app/Android.android.content.Context.h>
#include <app/Android.android.content.res.ColorStateList.h>
#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.graphics.Canvas.h>
#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.android.graphics.Matrix.h>
#include <app/Android.android.graphics.Rect.h>
#include <app/Android.android.graphics.Region.h>
#include <app/Android.android.graphics.Typeface.h>
#include <app/Android.android.os.Bundle.h>
#include <app/Android.android.os.Parcelable.h>
#include <app/Android.android.text.TextUtilsDLRTruncateAt.h>
#include <app/Android.android.text.TextWatcher.h>
#include <app/Android.android.util.AttributeSet.h>
#include <app/Android.android.view.accessibility.AccessibilityEvent.h>
#include <app/Android.android.view.accessibility.AccessibilityNodeInfo.h>
#include <app/Android.android.view.animation.Interpolator.h>
#include <app/Android.android.view.DragEvent.h>
#include <app/Android.android.view.inputmethod.EditorInfo.h>
#include <app/Android.android.view.inputmethod.InputConnection.h>
#include <app/Android.android.view.KeyEvent.h>
#include <app/Android.android.view.MotionEvent.h>
#include <app/Android.android.view.View.h>
#include <app/Android.android.view.ViewGroupDLRLayoutParams.h>
#include <app/Android.android.widget.AbsoluteLayout.h>
#include <app/Android.android.widget.AbsSeekBar.h>
#include <app/Android.android.widget.Button.h>
#include <app/Android.android.widget.CompoundButton.h>
#include <app/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h>
#include <app/Android.android.widget.EditText.h>
#include <app/Android.android.widget.FrameLayout.h>
#include <app/Android.android.widget.FrameLayoutDLRLayoutParams.h>
#include <app/Android.android.widget.HorizontalScrollView.h>
#include <app/Android.android.widget.ImageView.h>
#include <app/Android.android.widget.ImageViewDLRScaleType.h>
#include <app/Android.android.widget.ProgressBar.h>
#include <app/Android.android.widget.RelativeLayout.h>
#include <app/Android.android.widget.RelativeLayoutDLRLayoutParams.h>
#include <app/Android.android.widget.ScrollView.h>
#include <app/Android.android.widget.SeekBar.h>
#include <app/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h>
#include <app/Android.android.widget.Switch.h>
#include <app/Android.android.widget.TextView.h>
#include <app/Android.android.widget.TextViewDLROnEditorActionListener.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <app/Android.Fallbacks.Android_android_os_Parcelable.h>
#include <app/Android.Fallbacks.Android_android_view_animation_Interpolator.h>
#include <app/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h>
#include <app/Android.Fallbacks.Android_android_widget_AbsSeekBar.h>
#include <app/Android.Fallbacks.Android_android_widget_CompoundButton.h>
#include <app/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h>
#include <app/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h>
#include <app/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.util.ArrayList.h>
#include <app/Android.Runtime.IntArray.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace widget {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass AbsoluteLayout___javaClass_4;
jmethodID AbsoluteLayout__checkLayoutParams_24587_ID;
jmethodID AbsoluteLayout__generateDefaultLayoutParams_24584_ID;
jmethodID AbsoluteLayout__generateLayoutParams_24586_ID;
jmethodID AbsoluteLayout__generateLayoutParams_24588_ID;
jmethodID AbsoluteLayout__onLayout_24585_ID;
jmethodID AbsoluteLayout__onMeasure_24583_ID;
jmethodID AbsoluteLayout__shouldDelayChildPressedState_24589_ID;

AbsoluteLayout__uType* AbsoluteLayout__typeof()
{
    static ::uStaticStrong<AbsoluteLayout__uType*> type;
    if (type != NULL) return type;

    type = (AbsoluteLayout__uType*)::uAllocClassType(sizeof(AbsoluteLayout__uType), "Android.android.widget.AbsoluteLayout", false, 3, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroup__typeof());
    type->__fp_checkLayoutParams = (bool(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::ViewGroupDLRLayoutParams*))AbsoluteLayout__checkLayoutParams;
    type->__fp_generateDefaultLayoutParams = (::app::Android::android::view::ViewGroupDLRLayoutParams*(*)(::app::Android::android::view::ViewGroup*))AbsoluteLayout__generateDefaultLayoutParams;
    type->__fp_generateLayoutParams = (::app::Android::android::view::ViewGroupDLRLayoutParams*(*)(::app::Android::android::view::ViewGroup*, ::uObject*))AbsoluteLayout__generateLayoutParams;
    type->__fp_generateLayoutParams_1 = (::app::Android::android::view::ViewGroupDLRLayoutParams*(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::ViewGroupDLRLayoutParams*))AbsoluteLayout__generateLayoutParams_1;
    type->__fp_onLayout = (void(*)(::app::Android::android::view::View*, bool, int, int, int, int))AbsoluteLayout__onLayout;
    type->__fp_onMeasure = (void(*)(::app::Android::android::view::View*, int, int))AbsoluteLayout__onMeasure;
    type->__fp_shouldDelayChildPressedState = (bool(*)(::app::Android::android::view::ViewGroup*))AbsoluteLayout__shouldDelayChildPressedState;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AbsoluteLayout__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AbsoluteLayout__uType, __interface_1),
        ::app::Android::android::view::ViewParent__typeof(), offsetof(AbsoluteLayout__uType, __interface_2));

    type->SetFields(8,
        ::uNewField("_javaClass", &AbsoluteLayout___javaClass_4, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("checkLayoutParams_24587_ID", &AbsoluteLayout__checkLayoutParams_24587_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("generateDefaultLayoutParams_24584_ID", &AbsoluteLayout__generateDefaultLayoutParams_24584_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("generateLayoutParams_24586_ID", &AbsoluteLayout__generateLayoutParams_24586_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("generateLayoutParams_24588_ID", &AbsoluteLayout__generateLayoutParams_24588_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onLayout_24585_ID", &AbsoluteLayout__onLayout_24585_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onMeasure_24583_ID", &AbsoluteLayout__onMeasure_24583_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("shouldDelayChildPressedState_24589_ID", &AbsoluteLayout__shouldDelayChildPressedState_24589_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("_Init", AbsoluteLayout___Init_4, 0, true),
        ::uNewFunction("checkLayoutParams_IMPL_24587", AbsoluteLayout__checkLayoutParams_IMPL_24587, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("generateDefaultLayoutParams_IMPL_24584", AbsoluteLayout__generateDefaultLayoutParams_IMPL_24584, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("generateLayoutParams_IMPL_24586", AbsoluteLayout__generateLayoutParams_IMPL_24586, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("generateLayoutParams_IMPL_24588", AbsoluteLayout__generateLayoutParams_IMPL_24588, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onLayout_IMPL_24585", AbsoluteLayout__onLayout_IMPL_24585, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onMeasure_IMPL_24583", AbsoluteLayout__onMeasure_IMPL_24583, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("shouldDelayChildPressedState_IMPL_24589", AbsoluteLayout__shouldDelayChildPressedState_IMPL_24589, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void AbsoluteLayout___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::AbsoluteLayout___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::AbsoluteLayout___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/AbsoluteLayout"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::AbsoluteLayout___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.AbsoluteLayout'", 53);; }
}

void AbsoluteLayout___ObjInit_15(AbsoluteLayout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::ViewGroup___ObjInit_11(__this, obj, utype, hasFallbackClass, resolveType);
}

bool AbsoluteLayout__checkLayoutParams(AbsoluteLayout* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0)
{
    return AbsoluteLayout__checkLayoutParams_IMPL_24587(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool AbsoluteLayout__checkLayoutParams_IMPL_24587(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsoluteLayout___javaClass_4,::app::Android::android::widget::AbsoluteLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::AbsoluteLayout__checkLayoutParams_24587_ID,::app::Android::android::widget::AbsoluteLayout___javaClass_4,"checkLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Z",GetMethodID,"Id for fallback method android.widget.AbsoluteLayout.checkLayoutParams could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout___javaClass_4, ::app::Android::android::widget::AbsoluteLayout__checkLayoutParams_24587_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout__checkLayoutParams_24587_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::ViewGroupDLRLayoutParams* AbsoluteLayout__generateDefaultLayoutParams(AbsoluteLayout* __this)
{
    return ::uCast< ::app::Android::android::view::ViewGroupDLRLayoutParams*>(AbsoluteLayout__generateDefaultLayoutParams_IMPL_24584(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::view::ViewGroupDLRLayoutParams__typeof());
}

::uObject* AbsoluteLayout__generateDefaultLayoutParams_IMPL_24584(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsoluteLayout___javaClass_4,::app::Android::android::widget::AbsoluteLayout___Init_4(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::AbsoluteLayout__generateDefaultLayoutParams_24584_ID,::app::Android::android::widget::AbsoluteLayout___javaClass_4,"generateDefaultLayoutParams","()Landroid/view/ViewGroup$LayoutParams;",GetMethodID,"Id for fallback method android.widget.AbsoluteLayout.generateDefaultLayoutParams could not be cached",100);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout___javaClass_4, ::app::Android::android::widget::AbsoluteLayout__generateDefaultLayoutParams_24584_ID),result,::app::Android::android::view::ViewGroupDLRLayoutParams__typeof(),::app::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout__generateDefaultLayoutParams_24584_ID),result,::app::Android::android::view::ViewGroupDLRLayoutParams__typeof(),::app::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::ViewGroupDLRLayoutParams* AbsoluteLayout__generateLayoutParams(AbsoluteLayout* __this, ::uObject* arg0)
{
    return ::uCast< ::app::Android::android::view::ViewGroupDLRLayoutParams*>(AbsoluteLayout__generateLayoutParams_IMPL_24586(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::android::view::ViewGroupDLRLayoutParams__typeof());
}

::app::Android::android::view::ViewGroupDLRLayoutParams* AbsoluteLayout__generateLayoutParams_1(AbsoluteLayout* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0)
{
    return ::uCast< ::app::Android::android::view::ViewGroupDLRLayoutParams*>(AbsoluteLayout__generateLayoutParams_IMPL_24588(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::android::view::ViewGroupDLRLayoutParams__typeof());
}

::uObject* AbsoluteLayout__generateLayoutParams_IMPL_24586(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsoluteLayout___javaClass_4,::app::Android::android::widget::AbsoluteLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::AbsoluteLayout__generateLayoutParams_24586_ID,::app::Android::android::widget::AbsoluteLayout___javaClass_4,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;",GetMethodID,"Id for fallback method android.widget.AbsoluteLayout.generateLayoutParams could not be cached",93);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout___javaClass_4, ::app::Android::android::widget::AbsoluteLayout__generateLayoutParams_24586_ID, _obArg2),result,::app::Android::android::view::ViewGroupDLRLayoutParams__typeof(),::app::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout__generateLayoutParams_24586_ID, _obArg2),result,::app::Android::android::view::ViewGroupDLRLayoutParams__typeof(),::app::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* AbsoluteLayout__generateLayoutParams_IMPL_24588(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsoluteLayout___javaClass_4,::app::Android::android::widget::AbsoluteLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::AbsoluteLayout__generateLayoutParams_24588_ID,::app::Android::android::widget::AbsoluteLayout___javaClass_4,"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/view/ViewGroup$LayoutParams;",GetMethodID,"Id for fallback method android.widget.AbsoluteLayout.generateLayoutParams could not be cached",93);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout___javaClass_4, ::app::Android::android::widget::AbsoluteLayout__generateLayoutParams_24588_ID, _obArg2),result,::app::Android::android::view::ViewGroupDLRLayoutParams__typeof(),::app::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout__generateLayoutParams_24588_ID, _obArg2),result,::app::Android::android::view::ViewGroupDLRLayoutParams__typeof(),::app::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void AbsoluteLayout__onLayout(AbsoluteLayout* __this, bool arg0, int arg1, int arg2, int arg3, int arg4)
{
    AbsoluteLayout__onLayout_IMPL_24585(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3, arg4);
}

void AbsoluteLayout__onLayout_IMPL_24585(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsoluteLayout___javaClass_4,::app::Android::android::widget::AbsoluteLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::AbsoluteLayout__onLayout_24585_ID,::app::Android::android::widget::AbsoluteLayout___javaClass_4,"onLayout","(ZIIII)V",GetMethodID,"Id for fallback method android.widget.AbsoluteLayout.onLayout could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout___javaClass_4, ::app::Android::android::widget::AbsoluteLayout__onLayout_24585_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout__onLayout_24585_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void AbsoluteLayout__onMeasure(AbsoluteLayout* __this, int arg0, int arg1)
{
    AbsoluteLayout__onMeasure_IMPL_24583(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void AbsoluteLayout__onMeasure_IMPL_24583(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsoluteLayout___javaClass_4,::app::Android::android::widget::AbsoluteLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::AbsoluteLayout__onMeasure_24583_ID,::app::Android::android::widget::AbsoluteLayout___javaClass_4,"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.AbsoluteLayout.onMeasure could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout___javaClass_4, ::app::Android::android::widget::AbsoluteLayout__onMeasure_24583_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout__onMeasure_24583_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool AbsoluteLayout__shouldDelayChildPressedState(AbsoluteLayout* __this)
{
    return AbsoluteLayout__shouldDelayChildPressedState_IMPL_24589(NULL, __this->_subclassed, __this->_javaObject);
}

bool AbsoluteLayout__shouldDelayChildPressedState_IMPL_24589(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsoluteLayout___javaClass_4,::app::Android::android::widget::AbsoluteLayout___Init_4(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::AbsoluteLayout__shouldDelayChildPressedState_24589_ID,::app::Android::android::widget::AbsoluteLayout___javaClass_4,"shouldDelayChildPressedState","()Z",GetMethodID,"Id for fallback method android.widget.AbsoluteLayout.shouldDelayChildPressedState could not be cached",101);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout___javaClass_4, ::app::Android::android::widget::AbsoluteLayout__shouldDelayChildPressedState_24589_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::AbsoluteLayout__shouldDelayChildPressedState_24589_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass AbsSeekBar___javaClass_4;
jmethodID AbsSeekBar__AbsSeekBar_24535_ID_c;
jmethodID AbsSeekBar__AbsSeekBar_24536_ID_c;
jmethodID AbsSeekBar__AbsSeekBar_24537_ID_c;
jmethodID AbsSeekBar__drawableStateChanged_24547_ID;
jmethodID AbsSeekBar__getKeyProgressIncrement_24543_ID;
jmethodID AbsSeekBar__getThumb_24539_ID;
jmethodID AbsSeekBar__getThumbOffset_24540_ID;
jmethodID AbsSeekBar__jumpDrawablesToCurrentState_24546_ID;
jmethodID AbsSeekBar__onDraw_24549_ID;
jmethodID AbsSeekBar__onInitializeAccessibilityEvent_24553_ID;
jmethodID AbsSeekBar__onInitializeAccessibilityNodeInfo_24554_ID;
jmethodID AbsSeekBar__onKeyDown_24552_ID;
jmethodID AbsSeekBar__onMeasure_24550_ID;
jmethodID AbsSeekBar__onRtlPropertiesChanged_24556_ID;
jmethodID AbsSeekBar__onSizeChanged_24548_ID;
jmethodID AbsSeekBar__onTouchEvent_24551_ID;
jmethodID AbsSeekBar__performAccessibilityAction_24555_ID;
jmethodID AbsSeekBar__setKeyProgressIncrement_24542_ID;
jmethodID AbsSeekBar__setMax_24544_ID;
jmethodID AbsSeekBar__setThumb_24538_ID;
jmethodID AbsSeekBar__setThumbOffset_24541_ID;
jmethodID AbsSeekBar__verifyDrawable_24545_ID;

AbsSeekBar__uType* AbsSeekBar__typeof()
{
    static ::uStaticStrong<AbsSeekBar__uType*> type;
    if (type != NULL) return type;

    type = (AbsSeekBar__uType*)::uAllocClassType(sizeof(AbsSeekBar__uType), "Android.android.widget.AbsSeekBar", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::ProgressBar__typeof());
    type->__fp_drawableStateChanged = (void(*)(::app::Android::android::view::View*))AbsSeekBar__drawableStateChanged;
    type->__fp_jumpDrawablesToCurrentState = (void(*)(::app::Android::android::view::View*))AbsSeekBar__jumpDrawablesToCurrentState;
    type->__fp_onDraw = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::Canvas*))AbsSeekBar__onDraw;
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))AbsSeekBar__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))AbsSeekBar__onInitializeAccessibilityNodeInfo;
    type->__fp_onKeyDown = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::view::KeyEvent*))AbsSeekBar__onKeyDown;
    type->__fp_onMeasure = (void(*)(::app::Android::android::view::View*, int, int))AbsSeekBar__onMeasure;
    type->__fp_onRtlPropertiesChanged = (void(*)(::app::Android::android::view::View*, int))AbsSeekBar__onRtlPropertiesChanged;
    type->__fp_onSizeChanged = (void(*)(::app::Android::android::view::View*, int, int, int, int))AbsSeekBar__onSizeChanged;
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))AbsSeekBar__onTouchEvent;
    type->__fp_performAccessibilityAction = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::os::Bundle*))AbsSeekBar__performAccessibilityAction;
    type->__fp_setMax = (void(*)(::app::Android::android::widget::ProgressBar*, int))AbsSeekBar__setMax;
    type->__fp_verifyDrawable = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::drawable::Drawable*))AbsSeekBar__verifyDrawable;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AbsSeekBar__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AbsSeekBar__uType, __interface_1));

    type->SetFields(23,
        ::uNewField("_javaClass", &AbsSeekBar___javaClass_4, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("AbsSeekBar_24535_ID_c", &AbsSeekBar__AbsSeekBar_24535_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("AbsSeekBar_24536_ID_c", &AbsSeekBar__AbsSeekBar_24536_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("AbsSeekBar_24537_ID_c", &AbsSeekBar__AbsSeekBar_24537_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("drawableStateChanged_24547_ID", &AbsSeekBar__drawableStateChanged_24547_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getKeyProgressIncrement_24543_ID", &AbsSeekBar__getKeyProgressIncrement_24543_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getThumb_24539_ID", &AbsSeekBar__getThumb_24539_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getThumbOffset_24540_ID", &AbsSeekBar__getThumbOffset_24540_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("jumpDrawablesToCurrentState_24546_ID", &AbsSeekBar__jumpDrawablesToCurrentState_24546_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDraw_24549_ID", &AbsSeekBar__onDraw_24549_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_24553_ID", &AbsSeekBar__onInitializeAccessibilityEvent_24553_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_24554_ID", &AbsSeekBar__onInitializeAccessibilityNodeInfo_24554_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onKeyDown_24552_ID", &AbsSeekBar__onKeyDown_24552_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onMeasure_24550_ID", &AbsSeekBar__onMeasure_24550_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onRtlPropertiesChanged_24556_ID", &AbsSeekBar__onRtlPropertiesChanged_24556_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onSizeChanged_24548_ID", &AbsSeekBar__onSizeChanged_24548_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onTouchEvent_24551_ID", &AbsSeekBar__onTouchEvent_24551_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performAccessibilityAction_24555_ID", &AbsSeekBar__performAccessibilityAction_24555_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setKeyProgressIncrement_24542_ID", &AbsSeekBar__setKeyProgressIncrement_24542_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setMax_24544_ID", &AbsSeekBar__setMax_24544_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setThumb_24538_ID", &AbsSeekBar__setThumb_24538_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setThumbOffset_24541_ID", &AbsSeekBar__setThumbOffset_24541_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("verifyDrawable_24545_ID", &AbsSeekBar__verifyDrawable_24545_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(26,
        ::uNewFunctionVoid("_Init", AbsSeekBar___Init_4, 0, true),
        ::uNewFunctionVoid("drawableStateChanged_IMPL_24547", AbsSeekBar__drawableStateChanged_IMPL_24547, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getKeyProgressIncrement", AbsSeekBar__getKeyProgressIncrement, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getKeyProgressIncrement_IMPL_24543", AbsSeekBar__getKeyProgressIncrement_IMPL_24543, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getThumb", AbsSeekBar__getThumb, 0, false, ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunction("getThumb_IMPL_24539", AbsSeekBar__getThumb_IMPL_24539, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getThumbOffset", AbsSeekBar__getThumbOffset, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getThumbOffset_IMPL_24540", AbsSeekBar__getThumbOffset_IMPL_24540, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("jumpDrawablesToCurrentState_IMPL_24546", AbsSeekBar__jumpDrawablesToCurrentState_IMPL_24546, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onDraw_IMPL_24549", AbsSeekBar__onDraw_IMPL_24549, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_24553", AbsSeekBar__onInitializeAccessibilityEvent_IMPL_24553, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_24554", AbsSeekBar__onInitializeAccessibilityNodeInfo_IMPL_24554, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onKeyDown_IMPL_24552", AbsSeekBar__onKeyDown_IMPL_24552, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onMeasure_IMPL_24550", AbsSeekBar__onMeasure_IMPL_24550, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onRtlPropertiesChanged_IMPL_24556", AbsSeekBar__onRtlPropertiesChanged_IMPL_24556, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onSizeChanged_IMPL_24548", AbsSeekBar__onSizeChanged_IMPL_24548, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("onTouchEvent_IMPL_24551", AbsSeekBar__onTouchEvent_IMPL_24551, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("performAccessibilityAction_IMPL_24555", AbsSeekBar__performAccessibilityAction_IMPL_24555, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setKeyProgressIncrement", AbsSeekBar__setKeyProgressIncrement, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setKeyProgressIncrement_IMPL_24542", AbsSeekBar__setKeyProgressIncrement_IMPL_24542, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setMax_IMPL_24544", AbsSeekBar__setMax_IMPL_24544, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setThumb", AbsSeekBar__setThumb, 0, false, ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunctionVoid("setThumb_IMPL_24538", AbsSeekBar__setThumb_IMPL_24538, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setThumbOffset", AbsSeekBar__setThumbOffset, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setThumbOffset_IMPL_24541", AbsSeekBar__setThumbOffset_IMPL_24541, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("verifyDrawable_IMPL_24545", AbsSeekBar__verifyDrawable_IMPL_24545, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void AbsSeekBar___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::AbsSeekBar___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::AbsSeekBar___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/AbsSeekBar"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::AbsSeekBar___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.AbsSeekBar'", 49);; }
}

void AbsSeekBar___ObjInit_12(AbsSeekBar* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::widget::ProgressBar___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__AbsSeekBar_24535_ID_c,::app::Android::android::widget::AbsSeekBar___javaClass_4,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__AbsSeekBar_24535_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void AbsSeekBar___ObjInit_13(AbsSeekBar* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    ::app::Android::android::widget::ProgressBar___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__AbsSeekBar_24536_ID_c,::app::Android::android::widget::AbsSeekBar___javaClass_4,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__AbsSeekBar_24536_ID_c, _obArg0, _obArg1);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void AbsSeekBar___ObjInit_14(AbsSeekBar* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    ::app::Android::android::widget::ProgressBar___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__AbsSeekBar_24537_ID_c,::app::Android::android::widget::AbsSeekBar___javaClass_4,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__AbsSeekBar_24537_ID_c, _obArg0, _obArg1, ((jint)arg2));;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void AbsSeekBar___ObjInit_15(AbsSeekBar* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::widget::ProgressBar___ObjInit_11(__this, obj, utype, hasFallbackClass, resolveType);
}

void AbsSeekBar__drawableStateChanged(AbsSeekBar* __this)
{
    AbsSeekBar__drawableStateChanged_IMPL_24547(NULL, __this->_subclassed, __this->_javaObject);
}

void AbsSeekBar__drawableStateChanged_IMPL_24547(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__drawableStateChanged_24547_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"drawableStateChanged","()V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.drawableStateChanged could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__drawableStateChanged_24547_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__drawableStateChanged_24547_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int AbsSeekBar__getKeyProgressIncrement(AbsSeekBar* __this)
{
    return AbsSeekBar__getKeyProgressIncrement_IMPL_24543(NULL, __this->_subclassed, __this->_javaObject);
}

int AbsSeekBar__getKeyProgressIncrement_IMPL_24543(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__getKeyProgressIncrement_24543_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"getKeyProgressIncrement","()I",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.getKeyProgressIncrement could not be cached",92);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__getKeyProgressIncrement_24543_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__getKeyProgressIncrement_24543_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::graphics::drawable::Drawable* AbsSeekBar__getThumb(AbsSeekBar* __this)
{
    return ::uCast< ::app::Android::android::graphics::drawable::Drawable*>(AbsSeekBar__getThumb_IMPL_24539(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::graphics::drawable::Drawable__typeof());
}

::uObject* AbsSeekBar__getThumb_IMPL_24539(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__getThumb_24539_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"getThumb","()Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.getThumb could not be cached",77);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__getThumb_24539_ID),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__getThumb_24539_ID),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int AbsSeekBar__getThumbOffset(AbsSeekBar* __this)
{
    return AbsSeekBar__getThumbOffset_IMPL_24540(NULL, __this->_subclassed, __this->_javaObject);
}

int AbsSeekBar__getThumbOffset_IMPL_24540(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__getThumbOffset_24540_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"getThumbOffset","()I",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.getThumbOffset could not be cached",83);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__getThumbOffset_24540_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__getThumbOffset_24540_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void AbsSeekBar__jumpDrawablesToCurrentState(AbsSeekBar* __this)
{
    AbsSeekBar__jumpDrawablesToCurrentState_IMPL_24546(NULL, __this->_subclassed, __this->_javaObject);
}

void AbsSeekBar__jumpDrawablesToCurrentState_IMPL_24546(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__jumpDrawablesToCurrentState_24546_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.jumpDrawablesToCurrentState could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__jumpDrawablesToCurrentState_24546_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__jumpDrawablesToCurrentState_24546_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void AbsSeekBar__onDraw(AbsSeekBar* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    AbsSeekBar__onDraw_IMPL_24549(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void AbsSeekBar__onDraw_IMPL_24549(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__onDraw_24549_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"onDraw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onDraw could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__onDraw_24549_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__onDraw_24549_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void AbsSeekBar__onInitializeAccessibilityEvent(AbsSeekBar* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    AbsSeekBar__onInitializeAccessibilityEvent_IMPL_24553(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void AbsSeekBar__onInitializeAccessibilityEvent_IMPL_24553(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__onInitializeAccessibilityEvent_24553_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onInitializeAccessibilityEvent could not be cached",99);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__onInitializeAccessibilityEvent_24553_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__onInitializeAccessibilityEvent_24553_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void AbsSeekBar__onInitializeAccessibilityNodeInfo(AbsSeekBar* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    AbsSeekBar__onInitializeAccessibilityNodeInfo_IMPL_24554(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void AbsSeekBar__onInitializeAccessibilityNodeInfo_IMPL_24554(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__onInitializeAccessibilityNodeInfo_24554_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onInitializeAccessibilityNodeInfo could not be cached",102);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__onInitializeAccessibilityNodeInfo_24554_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__onInitializeAccessibilityNodeInfo_24554_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool AbsSeekBar__onKeyDown(AbsSeekBar* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1)
{
    return AbsSeekBar__onKeyDown_IMPL_24552(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool AbsSeekBar__onKeyDown_IMPL_24552(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__onKeyDown_24552_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"onKeyDown","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onKeyDown could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__onKeyDown_24552_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__onKeyDown_24552_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void AbsSeekBar__onMeasure(AbsSeekBar* __this, int arg0, int arg1)
{
    AbsSeekBar__onMeasure_IMPL_24550(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void AbsSeekBar__onMeasure_IMPL_24550(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__onMeasure_24550_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onMeasure could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__onMeasure_24550_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__onMeasure_24550_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void AbsSeekBar__onRtlPropertiesChanged(AbsSeekBar* __this, int arg0)
{
    AbsSeekBar__onRtlPropertiesChanged_IMPL_24556(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void AbsSeekBar__onRtlPropertiesChanged_IMPL_24556(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__onRtlPropertiesChanged_24556_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"onRtlPropertiesChanged","(I)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onRtlPropertiesChanged could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__onRtlPropertiesChanged_24556_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__onRtlPropertiesChanged_24556_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void AbsSeekBar__onSizeChanged(AbsSeekBar* __this, int arg0, int arg1, int arg2, int arg3)
{
    AbsSeekBar__onSizeChanged_IMPL_24548(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void AbsSeekBar__onSizeChanged_IMPL_24548(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__onSizeChanged_24548_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"onSizeChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onSizeChanged could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__onSizeChanged_24548_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__onSizeChanged_24548_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool AbsSeekBar__onTouchEvent(AbsSeekBar* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return AbsSeekBar__onTouchEvent_IMPL_24551(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool AbsSeekBar__onTouchEvent_IMPL_24551(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__onTouchEvent_24551_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onTouchEvent could not be cached",81);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__onTouchEvent_24551_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__onTouchEvent_24551_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool AbsSeekBar__performAccessibilityAction(AbsSeekBar* __this, int arg0, ::app::Android::android::os::Bundle* arg1)
{
    return AbsSeekBar__performAccessibilityAction_IMPL_24555(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool AbsSeekBar__performAccessibilityAction_IMPL_24555(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__performAccessibilityAction_24555_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"performAccessibilityAction","(ILandroid/os/Bundle;)Z",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.performAccessibilityAction could not be cached",95);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__performAccessibilityAction_24555_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__performAccessibilityAction_24555_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void AbsSeekBar__setKeyProgressIncrement(AbsSeekBar* __this, int arg0)
{
    AbsSeekBar__setKeyProgressIncrement_IMPL_24542(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void AbsSeekBar__setKeyProgressIncrement_IMPL_24542(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__setKeyProgressIncrement_24542_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"setKeyProgressIncrement","(I)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.setKeyProgressIncrement could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__setKeyProgressIncrement_24542_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__setKeyProgressIncrement_24542_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void AbsSeekBar__setMax(AbsSeekBar* __this, int arg0)
{
    AbsSeekBar__setMax_IMPL_24544(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void AbsSeekBar__setMax_IMPL_24544(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__setMax_24544_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"setMax","(I)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.setMax could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__setMax_24544_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__setMax_24544_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void AbsSeekBar__setThumb(AbsSeekBar* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    AbsSeekBar__setThumb_IMPL_24538(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void AbsSeekBar__setThumb_IMPL_24538(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__setThumb_24538_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"setThumb","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.setThumb could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__setThumb_24538_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__setThumb_24538_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void AbsSeekBar__setThumbOffset(AbsSeekBar* __this, int arg0)
{
    AbsSeekBar__setThumbOffset_IMPL_24541(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void AbsSeekBar__setThumbOffset_IMPL_24541(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__setThumbOffset_24541_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"setThumbOffset","(I)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.setThumbOffset could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__setThumbOffset_24541_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__setThumbOffset_24541_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool AbsSeekBar__verifyDrawable(AbsSeekBar* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return AbsSeekBar__verifyDrawable_IMPL_24545(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool AbsSeekBar__verifyDrawable_IMPL_24545(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__verifyDrawable_24545_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.verifyDrawable could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__verifyDrawable_24545_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__verifyDrawable_24545_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Button___javaClass_4;
jmethodID Button__Button_24840_ID_c;
jmethodID Button__onInitializeAccessibilityEvent_24843_ID;
jmethodID Button__onInitializeAccessibilityNodeInfo_24844_ID;

Button__uType* Button__typeof()
{
    static ::uStaticStrong<Button__uType*> type;
    if (type != NULL) return type;

    type = (Button__uType*)::uAllocClassType(sizeof(Button__uType), "Android.android.widget.Button", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::TextView__typeof());
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))Button__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))Button__onInitializeAccessibilityNodeInfo;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Button__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Button__uType, __interface_1));

    type->SetFields(4,
        ::uNewField("_javaClass", &Button___javaClass_4, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("Button_24840_ID_c", &Button__Button_24840_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_24843_ID", &Button__onInitializeAccessibilityEvent_24843_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_24844_ID", &Button__onInitializeAccessibilityNodeInfo_24844_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("_Init", Button___Init_4, 0, true),
        ::uNewFunction(".ctor", Button__New_13, 0, true, Button__typeof(), ::app::Android::android::content::Context__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_24843", Button__onInitializeAccessibilityEvent_IMPL_24843, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_24844", Button__onInitializeAccessibilityNodeInfo_IMPL_24844, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Button___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::Button___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::Button___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/Button"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::Button___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.Button'", 45);; }
}

void Button___ObjInit_12(Button* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::widget::TextView___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::Button___javaClass_4,::app::Android::android::widget::Button___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::Button__Button_24840_ID_c,::app::Android::android::widget::Button___javaClass_4,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.Button.<init> could not be cached",71);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::Button___javaClass_4, ::app::Android::android::widget::Button__Button_24840_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void Button___ObjInit_15(Button* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::widget::TextView___ObjInit_11(__this, obj, utype, hasFallbackClass, resolveType);
}

Button* Button__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    Button* inst = (Button*)::uAllocObject(sizeof(Button), Button__typeof());
    inst->_ObjInit_12(arg0);
    return inst;
}

void Button__onInitializeAccessibilityEvent(Button* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    Button__onInitializeAccessibilityEvent_IMPL_24843(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Button__onInitializeAccessibilityEvent_IMPL_24843(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Button___javaClass_4,::app::Android::android::widget::Button___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::Button__onInitializeAccessibilityEvent_24843_ID,::app::Android::android::widget::Button___javaClass_4,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.Button.onInitializeAccessibilityEvent could not be cached",95);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::Button___javaClass_4, ::app::Android::android::widget::Button__onInitializeAccessibilityEvent_24843_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::Button__onInitializeAccessibilityEvent_24843_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Button__onInitializeAccessibilityNodeInfo(Button* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    Button__onInitializeAccessibilityNodeInfo_IMPL_24844(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Button__onInitializeAccessibilityNodeInfo_IMPL_24844(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Button___javaClass_4,::app::Android::android::widget::Button___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::Button__onInitializeAccessibilityNodeInfo_24844_ID,::app::Android::android::widget::Button___javaClass_4,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.Button.onInitializeAccessibilityNodeInfo could not be cached",98);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::Button___javaClass_4, ::app::Android::android::widget::Button__onInitializeAccessibilityNodeInfo_24844_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::Button__onInitializeAccessibilityNodeInfo_24844_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass CompoundButton___javaClass_5;
jmethodID CompoundButton__drawableStateChanged_24941_ID;
jmethodID CompoundButton__jumpDrawablesToCurrentState_24943_ID;
jmethodID CompoundButton__onCreateDrawableState_24940_ID;
jmethodID CompoundButton__onDraw_24939_ID;
jmethodID CompoundButton__onInitializeAccessibilityEvent_24935_ID;
jmethodID CompoundButton__onInitializeAccessibilityNodeInfo_24936_ID;
jmethodID CompoundButton__performClick_24929_ID;
jmethodID CompoundButton__setChecked_24931_ID;
jmethodID CompoundButton__setOnCheckedChangeListener_24932_ID;
jmethodID CompoundButton__verifyDrawable_24942_ID;

CompoundButton__uType* CompoundButton__typeof()
{
    static ::uStaticStrong<CompoundButton__uType*> type;
    if (type != NULL) return type;

    type = (CompoundButton__uType*)::uAllocClassType(sizeof(CompoundButton__uType), "Android.android.widget.CompoundButton", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::Button__typeof());
    type->__fp_drawableStateChanged = (void(*)(::app::Android::android::view::View*))CompoundButton__drawableStateChanged;
    type->__fp_jumpDrawablesToCurrentState = (void(*)(::app::Android::android::view::View*))CompoundButton__jumpDrawablesToCurrentState;
    type->__fp_onCreateDrawableState = (::app::Android::Runtime::IntArray*(*)(::app::Android::android::view::View*, int))CompoundButton__onCreateDrawableState;
    type->__fp_onDraw = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::Canvas*))CompoundButton__onDraw;
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))CompoundButton__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))CompoundButton__onInitializeAccessibilityNodeInfo;
    type->__fp_performClick = (bool(*)(::app::Android::android::view::View*))CompoundButton__performClick;
    type->__fp_setChecked = CompoundButton__setChecked;
    type->__fp_verifyDrawable = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::drawable::Drawable*))CompoundButton__verifyDrawable;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(CompoundButton__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(CompoundButton__uType, __interface_1));

    type->SetFields(11,
        ::uNewField("_javaClass", &CompoundButton___javaClass_5, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("drawableStateChanged_24941_ID", &CompoundButton__drawableStateChanged_24941_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("jumpDrawablesToCurrentState_24943_ID", &CompoundButton__jumpDrawablesToCurrentState_24943_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onCreateDrawableState_24940_ID", &CompoundButton__onCreateDrawableState_24940_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDraw_24939_ID", &CompoundButton__onDraw_24939_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_24935_ID", &CompoundButton__onInitializeAccessibilityEvent_24935_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_24936_ID", &CompoundButton__onInitializeAccessibilityNodeInfo_24936_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performClick_24929_ID", &CompoundButton__performClick_24929_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setChecked_24931_ID", &CompoundButton__setChecked_24931_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setOnCheckedChangeListener_24932_ID", &CompoundButton__setOnCheckedChangeListener_24932_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("verifyDrawable_24942_ID", &CompoundButton__verifyDrawable_24942_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(13,
        ::uNewFunctionVoid("_Init", CompoundButton___Init_5, 0, true),
        ::uNewFunctionVoid("drawableStateChanged_IMPL_24941", CompoundButton__drawableStateChanged_IMPL_24941, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("jumpDrawablesToCurrentState_IMPL_24943", CompoundButton__jumpDrawablesToCurrentState_IMPL_24943, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("onCreateDrawableState_IMPL_24940", CompoundButton__onCreateDrawableState_IMPL_24940, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onDraw_IMPL_24939", CompoundButton__onDraw_IMPL_24939, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_24935", CompoundButton__onInitializeAccessibilityEvent_IMPL_24935, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_24936", CompoundButton__onInitializeAccessibilityNodeInfo_IMPL_24936, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("performClick_IMPL_24929", CompoundButton__performClick_IMPL_24929, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("setChecked", type->__fp_setChecked, offsetof(CompoundButton__uType, __fp_setChecked), false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setChecked_IMPL_24931", CompoundButton__setChecked_IMPL_24931, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setOnCheckedChangeListener", CompoundButton__setOnCheckedChangeListener, 0, false, ::app::Android::android::widget::CompoundButtonDLROnCheckedChangeListener__typeof()),
        ::uNewFunctionVoid("setOnCheckedChangeListener_IMPL_24932", CompoundButton__setOnCheckedChangeListener_IMPL_24932, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("verifyDrawable_IMPL_24942", CompoundButton__verifyDrawable_IMPL_24942, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void CompoundButton___Init_5(::uStatic* __this)
{
    if (::app::Android::android::widget::CompoundButton___javaClass_5) { return; }
    INIT_JNI;
    ::app::Android::android::widget::CompoundButton___javaClass_5 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/CompoundButton"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::CompoundButton___javaClass_5) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.CompoundButton'", 53);; }
}

void CompoundButton___ObjInit_19(CompoundButton* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::widget::Button___ObjInit_15(__this, obj, utype, hasFallbackClass, resolveType);
}

void CompoundButton__drawableStateChanged(CompoundButton* __this)
{
    CompoundButton__drawableStateChanged_IMPL_24941(NULL, __this->_subclassed, __this->_javaObject);
}

void CompoundButton__drawableStateChanged_IMPL_24941(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::CompoundButton___javaClass_5,::app::Android::android::widget::CompoundButton___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::CompoundButton__drawableStateChanged_24941_ID,::app::Android::android::widget::CompoundButton___javaClass_5,"drawableStateChanged","()V",GetMethodID,"Id for fallback method android.widget.CompoundButton.drawableStateChanged could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton___javaClass_5, ::app::Android::android::widget::CompoundButton__drawableStateChanged_24941_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton__drawableStateChanged_24941_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void CompoundButton__jumpDrawablesToCurrentState(CompoundButton* __this)
{
    CompoundButton__jumpDrawablesToCurrentState_IMPL_24943(NULL, __this->_subclassed, __this->_javaObject);
}

void CompoundButton__jumpDrawablesToCurrentState_IMPL_24943(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::CompoundButton___javaClass_5,::app::Android::android::widget::CompoundButton___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::CompoundButton__jumpDrawablesToCurrentState_24943_ID,::app::Android::android::widget::CompoundButton___javaClass_5,"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.CompoundButton.jumpDrawablesToCurrentState could not be cached",100);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton___javaClass_5, ::app::Android::android::widget::CompoundButton__jumpDrawablesToCurrentState_24943_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton__jumpDrawablesToCurrentState_24943_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::Runtime::IntArray* CompoundButton__onCreateDrawableState(CompoundButton* __this, int arg0)
{
    return ::uCast< ::app::Android::Runtime::IntArray*>(CompoundButton__onCreateDrawableState_IMPL_24940(NULL, __this->_subclassed, __this->_javaObject, arg0), ::app::Android::Runtime::IntArray__typeof());
}

::uObject* CompoundButton__onCreateDrawableState_IMPL_24940(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::CompoundButton___javaClass_5,::app::Android::android::widget::CompoundButton___Init_5(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::CompoundButton__onCreateDrawableState_24940_ID,::app::Android::android::widget::CompoundButton___javaClass_5,"onCreateDrawableState","(I)[I",GetMethodID,"Id for fallback method android.widget.CompoundButton.onCreateDrawableState could not be cached",94);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::CompoundButton___javaClass_5, ::app::Android::android::widget::CompoundButton__onCreateDrawableState_24940_ID, ((jint)arg2_)),result,::app::Android::Runtime::IntArray__typeof(),::app::Android::Runtime::IntArray*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::CompoundButton__onCreateDrawableState_24940_ID, ((jint)arg2_)),result,::app::Android::Runtime::IntArray__typeof(),::app::Android::Runtime::IntArray*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void CompoundButton__onDraw(CompoundButton* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    CompoundButton__onDraw_IMPL_24939(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void CompoundButton__onDraw_IMPL_24939(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::CompoundButton___javaClass_5,::app::Android::android::widget::CompoundButton___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::CompoundButton__onDraw_24939_ID,::app::Android::android::widget::CompoundButton___javaClass_5,"onDraw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.CompoundButton.onDraw could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton___javaClass_5, ::app::Android::android::widget::CompoundButton__onDraw_24939_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton__onDraw_24939_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void CompoundButton__onInitializeAccessibilityEvent(CompoundButton* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    CompoundButton__onInitializeAccessibilityEvent_IMPL_24935(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void CompoundButton__onInitializeAccessibilityEvent_IMPL_24935(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::CompoundButton___javaClass_5,::app::Android::android::widget::CompoundButton___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::CompoundButton__onInitializeAccessibilityEvent_24935_ID,::app::Android::android::widget::CompoundButton___javaClass_5,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.CompoundButton.onInitializeAccessibilityEvent could not be cached",103);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton___javaClass_5, ::app::Android::android::widget::CompoundButton__onInitializeAccessibilityEvent_24935_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton__onInitializeAccessibilityEvent_24935_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void CompoundButton__onInitializeAccessibilityNodeInfo(CompoundButton* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    CompoundButton__onInitializeAccessibilityNodeInfo_IMPL_24936(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void CompoundButton__onInitializeAccessibilityNodeInfo_IMPL_24936(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::CompoundButton___javaClass_5,::app::Android::android::widget::CompoundButton___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::CompoundButton__onInitializeAccessibilityNodeInfo_24936_ID,::app::Android::android::widget::CompoundButton___javaClass_5,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.CompoundButton.onInitializeAccessibilityNodeInfo could not be cached",106);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton___javaClass_5, ::app::Android::android::widget::CompoundButton__onInitializeAccessibilityNodeInfo_24936_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton__onInitializeAccessibilityNodeInfo_24936_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool CompoundButton__performClick(CompoundButton* __this)
{
    return CompoundButton__performClick_IMPL_24929(NULL, __this->_subclassed, __this->_javaObject);
}

bool CompoundButton__performClick_IMPL_24929(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::CompoundButton___javaClass_5,::app::Android::android::widget::CompoundButton___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::CompoundButton__performClick_24929_ID,::app::Android::android::widget::CompoundButton___javaClass_5,"performClick","()Z",GetMethodID,"Id for fallback method android.widget.CompoundButton.performClick could not be cached",85);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::CompoundButton___javaClass_5, ::app::Android::android::widget::CompoundButton__performClick_24929_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::CompoundButton__performClick_24929_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void CompoundButton__setChecked(CompoundButton* __this, bool arg0)
{
    CompoundButton__setChecked_IMPL_24931(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void CompoundButton__setChecked_IMPL_24931(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::CompoundButton___javaClass_5,::app::Android::android::widget::CompoundButton___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::CompoundButton__setChecked_24931_ID,::app::Android::android::widget::CompoundButton___javaClass_5,"setChecked","(Z)V",GetMethodID,"Id for fallback method android.widget.CompoundButton.setChecked could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton___javaClass_5, ::app::Android::android::widget::CompoundButton__setChecked_24931_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton__setChecked_24931_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void CompoundButton__setOnCheckedChangeListener(CompoundButton* __this, ::uObject* arg0)
{
    CompoundButton__setOnCheckedChangeListener_IMPL_24932(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void CompoundButton__setOnCheckedChangeListener_IMPL_24932(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::CompoundButton___javaClass_5,::app::Android::android::widget::CompoundButton___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::CompoundButton__setOnCheckedChangeListener_24932_ID,::app::Android::android::widget::CompoundButton___javaClass_5,"setOnCheckedChangeListener","(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V",GetMethodID,"Id for fallback method android.widget.CompoundButton.setOnCheckedChangeListener could not be cached",99);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton___javaClass_5, ::app::Android::android::widget::CompoundButton__setOnCheckedChangeListener_24932_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton__setOnCheckedChangeListener_24932_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool CompoundButton__verifyDrawable(CompoundButton* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return CompoundButton__verifyDrawable_IMPL_24942(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool CompoundButton__verifyDrawable_IMPL_24942(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::CompoundButton___javaClass_5,::app::Android::android::widget::CompoundButton___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::CompoundButton__verifyDrawable_24942_ID,::app::Android::android::widget::CompoundButton___javaClass_5,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z",GetMethodID,"Id for fallback method android.widget.CompoundButton.verifyDrawable could not be cached",87);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::CompoundButton___javaClass_5, ::app::Android::android::widget::CompoundButton__verifyDrawable_24942_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::CompoundButton__verifyDrawable_24942_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* CompoundButtonDLROnCheckedChangeListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.widget.CompoundButtonDLROnCheckedChangeListener");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass EditText___javaClass_4;
jmethodID EditText__EditText_25066_ID_c;
jmethodID EditText__onInitializeAccessibilityEvent_25078_ID;
jmethodID EditText__onInitializeAccessibilityNodeInfo_25079_ID;
jmethodID EditText__setEllipsize_25077_ID;

EditText__uType* EditText__typeof()
{
    static ::uStaticStrong<EditText__uType*> type;
    if (type != NULL) return type;

    type = (EditText__uType*)::uAllocClassType(sizeof(EditText__uType), "Android.android.widget.EditText", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::TextView__typeof());
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))EditText__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))EditText__onInitializeAccessibilityNodeInfo;
    type->__fp_setEllipsize = (void(*)(::app::Android::android::widget::TextView*, ::app::Android::android::text::TextUtilsDLRTruncateAt*))EditText__setEllipsize;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(EditText__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(EditText__uType, __interface_1));

    type->SetFields(5,
        ::uNewField("_javaClass", &EditText___javaClass_4, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("EditText_25066_ID_c", &EditText__EditText_25066_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_25078_ID", &EditText__onInitializeAccessibilityEvent_25078_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_25079_ID", &EditText__onInitializeAccessibilityNodeInfo_25079_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setEllipsize_25077_ID", &EditText__setEllipsize_25077_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("_Init", EditText___Init_4, 0, true),
        ::uNewFunction(".ctor", EditText__New_13, 0, true, EditText__typeof(), ::app::Android::android::content::Context__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_25078", EditText__onInitializeAccessibilityEvent_IMPL_25078, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_25079", EditText__onInitializeAccessibilityNodeInfo_IMPL_25079, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setEllipsize_IMPL_25077", EditText__setEllipsize_IMPL_25077, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void EditText___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::EditText___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::EditText___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/EditText"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::EditText___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.EditText'", 47);; }
}

void EditText___ObjInit_12(EditText* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::widget::TextView___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::EditText___javaClass_4,::app::Android::android::widget::EditText___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::EditText__EditText_25066_ID_c,::app::Android::android::widget::EditText___javaClass_4,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.EditText.<init> could not be cached",73);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::EditText___javaClass_4, ::app::Android::android::widget::EditText__EditText_25066_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

EditText* EditText__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    EditText* inst = (EditText*)::uAllocObject(sizeof(EditText), EditText__typeof());
    inst->_ObjInit_12(arg0);
    return inst;
}

void EditText__onInitializeAccessibilityEvent(EditText* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    EditText__onInitializeAccessibilityEvent_IMPL_25078(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void EditText__onInitializeAccessibilityEvent_IMPL_25078(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::EditText___javaClass_4,::app::Android::android::widget::EditText___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::EditText__onInitializeAccessibilityEvent_25078_ID,::app::Android::android::widget::EditText___javaClass_4,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.EditText.onInitializeAccessibilityEvent could not be cached",97);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::EditText___javaClass_4, ::app::Android::android::widget::EditText__onInitializeAccessibilityEvent_25078_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::EditText__onInitializeAccessibilityEvent_25078_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void EditText__onInitializeAccessibilityNodeInfo(EditText* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    EditText__onInitializeAccessibilityNodeInfo_IMPL_25079(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void EditText__onInitializeAccessibilityNodeInfo_IMPL_25079(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::EditText___javaClass_4,::app::Android::android::widget::EditText___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::EditText__onInitializeAccessibilityNodeInfo_25079_ID,::app::Android::android::widget::EditText___javaClass_4,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.EditText.onInitializeAccessibilityNodeInfo could not be cached",100);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::EditText___javaClass_4, ::app::Android::android::widget::EditText__onInitializeAccessibilityNodeInfo_25079_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::EditText__onInitializeAccessibilityNodeInfo_25079_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void EditText__setEllipsize(EditText* __this, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg0)
{
    EditText__setEllipsize_IMPL_25077(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void EditText__setEllipsize_IMPL_25077(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::EditText___javaClass_4,::app::Android::android::widget::EditText___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::EditText__setEllipsize_25077_ID,::app::Android::android::widget::EditText___javaClass_4,"setEllipsize","(Landroid/text/TextUtils$TruncateAt;)V",GetMethodID,"Id for fallback method android.widget.EditText.setEllipsize could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::EditText___javaClass_4, ::app::Android::android::widget::EditText__setEllipsize_25077_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::EditText__setEllipsize_25077_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass FrameLayout___javaClass_4;
jmethodID FrameLayout__checkLayoutParams_25192_ID;
jmethodID FrameLayout__drawableStateChanged_25178_ID;
jmethodID FrameLayout__FrameLayout_25171_ID_c;
jmethodID FrameLayout__FrameLayout_25172_ID_c;
jmethodID FrameLayout__FrameLayout_25173_ID_c;
jmethodID FrameLayout__gatherTransparentRegion_25186_ID;
jmethodID FrameLayout__generateDefaultLayoutParams_25179_ID;
jmethodID FrameLayout__generateLayoutParams_25190_ID;
jmethodID FrameLayout__generateLayoutParams_25193_ID;
jmethodID FrameLayout__getConsiderGoneChildrenWhenMeasuring_25188_ID;
jmethodID FrameLayout__getForeground_25181_ID;
jmethodID FrameLayout__getForegroundGravity_25174_ID;
jmethodID FrameLayout__getMeasureAllChildren_25189_ID;
jmethodID FrameLayout__j_draw_25185_ID;
jmethodID FrameLayout__jumpDrawablesToCurrentState_25177_ID;
jmethodID FrameLayout__onInitializeAccessibilityEvent_25194_ID;
jmethodID FrameLayout__onInitializeAccessibilityNodeInfo_25195_ID;
jmethodID FrameLayout__onLayout_25183_ID;
jmethodID FrameLayout__onMeasure_25182_ID;
jmethodID FrameLayout__onSizeChanged_25184_ID;
jmethodID FrameLayout__setForeground_25180_ID;
jmethodID FrameLayout__setForegroundGravity_25175_ID;
jmethodID FrameLayout__setMeasureAllChildren_25187_ID;
jmethodID FrameLayout__shouldDelayChildPressedState_25191_ID;
jmethodID FrameLayout__verifyDrawable_25176_ID;

FrameLayout__uType* FrameLayout__typeof()
{
    static ::uStaticStrong<FrameLayout__uType*> type;
    if (type != NULL) return type;

    type = (FrameLayout__uType*)::uAllocClassType(sizeof(FrameLayout__uType), "Android.android.widget.FrameLayout", false, 3, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroup__typeof());
    type->__fp_checkLayoutParams = (bool(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::ViewGroupDLRLayoutParams*))FrameLayout__checkLayoutParams;
    type->__fp_drawableStateChanged = (void(*)(::app::Android::android::view::View*))FrameLayout__drawableStateChanged;
    type->__fp_gatherTransparentRegion = (bool(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::graphics::Region*))FrameLayout__gatherTransparentRegion;
    type->__fp_generateLayoutParams_1 = (::app::Android::android::view::ViewGroupDLRLayoutParams*(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::ViewGroupDLRLayoutParams*))FrameLayout__generateLayoutParams_1;
    type->__fp_j_draw = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::Canvas*))FrameLayout__j_draw;
    type->__fp_jumpDrawablesToCurrentState = (void(*)(::app::Android::android::view::View*))FrameLayout__jumpDrawablesToCurrentState;
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))FrameLayout__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))FrameLayout__onInitializeAccessibilityNodeInfo;
    type->__fp_onLayout = (void(*)(::app::Android::android::view::View*, bool, int, int, int, int))FrameLayout__onLayout;
    type->__fp_onMeasure = (void(*)(::app::Android::android::view::View*, int, int))FrameLayout__onMeasure;
    type->__fp_onSizeChanged = (void(*)(::app::Android::android::view::View*, int, int, int, int))FrameLayout__onSizeChanged;
    type->__fp_shouldDelayChildPressedState = (bool(*)(::app::Android::android::view::ViewGroup*))FrameLayout__shouldDelayChildPressedState;
    type->__fp_verifyDrawable = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::drawable::Drawable*))FrameLayout__verifyDrawable;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(FrameLayout__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(FrameLayout__uType, __interface_1),
        ::app::Android::android::view::ViewParent__typeof(), offsetof(FrameLayout__uType, __interface_2));

    type->SetFields(26,
        ::uNewField("_javaClass", &FrameLayout___javaClass_4, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("checkLayoutParams_25192_ID", &FrameLayout__checkLayoutParams_25192_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("drawableStateChanged_25178_ID", &FrameLayout__drawableStateChanged_25178_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("FrameLayout_25171_ID_c", &FrameLayout__FrameLayout_25171_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("FrameLayout_25172_ID_c", &FrameLayout__FrameLayout_25172_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("FrameLayout_25173_ID_c", &FrameLayout__FrameLayout_25173_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("gatherTransparentRegion_25186_ID", &FrameLayout__gatherTransparentRegion_25186_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("generateDefaultLayoutParams_25179_ID", &FrameLayout__generateDefaultLayoutParams_25179_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("generateLayoutParams_25190_ID", &FrameLayout__generateLayoutParams_25190_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("generateLayoutParams_25193_ID", &FrameLayout__generateLayoutParams_25193_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getConsiderGoneChildrenWhenMeasuring_25188_ID", &FrameLayout__getConsiderGoneChildrenWhenMeasuring_25188_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getForeground_25181_ID", &FrameLayout__getForeground_25181_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getForegroundGravity_25174_ID", &FrameLayout__getForegroundGravity_25174_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getMeasureAllChildren_25189_ID", &FrameLayout__getMeasureAllChildren_25189_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("j_draw_25185_ID", &FrameLayout__j_draw_25185_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("jumpDrawablesToCurrentState_25177_ID", &FrameLayout__jumpDrawablesToCurrentState_25177_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_25194_ID", &FrameLayout__onInitializeAccessibilityEvent_25194_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_25195_ID", &FrameLayout__onInitializeAccessibilityNodeInfo_25195_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onLayout_25183_ID", &FrameLayout__onLayout_25183_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onMeasure_25182_ID", &FrameLayout__onMeasure_25182_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onSizeChanged_25184_ID", &FrameLayout__onSizeChanged_25184_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setForeground_25180_ID", &FrameLayout__setForeground_25180_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setForegroundGravity_25175_ID", &FrameLayout__setForegroundGravity_25175_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setMeasureAllChildren_25187_ID", &FrameLayout__setMeasureAllChildren_25187_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("shouldDelayChildPressedState_25191_ID", &FrameLayout__shouldDelayChildPressedState_25191_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("verifyDrawable_25176_ID", &FrameLayout__verifyDrawable_25176_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(36,
        ::uNewFunctionVoid("_Init", FrameLayout___Init_4, 0, true),
        ::uNewFunction("checkLayoutParams_IMPL_25192", FrameLayout__checkLayoutParams_IMPL_25192, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("drawableStateChanged_IMPL_25178", FrameLayout__drawableStateChanged_IMPL_25178, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("gatherTransparentRegion_IMPL_25186", FrameLayout__gatherTransparentRegion_IMPL_25186, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("generateDefaultLayoutParams", FrameLayout__generateDefaultLayoutParams_1, 0, false, ::app::Android::android::widget::FrameLayoutDLRLayoutParams__typeof()),
        ::uNewFunction("generateDefaultLayoutParams_IMPL_25179", FrameLayout__generateDefaultLayoutParams_IMPL_25179, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("generateLayoutParams", FrameLayout__generateLayoutParams_2, 0, false, ::app::Android::android::widget::FrameLayoutDLRLayoutParams__typeof(), ::app::Android::android::util::AttributeSet__typeof()),
        ::uNewFunction("generateLayoutParams_IMPL_25190", FrameLayout__generateLayoutParams_IMPL_25190, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("generateLayoutParams_IMPL_25193", FrameLayout__generateLayoutParams_IMPL_25193, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getConsiderGoneChildrenWhenMeasuring", FrameLayout__getConsiderGoneChildrenWhenMeasuring, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("getConsiderGoneChildrenWhenMeasuring_IMPL_25188", FrameLayout__getConsiderGoneChildrenWhenMeasuring_IMPL_25188, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getForeground", FrameLayout__getForeground, 0, false, ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunction("getForeground_IMPL_25181", FrameLayout__getForeground_IMPL_25181, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getForegroundGravity", FrameLayout__getForegroundGravity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getForegroundGravity_IMPL_25174", FrameLayout__getForegroundGravity_IMPL_25174, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getMeasureAllChildren", FrameLayout__getMeasureAllChildren, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("getMeasureAllChildren_IMPL_25189", FrameLayout__getMeasureAllChildren_IMPL_25189, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("j_draw_IMPL_25185", FrameLayout__j_draw_IMPL_25185, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("jumpDrawablesToCurrentState_IMPL_25177", FrameLayout__jumpDrawablesToCurrentState_IMPL_25177, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", FrameLayout__New_10, 0, true, FrameLayout__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Android::android::util::AttributeSet__typeof()),
        ::uNewFunction(".ctor", FrameLayout__New_11, 0, true, FrameLayout__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Android::android::util::AttributeSet__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", FrameLayout__New_12, 0, true, FrameLayout__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", FrameLayout__New_9, 0, true, FrameLayout__typeof(), ::app::Android::android::content::Context__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_25194", FrameLayout__onInitializeAccessibilityEvent_IMPL_25194, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_25195", FrameLayout__onInitializeAccessibilityNodeInfo_IMPL_25195, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onLayout_IMPL_25183", FrameLayout__onLayout_IMPL_25183, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onMeasure_IMPL_25182", FrameLayout__onMeasure_IMPL_25182, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onSizeChanged_IMPL_25184", FrameLayout__onSizeChanged_IMPL_25184, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setForeground", FrameLayout__setForeground, 0, false, ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunctionVoid("setForeground_IMPL_25180", FrameLayout__setForeground_IMPL_25180, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setForegroundGravity", FrameLayout__setForegroundGravity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setForegroundGravity_IMPL_25175", FrameLayout__setForegroundGravity_IMPL_25175, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setMeasureAllChildren", FrameLayout__setMeasureAllChildren, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setMeasureAllChildren_IMPL_25187", FrameLayout__setMeasureAllChildren_IMPL_25187, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("shouldDelayChildPressedState_IMPL_25191", FrameLayout__shouldDelayChildPressedState_IMPL_25191, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("verifyDrawable_IMPL_25176", FrameLayout__verifyDrawable_IMPL_25176, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void FrameLayout___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::FrameLayout___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::FrameLayout___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/FrameLayout"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::FrameLayout___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.FrameLayout'", 50);; }
}

void FrameLayout___ObjInit_12(FrameLayout* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::view::ViewGroup___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__FrameLayout_25171_ID_c,::app::Android::android::widget::FrameLayout___javaClass_4,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__FrameLayout_25171_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void FrameLayout___ObjInit_13(FrameLayout* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    ::app::Android::android::view::ViewGroup___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__FrameLayout_25172_ID_c,::app::Android::android::widget::FrameLayout___javaClass_4,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__FrameLayout_25172_ID_c, _obArg0, _obArg1);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void FrameLayout___ObjInit_14(FrameLayout* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    ::app::Android::android::view::ViewGroup___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__FrameLayout_25173_ID_c,::app::Android::android::widget::FrameLayout___javaClass_4,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__FrameLayout_25173_ID_c, _obArg0, _obArg1, ((jint)arg2));;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void FrameLayout___ObjInit_15(FrameLayout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::ViewGroup___ObjInit_11(__this, obj, utype, hasFallbackClass, resolveType);
}

bool FrameLayout__checkLayoutParams(FrameLayout* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0)
{
    return FrameLayout__checkLayoutParams_IMPL_25192(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool FrameLayout__checkLayoutParams_IMPL_25192(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__checkLayoutParams_25192_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"checkLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Z",GetMethodID,"Id for fallback method android.widget.FrameLayout.checkLayoutParams could not be cached",87);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__checkLayoutParams_25192_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::FrameLayout__checkLayoutParams_25192_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void FrameLayout__drawableStateChanged(FrameLayout* __this)
{
    FrameLayout__drawableStateChanged_IMPL_25178(NULL, __this->_subclassed, __this->_javaObject);
}

void FrameLayout__drawableStateChanged_IMPL_25178(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__drawableStateChanged_25178_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"drawableStateChanged","()V",GetMethodID,"Id for fallback method android.widget.FrameLayout.drawableStateChanged could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__drawableStateChanged_25178_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout__drawableStateChanged_25178_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool FrameLayout__gatherTransparentRegion(FrameLayout* __this, ::app::Android::android::graphics::Region* arg0)
{
    return FrameLayout__gatherTransparentRegion_IMPL_25186(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool FrameLayout__gatherTransparentRegion_IMPL_25186(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__gatherTransparentRegion_25186_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"gatherTransparentRegion","(Landroid/graphics/Region;)Z",GetMethodID,"Id for fallback method android.widget.FrameLayout.gatherTransparentRegion could not be cached",93);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__gatherTransparentRegion_25186_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::FrameLayout__gatherTransparentRegion_25186_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::widget::FrameLayoutDLRLayoutParams* FrameLayout__generateDefaultLayoutParams_1(FrameLayout* __this)
{
    return ::uCast< ::app::Android::android::widget::FrameLayoutDLRLayoutParams*>(FrameLayout__generateDefaultLayoutParams_IMPL_25179(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::widget::FrameLayoutDLRLayoutParams__typeof());
}

::uObject* FrameLayout__generateDefaultLayoutParams_IMPL_25179(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__generateDefaultLayoutParams_25179_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"generateDefaultLayoutParams","()Landroid/widget/FrameLayout$LayoutParams;",GetMethodID,"Id for fallback method android.widget.FrameLayout.generateDefaultLayoutParams could not be cached",97);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__generateDefaultLayoutParams_25179_ID),result,::app::Android::android::widget::FrameLayoutDLRLayoutParams__typeof(),::app::Android::android::widget::FrameLayoutDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::FrameLayout__generateDefaultLayoutParams_25179_ID),result,::app::Android::android::widget::FrameLayoutDLRLayoutParams__typeof(),::app::Android::android::widget::FrameLayoutDLRLayoutParams*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::ViewGroupDLRLayoutParams* FrameLayout__generateLayoutParams_1(FrameLayout* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0)
{
    return ::uCast< ::app::Android::android::view::ViewGroupDLRLayoutParams*>(FrameLayout__generateLayoutParams_IMPL_25193(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::android::view::ViewGroupDLRLayoutParams__typeof());
}

::app::Android::android::widget::FrameLayoutDLRLayoutParams* FrameLayout__generateLayoutParams_2(FrameLayout* __this, ::uObject* arg0)
{
    return ::uCast< ::app::Android::android::widget::FrameLayoutDLRLayoutParams*>(FrameLayout__generateLayoutParams_IMPL_25190(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::android::widget::FrameLayoutDLRLayoutParams__typeof());
}

::uObject* FrameLayout__generateLayoutParams_IMPL_25190(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__generateLayoutParams_25190_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;",GetMethodID,"Id for fallback method android.widget.FrameLayout.generateLayoutParams could not be cached",90);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__generateLayoutParams_25190_ID, _obArg2),result,::app::Android::android::widget::FrameLayoutDLRLayoutParams__typeof(),::app::Android::android::widget::FrameLayoutDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::FrameLayout__generateLayoutParams_25190_ID, _obArg2),result,::app::Android::android::widget::FrameLayoutDLRLayoutParams__typeof(),::app::Android::android::widget::FrameLayoutDLRLayoutParams*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* FrameLayout__generateLayoutParams_IMPL_25193(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__generateLayoutParams_25193_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/view/ViewGroup$LayoutParams;",GetMethodID,"Id for fallback method android.widget.FrameLayout.generateLayoutParams could not be cached",90);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__generateLayoutParams_25193_ID, _obArg2),result,::app::Android::android::view::ViewGroupDLRLayoutParams__typeof(),::app::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::FrameLayout__generateLayoutParams_25193_ID, _obArg2),result,::app::Android::android::view::ViewGroupDLRLayoutParams__typeof(),::app::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool FrameLayout__getConsiderGoneChildrenWhenMeasuring(FrameLayout* __this)
{
    return FrameLayout__getConsiderGoneChildrenWhenMeasuring_IMPL_25188(NULL, __this->_subclassed, __this->_javaObject);
}

bool FrameLayout__getConsiderGoneChildrenWhenMeasuring_IMPL_25188(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__getConsiderGoneChildrenWhenMeasuring_25188_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"getConsiderGoneChildrenWhenMeasuring","()Z",GetMethodID,"Id for fallback method android.widget.FrameLayout.getConsiderGoneChildrenWhenMeasuring could not be cached",106);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__getConsiderGoneChildrenWhenMeasuring_25188_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::FrameLayout__getConsiderGoneChildrenWhenMeasuring_25188_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::graphics::drawable::Drawable* FrameLayout__getForeground(FrameLayout* __this)
{
    return ::uCast< ::app::Android::android::graphics::drawable::Drawable*>(FrameLayout__getForeground_IMPL_25181(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::graphics::drawable::Drawable__typeof());
}

::uObject* FrameLayout__getForeground_IMPL_25181(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__getForeground_25181_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"getForeground","()Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.widget.FrameLayout.getForeground could not be cached",83);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__getForeground_25181_ID),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::FrameLayout__getForeground_25181_ID),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int FrameLayout__getForegroundGravity(FrameLayout* __this)
{
    return FrameLayout__getForegroundGravity_IMPL_25174(NULL, __this->_subclassed, __this->_javaObject);
}

int FrameLayout__getForegroundGravity_IMPL_25174(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__getForegroundGravity_25174_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"getForegroundGravity","()I",GetMethodID,"Id for fallback method android.widget.FrameLayout.getForegroundGravity could not be cached",90);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__getForegroundGravity_25174_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::FrameLayout__getForegroundGravity_25174_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool FrameLayout__getMeasureAllChildren(FrameLayout* __this)
{
    return FrameLayout__getMeasureAllChildren_IMPL_25189(NULL, __this->_subclassed, __this->_javaObject);
}

bool FrameLayout__getMeasureAllChildren_IMPL_25189(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__getMeasureAllChildren_25189_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"getMeasureAllChildren","()Z",GetMethodID,"Id for fallback method android.widget.FrameLayout.getMeasureAllChildren could not be cached",91);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__getMeasureAllChildren_25189_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::FrameLayout__getMeasureAllChildren_25189_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void FrameLayout__j_draw(FrameLayout* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    FrameLayout__j_draw_IMPL_25185(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void FrameLayout__j_draw_IMPL_25185(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__j_draw_25185_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"draw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.draw could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__j_draw_25185_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout__j_draw_25185_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void FrameLayout__jumpDrawablesToCurrentState(FrameLayout* __this)
{
    FrameLayout__jumpDrawablesToCurrentState_IMPL_25177(NULL, __this->_subclassed, __this->_javaObject);
}

void FrameLayout__jumpDrawablesToCurrentState_IMPL_25177(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__jumpDrawablesToCurrentState_25177_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.FrameLayout.jumpDrawablesToCurrentState could not be cached",97);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__jumpDrawablesToCurrentState_25177_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout__jumpDrawablesToCurrentState_25177_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

FrameLayout* FrameLayout__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    FrameLayout* inst = (FrameLayout*)::uAllocObject(sizeof(FrameLayout), FrameLayout__typeof());
    inst->_ObjInit_13(arg0, arg1);
    return inst;
}

FrameLayout* FrameLayout__New_11(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    FrameLayout* inst = (FrameLayout*)::uAllocObject(sizeof(FrameLayout), FrameLayout__typeof());
    inst->_ObjInit_14(arg0, arg1, arg2);
    return inst;
}

FrameLayout* FrameLayout__New_12(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    FrameLayout* inst = (FrameLayout*)::uAllocObject(sizeof(FrameLayout), FrameLayout__typeof());
    inst->_ObjInit_15(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

FrameLayout* FrameLayout__New_9(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    FrameLayout* inst = (FrameLayout*)::uAllocObject(sizeof(FrameLayout), FrameLayout__typeof());
    inst->_ObjInit_12(arg0);
    return inst;
}

void FrameLayout__onInitializeAccessibilityEvent(FrameLayout* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    FrameLayout__onInitializeAccessibilityEvent_IMPL_25194(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void FrameLayout__onInitializeAccessibilityEvent_IMPL_25194(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__onInitializeAccessibilityEvent_25194_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.onInitializeAccessibilityEvent could not be cached",100);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__onInitializeAccessibilityEvent_25194_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout__onInitializeAccessibilityEvent_25194_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void FrameLayout__onInitializeAccessibilityNodeInfo(FrameLayout* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    FrameLayout__onInitializeAccessibilityNodeInfo_IMPL_25195(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void FrameLayout__onInitializeAccessibilityNodeInfo_IMPL_25195(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__onInitializeAccessibilityNodeInfo_25195_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.onInitializeAccessibilityNodeInfo could not be cached",103);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__onInitializeAccessibilityNodeInfo_25195_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout__onInitializeAccessibilityNodeInfo_25195_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void FrameLayout__onLayout(FrameLayout* __this, bool arg0, int arg1, int arg2, int arg3, int arg4)
{
    FrameLayout__onLayout_IMPL_25183(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3, arg4);
}

void FrameLayout__onLayout_IMPL_25183(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__onLayout_25183_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"onLayout","(ZIIII)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.onLayout could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__onLayout_25183_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout__onLayout_25183_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void FrameLayout__onMeasure(FrameLayout* __this, int arg0, int arg1)
{
    FrameLayout__onMeasure_IMPL_25182(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void FrameLayout__onMeasure_IMPL_25182(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__onMeasure_25182_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.onMeasure could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__onMeasure_25182_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout__onMeasure_25182_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void FrameLayout__onSizeChanged(FrameLayout* __this, int arg0, int arg1, int arg2, int arg3)
{
    FrameLayout__onSizeChanged_IMPL_25184(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void FrameLayout__onSizeChanged_IMPL_25184(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__onSizeChanged_25184_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"onSizeChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.onSizeChanged could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__onSizeChanged_25184_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout__onSizeChanged_25184_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void FrameLayout__setForeground(FrameLayout* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    FrameLayout__setForeground_IMPL_25180(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void FrameLayout__setForeground_IMPL_25180(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__setForeground_25180_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"setForeground","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.setForeground could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__setForeground_25180_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout__setForeground_25180_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void FrameLayout__setForegroundGravity(FrameLayout* __this, int arg0)
{
    FrameLayout__setForegroundGravity_IMPL_25175(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void FrameLayout__setForegroundGravity_IMPL_25175(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__setForegroundGravity_25175_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"setForegroundGravity","(I)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.setForegroundGravity could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__setForegroundGravity_25175_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout__setForegroundGravity_25175_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void FrameLayout__setMeasureAllChildren(FrameLayout* __this, bool arg0)
{
    FrameLayout__setMeasureAllChildren_IMPL_25187(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void FrameLayout__setMeasureAllChildren_IMPL_25187(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__setMeasureAllChildren_25187_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"setMeasureAllChildren","(Z)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.setMeasureAllChildren could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__setMeasureAllChildren_25187_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::FrameLayout__setMeasureAllChildren_25187_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool FrameLayout__shouldDelayChildPressedState(FrameLayout* __this)
{
    return FrameLayout__shouldDelayChildPressedState_IMPL_25191(NULL, __this->_subclassed, __this->_javaObject);
}

bool FrameLayout__shouldDelayChildPressedState_IMPL_25191(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__shouldDelayChildPressedState_25191_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"shouldDelayChildPressedState","()Z",GetMethodID,"Id for fallback method android.widget.FrameLayout.shouldDelayChildPressedState could not be cached",98);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__shouldDelayChildPressedState_25191_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::FrameLayout__shouldDelayChildPressedState_25191_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool FrameLayout__verifyDrawable(FrameLayout* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return FrameLayout__verifyDrawable_IMPL_25176(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool FrameLayout__verifyDrawable_IMPL_25176(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__verifyDrawable_25176_ID,::app::Android::android::widget::FrameLayout___javaClass_4,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z",GetMethodID,"Id for fallback method android.widget.FrameLayout.verifyDrawable could not be cached",84);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__verifyDrawable_25176_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::FrameLayout__verifyDrawable_25176_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass FrameLayoutDLRLayoutParams___javaClass_4;
jmethodID FrameLayoutDLRLayoutParams__FrameLayoutDLRLayoutParams_25166_ID_c;

FrameLayoutDLRLayoutParams__uType* FrameLayoutDLRLayoutParams__typeof()
{
    static ::uStaticStrong<FrameLayoutDLRLayoutParams__uType*> type;
    if (type != NULL) return type;

    type = (FrameLayoutDLRLayoutParams__uType*)::uAllocClassType(sizeof(FrameLayoutDLRLayoutParams__uType), "Android.android.widget.FrameLayoutDLRLayoutParams", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroupDLRMarginLayoutParams__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(FrameLayoutDLRLayoutParams__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(FrameLayoutDLRLayoutParams__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &FrameLayoutDLRLayoutParams___javaClass_4, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("FrameLayoutDLRLayoutParams_25166_ID_c", &FrameLayoutDLRLayoutParams__FrameLayoutDLRLayoutParams_25166_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", FrameLayoutDLRLayoutParams___Init_4, 0, true),
        ::uNewFunction(".ctor", FrameLayoutDLRLayoutParams__New_16, 0, true, FrameLayoutDLRLayoutParams__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void FrameLayoutDLRLayoutParams___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::FrameLayoutDLRLayoutParams___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::FrameLayoutDLRLayoutParams___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/FrameLayout$LayoutParams"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::FrameLayoutDLRLayoutParams___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.FrameLayout$LayoutParams'", 63);; }
}

void FrameLayoutDLRLayoutParams___ObjInit_15(FrameLayoutDLRLayoutParams* __this, int arg0, int arg1)
{
    ::app::Android::android::view::ViewGroupDLRMarginLayoutParams___ObjInit_10(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::FrameLayoutDLRLayoutParams___javaClass_4,::app::Android::android::widget::FrameLayoutDLRLayoutParams___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::FrameLayoutDLRLayoutParams__FrameLayoutDLRLayoutParams_25166_ID_c,::app::Android::android::widget::FrameLayoutDLRLayoutParams___javaClass_4,"<init>","(II)V",GetMethodID,"Id for fallback method android.widget.FrameLayout$LayoutParams.<init> could not be cached",89);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::FrameLayoutDLRLayoutParams___javaClass_4, ::app::Android::android::widget::FrameLayoutDLRLayoutParams__FrameLayoutDLRLayoutParams_25166_ID_c, ((jint)arg0), ((jint)arg1));;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

FrameLayoutDLRLayoutParams* FrameLayoutDLRLayoutParams__New_16(::uStatic* __this, int arg0, int arg1)
{
    FrameLayoutDLRLayoutParams* inst = (FrameLayoutDLRLayoutParams*)::uAllocObject(sizeof(FrameLayoutDLRLayoutParams), FrameLayoutDLRLayoutParams__typeof());
    inst->_ObjInit_15(arg0, arg1);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass HorizontalScrollView___javaClass_5;
jmethodID HorizontalScrollView__addView_25366_ID;
jmethodID HorizontalScrollView__addView_25367_ID;
jmethodID HorizontalScrollView__addView_25368_ID;
jmethodID HorizontalScrollView__addView_25369_ID;
jmethodID HorizontalScrollView__arrowScroll_25388_ID;
jmethodID HorizontalScrollView__computeHorizontalScrollOffset_25392_ID;
jmethodID HorizontalScrollView__computeHorizontalScrollRange_25391_ID;
jmethodID HorizontalScrollView__computeScroll_25395_ID;
jmethodID HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_25396_ID;
jmethodID HorizontalScrollView__dispatchKeyEvent_25375_ID;
jmethodID HorizontalScrollView__executeKeyEvent_25376_ID;
jmethodID HorizontalScrollView__fling_25403_ID;
jmethodID HorizontalScrollView__fullScroll_25387_ID;
jmethodID HorizontalScrollView__getLeftFadingEdgeStrength_25363_ID;
jmethodID HorizontalScrollView__getMaxScrollAmount_25365_ID;
jmethodID HorizontalScrollView__getRightFadingEdgeStrength_25364_ID;
jmethodID HorizontalScrollView__HorizontalScrollView_25360_ID_c;
jmethodID HorizontalScrollView__HorizontalScrollView_25361_ID_c;
jmethodID HorizontalScrollView__HorizontalScrollView_25362_ID_c;
jmethodID HorizontalScrollView__isFillViewport_25370_ID;
jmethodID HorizontalScrollView__isSmoothScrollingEnabled_25372_ID;
jmethodID HorizontalScrollView__j_draw_25406_ID;
jmethodID HorizontalScrollView__measureChild_25393_ID;
jmethodID HorizontalScrollView__measureChildWithMargins_25394_ID;
jmethodID HorizontalScrollView__onGenericMotionEvent_25380_ID;
jmethodID HorizontalScrollView__onInitializeAccessibilityEvent_25385_ID;
jmethodID HorizontalScrollView__onInitializeAccessibilityNodeInfo_25384_ID;
jmethodID HorizontalScrollView__onInterceptTouchEvent_25378_ID;
jmethodID HorizontalScrollView__onLayout_25401_ID;
jmethodID HorizontalScrollView__onMeasure_25374_ID;
jmethodID HorizontalScrollView__onOverScrolled_25382_ID;
jmethodID HorizontalScrollView__onRequestFocusInDescendants_25398_ID;
jmethodID HorizontalScrollView__onRestoreInstanceState_25407_ID;
jmethodID HorizontalScrollView__onSaveInstanceState_25408_ID;
jmethodID HorizontalScrollView__onSizeChanged_25402_ID;
jmethodID HorizontalScrollView__onTouchEvent_25379_ID;
jmethodID HorizontalScrollView__pageScroll_25386_ID;
jmethodID HorizontalScrollView__performAccessibilityAction_25383_ID;
jmethodID HorizontalScrollView__requestChildFocus_25397_ID;
jmethodID HorizontalScrollView__requestChildRectangleOnScreen_25399_ID;
jmethodID HorizontalScrollView__requestDisallowInterceptTouchEvent_25377_ID;
jmethodID HorizontalScrollView__requestLayout_25400_ID;
jmethodID HorizontalScrollView__scrollTo_25404_ID;
jmethodID HorizontalScrollView__setFillViewport_25371_ID;
jmethodID HorizontalScrollView__setOverScrollMode_25405_ID;
jmethodID HorizontalScrollView__setSmoothScrollingEnabled_25373_ID;
jmethodID HorizontalScrollView__shouldDelayChildPressedState_25381_ID;
jmethodID HorizontalScrollView__smoothScrollBy_25389_ID;
jmethodID HorizontalScrollView__smoothScrollTo_25390_ID;

HorizontalScrollView__uType* HorizontalScrollView__typeof()
{
    static ::uStaticStrong<HorizontalScrollView__uType*> type;
    if (type != NULL) return type;

    type = (HorizontalScrollView__uType*)::uAllocClassType(sizeof(HorizontalScrollView__uType), "Android.android.widget.HorizontalScrollView", false, 3, 0, 0);

    type->SetBaseType(::app::Android::android::widget::FrameLayout__typeof());
    type->__fp_addView = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*))HorizontalScrollView__addView;
    type->__fp_addView_1 = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, int))HorizontalScrollView__addView_1;
    type->__fp_addView_3 = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, int, ::app::Android::android::view::ViewGroupDLRLayoutParams*))HorizontalScrollView__addView_3;
    type->__fp_addView_4 = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, ::app::Android::android::view::ViewGroupDLRLayoutParams*))HorizontalScrollView__addView_4;
    type->__fp_computeHorizontalScrollOffset = (int(*)(::app::Android::android::view::View*))HorizontalScrollView__computeHorizontalScrollOffset;
    type->__fp_computeHorizontalScrollRange = (int(*)(::app::Android::android::view::View*))HorizontalScrollView__computeHorizontalScrollRange;
    type->__fp_computeScroll = (void(*)(::app::Android::android::view::View*))HorizontalScrollView__computeScroll;
    type->__fp_dispatchKeyEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::KeyEvent*))HorizontalScrollView__dispatchKeyEvent;
    type->__fp_getLeftFadingEdgeStrength = (float(*)(::app::Android::android::view::View*))HorizontalScrollView__getLeftFadingEdgeStrength;
    type->__fp_getRightFadingEdgeStrength = (float(*)(::app::Android::android::view::View*))HorizontalScrollView__getRightFadingEdgeStrength;
    type->__fp_j_draw = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::Canvas*))HorizontalScrollView__j_draw;
    type->__fp_measureChild = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, int, int))HorizontalScrollView__measureChild;
    type->__fp_measureChildWithMargins = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, int, int, int, int))HorizontalScrollView__measureChildWithMargins;
    type->__fp_onGenericMotionEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))HorizontalScrollView__onGenericMotionEvent;
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))HorizontalScrollView__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))HorizontalScrollView__onInitializeAccessibilityNodeInfo;
    type->__fp_onInterceptTouchEvent = (bool(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::MotionEvent*))HorizontalScrollView__onInterceptTouchEvent;
    type->__fp_onLayout = (void(*)(::app::Android::android::view::View*, bool, int, int, int, int))HorizontalScrollView__onLayout;
    type->__fp_onMeasure = (void(*)(::app::Android::android::view::View*, int, int))HorizontalScrollView__onMeasure;
    type->__fp_onOverScrolled = (void(*)(::app::Android::android::view::View*, int, int, bool, bool))HorizontalScrollView__onOverScrolled;
    type->__fp_onRequestFocusInDescendants = (bool(*)(::app::Android::android::view::ViewGroup*, int, ::app::Android::android::graphics::Rect*))HorizontalScrollView__onRequestFocusInDescendants;
    type->__fp_onRestoreInstanceState = (void(*)(::app::Android::android::view::View*, ::uObject*))HorizontalScrollView__onRestoreInstanceState;
    type->__fp_onSaveInstanceState = (::uObject*(*)(::app::Android::android::view::View*))HorizontalScrollView__onSaveInstanceState;
    type->__fp_onSizeChanged = (void(*)(::app::Android::android::view::View*, int, int, int, int))HorizontalScrollView__onSizeChanged;
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))HorizontalScrollView__onTouchEvent;
    type->__fp_performAccessibilityAction = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::os::Bundle*))HorizontalScrollView__performAccessibilityAction;
    type->__fp_requestChildFocus = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, ::app::Android::android::view::View*))HorizontalScrollView__requestChildFocus;
    type->__fp_requestChildRectangleOnScreen = (bool(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*, bool))HorizontalScrollView__requestChildRectangleOnScreen;
    type->__fp_requestDisallowInterceptTouchEvent = (void(*)(::app::Android::android::view::ViewGroup*, bool))HorizontalScrollView__requestDisallowInterceptTouchEvent;
    type->__fp_requestLayout = (void(*)(::app::Android::android::view::View*))HorizontalScrollView__requestLayout;
    type->__fp_scrollTo = (void(*)(::app::Android::android::view::View*, int, int))HorizontalScrollView__scrollTo;
    type->__fp_setOverScrollMode = (void(*)(::app::Android::android::view::View*, int))HorizontalScrollView__setOverScrollMode;
    type->__fp_shouldDelayChildPressedState = (bool(*)(::app::Android::android::view::ViewGroup*))HorizontalScrollView__shouldDelayChildPressedState;
    type->__interface_2.__fp_requestDisallowInterceptTouchEvent = (void(*)(void*, bool))HorizontalScrollView__requestDisallowInterceptTouchEvent;
    type->__interface_2.__fp_requestChildRectangleOnScreen = (bool(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*, bool))HorizontalScrollView__requestChildRectangleOnScreen;
    type->__interface_2.__fp_requestChildFocus = (void(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::View*))HorizontalScrollView__requestChildFocus;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(HorizontalScrollView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(HorizontalScrollView__uType, __interface_1),
        ::app::Android::android::view::ViewParent__typeof(), offsetof(HorizontalScrollView__uType, __interface_2));

    type->SetFields(50,
        ::uNewField("_javaClass", &HorizontalScrollView___javaClass_5, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("addView_25366_ID", &HorizontalScrollView__addView_25366_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addView_25367_ID", &HorizontalScrollView__addView_25367_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addView_25368_ID", &HorizontalScrollView__addView_25368_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addView_25369_ID", &HorizontalScrollView__addView_25369_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("arrowScroll_25388_ID", &HorizontalScrollView__arrowScroll_25388_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeHorizontalScrollOffset_25392_ID", &HorizontalScrollView__computeHorizontalScrollOffset_25392_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeHorizontalScrollRange_25391_ID", &HorizontalScrollView__computeHorizontalScrollRange_25391_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeScroll_25395_ID", &HorizontalScrollView__computeScroll_25395_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeScrollDeltaToGetChildRectOnScreen_25396_ID", &HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_25396_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("dispatchKeyEvent_25375_ID", &HorizontalScrollView__dispatchKeyEvent_25375_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("executeKeyEvent_25376_ID", &HorizontalScrollView__executeKeyEvent_25376_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("fling_25403_ID", &HorizontalScrollView__fling_25403_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("fullScroll_25387_ID", &HorizontalScrollView__fullScroll_25387_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getLeftFadingEdgeStrength_25363_ID", &HorizontalScrollView__getLeftFadingEdgeStrength_25363_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getMaxScrollAmount_25365_ID", &HorizontalScrollView__getMaxScrollAmount_25365_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getRightFadingEdgeStrength_25364_ID", &HorizontalScrollView__getRightFadingEdgeStrength_25364_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("HorizontalScrollView_25360_ID_c", &HorizontalScrollView__HorizontalScrollView_25360_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("HorizontalScrollView_25361_ID_c", &HorizontalScrollView__HorizontalScrollView_25361_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("HorizontalScrollView_25362_ID_c", &HorizontalScrollView__HorizontalScrollView_25362_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isFillViewport_25370_ID", &HorizontalScrollView__isFillViewport_25370_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isSmoothScrollingEnabled_25372_ID", &HorizontalScrollView__isSmoothScrollingEnabled_25372_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("j_draw_25406_ID", &HorizontalScrollView__j_draw_25406_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("measureChild_25393_ID", &HorizontalScrollView__measureChild_25393_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("measureChildWithMargins_25394_ID", &HorizontalScrollView__measureChildWithMargins_25394_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onGenericMotionEvent_25380_ID", &HorizontalScrollView__onGenericMotionEvent_25380_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_25385_ID", &HorizontalScrollView__onInitializeAccessibilityEvent_25385_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_25384_ID", &HorizontalScrollView__onInitializeAccessibilityNodeInfo_25384_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInterceptTouchEvent_25378_ID", &HorizontalScrollView__onInterceptTouchEvent_25378_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onLayout_25401_ID", &HorizontalScrollView__onLayout_25401_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onMeasure_25374_ID", &HorizontalScrollView__onMeasure_25374_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onOverScrolled_25382_ID", &HorizontalScrollView__onOverScrolled_25382_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onRequestFocusInDescendants_25398_ID", &HorizontalScrollView__onRequestFocusInDescendants_25398_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onRestoreInstanceState_25407_ID", &HorizontalScrollView__onRestoreInstanceState_25407_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onSaveInstanceState_25408_ID", &HorizontalScrollView__onSaveInstanceState_25408_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onSizeChanged_25402_ID", &HorizontalScrollView__onSizeChanged_25402_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onTouchEvent_25379_ID", &HorizontalScrollView__onTouchEvent_25379_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("pageScroll_25386_ID", &HorizontalScrollView__pageScroll_25386_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performAccessibilityAction_25383_ID", &HorizontalScrollView__performAccessibilityAction_25383_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestChildFocus_25397_ID", &HorizontalScrollView__requestChildFocus_25397_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestChildRectangleOnScreen_25399_ID", &HorizontalScrollView__requestChildRectangleOnScreen_25399_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestDisallowInterceptTouchEvent_25377_ID", &HorizontalScrollView__requestDisallowInterceptTouchEvent_25377_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestLayout_25400_ID", &HorizontalScrollView__requestLayout_25400_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("scrollTo_25404_ID", &HorizontalScrollView__scrollTo_25404_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setFillViewport_25371_ID", &HorizontalScrollView__setFillViewport_25371_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setOverScrollMode_25405_ID", &HorizontalScrollView__setOverScrollMode_25405_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setSmoothScrollingEnabled_25373_ID", &HorizontalScrollView__setSmoothScrollingEnabled_25373_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("shouldDelayChildPressedState_25381_ID", &HorizontalScrollView__shouldDelayChildPressedState_25381_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("smoothScrollBy_25389_ID", &HorizontalScrollView__smoothScrollBy_25389_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("smoothScrollTo_25390_ID", &HorizontalScrollView__smoothScrollTo_25390_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(64,
        ::uNewFunctionVoid("_Init", HorizontalScrollView___Init_5, 0, true),
        ::uNewFunctionVoid("addView_IMPL_25366", HorizontalScrollView__addView_IMPL_25366, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("addView_IMPL_25367", HorizontalScrollView__addView_IMPL_25367, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("addView_IMPL_25368", HorizontalScrollView__addView_IMPL_25368, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("addView_IMPL_25369", HorizontalScrollView__addView_IMPL_25369, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("arrowScroll", HorizontalScrollView__arrowScroll, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("arrowScroll_IMPL_25388", HorizontalScrollView__arrowScroll_IMPL_25388, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("computeHorizontalScrollOffset_IMPL_25392", HorizontalScrollView__computeHorizontalScrollOffset_IMPL_25392, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("computeHorizontalScrollRange_IMPL_25391", HorizontalScrollView__computeHorizontalScrollRange_IMPL_25391, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("computeScroll_IMPL_25395", HorizontalScrollView__computeScroll_IMPL_25395, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("computeScrollDeltaToGetChildRectOnScreen", HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen, 0, false, ::app::Uno::Int__typeof(), ::app::Android::android::graphics::Rect__typeof()),
        ::uNewFunction("computeScrollDeltaToGetChildRectOnScreen_IMPL_25396", HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_25396, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("dispatchKeyEvent_IMPL_25375", HorizontalScrollView__dispatchKeyEvent_IMPL_25375, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("executeKeyEvent", HorizontalScrollView__executeKeyEvent, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::KeyEvent__typeof()),
        ::uNewFunction("executeKeyEvent_IMPL_25376", HorizontalScrollView__executeKeyEvent_IMPL_25376, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("fling", HorizontalScrollView__fling, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("fling_IMPL_25403", HorizontalScrollView__fling_IMPL_25403, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("fullScroll", HorizontalScrollView__fullScroll, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("fullScroll_IMPL_25387", HorizontalScrollView__fullScroll_IMPL_25387, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getLeftFadingEdgeStrength_IMPL_25363", HorizontalScrollView__getLeftFadingEdgeStrength_IMPL_25363, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getMaxScrollAmount", HorizontalScrollView__getMaxScrollAmount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getMaxScrollAmount_IMPL_25365", HorizontalScrollView__getMaxScrollAmount_IMPL_25365, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getRightFadingEdgeStrength_IMPL_25364", HorizontalScrollView__getRightFadingEdgeStrength_IMPL_25364, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isFillViewport", HorizontalScrollView__isFillViewport, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isFillViewport_IMPL_25370", HorizontalScrollView__isFillViewport_IMPL_25370, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isSmoothScrollingEnabled", HorizontalScrollView__isSmoothScrollingEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isSmoothScrollingEnabled_IMPL_25372", HorizontalScrollView__isSmoothScrollingEnabled_IMPL_25372, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("j_draw_IMPL_25406", HorizontalScrollView__j_draw_IMPL_25406, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("measureChild_IMPL_25393", HorizontalScrollView__measureChild_IMPL_25393, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("measureChildWithMargins_IMPL_25394", HorizontalScrollView__measureChildWithMargins_IMPL_25394, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", HorizontalScrollView__New_13, 0, true, HorizontalScrollView__typeof(), ::app::Android::android::content::Context__typeof()),
        ::uNewFunction(".ctor", HorizontalScrollView__New_14, 0, true, HorizontalScrollView__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Android::android::util::AttributeSet__typeof()),
        ::uNewFunction(".ctor", HorizontalScrollView__New_15, 0, true, HorizontalScrollView__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Android::android::util::AttributeSet__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", HorizontalScrollView__New_16, 0, true, HorizontalScrollView__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("onGenericMotionEvent_IMPL_25380", HorizontalScrollView__onGenericMotionEvent_IMPL_25380, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_25385", HorizontalScrollView__onInitializeAccessibilityEvent_IMPL_25385, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_25384", HorizontalScrollView__onInitializeAccessibilityNodeInfo_IMPL_25384, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onInterceptTouchEvent_IMPL_25378", HorizontalScrollView__onInterceptTouchEvent_IMPL_25378, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onLayout_IMPL_25401", HorizontalScrollView__onLayout_IMPL_25401, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onMeasure_IMPL_25374", HorizontalScrollView__onMeasure_IMPL_25374, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onOverScrolled_IMPL_25382", HorizontalScrollView__onOverScrolled_IMPL_25382, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("onRequestFocusInDescendants_IMPL_25398", HorizontalScrollView__onRequestFocusInDescendants_IMPL_25398, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onRestoreInstanceState_IMPL_25407", HorizontalScrollView__onRestoreInstanceState_IMPL_25407, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onSaveInstanceState_IMPL_25408", HorizontalScrollView__onSaveInstanceState_IMPL_25408, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onSizeChanged_IMPL_25402", HorizontalScrollView__onSizeChanged_IMPL_25402, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("onTouchEvent_IMPL_25379", HorizontalScrollView__onTouchEvent_IMPL_25379, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("pageScroll", HorizontalScrollView__pageScroll, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("pageScroll_IMPL_25386", HorizontalScrollView__pageScroll_IMPL_25386, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performAccessibilityAction_IMPL_25383", HorizontalScrollView__performAccessibilityAction_IMPL_25383, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("requestChildFocus_IMPL_25397", HorizontalScrollView__requestChildFocus_IMPL_25397, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("requestChildRectangleOnScreen_IMPL_25399", HorizontalScrollView__requestChildRectangleOnScreen_IMPL_25399, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("requestDisallowInterceptTouchEvent_IMPL_25377", HorizontalScrollView__requestDisallowInterceptTouchEvent_IMPL_25377, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("requestLayout_IMPL_25400", HorizontalScrollView__requestLayout_IMPL_25400, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("scrollTo_IMPL_25404", HorizontalScrollView__scrollTo_IMPL_25404, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setFillViewport", HorizontalScrollView__setFillViewport, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setFillViewport_IMPL_25371", HorizontalScrollView__setFillViewport_IMPL_25371, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setOverScrollMode_IMPL_25405", HorizontalScrollView__setOverScrollMode_IMPL_25405, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setSmoothScrollingEnabled", HorizontalScrollView__setSmoothScrollingEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setSmoothScrollingEnabled_IMPL_25373", HorizontalScrollView__setSmoothScrollingEnabled_IMPL_25373, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("shouldDelayChildPressedState_IMPL_25381", HorizontalScrollView__shouldDelayChildPressedState_IMPL_25381, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("smoothScrollBy", HorizontalScrollView__smoothScrollBy, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("smoothScrollBy_IMPL_25389", HorizontalScrollView__smoothScrollBy_IMPL_25389, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("smoothScrollTo", HorizontalScrollView__smoothScrollTo, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("smoothScrollTo_IMPL_25390", HorizontalScrollView__smoothScrollTo_IMPL_25390, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void HorizontalScrollView___Init_5(::uStatic* __this)
{
    if (::app::Android::android::widget::HorizontalScrollView___javaClass_5) { return; }
    INIT_JNI;
    ::app::Android::android::widget::HorizontalScrollView___javaClass_5 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/HorizontalScrollView"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::HorizontalScrollView___javaClass_5) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.HorizontalScrollView'", 59);; }
}

void HorizontalScrollView___ObjInit_16(HorizontalScrollView* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::widget::FrameLayout___ObjInit_15(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__HorizontalScrollView_25360_ID_c,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.<init> could not be cached",85);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__HorizontalScrollView_25360_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void HorizontalScrollView___ObjInit_17(HorizontalScrollView* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    ::app::Android::android::widget::FrameLayout___ObjInit_15(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__HorizontalScrollView_25361_ID_c,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.<init> could not be cached",85);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__HorizontalScrollView_25361_ID_c, _obArg0, _obArg1);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void HorizontalScrollView___ObjInit_18(HorizontalScrollView* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    ::app::Android::android::widget::FrameLayout___ObjInit_15(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__HorizontalScrollView_25362_ID_c,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.<init> could not be cached",85);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__HorizontalScrollView_25362_ID_c, _obArg0, _obArg1, ((jint)arg2));;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void HorizontalScrollView___ObjInit_19(HorizontalScrollView* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::widget::FrameLayout___ObjInit_15(__this, obj, utype, hasFallbackClass, resolveType);
}

void HorizontalScrollView__addView(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0)
{
    HorizontalScrollView__addView_IMPL_25366(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void HorizontalScrollView__addView_1(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, int arg1)
{
    HorizontalScrollView__addView_IMPL_25367(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void HorizontalScrollView__addView_3(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg2)
{
    HorizontalScrollView__addView_IMPL_25369(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, (::uObject*)arg2);
}

void HorizontalScrollView__addView_4(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg1)
{
    HorizontalScrollView__addView_IMPL_25368(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void HorizontalScrollView__addView_IMPL_25366(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__addView_25366_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"addView","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.addView could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__addView_25366_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__addView_25366_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__addView_IMPL_25367(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__addView_25367_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"addView","(Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.addView could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__addView_25367_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__addView_25367_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__addView_IMPL_25368(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__addView_25368_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"addView","(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.addView could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__addView_25368_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__addView_25368_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__addView_IMPL_25369(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__addView_25369_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"addView","(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.addView could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__addView_25369_ID, _obArg2, ((jint)arg3_), _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__addView_25369_ID, _obArg2, ((jint)arg3_), _obArg4);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool HorizontalScrollView__arrowScroll(HorizontalScrollView* __this, int arg0)
{
    return HorizontalScrollView__arrowScroll_IMPL_25388(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

bool HorizontalScrollView__arrowScroll_IMPL_25388(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__arrowScroll_25388_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"arrowScroll","(I)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.arrowScroll could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__arrowScroll_25388_ID, ((jint)arg2_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__arrowScroll_25388_ID, ((jint)arg2_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int HorizontalScrollView__computeHorizontalScrollOffset(HorizontalScrollView* __this)
{
    return HorizontalScrollView__computeHorizontalScrollOffset_IMPL_25392(NULL, __this->_subclassed, __this->_javaObject);
}

int HorizontalScrollView__computeHorizontalScrollOffset_IMPL_25392(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__computeHorizontalScrollOffset_25392_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"computeHorizontalScrollOffset","()I",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.computeHorizontalScrollOffset could not be cached",108);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__computeHorizontalScrollOffset_25392_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__computeHorizontalScrollOffset_25392_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int HorizontalScrollView__computeHorizontalScrollRange(HorizontalScrollView* __this)
{
    return HorizontalScrollView__computeHorizontalScrollRange_IMPL_25391(NULL, __this->_subclassed, __this->_javaObject);
}

int HorizontalScrollView__computeHorizontalScrollRange_IMPL_25391(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__computeHorizontalScrollRange_25391_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"computeHorizontalScrollRange","()I",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.computeHorizontalScrollRange could not be cached",107);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__computeHorizontalScrollRange_25391_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__computeHorizontalScrollRange_25391_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void HorizontalScrollView__computeScroll(HorizontalScrollView* __this)
{
    HorizontalScrollView__computeScroll_IMPL_25395(NULL, __this->_subclassed, __this->_javaObject);
}

void HorizontalScrollView__computeScroll_IMPL_25395(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__computeScroll_25395_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"computeScroll","()V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.computeScroll could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__computeScroll_25395_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__computeScroll_25395_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen(HorizontalScrollView* __this, ::app::Android::android::graphics::Rect* arg0)
{
    return HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_25396(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_25396(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_25396_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"computeScrollDeltaToGetChildRectOnScreen","(Landroid/graphics/Rect;)I",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.computeScrollDeltaToGetChildRectOnScreen could not be cached",119);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_25396_ID, _obArg2));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_25396_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool HorizontalScrollView__dispatchKeyEvent(HorizontalScrollView* __this, ::app::Android::android::view::KeyEvent* arg0)
{
    return HorizontalScrollView__dispatchKeyEvent_IMPL_25375(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool HorizontalScrollView__dispatchKeyEvent_IMPL_25375(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__dispatchKeyEvent_25375_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.dispatchKeyEvent could not be cached",95);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__dispatchKeyEvent_25375_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__dispatchKeyEvent_25375_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool HorizontalScrollView__executeKeyEvent(HorizontalScrollView* __this, ::app::Android::android::view::KeyEvent* arg0)
{
    return HorizontalScrollView__executeKeyEvent_IMPL_25376(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool HorizontalScrollView__executeKeyEvent_IMPL_25376(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__executeKeyEvent_25376_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"executeKeyEvent","(Landroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.executeKeyEvent could not be cached",94);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__executeKeyEvent_25376_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__executeKeyEvent_25376_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void HorizontalScrollView__fling(HorizontalScrollView* __this, int arg0)
{
    HorizontalScrollView__fling_IMPL_25403(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HorizontalScrollView__fling_IMPL_25403(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__fling_25403_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"fling","(I)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.fling could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__fling_25403_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__fling_25403_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool HorizontalScrollView__fullScroll(HorizontalScrollView* __this, int arg0)
{
    return HorizontalScrollView__fullScroll_IMPL_25387(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

bool HorizontalScrollView__fullScroll_IMPL_25387(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__fullScroll_25387_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"fullScroll","(I)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.fullScroll could not be cached",89);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__fullScroll_25387_ID, ((jint)arg2_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__fullScroll_25387_ID, ((jint)arg2_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

float HorizontalScrollView__getLeftFadingEdgeStrength(HorizontalScrollView* __this)
{
    return HorizontalScrollView__getLeftFadingEdgeStrength_IMPL_25363(NULL, __this->_subclassed, __this->_javaObject);
}

float HorizontalScrollView__getLeftFadingEdgeStrength_IMPL_25363(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    float result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__getLeftFadingEdgeStrength_25363_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"getLeftFadingEdgeStrength","()F",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.getLeftFadingEdgeStrength could not be cached",104);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__getLeftFadingEdgeStrength_25363_ID));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__getLeftFadingEdgeStrength_25363_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int HorizontalScrollView__getMaxScrollAmount(HorizontalScrollView* __this)
{
    return HorizontalScrollView__getMaxScrollAmount_IMPL_25365(NULL, __this->_subclassed, __this->_javaObject);
}

int HorizontalScrollView__getMaxScrollAmount_IMPL_25365(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__getMaxScrollAmount_25365_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"getMaxScrollAmount","()I",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.getMaxScrollAmount could not be cached",97);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__getMaxScrollAmount_25365_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__getMaxScrollAmount_25365_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

float HorizontalScrollView__getRightFadingEdgeStrength(HorizontalScrollView* __this)
{
    return HorizontalScrollView__getRightFadingEdgeStrength_IMPL_25364(NULL, __this->_subclassed, __this->_javaObject);
}

float HorizontalScrollView__getRightFadingEdgeStrength_IMPL_25364(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    float result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__getRightFadingEdgeStrength_25364_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"getRightFadingEdgeStrength","()F",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.getRightFadingEdgeStrength could not be cached",105);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__getRightFadingEdgeStrength_25364_ID));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__getRightFadingEdgeStrength_25364_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool HorizontalScrollView__isFillViewport(HorizontalScrollView* __this)
{
    return HorizontalScrollView__isFillViewport_IMPL_25370(NULL, __this->_subclassed, __this->_javaObject);
}

bool HorizontalScrollView__isFillViewport_IMPL_25370(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__isFillViewport_25370_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"isFillViewport","()Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.isFillViewport could not be cached",93);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__isFillViewport_25370_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__isFillViewport_25370_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool HorizontalScrollView__isSmoothScrollingEnabled(HorizontalScrollView* __this)
{
    return HorizontalScrollView__isSmoothScrollingEnabled_IMPL_25372(NULL, __this->_subclassed, __this->_javaObject);
}

bool HorizontalScrollView__isSmoothScrollingEnabled_IMPL_25372(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__isSmoothScrollingEnabled_25372_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"isSmoothScrollingEnabled","()Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.isSmoothScrollingEnabled could not be cached",103);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__isSmoothScrollingEnabled_25372_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__isSmoothScrollingEnabled_25372_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void HorizontalScrollView__j_draw(HorizontalScrollView* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    HorizontalScrollView__j_draw_IMPL_25406(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void HorizontalScrollView__j_draw_IMPL_25406(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__j_draw_25406_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"draw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.draw could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__j_draw_25406_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__j_draw_25406_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__measureChild(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2)
{
    HorizontalScrollView__measureChild_IMPL_25393(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

void HorizontalScrollView__measureChild_IMPL_25393(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__measureChild_25393_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"measureChild","(Landroid/view/View;II)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.measureChild could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__measureChild_25393_ID, _obArg2, ((jint)arg3_), ((jint)arg4_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__measureChild_25393_ID, _obArg2, ((jint)arg3_), ((jint)arg4_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__measureChildWithMargins(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2, int arg3, int arg4)
{
    HorizontalScrollView__measureChildWithMargins_IMPL_25394(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3, arg4);
}

void HorizontalScrollView__measureChildWithMargins_IMPL_25394(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__measureChildWithMargins_25394_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"measureChildWithMargins","(Landroid/view/View;IIII)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.measureChildWithMargins could not be cached",102);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__measureChildWithMargins_25394_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__measureChildWithMargins_25394_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

HorizontalScrollView* HorizontalScrollView__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    HorizontalScrollView* inst = (HorizontalScrollView*)::uAllocObject(sizeof(HorizontalScrollView), HorizontalScrollView__typeof());
    inst->_ObjInit_16(arg0);
    return inst;
}

HorizontalScrollView* HorizontalScrollView__New_14(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    HorizontalScrollView* inst = (HorizontalScrollView*)::uAllocObject(sizeof(HorizontalScrollView), HorizontalScrollView__typeof());
    inst->_ObjInit_17(arg0, arg1);
    return inst;
}

HorizontalScrollView* HorizontalScrollView__New_15(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    HorizontalScrollView* inst = (HorizontalScrollView*)::uAllocObject(sizeof(HorizontalScrollView), HorizontalScrollView__typeof());
    inst->_ObjInit_18(arg0, arg1, arg2);
    return inst;
}

HorizontalScrollView* HorizontalScrollView__New_16(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    HorizontalScrollView* inst = (HorizontalScrollView*)::uAllocObject(sizeof(HorizontalScrollView), HorizontalScrollView__typeof());
    inst->_ObjInit_19(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

bool HorizontalScrollView__onGenericMotionEvent(HorizontalScrollView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return HorizontalScrollView__onGenericMotionEvent_IMPL_25380(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool HorizontalScrollView__onGenericMotionEvent_IMPL_25380(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onGenericMotionEvent_25380_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onGenericMotionEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onGenericMotionEvent could not be cached",99);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onGenericMotionEvent_25380_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onGenericMotionEvent_25380_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void HorizontalScrollView__onInitializeAccessibilityEvent(HorizontalScrollView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    HorizontalScrollView__onInitializeAccessibilityEvent_IMPL_25385(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void HorizontalScrollView__onInitializeAccessibilityEvent_IMPL_25385(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onInitializeAccessibilityEvent_25385_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onInitializeAccessibilityEvent could not be cached",109);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onInitializeAccessibilityEvent_25385_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onInitializeAccessibilityEvent_25385_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__onInitializeAccessibilityNodeInfo(HorizontalScrollView* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    HorizontalScrollView__onInitializeAccessibilityNodeInfo_IMPL_25384(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void HorizontalScrollView__onInitializeAccessibilityNodeInfo_IMPL_25384(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onInitializeAccessibilityNodeInfo_25384_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onInitializeAccessibilityNodeInfo could not be cached",112);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onInitializeAccessibilityNodeInfo_25384_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onInitializeAccessibilityNodeInfo_25384_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool HorizontalScrollView__onInterceptTouchEvent(HorizontalScrollView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return HorizontalScrollView__onInterceptTouchEvent_IMPL_25378(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool HorizontalScrollView__onInterceptTouchEvent_IMPL_25378(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onInterceptTouchEvent_25378_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onInterceptTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onInterceptTouchEvent could not be cached",100);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onInterceptTouchEvent_25378_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onInterceptTouchEvent_25378_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void HorizontalScrollView__onLayout(HorizontalScrollView* __this, bool arg0, int arg1, int arg2, int arg3, int arg4)
{
    HorizontalScrollView__onLayout_IMPL_25401(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3, arg4);
}

void HorizontalScrollView__onLayout_IMPL_25401(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onLayout_25401_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onLayout","(ZIIII)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onLayout could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onLayout_25401_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onLayout_25401_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__onMeasure(HorizontalScrollView* __this, int arg0, int arg1)
{
    HorizontalScrollView__onMeasure_IMPL_25374(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void HorizontalScrollView__onMeasure_IMPL_25374(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onMeasure_25374_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onMeasure could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onMeasure_25374_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onMeasure_25374_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__onOverScrolled(HorizontalScrollView* __this, int arg0, int arg1, bool arg2, bool arg3)
{
    HorizontalScrollView__onOverScrolled_IMPL_25382(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void HorizontalScrollView__onOverScrolled_IMPL_25382(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, bool arg4_, bool arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onOverScrolled_25382_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onOverScrolled","(IIZZ)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onOverScrolled could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onOverScrolled_25382_ID, ((jint)arg2_), ((jint)arg3_), ((jboolean)arg4_), ((jboolean)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onOverScrolled_25382_ID, ((jint)arg2_), ((jint)arg3_), ((jboolean)arg4_), ((jboolean)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool HorizontalScrollView__onRequestFocusInDescendants(HorizontalScrollView* __this, int arg0, ::app::Android::android::graphics::Rect* arg1)
{
    return HorizontalScrollView__onRequestFocusInDescendants_IMPL_25398(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool HorizontalScrollView__onRequestFocusInDescendants_IMPL_25398(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onRequestFocusInDescendants_25398_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onRequestFocusInDescendants","(ILandroid/graphics/Rect;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onRequestFocusInDescendants could not be cached",106);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onRequestFocusInDescendants_25398_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onRequestFocusInDescendants_25398_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void HorizontalScrollView__onRestoreInstanceState(HorizontalScrollView* __this, ::uObject* arg0)
{
    HorizontalScrollView__onRestoreInstanceState_IMPL_25407(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void HorizontalScrollView__onRestoreInstanceState_IMPL_25407(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onRestoreInstanceState_25407_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onRestoreInstanceState","(Landroid/os/Parcelable;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onRestoreInstanceState could not be cached",101);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onRestoreInstanceState_25407_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onRestoreInstanceState_25407_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* HorizontalScrollView__onSaveInstanceState(HorizontalScrollView* __this)
{
    return (::uObject*)HorizontalScrollView__onSaveInstanceState_IMPL_25408(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* HorizontalScrollView__onSaveInstanceState_IMPL_25408(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onSaveInstanceState_25408_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onSaveInstanceState","()Landroid/os/Parcelable;",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onSaveInstanceState could not be cached",98);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onSaveInstanceState_25408_ID),result,::app::Android::Fallbacks::Android_android_os_Parcelable__typeof(),::uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onSaveInstanceState_25408_ID),result,::app::Android::Fallbacks::Android_android_os_Parcelable__typeof(),::uObject*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void HorizontalScrollView__onSizeChanged(HorizontalScrollView* __this, int arg0, int arg1, int arg2, int arg3)
{
    HorizontalScrollView__onSizeChanged_IMPL_25402(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void HorizontalScrollView__onSizeChanged_IMPL_25402(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onSizeChanged_25402_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onSizeChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onSizeChanged could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onSizeChanged_25402_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onSizeChanged_25402_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool HorizontalScrollView__onTouchEvent(HorizontalScrollView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return HorizontalScrollView__onTouchEvent_IMPL_25379(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool HorizontalScrollView__onTouchEvent_IMPL_25379(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onTouchEvent_25379_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onTouchEvent could not be cached",91);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onTouchEvent_25379_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onTouchEvent_25379_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool HorizontalScrollView__pageScroll(HorizontalScrollView* __this, int arg0)
{
    return HorizontalScrollView__pageScroll_IMPL_25386(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

bool HorizontalScrollView__pageScroll_IMPL_25386(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__pageScroll_25386_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"pageScroll","(I)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.pageScroll could not be cached",89);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__pageScroll_25386_ID, ((jint)arg2_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__pageScroll_25386_ID, ((jint)arg2_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool HorizontalScrollView__performAccessibilityAction(HorizontalScrollView* __this, int arg0, ::app::Android::android::os::Bundle* arg1)
{
    return HorizontalScrollView__performAccessibilityAction_IMPL_25383(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool HorizontalScrollView__performAccessibilityAction_IMPL_25383(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__performAccessibilityAction_25383_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"performAccessibilityAction","(ILandroid/os/Bundle;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.performAccessibilityAction could not be cached",105);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__performAccessibilityAction_25383_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__performAccessibilityAction_25383_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void HorizontalScrollView__requestChildFocus(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1)
{
    HorizontalScrollView__requestChildFocus_IMPL_25397(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void HorizontalScrollView__requestChildFocus_IMPL_25397(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__requestChildFocus_25397_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"requestChildFocus","(Landroid/view/View;Landroid/view/View;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.requestChildFocus could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__requestChildFocus_25397_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__requestChildFocus_25397_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool HorizontalScrollView__requestChildRectangleOnScreen(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, bool arg2)
{
    return HorizontalScrollView__requestChildRectangleOnScreen_IMPL_25399(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

bool HorizontalScrollView__requestChildRectangleOnScreen_IMPL_25399(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__requestChildRectangleOnScreen_25399_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"requestChildRectangleOnScreen","(Landroid/view/View;Landroid/graphics/Rect;Z)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.requestChildRectangleOnScreen could not be cached",108);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__requestChildRectangleOnScreen_25399_ID, _obArg2, _obArg3, ((jboolean)arg4_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__requestChildRectangleOnScreen_25399_ID, _obArg2, _obArg3, ((jboolean)arg4_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void HorizontalScrollView__requestDisallowInterceptTouchEvent(HorizontalScrollView* __this, bool arg0)
{
    HorizontalScrollView__requestDisallowInterceptTouchEvent_IMPL_25377(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HorizontalScrollView__requestDisallowInterceptTouchEvent_IMPL_25377(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__requestDisallowInterceptTouchEvent_25377_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"requestDisallowInterceptTouchEvent","(Z)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.requestDisallowInterceptTouchEvent could not be cached",113);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__requestDisallowInterceptTouchEvent_25377_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__requestDisallowInterceptTouchEvent_25377_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__requestLayout(HorizontalScrollView* __this)
{
    HorizontalScrollView__requestLayout_IMPL_25400(NULL, __this->_subclassed, __this->_javaObject);
}

void HorizontalScrollView__requestLayout_IMPL_25400(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__requestLayout_25400_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"requestLayout","()V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.requestLayout could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__requestLayout_25400_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__requestLayout_25400_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__scrollTo(HorizontalScrollView* __this, int arg0, int arg1)
{
    HorizontalScrollView__scrollTo_IMPL_25404(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void HorizontalScrollView__scrollTo_IMPL_25404(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__scrollTo_25404_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"scrollTo","(II)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.scrollTo could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__scrollTo_25404_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__scrollTo_25404_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__setFillViewport(HorizontalScrollView* __this, bool arg0)
{
    HorizontalScrollView__setFillViewport_IMPL_25371(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HorizontalScrollView__setFillViewport_IMPL_25371(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__setFillViewport_25371_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"setFillViewport","(Z)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.setFillViewport could not be cached",94);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__setFillViewport_25371_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__setFillViewport_25371_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__setOverScrollMode(HorizontalScrollView* __this, int arg0)
{
    HorizontalScrollView__setOverScrollMode_IMPL_25405(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HorizontalScrollView__setOverScrollMode_IMPL_25405(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__setOverScrollMode_25405_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"setOverScrollMode","(I)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.setOverScrollMode could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__setOverScrollMode_25405_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__setOverScrollMode_25405_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__setSmoothScrollingEnabled(HorizontalScrollView* __this, bool arg0)
{
    HorizontalScrollView__setSmoothScrollingEnabled_IMPL_25373(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HorizontalScrollView__setSmoothScrollingEnabled_IMPL_25373(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__setSmoothScrollingEnabled_25373_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"setSmoothScrollingEnabled","(Z)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.setSmoothScrollingEnabled could not be cached",104);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__setSmoothScrollingEnabled_25373_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__setSmoothScrollingEnabled_25373_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool HorizontalScrollView__shouldDelayChildPressedState(HorizontalScrollView* __this)
{
    return HorizontalScrollView__shouldDelayChildPressedState_IMPL_25381(NULL, __this->_subclassed, __this->_javaObject);
}

bool HorizontalScrollView__shouldDelayChildPressedState_IMPL_25381(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__shouldDelayChildPressedState_25381_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"shouldDelayChildPressedState","()Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.shouldDelayChildPressedState could not be cached",107);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__shouldDelayChildPressedState_25381_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__shouldDelayChildPressedState_25381_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void HorizontalScrollView__smoothScrollBy(HorizontalScrollView* __this, int arg0, int arg1)
{
    HorizontalScrollView__smoothScrollBy_IMPL_25389(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void HorizontalScrollView__smoothScrollBy_IMPL_25389(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__smoothScrollBy_25389_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"smoothScrollBy","(II)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.smoothScrollBy could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__smoothScrollBy_25389_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__smoothScrollBy_25389_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void HorizontalScrollView__smoothScrollTo(HorizontalScrollView* __this, int arg0, int arg1)
{
    HorizontalScrollView__smoothScrollTo_IMPL_25390(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void HorizontalScrollView__smoothScrollTo_IMPL_25390(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__smoothScrollTo_25390_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"smoothScrollTo","(II)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.smoothScrollTo could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__smoothScrollTo_25390_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__smoothScrollTo_25390_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ImageView___javaClass_3;
jmethodID ImageView__drawableStateChanged_25464_ID;
jmethodID ImageView__getBaseline_25466_ID;
jmethodID ImageView__hasOverlappingRendering_25438_ID;
jmethodID ImageView__ImageView_25432_ID_c;
jmethodID ImageView__invalidateDrawable_25437_ID;
jmethodID ImageView__jumpDrawablesToCurrentState_25436_ID;
jmethodID ImageView__onAttachedToWindow_25479_ID;
jmethodID ImageView__onDetachedFromWindow_25480_ID;
jmethodID ImageView__onDraw_25465_ID;
jmethodID ImageView__onInitializeAccessibilityEvent_25481_ID;
jmethodID ImageView__onInitializeAccessibilityNodeInfo_25482_ID;
jmethodID ImageView__onMeasure_25462_ID;
jmethodID ImageView__onPopulateAccessibilityEvent_25439_ID;
jmethodID ImageView__onRtlPropertiesChanged_25461_ID;
jmethodID ImageView__setImageBitmap_25450_ID;
jmethodID ImageView__setImageMatrix_25457_ID;
jmethodID ImageView__setScaleType_25454_ID;
jmethodID ImageView__setSelected_25452_ID;
jmethodID ImageView__setVisibility_25478_ID;
jmethodID ImageView__verifyDrawable_25435_ID;

ImageView__uType* ImageView__typeof()
{
    static ::uStaticStrong<ImageView__uType*> type;
    if (type != NULL) return type;

    type = (ImageView__uType*)::uAllocClassType(sizeof(ImageView__uType), "Android.android.widget.ImageView", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::View__typeof());
    type->__fp_drawableStateChanged = (void(*)(::app::Android::android::view::View*))ImageView__drawableStateChanged;
    type->__fp_getBaseline = (int(*)(::app::Android::android::view::View*))ImageView__getBaseline;
    type->__fp_hasOverlappingRendering = (bool(*)(::app::Android::android::view::View*))ImageView__hasOverlappingRendering;
    type->__fp_invalidateDrawable = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::drawable::Drawable*))ImageView__invalidateDrawable;
    type->__fp_jumpDrawablesToCurrentState = (void(*)(::app::Android::android::view::View*))ImageView__jumpDrawablesToCurrentState;
    type->__fp_onAttachedToWindow = (void(*)(::app::Android::android::view::View*))ImageView__onAttachedToWindow;
    type->__fp_onDetachedFromWindow = (void(*)(::app::Android::android::view::View*))ImageView__onDetachedFromWindow;
    type->__fp_onDraw = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::Canvas*))ImageView__onDraw;
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))ImageView__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))ImageView__onInitializeAccessibilityNodeInfo;
    type->__fp_onMeasure = (void(*)(::app::Android::android::view::View*, int, int))ImageView__onMeasure;
    type->__fp_onPopulateAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))ImageView__onPopulateAccessibilityEvent;
    type->__fp_onRtlPropertiesChanged = (void(*)(::app::Android::android::view::View*, int))ImageView__onRtlPropertiesChanged;
    type->__fp_setSelected = (void(*)(::app::Android::android::view::View*, bool))ImageView__setSelected;
    type->__fp_setVisibility = (void(*)(::app::Android::android::view::View*, int))ImageView__setVisibility;
    type->__fp_verifyDrawable = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::drawable::Drawable*))ImageView__verifyDrawable;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ImageView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ImageView__uType, __interface_1));

    type->SetFields(21,
        ::uNewField("_javaClass", &ImageView___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("drawableStateChanged_25464_ID", &ImageView__drawableStateChanged_25464_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getBaseline_25466_ID", &ImageView__getBaseline_25466_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hasOverlappingRendering_25438_ID", &ImageView__hasOverlappingRendering_25438_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("ImageView_25432_ID_c", &ImageView__ImageView_25432_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("invalidateDrawable_25437_ID", &ImageView__invalidateDrawable_25437_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("jumpDrawablesToCurrentState_25436_ID", &ImageView__jumpDrawablesToCurrentState_25436_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onAttachedToWindow_25479_ID", &ImageView__onAttachedToWindow_25479_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDetachedFromWindow_25480_ID", &ImageView__onDetachedFromWindow_25480_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDraw_25465_ID", &ImageView__onDraw_25465_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_25481_ID", &ImageView__onInitializeAccessibilityEvent_25481_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_25482_ID", &ImageView__onInitializeAccessibilityNodeInfo_25482_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onMeasure_25462_ID", &ImageView__onMeasure_25462_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onPopulateAccessibilityEvent_25439_ID", &ImageView__onPopulateAccessibilityEvent_25439_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onRtlPropertiesChanged_25461_ID", &ImageView__onRtlPropertiesChanged_25461_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setImageBitmap_25450_ID", &ImageView__setImageBitmap_25450_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setImageMatrix_25457_ID", &ImageView__setImageMatrix_25457_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setScaleType_25454_ID", &ImageView__setScaleType_25454_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setSelected_25452_ID", &ImageView__setSelected_25452_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setVisibility_25478_ID", &ImageView__setVisibility_25478_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("verifyDrawable_25435_ID", &ImageView__verifyDrawable_25435_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(24,
        ::uNewFunctionVoid("_Init", ImageView___Init_3, 0, true),
        ::uNewFunctionVoid("drawableStateChanged_IMPL_25464", ImageView__drawableStateChanged_IMPL_25464, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getBaseline_IMPL_25466", ImageView__getBaseline_IMPL_25466, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("hasOverlappingRendering_IMPL_25438", ImageView__hasOverlappingRendering_IMPL_25438, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("invalidateDrawable_IMPL_25437", ImageView__invalidateDrawable_IMPL_25437, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("jumpDrawablesToCurrentState_IMPL_25436", ImageView__jumpDrawablesToCurrentState_IMPL_25436, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", ImageView__New_9, 0, true, ImageView__typeof(), ::app::Android::android::content::Context__typeof()),
        ::uNewFunctionVoid("onAttachedToWindow_IMPL_25479", ImageView__onAttachedToWindow_IMPL_25479, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onDetachedFromWindow_IMPL_25480", ImageView__onDetachedFromWindow_IMPL_25480, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onDraw_IMPL_25465", ImageView__onDraw_IMPL_25465, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_25481", ImageView__onInitializeAccessibilityEvent_IMPL_25481, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_25482", ImageView__onInitializeAccessibilityNodeInfo_IMPL_25482, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onMeasure_IMPL_25462", ImageView__onMeasure_IMPL_25462, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onPopulateAccessibilityEvent_IMPL_25439", ImageView__onPopulateAccessibilityEvent_IMPL_25439, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onRtlPropertiesChanged_IMPL_25461", ImageView__onRtlPropertiesChanged_IMPL_25461, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setImageBitmap", ImageView__setImageBitmap, 0, false, ::app::Android::android::graphics::Bitmap__typeof()),
        ::uNewFunctionVoid("setImageBitmap_IMPL_25450", ImageView__setImageBitmap_IMPL_25450, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setImageMatrix", ImageView__setImageMatrix, 0, false, ::app::Android::android::graphics::Matrix__typeof()),
        ::uNewFunctionVoid("setImageMatrix_IMPL_25457", ImageView__setImageMatrix_IMPL_25457, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setScaleType", ImageView__setScaleType, 0, false, ::app::Android::android::widget::ImageViewDLRScaleType__typeof()),
        ::uNewFunctionVoid("setScaleType_IMPL_25454", ImageView__setScaleType_IMPL_25454, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setSelected_IMPL_25452", ImageView__setSelected_IMPL_25452, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setVisibility_IMPL_25478", ImageView__setVisibility_IMPL_25478, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("verifyDrawable_IMPL_25435", ImageView__verifyDrawable_IMPL_25435, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImageView___Init_3(::uStatic* __this)
{
    if (::app::Android::android::widget::ImageView___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::widget::ImageView___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/ImageView"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::ImageView___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.ImageView'", 48);; }
}

void ImageView___ObjInit_8(ImageView* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::view::View___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::widget::ImageView__ImageView_25432_ID_c,::app::Android::android::widget::ImageView___javaClass_3,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.ImageView.<init> could not be cached",74);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__ImageView_25432_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void ImageView__drawableStateChanged(ImageView* __this)
{
    ImageView__drawableStateChanged_IMPL_25464(NULL, __this->_subclassed, __this->_javaObject);
}

void ImageView__drawableStateChanged_IMPL_25464(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ImageView__drawableStateChanged_25464_ID,::app::Android::android::widget::ImageView___javaClass_3,"drawableStateChanged","()V",GetMethodID,"Id for fallback method android.widget.ImageView.drawableStateChanged could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__drawableStateChanged_25464_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__drawableStateChanged_25464_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int ImageView__getBaseline(ImageView* __this)
{
    return ImageView__getBaseline_IMPL_25466(NULL, __this->_subclassed, __this->_javaObject);
}

int ImageView__getBaseline_IMPL_25466(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::ImageView__getBaseline_25466_ID,::app::Android::android::widget::ImageView___javaClass_3,"getBaseline","()I",GetMethodID,"Id for fallback method android.widget.ImageView.getBaseline could not be cached",79);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__getBaseline_25466_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::ImageView__getBaseline_25466_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool ImageView__hasOverlappingRendering(ImageView* __this)
{
    return ImageView__hasOverlappingRendering_IMPL_25438(NULL, __this->_subclassed, __this->_javaObject);
}

bool ImageView__hasOverlappingRendering_IMPL_25438(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ImageView__hasOverlappingRendering_25438_ID,::app::Android::android::widget::ImageView___javaClass_3,"hasOverlappingRendering","()Z",GetMethodID,"Id for fallback method android.widget.ImageView.hasOverlappingRendering could not be cached",91);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__hasOverlappingRendering_25438_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ImageView__hasOverlappingRendering_25438_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ImageView__invalidateDrawable(ImageView* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    ImageView__invalidateDrawable_IMPL_25437(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ImageView__invalidateDrawable_IMPL_25437(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ImageView__invalidateDrawable_25437_ID,::app::Android::android::widget::ImageView___javaClass_3,"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.ImageView.invalidateDrawable could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__invalidateDrawable_25437_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__invalidateDrawable_25437_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__jumpDrawablesToCurrentState(ImageView* __this)
{
    ImageView__jumpDrawablesToCurrentState_IMPL_25436(NULL, __this->_subclassed, __this->_javaObject);
}

void ImageView__jumpDrawablesToCurrentState_IMPL_25436(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ImageView__jumpDrawablesToCurrentState_25436_ID,::app::Android::android::widget::ImageView___javaClass_3,"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.ImageView.jumpDrawablesToCurrentState could not be cached",95);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__jumpDrawablesToCurrentState_25436_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__jumpDrawablesToCurrentState_25436_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

ImageView* ImageView__New_9(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    ImageView* inst = (ImageView*)::uAllocObject(sizeof(ImageView), ImageView__typeof());
    inst->_ObjInit_8(arg0);
    return inst;
}

void ImageView__onAttachedToWindow(ImageView* __this)
{
    ImageView__onAttachedToWindow_IMPL_25479(NULL, __this->_subclassed, __this->_javaObject);
}

void ImageView__onAttachedToWindow_IMPL_25479(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ImageView__onAttachedToWindow_25479_ID,::app::Android::android::widget::ImageView___javaClass_3,"onAttachedToWindow","()V",GetMethodID,"Id for fallback method android.widget.ImageView.onAttachedToWindow could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__onAttachedToWindow_25479_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__onAttachedToWindow_25479_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__onDetachedFromWindow(ImageView* __this)
{
    ImageView__onDetachedFromWindow_IMPL_25480(NULL, __this->_subclassed, __this->_javaObject);
}

void ImageView__onDetachedFromWindow_IMPL_25480(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ImageView__onDetachedFromWindow_25480_ID,::app::Android::android::widget::ImageView___javaClass_3,"onDetachedFromWindow","()V",GetMethodID,"Id for fallback method android.widget.ImageView.onDetachedFromWindow could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__onDetachedFromWindow_25480_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__onDetachedFromWindow_25480_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__onDraw(ImageView* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    ImageView__onDraw_IMPL_25465(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ImageView__onDraw_IMPL_25465(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ImageView__onDraw_25465_ID,::app::Android::android::widget::ImageView___javaClass_3,"onDraw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.ImageView.onDraw could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__onDraw_25465_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__onDraw_25465_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__onInitializeAccessibilityEvent(ImageView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    ImageView__onInitializeAccessibilityEvent_IMPL_25481(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ImageView__onInitializeAccessibilityEvent_IMPL_25481(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ImageView__onInitializeAccessibilityEvent_25481_ID,::app::Android::android::widget::ImageView___javaClass_3,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.ImageView.onInitializeAccessibilityEvent could not be cached",98);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__onInitializeAccessibilityEvent_25481_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__onInitializeAccessibilityEvent_25481_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__onInitializeAccessibilityNodeInfo(ImageView* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    ImageView__onInitializeAccessibilityNodeInfo_IMPL_25482(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ImageView__onInitializeAccessibilityNodeInfo_IMPL_25482(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ImageView__onInitializeAccessibilityNodeInfo_25482_ID,::app::Android::android::widget::ImageView___javaClass_3,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.ImageView.onInitializeAccessibilityNodeInfo could not be cached",101);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__onInitializeAccessibilityNodeInfo_25482_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__onInitializeAccessibilityNodeInfo_25482_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__onMeasure(ImageView* __this, int arg0, int arg1)
{
    ImageView__onMeasure_IMPL_25462(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void ImageView__onMeasure_IMPL_25462(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ImageView__onMeasure_25462_ID,::app::Android::android::widget::ImageView___javaClass_3,"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.ImageView.onMeasure could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__onMeasure_25462_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__onMeasure_25462_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__onPopulateAccessibilityEvent(ImageView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    ImageView__onPopulateAccessibilityEvent_IMPL_25439(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ImageView__onPopulateAccessibilityEvent_IMPL_25439(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ImageView__onPopulateAccessibilityEvent_25439_ID,::app::Android::android::widget::ImageView___javaClass_3,"onPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.ImageView.onPopulateAccessibilityEvent could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__onPopulateAccessibilityEvent_25439_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__onPopulateAccessibilityEvent_25439_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__onRtlPropertiesChanged(ImageView* __this, int arg0)
{
    ImageView__onRtlPropertiesChanged_IMPL_25461(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ImageView__onRtlPropertiesChanged_IMPL_25461(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ImageView__onRtlPropertiesChanged_25461_ID,::app::Android::android::widget::ImageView___javaClass_3,"onRtlPropertiesChanged","(I)V",GetMethodID,"Id for fallback method android.widget.ImageView.onRtlPropertiesChanged could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__onRtlPropertiesChanged_25461_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__onRtlPropertiesChanged_25461_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__setImageBitmap(ImageView* __this, ::app::Android::android::graphics::Bitmap* arg0)
{
    ImageView__setImageBitmap_IMPL_25450(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ImageView__setImageBitmap_IMPL_25450(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ImageView__setImageBitmap_25450_ID,::app::Android::android::widget::ImageView___javaClass_3,"setImageBitmap","(Landroid/graphics/Bitmap;)V",GetMethodID,"Id for fallback method android.widget.ImageView.setImageBitmap could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__setImageBitmap_25450_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__setImageBitmap_25450_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__setImageMatrix(ImageView* __this, ::app::Android::android::graphics::Matrix* arg0)
{
    ImageView__setImageMatrix_IMPL_25457(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ImageView__setImageMatrix_IMPL_25457(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ImageView__setImageMatrix_25457_ID,::app::Android::android::widget::ImageView___javaClass_3,"setImageMatrix","(Landroid/graphics/Matrix;)V",GetMethodID,"Id for fallback method android.widget.ImageView.setImageMatrix could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__setImageMatrix_25457_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__setImageMatrix_25457_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__setScaleType(ImageView* __this, ::app::Android::android::widget::ImageViewDLRScaleType* arg0)
{
    ImageView__setScaleType_IMPL_25454(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ImageView__setScaleType_IMPL_25454(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ImageView__setScaleType_25454_ID,::app::Android::android::widget::ImageView___javaClass_3,"setScaleType","(Landroid/widget/ImageView$ScaleType;)V",GetMethodID,"Id for fallback method android.widget.ImageView.setScaleType could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__setScaleType_25454_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__setScaleType_25454_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__setSelected(ImageView* __this, bool arg0)
{
    ImageView__setSelected_IMPL_25452(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ImageView__setSelected_IMPL_25452(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ImageView__setSelected_25452_ID,::app::Android::android::widget::ImageView___javaClass_3,"setSelected","(Z)V",GetMethodID,"Id for fallback method android.widget.ImageView.setSelected could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__setSelected_25452_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__setSelected_25452_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ImageView__setVisibility(ImageView* __this, int arg0)
{
    ImageView__setVisibility_IMPL_25478(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ImageView__setVisibility_IMPL_25478(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ImageView__setVisibility_25478_ID,::app::Android::android::widget::ImageView___javaClass_3,"setVisibility","(I)V",GetMethodID,"Id for fallback method android.widget.ImageView.setVisibility could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__setVisibility_25478_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__setVisibility_25478_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool ImageView__verifyDrawable(ImageView* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return ImageView__verifyDrawable_IMPL_25435(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool ImageView__verifyDrawable_IMPL_25435(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ImageView__verifyDrawable_25435_ID,::app::Android::android::widget::ImageView___javaClass_3,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z",GetMethodID,"Id for fallback method android.widget.ImageView.verifyDrawable could not be cached",82);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__verifyDrawable_25435_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ImageView__verifyDrawable_25435_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ImageViewDLRScaleType___javaClass_3;
jfieldID ImageViewDLRScaleType__MATRIX_25429_ID;

ImageViewDLRScaleType__uType* ImageViewDLRScaleType__typeof()
{
    static ::uStaticStrong<ImageViewDLRScaleType__uType*> type;
    if (type != NULL) return type;

    type = (ImageViewDLRScaleType__uType*)::uAllocClassType(sizeof(ImageViewDLRScaleType__uType), "Android.android.widget.ImageViewDLRScaleType", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ImageViewDLRScaleType__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ImageViewDLRScaleType__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &ImageViewDLRScaleType___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("MATRIX_25429_ID", &ImageViewDLRScaleType__MATRIX_25429_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", ImageViewDLRScaleType___Init_3, 0, true),
        ::uNewFunction("get_MATRIX", ImageViewDLRScaleType__get_MATRIX, 0, true, ImageViewDLRScaleType__typeof()));

    ::uRegisterType(type);
    return type;
}

void ImageViewDLRScaleType___Init_3(::uStatic* __this)
{
    if (::app::Android::android::widget::ImageViewDLRScaleType___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::widget::ImageViewDLRScaleType___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/ImageView$ScaleType"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::ImageViewDLRScaleType___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.ImageView$ScaleType'", 58);; }
}

ImageViewDLRScaleType* ImageViewDLRScaleType__get_MATRIX(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageViewDLRScaleType___javaClass_3,::app::Android::android::widget::ImageViewDLRScaleType___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::ImageViewDLRScaleType__MATRIX_25429_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::ImageViewDLRScaleType__MATRIX_25429_ID,::app::Android::android::widget::ImageViewDLRScaleType___javaClass_3,"MATRIX","Landroid/widget/ImageView$ScaleType;",GetStaticFieldID,"Id for field ImageViewDLRScaleType.MATRIX could not be cached",61);
    ::uExitCritical();;
    };
    ImageViewDLRScaleType* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::widget::ImageViewDLRScaleType___javaClass_3, ::app::Android::android::widget::ImageViewDLRScaleType__MATRIX_25429_ID),result,::app::Android::android::widget::ImageViewDLRScaleType__typeof(),ImageViewDLRScaleType*,false,true);;
    return ::uCast< ImageViewDLRScaleType*>(result, ImageViewDLRScaleType__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ProgressBar___javaClass_3;
jmethodID ProgressBar__drawableStateChanged_25861_ID;
jmethodID ProgressBar__getIndeterminateDrawable_25837_ID;
jmethodID ProgressBar__getInterpolator_25854_ID;
jmethodID ProgressBar__getMax_25848_ID;
jmethodID ProgressBar__getProgress_25846_ID;
jmethodID ProgressBar__getProgressDrawable_25839_ID;
jmethodID ProgressBar__getSecondaryProgress_25847_ID;
jmethodID ProgressBar__incrementProgressBy_25850_ID;
jmethodID ProgressBar__incrementSecondaryProgressBy_25851_ID;
jmethodID ProgressBar__invalidateDrawable_25857_ID;
jmethodID ProgressBar__isIndeterminate_25835_ID;
jmethodID ProgressBar__jumpDrawablesToCurrentState_25842_ID;
jmethodID ProgressBar__onAttachedToWindow_25864_ID;
jmethodID ProgressBar__onDetachedFromWindow_25865_ID;
jmethodID ProgressBar__onDraw_25859_ID;
jmethodID ProgressBar__onInitializeAccessibilityEvent_25866_ID;
jmethodID ProgressBar__onInitializeAccessibilityNodeInfo_25867_ID;
jmethodID ProgressBar__onMeasure_25860_ID;
jmethodID ProgressBar__onRestoreInstanceState_25863_ID;
jmethodID ProgressBar__onSaveInstanceState_25862_ID;
jmethodID ProgressBar__onSizeChanged_25858_ID;
jmethodID ProgressBar__onVisibilityChanged_25856_ID;
jmethodID ProgressBar__postInvalidate_25843_ID;
jmethodID ProgressBar__ProgressBar_25832_ID_c;
jmethodID ProgressBar__ProgressBar_25833_ID_c;
jmethodID ProgressBar__ProgressBar_25834_ID_c;
jmethodID ProgressBar__setIndeterminate_25836_ID;
jmethodID ProgressBar__setIndeterminateDrawable_25838_ID;
jmethodID ProgressBar__setInterpolator_25852_ID;
jmethodID ProgressBar__setInterpolator_25853_ID;
jmethodID ProgressBar__setMax_25849_ID;
jmethodID ProgressBar__setProgress_25844_ID;
jmethodID ProgressBar__setProgressDrawable_25840_ID;
jmethodID ProgressBar__setSecondaryProgress_25845_ID;
jmethodID ProgressBar__setVisibility_25855_ID;
jmethodID ProgressBar__verifyDrawable_25841_ID;

ProgressBar__uType* ProgressBar__typeof()
{
    static ::uStaticStrong<ProgressBar__uType*> type;
    if (type != NULL) return type;

    type = (ProgressBar__uType*)::uAllocClassType(sizeof(ProgressBar__uType), "Android.android.widget.ProgressBar", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::View__typeof());
    type->__fp_drawableStateChanged = (void(*)(::app::Android::android::view::View*))ProgressBar__drawableStateChanged;
    type->__fp_invalidateDrawable = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::drawable::Drawable*))ProgressBar__invalidateDrawable;
    type->__fp_jumpDrawablesToCurrentState = (void(*)(::app::Android::android::view::View*))ProgressBar__jumpDrawablesToCurrentState;
    type->__fp_onAttachedToWindow = (void(*)(::app::Android::android::view::View*))ProgressBar__onAttachedToWindow;
    type->__fp_onDetachedFromWindow = (void(*)(::app::Android::android::view::View*))ProgressBar__onDetachedFromWindow;
    type->__fp_onDraw = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::Canvas*))ProgressBar__onDraw;
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))ProgressBar__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))ProgressBar__onInitializeAccessibilityNodeInfo;
    type->__fp_onMeasure = (void(*)(::app::Android::android::view::View*, int, int))ProgressBar__onMeasure;
    type->__fp_onSizeChanged = (void(*)(::app::Android::android::view::View*, int, int, int, int))ProgressBar__onSizeChanged;
    type->__fp_onVisibilityChanged = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::View*, int))ProgressBar__onVisibilityChanged;
    type->__fp_postInvalidate = (void(*)(::app::Android::android::view::View*))ProgressBar__postInvalidate;
    type->__fp_setMax = ProgressBar__setMax;
    type->__fp_setVisibility = (void(*)(::app::Android::android::view::View*, int))ProgressBar__setVisibility;
    type->__fp_verifyDrawable = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::drawable::Drawable*))ProgressBar__verifyDrawable;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ProgressBar__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ProgressBar__uType, __interface_1));

    type->SetFields(37,
        ::uNewField("_javaClass", &ProgressBar___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("drawableStateChanged_25861_ID", &ProgressBar__drawableStateChanged_25861_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getIndeterminateDrawable_25837_ID", &ProgressBar__getIndeterminateDrawable_25837_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getInterpolator_25854_ID", &ProgressBar__getInterpolator_25854_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getMax_25848_ID", &ProgressBar__getMax_25848_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getProgress_25846_ID", &ProgressBar__getProgress_25846_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getProgressDrawable_25839_ID", &ProgressBar__getProgressDrawable_25839_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getSecondaryProgress_25847_ID", &ProgressBar__getSecondaryProgress_25847_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("incrementProgressBy_25850_ID", &ProgressBar__incrementProgressBy_25850_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("incrementSecondaryProgressBy_25851_ID", &ProgressBar__incrementSecondaryProgressBy_25851_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("invalidateDrawable_25857_ID", &ProgressBar__invalidateDrawable_25857_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isIndeterminate_25835_ID", &ProgressBar__isIndeterminate_25835_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("jumpDrawablesToCurrentState_25842_ID", &ProgressBar__jumpDrawablesToCurrentState_25842_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onAttachedToWindow_25864_ID", &ProgressBar__onAttachedToWindow_25864_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDetachedFromWindow_25865_ID", &ProgressBar__onDetachedFromWindow_25865_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDraw_25859_ID", &ProgressBar__onDraw_25859_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_25866_ID", &ProgressBar__onInitializeAccessibilityEvent_25866_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_25867_ID", &ProgressBar__onInitializeAccessibilityNodeInfo_25867_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onMeasure_25860_ID", &ProgressBar__onMeasure_25860_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onRestoreInstanceState_25863_ID", &ProgressBar__onRestoreInstanceState_25863_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onSaveInstanceState_25862_ID", &ProgressBar__onSaveInstanceState_25862_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onSizeChanged_25858_ID", &ProgressBar__onSizeChanged_25858_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onVisibilityChanged_25856_ID", &ProgressBar__onVisibilityChanged_25856_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("postInvalidate_25843_ID", &ProgressBar__postInvalidate_25843_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("ProgressBar_25832_ID_c", &ProgressBar__ProgressBar_25832_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("ProgressBar_25833_ID_c", &ProgressBar__ProgressBar_25833_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("ProgressBar_25834_ID_c", &ProgressBar__ProgressBar_25834_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setIndeterminate_25836_ID", &ProgressBar__setIndeterminate_25836_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setIndeterminateDrawable_25838_ID", &ProgressBar__setIndeterminateDrawable_25838_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setInterpolator_25852_ID", &ProgressBar__setInterpolator_25852_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setInterpolator_25853_ID", &ProgressBar__setInterpolator_25853_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setMax_25849_ID", &ProgressBar__setMax_25849_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setProgress_25844_ID", &ProgressBar__setProgress_25844_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setProgressDrawable_25840_ID", &ProgressBar__setProgressDrawable_25840_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setSecondaryProgress_25845_ID", &ProgressBar__setSecondaryProgress_25845_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setVisibility_25855_ID", &ProgressBar__setVisibility_25855_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("verifyDrawable_25841_ID", &ProgressBar__verifyDrawable_25841_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(57,
        ::uNewFunctionVoid("_Init", ProgressBar___Init_3, 0, true),
        ::uNewFunctionVoid("drawableStateChanged_IMPL_25861", ProgressBar__drawableStateChanged_IMPL_25861, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getIndeterminateDrawable", ProgressBar__getIndeterminateDrawable, 0, false, ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunction("getIndeterminateDrawable_IMPL_25837", ProgressBar__getIndeterminateDrawable_IMPL_25837, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getInterpolator", ProgressBar__getInterpolator, 0, false, ::app::Android::android::view::animation::Interpolator__typeof()),
        ::uNewFunction("getInterpolator_IMPL_25854", ProgressBar__getInterpolator_IMPL_25854, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getMax", ProgressBar__getMax, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getMax_IMPL_25848", ProgressBar__getMax_IMPL_25848, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getProgress", ProgressBar__getProgress, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getProgress_IMPL_25846", ProgressBar__getProgress_IMPL_25846, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getProgressDrawable", ProgressBar__getProgressDrawable, 0, false, ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunction("getProgressDrawable_IMPL_25839", ProgressBar__getProgressDrawable_IMPL_25839, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getSecondaryProgress", ProgressBar__getSecondaryProgress, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getSecondaryProgress_IMPL_25847", ProgressBar__getSecondaryProgress_IMPL_25847, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("incrementProgressBy", ProgressBar__incrementProgressBy, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("incrementProgressBy_IMPL_25850", ProgressBar__incrementProgressBy_IMPL_25850, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("incrementSecondaryProgressBy", ProgressBar__incrementSecondaryProgressBy, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("incrementSecondaryProgressBy_IMPL_25851", ProgressBar__incrementSecondaryProgressBy_IMPL_25851, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("invalidateDrawable_IMPL_25857", ProgressBar__invalidateDrawable_IMPL_25857, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("isIndeterminate", ProgressBar__isIndeterminate, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isIndeterminate_IMPL_25835", ProgressBar__isIndeterminate_IMPL_25835, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("jumpDrawablesToCurrentState_IMPL_25842", ProgressBar__jumpDrawablesToCurrentState_IMPL_25842, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", ProgressBar__New_10, 0, true, ProgressBar__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Android::android::util::AttributeSet__typeof()),
        ::uNewFunction(".ctor", ProgressBar__New_11, 0, true, ProgressBar__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Android::android::util::AttributeSet__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", ProgressBar__New_12, 0, true, ProgressBar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", ProgressBar__New_9, 0, true, ProgressBar__typeof(), ::app::Android::android::content::Context__typeof()),
        ::uNewFunctionVoid("onAttachedToWindow_IMPL_25864", ProgressBar__onAttachedToWindow_IMPL_25864, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onDetachedFromWindow_IMPL_25865", ProgressBar__onDetachedFromWindow_IMPL_25865, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onDraw_IMPL_25859", ProgressBar__onDraw_IMPL_25859, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_25866", ProgressBar__onInitializeAccessibilityEvent_IMPL_25866, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_25867", ProgressBar__onInitializeAccessibilityNodeInfo_IMPL_25867, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onMeasure_IMPL_25860", ProgressBar__onMeasure_IMPL_25860, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onRestoreInstanceState", ProgressBar__onRestoreInstanceState_1, 0, false, ::app::Android::android::os::Parcelable__typeof()),
        ::uNewFunctionVoid("onRestoreInstanceState_IMPL_25863", ProgressBar__onRestoreInstanceState_IMPL_25863, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onSaveInstanceState", ProgressBar__onSaveInstanceState_1, 0, false, ::app::Android::android::os::Parcelable__typeof()),
        ::uNewFunction("onSaveInstanceState_IMPL_25862", ProgressBar__onSaveInstanceState_IMPL_25862, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onSizeChanged_IMPL_25858", ProgressBar__onSizeChanged_IMPL_25858, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onVisibilityChanged_IMPL_25856", ProgressBar__onVisibilityChanged_IMPL_25856, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("postInvalidate_IMPL_25843", ProgressBar__postInvalidate_IMPL_25843, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("setIndeterminate", ProgressBar__setIndeterminate, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setIndeterminate_IMPL_25836", ProgressBar__setIndeterminate_IMPL_25836, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setIndeterminateDrawable", ProgressBar__setIndeterminateDrawable, 0, false, ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunctionVoid("setIndeterminateDrawable_IMPL_25838", ProgressBar__setIndeterminateDrawable_IMPL_25838, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setInterpolator", ProgressBar__setInterpolator, 0, false, ::app::Android::android::content::Context__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setInterpolator", ProgressBar__setInterpolator_1, 0, false, ::app::Android::android::view::animation::Interpolator__typeof()),
        ::uNewFunctionVoid("setInterpolator_IMPL_25852", ProgressBar__setInterpolator_IMPL_25852, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setInterpolator_IMPL_25853", ProgressBar__setInterpolator_IMPL_25853, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setMax", type->__fp_setMax, offsetof(ProgressBar__uType, __fp_setMax), false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setMax_IMPL_25849", ProgressBar__setMax_IMPL_25849, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setProgress", ProgressBar__setProgress, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setProgress_IMPL_25844", ProgressBar__setProgress_IMPL_25844, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setProgressDrawable", ProgressBar__setProgressDrawable, 0, false, ::app::Android::android::graphics::drawable::Drawable__typeof()),
        ::uNewFunctionVoid("setProgressDrawable_IMPL_25840", ProgressBar__setProgressDrawable_IMPL_25840, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setSecondaryProgress", ProgressBar__setSecondaryProgress, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setSecondaryProgress_IMPL_25845", ProgressBar__setSecondaryProgress_IMPL_25845, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setVisibility_IMPL_25855", ProgressBar__setVisibility_IMPL_25855, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("verifyDrawable_IMPL_25841", ProgressBar__verifyDrawable_IMPL_25841, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void ProgressBar___Init_3(::uStatic* __this)
{
    if (::app::Android::android::widget::ProgressBar___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::widget::ProgressBar___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/ProgressBar"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::ProgressBar___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.ProgressBar'", 50);; }
}

void ProgressBar___ObjInit_10(ProgressBar* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    ::app::Android::android::view::View___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__ProgressBar_25834_ID_c,::app::Android::android::widget::ProgressBar___javaClass_3,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__ProgressBar_25834_ID_c, _obArg0, _obArg1, ((jint)arg2));;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void ProgressBar___ObjInit_11(ProgressBar* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::View___ObjInit_7(__this, obj, utype, hasFallbackClass, resolveType);
}

void ProgressBar___ObjInit_8(ProgressBar* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::view::View___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__ProgressBar_25832_ID_c,::app::Android::android::widget::ProgressBar___javaClass_3,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__ProgressBar_25832_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void ProgressBar___ObjInit_9(ProgressBar* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    ::app::Android::android::view::View___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__ProgressBar_25833_ID_c,::app::Android::android::widget::ProgressBar___javaClass_3,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__ProgressBar_25833_ID_c, _obArg0, _obArg1);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void ProgressBar__drawableStateChanged(ProgressBar* __this)
{
    ProgressBar__drawableStateChanged_IMPL_25861(NULL, __this->_subclassed, __this->_javaObject);
}

void ProgressBar__drawableStateChanged_IMPL_25861(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__drawableStateChanged_25861_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"drawableStateChanged","()V",GetMethodID,"Id for fallback method android.widget.ProgressBar.drawableStateChanged could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__drawableStateChanged_25861_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__drawableStateChanged_25861_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::app::Android::android::graphics::drawable::Drawable* ProgressBar__getIndeterminateDrawable(ProgressBar* __this)
{
    return ::uCast< ::app::Android::android::graphics::drawable::Drawable*>(ProgressBar__getIndeterminateDrawable_IMPL_25837(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::graphics::drawable::Drawable__typeof());
}

::uObject* ProgressBar__getIndeterminateDrawable_IMPL_25837(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__getIndeterminateDrawable_25837_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"getIndeterminateDrawable","()Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.widget.ProgressBar.getIndeterminateDrawable could not be cached",94);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__getIndeterminateDrawable_25837_ID),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::ProgressBar__getIndeterminateDrawable_25837_ID),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* ProgressBar__getInterpolator(ProgressBar* __this)
{
    return (::uObject*)ProgressBar__getInterpolator_IMPL_25854(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* ProgressBar__getInterpolator_IMPL_25854(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__getInterpolator_25854_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"getInterpolator","()Landroid/view/animation/Interpolator;",GetMethodID,"Id for fallback method android.widget.ProgressBar.getInterpolator could not be cached",85);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__getInterpolator_25854_ID),result,::app::Android::Fallbacks::Android_android_view_animation_Interpolator__typeof(),::uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::ProgressBar__getInterpolator_25854_ID),result,::app::Android::Fallbacks::Android_android_view_animation_Interpolator__typeof(),::uObject*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int ProgressBar__getMax(ProgressBar* __this)
{
    return ProgressBar__getMax_IMPL_25848(NULL, __this->_subclassed, __this->_javaObject);
}

int ProgressBar__getMax_IMPL_25848(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__getMax_25848_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"getMax","()I",GetMethodID,"Id for fallback method android.widget.ProgressBar.getMax could not be cached",76);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__getMax_25848_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::ProgressBar__getMax_25848_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int ProgressBar__getProgress(ProgressBar* __this)
{
    return ProgressBar__getProgress_IMPL_25846(NULL, __this->_subclassed, __this->_javaObject);
}

int ProgressBar__getProgress_IMPL_25846(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__getProgress_25846_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"getProgress","()I",GetMethodID,"Id for fallback method android.widget.ProgressBar.getProgress could not be cached",81);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__getProgress_25846_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::ProgressBar__getProgress_25846_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::graphics::drawable::Drawable* ProgressBar__getProgressDrawable(ProgressBar* __this)
{
    return ::uCast< ::app::Android::android::graphics::drawable::Drawable*>(ProgressBar__getProgressDrawable_IMPL_25839(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::graphics::drawable::Drawable__typeof());
}

::uObject* ProgressBar__getProgressDrawable_IMPL_25839(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__getProgressDrawable_25839_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"getProgressDrawable","()Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.widget.ProgressBar.getProgressDrawable could not be cached",89);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__getProgressDrawable_25839_ID),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::ProgressBar__getProgressDrawable_25839_ID),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int ProgressBar__getSecondaryProgress(ProgressBar* __this)
{
    return ProgressBar__getSecondaryProgress_IMPL_25847(NULL, __this->_subclassed, __this->_javaObject);
}

int ProgressBar__getSecondaryProgress_IMPL_25847(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__getSecondaryProgress_25847_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"getSecondaryProgress","()I",GetMethodID,"Id for fallback method android.widget.ProgressBar.getSecondaryProgress could not be cached",90);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__getSecondaryProgress_25847_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::ProgressBar__getSecondaryProgress_25847_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ProgressBar__incrementProgressBy(ProgressBar* __this, int arg0)
{
    ProgressBar__incrementProgressBy_IMPL_25850(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ProgressBar__incrementProgressBy_IMPL_25850(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__incrementProgressBy_25850_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"incrementProgressBy","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.incrementProgressBy could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__incrementProgressBy_25850_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__incrementProgressBy_25850_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__incrementSecondaryProgressBy(ProgressBar* __this, int arg0)
{
    ProgressBar__incrementSecondaryProgressBy_IMPL_25851(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ProgressBar__incrementSecondaryProgressBy_IMPL_25851(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__incrementSecondaryProgressBy_25851_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"incrementSecondaryProgressBy","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.incrementSecondaryProgressBy could not be cached",98);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__incrementSecondaryProgressBy_25851_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__incrementSecondaryProgressBy_25851_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__invalidateDrawable(ProgressBar* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    ProgressBar__invalidateDrawable_IMPL_25857(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ProgressBar__invalidateDrawable_IMPL_25857(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__invalidateDrawable_25857_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.invalidateDrawable could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__invalidateDrawable_25857_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__invalidateDrawable_25857_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool ProgressBar__isIndeterminate(ProgressBar* __this)
{
    return ProgressBar__isIndeterminate_IMPL_25835(NULL, __this->_subclassed, __this->_javaObject);
}

bool ProgressBar__isIndeterminate_IMPL_25835(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__isIndeterminate_25835_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"isIndeterminate","()Z",GetMethodID,"Id for fallback method android.widget.ProgressBar.isIndeterminate could not be cached",85);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__isIndeterminate_25835_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ProgressBar__isIndeterminate_25835_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ProgressBar__jumpDrawablesToCurrentState(ProgressBar* __this)
{
    ProgressBar__jumpDrawablesToCurrentState_IMPL_25842(NULL, __this->_subclassed, __this->_javaObject);
}

void ProgressBar__jumpDrawablesToCurrentState_IMPL_25842(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__jumpDrawablesToCurrentState_25842_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.ProgressBar.jumpDrawablesToCurrentState could not be cached",97);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__jumpDrawablesToCurrentState_25842_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__jumpDrawablesToCurrentState_25842_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

ProgressBar* ProgressBar__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    ProgressBar* inst = (ProgressBar*)::uAllocObject(sizeof(ProgressBar), ProgressBar__typeof());
    inst->_ObjInit_9(arg0, arg1);
    return inst;
}

ProgressBar* ProgressBar__New_11(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    ProgressBar* inst = (ProgressBar*)::uAllocObject(sizeof(ProgressBar), ProgressBar__typeof());
    inst->_ObjInit_10(arg0, arg1, arg2);
    return inst;
}

ProgressBar* ProgressBar__New_12(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ProgressBar* inst = (ProgressBar*)::uAllocObject(sizeof(ProgressBar), ProgressBar__typeof());
    inst->_ObjInit_11(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

ProgressBar* ProgressBar__New_9(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    ProgressBar* inst = (ProgressBar*)::uAllocObject(sizeof(ProgressBar), ProgressBar__typeof());
    inst->_ObjInit_8(arg0);
    return inst;
}

void ProgressBar__onAttachedToWindow(ProgressBar* __this)
{
    ProgressBar__onAttachedToWindow_IMPL_25864(NULL, __this->_subclassed, __this->_javaObject);
}

void ProgressBar__onAttachedToWindow_IMPL_25864(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__onAttachedToWindow_25864_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"onAttachedToWindow","()V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onAttachedToWindow could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__onAttachedToWindow_25864_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__onAttachedToWindow_25864_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__onDetachedFromWindow(ProgressBar* __this)
{
    ProgressBar__onDetachedFromWindow_IMPL_25865(NULL, __this->_subclassed, __this->_javaObject);
}

void ProgressBar__onDetachedFromWindow_IMPL_25865(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__onDetachedFromWindow_25865_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"onDetachedFromWindow","()V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onDetachedFromWindow could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__onDetachedFromWindow_25865_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__onDetachedFromWindow_25865_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__onDraw(ProgressBar* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    ProgressBar__onDraw_IMPL_25859(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ProgressBar__onDraw_IMPL_25859(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__onDraw_25859_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"onDraw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onDraw could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__onDraw_25859_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__onDraw_25859_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__onInitializeAccessibilityEvent(ProgressBar* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    ProgressBar__onInitializeAccessibilityEvent_IMPL_25866(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ProgressBar__onInitializeAccessibilityEvent_IMPL_25866(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__onInitializeAccessibilityEvent_25866_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onInitializeAccessibilityEvent could not be cached",100);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__onInitializeAccessibilityEvent_25866_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__onInitializeAccessibilityEvent_25866_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__onInitializeAccessibilityNodeInfo(ProgressBar* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    ProgressBar__onInitializeAccessibilityNodeInfo_IMPL_25867(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ProgressBar__onInitializeAccessibilityNodeInfo_IMPL_25867(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__onInitializeAccessibilityNodeInfo_25867_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onInitializeAccessibilityNodeInfo could not be cached",103);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__onInitializeAccessibilityNodeInfo_25867_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__onInitializeAccessibilityNodeInfo_25867_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__onMeasure(ProgressBar* __this, int arg0, int arg1)
{
    ProgressBar__onMeasure_IMPL_25860(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void ProgressBar__onMeasure_IMPL_25860(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__onMeasure_25860_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onMeasure could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__onMeasure_25860_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__onMeasure_25860_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__onRestoreInstanceState_1(ProgressBar* __this, ::uObject* arg0)
{
    ProgressBar__onRestoreInstanceState_IMPL_25863(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ProgressBar__onRestoreInstanceState_IMPL_25863(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__onRestoreInstanceState_25863_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"onRestoreInstanceState","(Landroid/os/Parcelable;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onRestoreInstanceState could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__onRestoreInstanceState_25863_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__onRestoreInstanceState_25863_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* ProgressBar__onSaveInstanceState_1(ProgressBar* __this)
{
    return (::uObject*)ProgressBar__onSaveInstanceState_IMPL_25862(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* ProgressBar__onSaveInstanceState_IMPL_25862(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__onSaveInstanceState_25862_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"onSaveInstanceState","()Landroid/os/Parcelable;",GetMethodID,"Id for fallback method android.widget.ProgressBar.onSaveInstanceState could not be cached",89);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__onSaveInstanceState_25862_ID),result,::app::Android::Fallbacks::Android_android_os_Parcelable__typeof(),::uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::ProgressBar__onSaveInstanceState_25862_ID),result,::app::Android::Fallbacks::Android_android_os_Parcelable__typeof(),::uObject*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ProgressBar__onSizeChanged(ProgressBar* __this, int arg0, int arg1, int arg2, int arg3)
{
    ProgressBar__onSizeChanged_IMPL_25858(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void ProgressBar__onSizeChanged_IMPL_25858(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__onSizeChanged_25858_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"onSizeChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onSizeChanged could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__onSizeChanged_25858_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__onSizeChanged_25858_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__onVisibilityChanged(ProgressBar* __this, ::app::Android::android::view::View* arg0, int arg1)
{
    ProgressBar__onVisibilityChanged_IMPL_25856(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void ProgressBar__onVisibilityChanged_IMPL_25856(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__onVisibilityChanged_25856_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"onVisibilityChanged","(Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onVisibilityChanged could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__onVisibilityChanged_25856_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__onVisibilityChanged_25856_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__postInvalidate(ProgressBar* __this)
{
    ProgressBar__postInvalidate_IMPL_25843(NULL, __this->_subclassed, __this->_javaObject);
}

void ProgressBar__postInvalidate_IMPL_25843(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__postInvalidate_25843_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"postInvalidate","()V",GetMethodID,"Id for fallback method android.widget.ProgressBar.postInvalidate could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__postInvalidate_25843_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__postInvalidate_25843_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__setIndeterminate(ProgressBar* __this, bool arg0)
{
    ProgressBar__setIndeterminate_IMPL_25836(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ProgressBar__setIndeterminate_IMPL_25836(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__setIndeterminate_25836_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"setIndeterminate","(Z)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setIndeterminate could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__setIndeterminate_25836_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__setIndeterminate_25836_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__setIndeterminateDrawable(ProgressBar* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    ProgressBar__setIndeterminateDrawable_IMPL_25838(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ProgressBar__setIndeterminateDrawable_IMPL_25838(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__setIndeterminateDrawable_25838_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"setIndeterminateDrawable","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setIndeterminateDrawable could not be cached",94);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__setIndeterminateDrawable_25838_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__setIndeterminateDrawable_25838_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__setInterpolator(ProgressBar* __this, ::app::Android::android::content::Context* arg0, int arg1)
{
    ProgressBar__setInterpolator_IMPL_25852(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void ProgressBar__setInterpolator_1(ProgressBar* __this, ::uObject* arg0)
{
    ProgressBar__setInterpolator_IMPL_25853(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ProgressBar__setInterpolator_IMPL_25852(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__setInterpolator_25852_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"setInterpolator","(Landroid/content/Context;I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setInterpolator could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__setInterpolator_25852_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__setInterpolator_25852_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__setInterpolator_IMPL_25853(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__setInterpolator_25853_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"setInterpolator","(Landroid/view/animation/Interpolator;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setInterpolator could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__setInterpolator_25853_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__setInterpolator_25853_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__setMax(ProgressBar* __this, int arg0)
{
    ProgressBar__setMax_IMPL_25849(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ProgressBar__setMax_IMPL_25849(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__setMax_25849_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"setMax","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setMax could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__setMax_25849_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__setMax_25849_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__setProgress(ProgressBar* __this, int arg0)
{
    ProgressBar__setProgress_IMPL_25844(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ProgressBar__setProgress_IMPL_25844(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__setProgress_25844_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"setProgress","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setProgress could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__setProgress_25844_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__setProgress_25844_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__setProgressDrawable(ProgressBar* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    ProgressBar__setProgressDrawable_IMPL_25840(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ProgressBar__setProgressDrawable_IMPL_25840(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__setProgressDrawable_25840_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"setProgressDrawable","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setProgressDrawable could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__setProgressDrawable_25840_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__setProgressDrawable_25840_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__setSecondaryProgress(ProgressBar* __this, int arg0)
{
    ProgressBar__setSecondaryProgress_IMPL_25845(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ProgressBar__setSecondaryProgress_IMPL_25845(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__setSecondaryProgress_25845_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"setSecondaryProgress","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setSecondaryProgress could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__setSecondaryProgress_25845_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__setSecondaryProgress_25845_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ProgressBar__setVisibility(ProgressBar* __this, int arg0)
{
    ProgressBar__setVisibility_IMPL_25855(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ProgressBar__setVisibility_IMPL_25855(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__setVisibility_25855_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"setVisibility","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setVisibility could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__setVisibility_25855_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__setVisibility_25855_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool ProgressBar__verifyDrawable(ProgressBar* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return ProgressBar__verifyDrawable_IMPL_25841(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool ProgressBar__verifyDrawable_IMPL_25841(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__verifyDrawable_25841_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z",GetMethodID,"Id for fallback method android.widget.ProgressBar.verifyDrawable could not be cached",84);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__verifyDrawable_25841_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ProgressBar__verifyDrawable_25841_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass RelativeLayout___javaClass_4;
jfieldID RelativeLayout__ABOVE_25944_ID;
jfieldID RelativeLayout__ALIGN_BASELINE_25946_ID;
jfieldID RelativeLayout__ALIGN_BOTTOM_25950_ID;
jfieldID RelativeLayout__ALIGN_END_25961_ID;
jfieldID RelativeLayout__ALIGN_LEFT_25947_ID;
jfieldID RelativeLayout__ALIGN_PARENT_BOTTOM_25954_ID;
jfieldID RelativeLayout__ALIGN_PARENT_END_25963_ID;
jfieldID RelativeLayout__ALIGN_PARENT_LEFT_25951_ID;
jfieldID RelativeLayout__ALIGN_PARENT_RIGHT_25953_ID;
jfieldID RelativeLayout__ALIGN_PARENT_START_25962_ID;
jfieldID RelativeLayout__ALIGN_PARENT_TOP_25952_ID;
jfieldID RelativeLayout__ALIGN_RIGHT_25949_ID;
jfieldID RelativeLayout__ALIGN_START_25960_ID;
jfieldID RelativeLayout__ALIGN_TOP_25948_ID;
jfieldID RelativeLayout__BELOW_25945_ID;
jfieldID RelativeLayout__CENTER_HORIZONTAL_25956_ID;
jfieldID RelativeLayout__CENTER_IN_PARENT_25955_ID;
jfieldID RelativeLayout__CENTER_VERTICAL_25957_ID;
jmethodID RelativeLayout__checkLayoutParams_25979_ID;
jmethodID RelativeLayout__dispatchPopulateAccessibilityEvent_25981_ID;
jfieldID RelativeLayout__END_OF_25959_ID;
jmethodID RelativeLayout__generateDefaultLayoutParams_25978_ID;
jmethodID RelativeLayout__generateLayoutParams_25977_ID;
jmethodID RelativeLayout__generateLayoutParams_25980_ID;
jmethodID RelativeLayout__getBaseline_25973_ID;
jmethodID RelativeLayout__getGravity_25969_ID;
jfieldID RelativeLayout__LEFT_OF_25942_ID;
jmethodID RelativeLayout__onInitializeAccessibilityEvent_25982_ID;
jmethodID RelativeLayout__onInitializeAccessibilityNodeInfo_25983_ID;
jmethodID RelativeLayout__onLayout_25976_ID;
jmethodID RelativeLayout__onMeasure_25975_ID;
jmethodID RelativeLayout__RelativeLayout_25964_ID_c;
jmethodID RelativeLayout__RelativeLayout_25965_ID_c;
jmethodID RelativeLayout__RelativeLayout_25966_ID_c;
jmethodID RelativeLayout__requestLayout_25974_ID;
jfieldID RelativeLayout__RIGHT_OF_25943_ID;
jmethodID RelativeLayout__setGravity_25970_ID;
jmethodID RelativeLayout__setHorizontalGravity_25971_ID;
jmethodID RelativeLayout__setIgnoreGravity_25968_ID;
jmethodID RelativeLayout__setVerticalGravity_25972_ID;
jmethodID RelativeLayout__shouldDelayChildPressedState_25967_ID;
jfieldID RelativeLayout__START_OF_25958_ID;
jfieldID RelativeLayout__TRUE_25941_ID;

RelativeLayout__uType* RelativeLayout__typeof()
{
    static ::uStaticStrong<RelativeLayout__uType*> type;
    if (type != NULL) return type;

    type = (RelativeLayout__uType*)::uAllocClassType(sizeof(RelativeLayout__uType), "Android.android.widget.RelativeLayout", false, 3, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroup__typeof());
    type->__fp_checkLayoutParams = (bool(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::ViewGroupDLRLayoutParams*))RelativeLayout__checkLayoutParams;
    type->__fp_dispatchPopulateAccessibilityEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))RelativeLayout__dispatchPopulateAccessibilityEvent;
    type->__fp_generateDefaultLayoutParams = (::app::Android::android::view::ViewGroupDLRLayoutParams*(*)(::app::Android::android::view::ViewGroup*))RelativeLayout__generateDefaultLayoutParams;
    type->__fp_generateLayoutParams_1 = (::app::Android::android::view::ViewGroupDLRLayoutParams*(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::ViewGroupDLRLayoutParams*))RelativeLayout__generateLayoutParams_1;
    type->__fp_getBaseline = (int(*)(::app::Android::android::view::View*))RelativeLayout__getBaseline;
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))RelativeLayout__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))RelativeLayout__onInitializeAccessibilityNodeInfo;
    type->__fp_onLayout = (void(*)(::app::Android::android::view::View*, bool, int, int, int, int))RelativeLayout__onLayout;
    type->__fp_onMeasure = (void(*)(::app::Android::android::view::View*, int, int))RelativeLayout__onMeasure;
    type->__fp_requestLayout = (void(*)(::app::Android::android::view::View*))RelativeLayout__requestLayout;
    type->__fp_shouldDelayChildPressedState = (bool(*)(::app::Android::android::view::ViewGroup*))RelativeLayout__shouldDelayChildPressedState;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(RelativeLayout__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(RelativeLayout__uType, __interface_1),
        ::app::Android::android::view::ViewParent__typeof(), offsetof(RelativeLayout__uType, __interface_2));

    type->SetFields(44,
        ::uNewField("_javaClass", &RelativeLayout___javaClass_4, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("ABOVE_25944_ID", &RelativeLayout__ABOVE_25944_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_BASELINE_25946_ID", &RelativeLayout__ALIGN_BASELINE_25946_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_BOTTOM_25950_ID", &RelativeLayout__ALIGN_BOTTOM_25950_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_END_25961_ID", &RelativeLayout__ALIGN_END_25961_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_LEFT_25947_ID", &RelativeLayout__ALIGN_LEFT_25947_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_PARENT_BOTTOM_25954_ID", &RelativeLayout__ALIGN_PARENT_BOTTOM_25954_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_PARENT_END_25963_ID", &RelativeLayout__ALIGN_PARENT_END_25963_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_PARENT_LEFT_25951_ID", &RelativeLayout__ALIGN_PARENT_LEFT_25951_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_PARENT_RIGHT_25953_ID", &RelativeLayout__ALIGN_PARENT_RIGHT_25953_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_PARENT_START_25962_ID", &RelativeLayout__ALIGN_PARENT_START_25962_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_PARENT_TOP_25952_ID", &RelativeLayout__ALIGN_PARENT_TOP_25952_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_RIGHT_25949_ID", &RelativeLayout__ALIGN_RIGHT_25949_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_START_25960_ID", &RelativeLayout__ALIGN_START_25960_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("ALIGN_TOP_25948_ID", &RelativeLayout__ALIGN_TOP_25948_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("BELOW_25945_ID", &RelativeLayout__BELOW_25945_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("CENTER_HORIZONTAL_25956_ID", &RelativeLayout__CENTER_HORIZONTAL_25956_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("CENTER_IN_PARENT_25955_ID", &RelativeLayout__CENTER_IN_PARENT_25955_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("CENTER_VERTICAL_25957_ID", &RelativeLayout__CENTER_VERTICAL_25957_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("checkLayoutParams_25979_ID", &RelativeLayout__checkLayoutParams_25979_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("dispatchPopulateAccessibilityEvent_25981_ID", &RelativeLayout__dispatchPopulateAccessibilityEvent_25981_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("END_OF_25959_ID", &RelativeLayout__END_OF_25959_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("generateDefaultLayoutParams_25978_ID", &RelativeLayout__generateDefaultLayoutParams_25978_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("generateLayoutParams_25977_ID", &RelativeLayout__generateLayoutParams_25977_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("generateLayoutParams_25980_ID", &RelativeLayout__generateLayoutParams_25980_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getBaseline_25973_ID", &RelativeLayout__getBaseline_25973_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getGravity_25969_ID", &RelativeLayout__getGravity_25969_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("LEFT_OF_25942_ID", &RelativeLayout__LEFT_OF_25942_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_25982_ID", &RelativeLayout__onInitializeAccessibilityEvent_25982_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_25983_ID", &RelativeLayout__onInitializeAccessibilityNodeInfo_25983_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onLayout_25976_ID", &RelativeLayout__onLayout_25976_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onMeasure_25975_ID", &RelativeLayout__onMeasure_25975_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("RelativeLayout_25964_ID_c", &RelativeLayout__RelativeLayout_25964_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("RelativeLayout_25965_ID_c", &RelativeLayout__RelativeLayout_25965_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("RelativeLayout_25966_ID_c", &RelativeLayout__RelativeLayout_25966_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestLayout_25974_ID", &RelativeLayout__requestLayout_25974_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("RIGHT_OF_25943_ID", &RelativeLayout__RIGHT_OF_25943_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("setGravity_25970_ID", &RelativeLayout__setGravity_25970_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHorizontalGravity_25971_ID", &RelativeLayout__setHorizontalGravity_25971_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setIgnoreGravity_25968_ID", &RelativeLayout__setIgnoreGravity_25968_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setVerticalGravity_25972_ID", &RelativeLayout__setVerticalGravity_25972_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("shouldDelayChildPressedState_25967_ID", &RelativeLayout__shouldDelayChildPressedState_25967_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("START_OF_25958_ID", &RelativeLayout__START_OF_25958_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("TRUE_25941_ID", &RelativeLayout__TRUE_25941_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()));

    type->SetFunctions(51,
        ::uNewFunctionVoid("_Init", RelativeLayout___Init_4, 0, true),
        ::uNewFunction("checkLayoutParams_IMPL_25979", RelativeLayout__checkLayoutParams_IMPL_25979, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("dispatchPopulateAccessibilityEvent_IMPL_25981", RelativeLayout__dispatchPopulateAccessibilityEvent_IMPL_25981, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("generateDefaultLayoutParams_IMPL_25978", RelativeLayout__generateDefaultLayoutParams_IMPL_25978, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("generateLayoutParams", RelativeLayout__generateLayoutParams_2, 0, false, ::app::Android::android::widget::RelativeLayoutDLRLayoutParams__typeof(), ::app::Android::android::util::AttributeSet__typeof()),
        ::uNewFunction("generateLayoutParams_IMPL_25977", RelativeLayout__generateLayoutParams_IMPL_25977, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("generateLayoutParams_IMPL_25980", RelativeLayout__generateLayoutParams_IMPL_25980, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("get_ABOVE", RelativeLayout__get_ABOVE, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_BASELINE", RelativeLayout__get_ALIGN_BASELINE, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_BOTTOM", RelativeLayout__get_ALIGN_BOTTOM, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_END", RelativeLayout__get_ALIGN_END, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_LEFT", RelativeLayout__get_ALIGN_LEFT, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_PARENT_BOTTOM", RelativeLayout__get_ALIGN_PARENT_BOTTOM, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_PARENT_END", RelativeLayout__get_ALIGN_PARENT_END, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_PARENT_LEFT", RelativeLayout__get_ALIGN_PARENT_LEFT, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_PARENT_RIGHT", RelativeLayout__get_ALIGN_PARENT_RIGHT, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_PARENT_START", RelativeLayout__get_ALIGN_PARENT_START, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_PARENT_TOP", RelativeLayout__get_ALIGN_PARENT_TOP, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_RIGHT", RelativeLayout__get_ALIGN_RIGHT, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_START", RelativeLayout__get_ALIGN_START, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ALIGN_TOP", RelativeLayout__get_ALIGN_TOP, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_BELOW", RelativeLayout__get_BELOW, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_CENTER_HORIZONTAL", RelativeLayout__get_CENTER_HORIZONTAL, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_CENTER_IN_PARENT", RelativeLayout__get_CENTER_IN_PARENT, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_CENTER_VERTICAL", RelativeLayout__get_CENTER_VERTICAL, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_END_OF", RelativeLayout__get_END_OF, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_LEFT_OF", RelativeLayout__get_LEFT_OF, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_RIGHT_OF", RelativeLayout__get_RIGHT_OF, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_START_OF", RelativeLayout__get_START_OF, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_TRUE", RelativeLayout__get_TRUE, 0, true, ::app::Uno::Int__typeof()),
        ::uNewFunction("getBaseline_IMPL_25973", RelativeLayout__getBaseline_IMPL_25973, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getGravity", RelativeLayout__getGravity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getGravity_IMPL_25969", RelativeLayout__getGravity_IMPL_25969, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", RelativeLayout__New_10, 0, true, RelativeLayout__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Android::android::util::AttributeSet__typeof()),
        ::uNewFunction(".ctor", RelativeLayout__New_11, 0, true, RelativeLayout__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Android::android::util::AttributeSet__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", RelativeLayout__New_12, 0, true, RelativeLayout__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", RelativeLayout__New_9, 0, true, RelativeLayout__typeof(), ::app::Android::android::content::Context__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_25982", RelativeLayout__onInitializeAccessibilityEvent_IMPL_25982, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_25983", RelativeLayout__onInitializeAccessibilityNodeInfo_IMPL_25983, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onLayout_IMPL_25976", RelativeLayout__onLayout_IMPL_25976, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onMeasure_IMPL_25975", RelativeLayout__onMeasure_IMPL_25975, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("requestLayout_IMPL_25974", RelativeLayout__requestLayout_IMPL_25974, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("setGravity", RelativeLayout__setGravity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setGravity_IMPL_25970", RelativeLayout__setGravity_IMPL_25970, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setHorizontalGravity", RelativeLayout__setHorizontalGravity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setHorizontalGravity_IMPL_25971", RelativeLayout__setHorizontalGravity_IMPL_25971, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setIgnoreGravity", RelativeLayout__setIgnoreGravity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setIgnoreGravity_IMPL_25968", RelativeLayout__setIgnoreGravity_IMPL_25968, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setVerticalGravity", RelativeLayout__setVerticalGravity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setVerticalGravity_IMPL_25972", RelativeLayout__setVerticalGravity_IMPL_25972, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("shouldDelayChildPressedState_IMPL_25967", RelativeLayout__shouldDelayChildPressedState_IMPL_25967, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void RelativeLayout___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::RelativeLayout___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::RelativeLayout___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/RelativeLayout"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::RelativeLayout___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.RelativeLayout'", 53);; }
}

void RelativeLayout___ObjInit_12(RelativeLayout* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::view::ViewGroup___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__RelativeLayout_25964_ID_c,::app::Android::android::widget::RelativeLayout___javaClass_4,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.<init> could not be cached",79);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__RelativeLayout_25964_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void RelativeLayout___ObjInit_13(RelativeLayout* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    ::app::Android::android::view::ViewGroup___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__RelativeLayout_25965_ID_c,::app::Android::android::widget::RelativeLayout___javaClass_4,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.<init> could not be cached",79);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__RelativeLayout_25965_ID_c, _obArg0, _obArg1);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void RelativeLayout___ObjInit_14(RelativeLayout* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    ::app::Android::android::view::ViewGroup___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__RelativeLayout_25966_ID_c,::app::Android::android::widget::RelativeLayout___javaClass_4,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.<init> could not be cached",79);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__RelativeLayout_25966_ID_c, _obArg0, _obArg1, ((jint)arg2));;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void RelativeLayout___ObjInit_15(RelativeLayout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::ViewGroup___ObjInit_11(__this, obj, utype, hasFallbackClass, resolveType);
}

bool RelativeLayout__checkLayoutParams(RelativeLayout* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0)
{
    return RelativeLayout__checkLayoutParams_IMPL_25979(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool RelativeLayout__checkLayoutParams_IMPL_25979(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__checkLayoutParams_25979_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"checkLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Z",GetMethodID,"Id for fallback method android.widget.RelativeLayout.checkLayoutParams could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__checkLayoutParams_25979_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::RelativeLayout__checkLayoutParams_25979_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool RelativeLayout__dispatchPopulateAccessibilityEvent(RelativeLayout* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    return RelativeLayout__dispatchPopulateAccessibilityEvent_IMPL_25981(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool RelativeLayout__dispatchPopulateAccessibilityEvent_IMPL_25981(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__dispatchPopulateAccessibilityEvent_25981_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"dispatchPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)Z",GetMethodID,"Id for fallback method android.widget.RelativeLayout.dispatchPopulateAccessibilityEvent could not be cached",107);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__dispatchPopulateAccessibilityEvent_25981_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::RelativeLayout__dispatchPopulateAccessibilityEvent_25981_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::ViewGroupDLRLayoutParams* RelativeLayout__generateDefaultLayoutParams(RelativeLayout* __this)
{
    return ::uCast< ::app::Android::android::view::ViewGroupDLRLayoutParams*>(RelativeLayout__generateDefaultLayoutParams_IMPL_25978(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::view::ViewGroupDLRLayoutParams__typeof());
}

::uObject* RelativeLayout__generateDefaultLayoutParams_IMPL_25978(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__generateDefaultLayoutParams_25978_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"generateDefaultLayoutParams","()Landroid/view/ViewGroup$LayoutParams;",GetMethodID,"Id for fallback method android.widget.RelativeLayout.generateDefaultLayoutParams could not be cached",100);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__generateDefaultLayoutParams_25978_ID),result,::app::Android::android::view::ViewGroupDLRLayoutParams__typeof(),::app::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::RelativeLayout__generateDefaultLayoutParams_25978_ID),result,::app::Android::android::view::ViewGroupDLRLayoutParams__typeof(),::app::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::ViewGroupDLRLayoutParams* RelativeLayout__generateLayoutParams_1(RelativeLayout* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0)
{
    return ::uCast< ::app::Android::android::view::ViewGroupDLRLayoutParams*>(RelativeLayout__generateLayoutParams_IMPL_25980(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::android::view::ViewGroupDLRLayoutParams__typeof());
}

::app::Android::android::widget::RelativeLayoutDLRLayoutParams* RelativeLayout__generateLayoutParams_2(RelativeLayout* __this, ::uObject* arg0)
{
    return ::uCast< ::app::Android::android::widget::RelativeLayoutDLRLayoutParams*>(RelativeLayout__generateLayoutParams_IMPL_25977(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::android::widget::RelativeLayoutDLRLayoutParams__typeof());
}

::uObject* RelativeLayout__generateLayoutParams_IMPL_25977(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__generateLayoutParams_25977_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;",GetMethodID,"Id for fallback method android.widget.RelativeLayout.generateLayoutParams could not be cached",93);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__generateLayoutParams_25977_ID, _obArg2),result,::app::Android::android::widget::RelativeLayoutDLRLayoutParams__typeof(),::app::Android::android::widget::RelativeLayoutDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::RelativeLayout__generateLayoutParams_25977_ID, _obArg2),result,::app::Android::android::widget::RelativeLayoutDLRLayoutParams__typeof(),::app::Android::android::widget::RelativeLayoutDLRLayoutParams*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* RelativeLayout__generateLayoutParams_IMPL_25980(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__generateLayoutParams_25980_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/view/ViewGroup$LayoutParams;",GetMethodID,"Id for fallback method android.widget.RelativeLayout.generateLayoutParams could not be cached",93);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__generateLayoutParams_25980_ID, _obArg2),result,::app::Android::android::view::ViewGroupDLRLayoutParams__typeof(),::app::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::RelativeLayout__generateLayoutParams_25980_ID, _obArg2),result,::app::Android::android::view::ViewGroupDLRLayoutParams__typeof(),::app::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int RelativeLayout__get_ABOVE(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ABOVE_25944_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ABOVE_25944_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ABOVE","I",GetStaticFieldID,"Id for field RelativeLayout.ABOVE could not be cached",53);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ABOVE_25944_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_BASELINE(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_BASELINE_25946_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_BASELINE_25946_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_BASELINE","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_BASELINE could not be cached",62);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_BASELINE_25946_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_BOTTOM(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_BOTTOM_25950_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_BOTTOM_25950_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_BOTTOM","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_BOTTOM could not be cached",60);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_BOTTOM_25950_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_END(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_END_25961_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_END_25961_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_END","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_END could not be cached",57);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_END_25961_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_LEFT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_LEFT_25947_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_LEFT_25947_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_LEFT","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_LEFT could not be cached",58);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_LEFT_25947_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_PARENT_BOTTOM(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_BOTTOM_25954_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_BOTTOM_25954_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_PARENT_BOTTOM","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_PARENT_BOTTOM could not be cached",67);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_BOTTOM_25954_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_PARENT_END(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_END_25963_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_END_25963_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_PARENT_END","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_PARENT_END could not be cached",64);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_END_25963_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_PARENT_LEFT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_LEFT_25951_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_LEFT_25951_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_PARENT_LEFT","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_PARENT_LEFT could not be cached",65);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_LEFT_25951_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_PARENT_RIGHT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_RIGHT_25953_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_RIGHT_25953_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_PARENT_RIGHT","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_PARENT_RIGHT could not be cached",66);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_RIGHT_25953_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_PARENT_START(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_START_25962_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_START_25962_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_PARENT_START","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_PARENT_START could not be cached",66);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_START_25962_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_PARENT_TOP(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_TOP_25952_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_TOP_25952_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_PARENT_TOP","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_PARENT_TOP could not be cached",64);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_PARENT_TOP_25952_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_RIGHT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_RIGHT_25949_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_RIGHT_25949_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_RIGHT","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_RIGHT could not be cached",59);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_RIGHT_25949_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_START(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_START_25960_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_START_25960_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_START","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_START could not be cached",59);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_START_25960_ID));;
    return result;
}

int RelativeLayout__get_ALIGN_TOP(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__ALIGN_TOP_25948_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__ALIGN_TOP_25948_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"ALIGN_TOP","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_TOP could not be cached",57);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__ALIGN_TOP_25948_ID));;
    return result;
}

int RelativeLayout__get_BELOW(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__BELOW_25945_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__BELOW_25945_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"BELOW","I",GetStaticFieldID,"Id for field RelativeLayout.BELOW could not be cached",53);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__BELOW_25945_ID));;
    return result;
}

int RelativeLayout__get_CENTER_HORIZONTAL(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__CENTER_HORIZONTAL_25956_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__CENTER_HORIZONTAL_25956_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"CENTER_HORIZONTAL","I",GetStaticFieldID,"Id for field RelativeLayout.CENTER_HORIZONTAL could not be cached",65);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__CENTER_HORIZONTAL_25956_ID));;
    return result;
}

int RelativeLayout__get_CENTER_IN_PARENT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__CENTER_IN_PARENT_25955_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__CENTER_IN_PARENT_25955_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"CENTER_IN_PARENT","I",GetStaticFieldID,"Id for field RelativeLayout.CENTER_IN_PARENT could not be cached",64);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__CENTER_IN_PARENT_25955_ID));;
    return result;
}

int RelativeLayout__get_CENTER_VERTICAL(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__CENTER_VERTICAL_25957_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__CENTER_VERTICAL_25957_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"CENTER_VERTICAL","I",GetStaticFieldID,"Id for field RelativeLayout.CENTER_VERTICAL could not be cached",63);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__CENTER_VERTICAL_25957_ID));;
    return result;
}

int RelativeLayout__get_END_OF(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__END_OF_25959_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__END_OF_25959_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"END_OF","I",GetStaticFieldID,"Id for field RelativeLayout.END_OF could not be cached",54);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__END_OF_25959_ID));;
    return result;
}

int RelativeLayout__get_LEFT_OF(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__LEFT_OF_25942_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__LEFT_OF_25942_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"LEFT_OF","I",GetStaticFieldID,"Id for field RelativeLayout.LEFT_OF could not be cached",55);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__LEFT_OF_25942_ID));;
    return result;
}

int RelativeLayout__get_RIGHT_OF(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__RIGHT_OF_25943_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__RIGHT_OF_25943_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"RIGHT_OF","I",GetStaticFieldID,"Id for field RelativeLayout.RIGHT_OF could not be cached",56);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__RIGHT_OF_25943_ID));;
    return result;
}

int RelativeLayout__get_START_OF(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__START_OF_25958_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__START_OF_25958_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"START_OF","I",GetStaticFieldID,"Id for field RelativeLayout.START_OF could not be cached",56);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__START_OF_25958_ID));;
    return result;
}

int RelativeLayout__get_TRUE(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::RelativeLayout__TRUE_25941_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::RelativeLayout__TRUE_25941_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"TRUE","I",GetStaticFieldID,"Id for field RelativeLayout.TRUE could not be cached",52);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__TRUE_25941_ID));;
    return result;
}

int RelativeLayout__getBaseline(RelativeLayout* __this)
{
    return RelativeLayout__getBaseline_IMPL_25973(NULL, __this->_subclassed, __this->_javaObject);
}

int RelativeLayout__getBaseline_IMPL_25973(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__getBaseline_25973_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"getBaseline","()I",GetMethodID,"Id for fallback method android.widget.RelativeLayout.getBaseline could not be cached",84);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__getBaseline_25973_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::RelativeLayout__getBaseline_25973_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int RelativeLayout__getGravity(RelativeLayout* __this)
{
    return RelativeLayout__getGravity_IMPL_25969(NULL, __this->_subclassed, __this->_javaObject);
}

int RelativeLayout__getGravity_IMPL_25969(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__getGravity_25969_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"getGravity","()I",GetMethodID,"Id for fallback method android.widget.RelativeLayout.getGravity could not be cached",83);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__getGravity_25969_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::RelativeLayout__getGravity_25969_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

RelativeLayout* RelativeLayout__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    RelativeLayout* inst = (RelativeLayout*)::uAllocObject(sizeof(RelativeLayout), RelativeLayout__typeof());
    inst->_ObjInit_13(arg0, arg1);
    return inst;
}

RelativeLayout* RelativeLayout__New_11(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    RelativeLayout* inst = (RelativeLayout*)::uAllocObject(sizeof(RelativeLayout), RelativeLayout__typeof());
    inst->_ObjInit_14(arg0, arg1, arg2);
    return inst;
}

RelativeLayout* RelativeLayout__New_12(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    RelativeLayout* inst = (RelativeLayout*)::uAllocObject(sizeof(RelativeLayout), RelativeLayout__typeof());
    inst->_ObjInit_15(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

RelativeLayout* RelativeLayout__New_9(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    RelativeLayout* inst = (RelativeLayout*)::uAllocObject(sizeof(RelativeLayout), RelativeLayout__typeof());
    inst->_ObjInit_12(arg0);
    return inst;
}

void RelativeLayout__onInitializeAccessibilityEvent(RelativeLayout* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    RelativeLayout__onInitializeAccessibilityEvent_IMPL_25982(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void RelativeLayout__onInitializeAccessibilityEvent_IMPL_25982(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__onInitializeAccessibilityEvent_25982_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.onInitializeAccessibilityEvent could not be cached",103);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__onInitializeAccessibilityEvent_25982_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout__onInitializeAccessibilityEvent_25982_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void RelativeLayout__onInitializeAccessibilityNodeInfo(RelativeLayout* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    RelativeLayout__onInitializeAccessibilityNodeInfo_IMPL_25983(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void RelativeLayout__onInitializeAccessibilityNodeInfo_IMPL_25983(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__onInitializeAccessibilityNodeInfo_25983_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.onInitializeAccessibilityNodeInfo could not be cached",106);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__onInitializeAccessibilityNodeInfo_25983_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout__onInitializeAccessibilityNodeInfo_25983_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void RelativeLayout__onLayout(RelativeLayout* __this, bool arg0, int arg1, int arg2, int arg3, int arg4)
{
    RelativeLayout__onLayout_IMPL_25976(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3, arg4);
}

void RelativeLayout__onLayout_IMPL_25976(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__onLayout_25976_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"onLayout","(ZIIII)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.onLayout could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__onLayout_25976_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout__onLayout_25976_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void RelativeLayout__onMeasure(RelativeLayout* __this, int arg0, int arg1)
{
    RelativeLayout__onMeasure_IMPL_25975(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void RelativeLayout__onMeasure_IMPL_25975(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__onMeasure_25975_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.onMeasure could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__onMeasure_25975_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout__onMeasure_25975_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void RelativeLayout__requestLayout(RelativeLayout* __this)
{
    RelativeLayout__requestLayout_IMPL_25974(NULL, __this->_subclassed, __this->_javaObject);
}

void RelativeLayout__requestLayout_IMPL_25974(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__requestLayout_25974_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"requestLayout","()V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.requestLayout could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__requestLayout_25974_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout__requestLayout_25974_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void RelativeLayout__setGravity(RelativeLayout* __this, int arg0)
{
    RelativeLayout__setGravity_IMPL_25970(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void RelativeLayout__setGravity_IMPL_25970(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__setGravity_25970_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"setGravity","(I)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.setGravity could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__setGravity_25970_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout__setGravity_25970_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void RelativeLayout__setHorizontalGravity(RelativeLayout* __this, int arg0)
{
    RelativeLayout__setHorizontalGravity_IMPL_25971(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void RelativeLayout__setHorizontalGravity_IMPL_25971(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__setHorizontalGravity_25971_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"setHorizontalGravity","(I)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.setHorizontalGravity could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__setHorizontalGravity_25971_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout__setHorizontalGravity_25971_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void RelativeLayout__setIgnoreGravity(RelativeLayout* __this, int arg0)
{
    RelativeLayout__setIgnoreGravity_IMPL_25968(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void RelativeLayout__setIgnoreGravity_IMPL_25968(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__setIgnoreGravity_25968_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"setIgnoreGravity","(I)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.setIgnoreGravity could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__setIgnoreGravity_25968_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout__setIgnoreGravity_25968_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void RelativeLayout__setVerticalGravity(RelativeLayout* __this, int arg0)
{
    RelativeLayout__setVerticalGravity_IMPL_25972(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void RelativeLayout__setVerticalGravity_IMPL_25972(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__setVerticalGravity_25972_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"setVerticalGravity","(I)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.setVerticalGravity could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__setVerticalGravity_25972_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::RelativeLayout__setVerticalGravity_25972_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool RelativeLayout__shouldDelayChildPressedState(RelativeLayout* __this)
{
    return RelativeLayout__shouldDelayChildPressedState_IMPL_25967(NULL, __this->_subclassed, __this->_javaObject);
}

bool RelativeLayout__shouldDelayChildPressedState_IMPL_25967(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__shouldDelayChildPressedState_25967_ID,::app::Android::android::widget::RelativeLayout___javaClass_4,"shouldDelayChildPressedState","()Z",GetMethodID,"Id for fallback method android.widget.RelativeLayout.shouldDelayChildPressedState could not be cached",101);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__shouldDelayChildPressedState_25967_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::RelativeLayout__shouldDelayChildPressedState_25967_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass RelativeLayoutDLRLayoutParams___javaClass_4;
jmethodID RelativeLayoutDLRLayoutParams__RelativeLayoutDLRLayoutParams_25931_ID_c;

RelativeLayoutDLRLayoutParams__uType* RelativeLayoutDLRLayoutParams__typeof()
{
    static ::uStaticStrong<RelativeLayoutDLRLayoutParams__uType*> type;
    if (type != NULL) return type;

    type = (RelativeLayoutDLRLayoutParams__uType*)::uAllocClassType(sizeof(RelativeLayoutDLRLayoutParams__uType), "Android.android.widget.RelativeLayoutDLRLayoutParams", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroupDLRMarginLayoutParams__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(RelativeLayoutDLRLayoutParams__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(RelativeLayoutDLRLayoutParams__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &RelativeLayoutDLRLayoutParams___javaClass_4, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("RelativeLayoutDLRLayoutParams_25931_ID_c", &RelativeLayoutDLRLayoutParams__RelativeLayoutDLRLayoutParams_25931_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", RelativeLayoutDLRLayoutParams___Init_4, 0, true),
        ::uNewFunction(".ctor", RelativeLayoutDLRLayoutParams__New_15, 0, true, RelativeLayoutDLRLayoutParams__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void RelativeLayoutDLRLayoutParams___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::RelativeLayoutDLRLayoutParams___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::RelativeLayoutDLRLayoutParams___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/RelativeLayout$LayoutParams"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::RelativeLayoutDLRLayoutParams___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.RelativeLayout$LayoutParams'", 66);; }
}

void RelativeLayoutDLRLayoutParams___ObjInit_14(RelativeLayoutDLRLayoutParams* __this, int arg0, int arg1)
{
    ::app::Android::android::view::ViewGroupDLRMarginLayoutParams___ObjInit_10(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::RelativeLayoutDLRLayoutParams___javaClass_4,::app::Android::android::widget::RelativeLayoutDLRLayoutParams___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayoutDLRLayoutParams__RelativeLayoutDLRLayoutParams_25931_ID_c,::app::Android::android::widget::RelativeLayoutDLRLayoutParams___javaClass_4,"<init>","(II)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout$LayoutParams.<init> could not be cached",92);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::RelativeLayoutDLRLayoutParams___javaClass_4, ::app::Android::android::widget::RelativeLayoutDLRLayoutParams__RelativeLayoutDLRLayoutParams_25931_ID_c, ((jint)arg0), ((jint)arg1));;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

RelativeLayoutDLRLayoutParams* RelativeLayoutDLRLayoutParams__New_15(::uStatic* __this, int arg0, int arg1)
{
    RelativeLayoutDLRLayoutParams* inst = (RelativeLayoutDLRLayoutParams*)::uAllocObject(sizeof(RelativeLayoutDLRLayoutParams), RelativeLayoutDLRLayoutParams__typeof());
    inst->_ObjInit_14(arg0, arg1);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ScrollView___javaClass_5;
jmethodID ScrollView__addView_26070_ID;
jmethodID ScrollView__addView_26071_ID;
jmethodID ScrollView__addView_26072_ID;
jmethodID ScrollView__addView_26073_ID;
jmethodID ScrollView__arrowScroll_26091_ID;
jmethodID ScrollView__computeScroll_26098_ID;
jmethodID ScrollView__computeScrollDeltaToGetChildRectOnScreen_26099_ID;
jmethodID ScrollView__computeVerticalScrollOffset_26095_ID;
jmethodID ScrollView__computeVerticalScrollRange_26094_ID;
jmethodID ScrollView__dispatchKeyEvent_26079_ID;
jmethodID ScrollView__executeKeyEvent_26080_ID;
jmethodID ScrollView__fling_26107_ID;
jmethodID ScrollView__fullScroll_26090_ID;
jmethodID ScrollView__getBottomFadingEdgeStrength_26068_ID;
jmethodID ScrollView__getMaxScrollAmount_26069_ID;
jmethodID ScrollView__getTopFadingEdgeStrength_26067_ID;
jmethodID ScrollView__isFillViewport_26074_ID;
jmethodID ScrollView__isSmoothScrollingEnabled_26076_ID;
jmethodID ScrollView__j_draw_26110_ID;
jmethodID ScrollView__measureChild_26096_ID;
jmethodID ScrollView__measureChildWithMargins_26097_ID;
jmethodID ScrollView__onDetachedFromWindow_26104_ID;
jmethodID ScrollView__onGenericMotionEvent_26084_ID;
jmethodID ScrollView__onInitializeAccessibilityEvent_26088_ID;
jmethodID ScrollView__onInitializeAccessibilityNodeInfo_26087_ID;
jmethodID ScrollView__onInterceptTouchEvent_26082_ID;
jmethodID ScrollView__onLayout_26105_ID;
jmethodID ScrollView__onMeasure_26078_ID;
jmethodID ScrollView__onOverScrolled_26085_ID;
jmethodID ScrollView__onRequestFocusInDescendants_26101_ID;
jmethodID ScrollView__onRestoreInstanceState_26111_ID;
jmethodID ScrollView__onSaveInstanceState_26112_ID;
jmethodID ScrollView__onSizeChanged_26106_ID;
jmethodID ScrollView__onTouchEvent_26083_ID;
jmethodID ScrollView__pageScroll_26089_ID;
jmethodID ScrollView__performAccessibilityAction_26086_ID;
jmethodID ScrollView__requestChildFocus_26100_ID;
jmethodID ScrollView__requestChildRectangleOnScreen_26102_ID;
jmethodID ScrollView__requestDisallowInterceptTouchEvent_26081_ID;
jmethodID ScrollView__requestLayout_26103_ID;
jmethodID ScrollView__scrollTo_26108_ID;
jmethodID ScrollView__ScrollView_26063_ID_c;
jmethodID ScrollView__ScrollView_26064_ID_c;
jmethodID ScrollView__ScrollView_26065_ID_c;
jmethodID ScrollView__setFillViewport_26075_ID;
jmethodID ScrollView__setOverScrollMode_26109_ID;
jmethodID ScrollView__setSmoothScrollingEnabled_26077_ID;
jmethodID ScrollView__shouldDelayChildPressedState_26066_ID;
jmethodID ScrollView__smoothScrollBy_26092_ID;
jmethodID ScrollView__smoothScrollTo_26093_ID;

ScrollView__uType* ScrollView__typeof()
{
    static ::uStaticStrong<ScrollView__uType*> type;
    if (type != NULL) return type;

    type = (ScrollView__uType*)::uAllocClassType(sizeof(ScrollView__uType), "Android.android.widget.ScrollView", false, 3, 0, 0);

    type->SetBaseType(::app::Android::android::widget::FrameLayout__typeof());
    type->__fp_addView = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*))ScrollView__addView;
    type->__fp_addView_1 = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, int))ScrollView__addView_1;
    type->__fp_addView_3 = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, int, ::app::Android::android::view::ViewGroupDLRLayoutParams*))ScrollView__addView_3;
    type->__fp_addView_4 = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, ::app::Android::android::view::ViewGroupDLRLayoutParams*))ScrollView__addView_4;
    type->__fp_computeScroll = (void(*)(::app::Android::android::view::View*))ScrollView__computeScroll;
    type->__fp_computeVerticalScrollOffset = (int(*)(::app::Android::android::view::View*))ScrollView__computeVerticalScrollOffset;
    type->__fp_computeVerticalScrollRange = (int(*)(::app::Android::android::view::View*))ScrollView__computeVerticalScrollRange;
    type->__fp_dispatchKeyEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::KeyEvent*))ScrollView__dispatchKeyEvent;
    type->__fp_getBottomFadingEdgeStrength = (float(*)(::app::Android::android::view::View*))ScrollView__getBottomFadingEdgeStrength;
    type->__fp_getTopFadingEdgeStrength = (float(*)(::app::Android::android::view::View*))ScrollView__getTopFadingEdgeStrength;
    type->__fp_j_draw = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::Canvas*))ScrollView__j_draw;
    type->__fp_measureChild = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, int, int))ScrollView__measureChild;
    type->__fp_measureChildWithMargins = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, int, int, int, int))ScrollView__measureChildWithMargins;
    type->__fp_onDetachedFromWindow = (void(*)(::app::Android::android::view::View*))ScrollView__onDetachedFromWindow;
    type->__fp_onGenericMotionEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))ScrollView__onGenericMotionEvent;
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))ScrollView__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))ScrollView__onInitializeAccessibilityNodeInfo;
    type->__fp_onInterceptTouchEvent = (bool(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::MotionEvent*))ScrollView__onInterceptTouchEvent;
    type->__fp_onLayout = (void(*)(::app::Android::android::view::View*, bool, int, int, int, int))ScrollView__onLayout;
    type->__fp_onMeasure = (void(*)(::app::Android::android::view::View*, int, int))ScrollView__onMeasure;
    type->__fp_onOverScrolled = (void(*)(::app::Android::android::view::View*, int, int, bool, bool))ScrollView__onOverScrolled;
    type->__fp_onRequestFocusInDescendants = (bool(*)(::app::Android::android::view::ViewGroup*, int, ::app::Android::android::graphics::Rect*))ScrollView__onRequestFocusInDescendants;
    type->__fp_onRestoreInstanceState = (void(*)(::app::Android::android::view::View*, ::uObject*))ScrollView__onRestoreInstanceState;
    type->__fp_onSaveInstanceState = (::uObject*(*)(::app::Android::android::view::View*))ScrollView__onSaveInstanceState;
    type->__fp_onSizeChanged = (void(*)(::app::Android::android::view::View*, int, int, int, int))ScrollView__onSizeChanged;
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))ScrollView__onTouchEvent;
    type->__fp_performAccessibilityAction = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::os::Bundle*))ScrollView__performAccessibilityAction;
    type->__fp_requestChildFocus = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, ::app::Android::android::view::View*))ScrollView__requestChildFocus;
    type->__fp_requestChildRectangleOnScreen = (bool(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*, bool))ScrollView__requestChildRectangleOnScreen;
    type->__fp_requestDisallowInterceptTouchEvent = (void(*)(::app::Android::android::view::ViewGroup*, bool))ScrollView__requestDisallowInterceptTouchEvent;
    type->__fp_requestLayout = (void(*)(::app::Android::android::view::View*))ScrollView__requestLayout;
    type->__fp_scrollTo = (void(*)(::app::Android::android::view::View*, int, int))ScrollView__scrollTo;
    type->__fp_setOverScrollMode = (void(*)(::app::Android::android::view::View*, int))ScrollView__setOverScrollMode;
    type->__fp_shouldDelayChildPressedState = (bool(*)(::app::Android::android::view::ViewGroup*))ScrollView__shouldDelayChildPressedState;
    type->__interface_2.__fp_requestDisallowInterceptTouchEvent = (void(*)(void*, bool))ScrollView__requestDisallowInterceptTouchEvent;
    type->__interface_2.__fp_requestChildRectangleOnScreen = (bool(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*, bool))ScrollView__requestChildRectangleOnScreen;
    type->__interface_2.__fp_requestChildFocus = (void(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::View*))ScrollView__requestChildFocus;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ScrollView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ScrollView__uType, __interface_1),
        ::app::Android::android::view::ViewParent__typeof(), offsetof(ScrollView__uType, __interface_2));

    type->SetFields(51,
        ::uNewField("_javaClass", &ScrollView___javaClass_5, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("addView_26070_ID", &ScrollView__addView_26070_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addView_26071_ID", &ScrollView__addView_26071_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addView_26072_ID", &ScrollView__addView_26072_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("addView_26073_ID", &ScrollView__addView_26073_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("arrowScroll_26091_ID", &ScrollView__arrowScroll_26091_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeScroll_26098_ID", &ScrollView__computeScroll_26098_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeScrollDeltaToGetChildRectOnScreen_26099_ID", &ScrollView__computeScrollDeltaToGetChildRectOnScreen_26099_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeVerticalScrollOffset_26095_ID", &ScrollView__computeVerticalScrollOffset_26095_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeVerticalScrollRange_26094_ID", &ScrollView__computeVerticalScrollRange_26094_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("dispatchKeyEvent_26079_ID", &ScrollView__dispatchKeyEvent_26079_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("executeKeyEvent_26080_ID", &ScrollView__executeKeyEvent_26080_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("fling_26107_ID", &ScrollView__fling_26107_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("fullScroll_26090_ID", &ScrollView__fullScroll_26090_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getBottomFadingEdgeStrength_26068_ID", &ScrollView__getBottomFadingEdgeStrength_26068_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getMaxScrollAmount_26069_ID", &ScrollView__getMaxScrollAmount_26069_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getTopFadingEdgeStrength_26067_ID", &ScrollView__getTopFadingEdgeStrength_26067_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isFillViewport_26074_ID", &ScrollView__isFillViewport_26074_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isSmoothScrollingEnabled_26076_ID", &ScrollView__isSmoothScrollingEnabled_26076_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("j_draw_26110_ID", &ScrollView__j_draw_26110_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("measureChild_26096_ID", &ScrollView__measureChild_26096_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("measureChildWithMargins_26097_ID", &ScrollView__measureChildWithMargins_26097_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDetachedFromWindow_26104_ID", &ScrollView__onDetachedFromWindow_26104_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onGenericMotionEvent_26084_ID", &ScrollView__onGenericMotionEvent_26084_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_26088_ID", &ScrollView__onInitializeAccessibilityEvent_26088_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_26087_ID", &ScrollView__onInitializeAccessibilityNodeInfo_26087_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInterceptTouchEvent_26082_ID", &ScrollView__onInterceptTouchEvent_26082_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onLayout_26105_ID", &ScrollView__onLayout_26105_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onMeasure_26078_ID", &ScrollView__onMeasure_26078_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onOverScrolled_26085_ID", &ScrollView__onOverScrolled_26085_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onRequestFocusInDescendants_26101_ID", &ScrollView__onRequestFocusInDescendants_26101_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onRestoreInstanceState_26111_ID", &ScrollView__onRestoreInstanceState_26111_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onSaveInstanceState_26112_ID", &ScrollView__onSaveInstanceState_26112_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onSizeChanged_26106_ID", &ScrollView__onSizeChanged_26106_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onTouchEvent_26083_ID", &ScrollView__onTouchEvent_26083_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("pageScroll_26089_ID", &ScrollView__pageScroll_26089_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performAccessibilityAction_26086_ID", &ScrollView__performAccessibilityAction_26086_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestChildFocus_26100_ID", &ScrollView__requestChildFocus_26100_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestChildRectangleOnScreen_26102_ID", &ScrollView__requestChildRectangleOnScreen_26102_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestDisallowInterceptTouchEvent_26081_ID", &ScrollView__requestDisallowInterceptTouchEvent_26081_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("requestLayout_26103_ID", &ScrollView__requestLayout_26103_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("scrollTo_26108_ID", &ScrollView__scrollTo_26108_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("ScrollView_26063_ID_c", &ScrollView__ScrollView_26063_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("ScrollView_26064_ID_c", &ScrollView__ScrollView_26064_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("ScrollView_26065_ID_c", &ScrollView__ScrollView_26065_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setFillViewport_26075_ID", &ScrollView__setFillViewport_26075_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setOverScrollMode_26109_ID", &ScrollView__setOverScrollMode_26109_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setSmoothScrollingEnabled_26077_ID", &ScrollView__setSmoothScrollingEnabled_26077_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("shouldDelayChildPressedState_26066_ID", &ScrollView__shouldDelayChildPressedState_26066_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("smoothScrollBy_26092_ID", &ScrollView__smoothScrollBy_26092_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("smoothScrollTo_26093_ID", &ScrollView__smoothScrollTo_26093_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(65,
        ::uNewFunctionVoid("_Init", ScrollView___Init_5, 0, true),
        ::uNewFunctionVoid("addView_IMPL_26070", ScrollView__addView_IMPL_26070, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("addView_IMPL_26071", ScrollView__addView_IMPL_26071, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("addView_IMPL_26072", ScrollView__addView_IMPL_26072, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("addView_IMPL_26073", ScrollView__addView_IMPL_26073, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("arrowScroll", ScrollView__arrowScroll, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("arrowScroll_IMPL_26091", ScrollView__arrowScroll_IMPL_26091, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("computeScroll_IMPL_26098", ScrollView__computeScroll_IMPL_26098, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("computeScrollDeltaToGetChildRectOnScreen", ScrollView__computeScrollDeltaToGetChildRectOnScreen, 0, false, ::app::Uno::Int__typeof(), ::app::Android::android::graphics::Rect__typeof()),
        ::uNewFunction("computeScrollDeltaToGetChildRectOnScreen_IMPL_26099", ScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_26099, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("computeVerticalScrollOffset_IMPL_26095", ScrollView__computeVerticalScrollOffset_IMPL_26095, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("computeVerticalScrollRange_IMPL_26094", ScrollView__computeVerticalScrollRange_IMPL_26094, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("dispatchKeyEvent_IMPL_26079", ScrollView__dispatchKeyEvent_IMPL_26079, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("executeKeyEvent", ScrollView__executeKeyEvent, 0, false, ::app::Uno::Bool__typeof(), ::app::Android::android::view::KeyEvent__typeof()),
        ::uNewFunction("executeKeyEvent_IMPL_26080", ScrollView__executeKeyEvent_IMPL_26080, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("fling", ScrollView__fling, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("fling_IMPL_26107", ScrollView__fling_IMPL_26107, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("fullScroll", ScrollView__fullScroll, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("fullScroll_IMPL_26090", ScrollView__fullScroll_IMPL_26090, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getBottomFadingEdgeStrength_IMPL_26068", ScrollView__getBottomFadingEdgeStrength_IMPL_26068, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getMaxScrollAmount", ScrollView__getMaxScrollAmount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getMaxScrollAmount_IMPL_26069", ScrollView__getMaxScrollAmount_IMPL_26069, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getTopFadingEdgeStrength_IMPL_26067", ScrollView__getTopFadingEdgeStrength_IMPL_26067, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isFillViewport", ScrollView__isFillViewport, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isFillViewport_IMPL_26074", ScrollView__isFillViewport_IMPL_26074, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("isSmoothScrollingEnabled", ScrollView__isSmoothScrollingEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("isSmoothScrollingEnabled_IMPL_26076", ScrollView__isSmoothScrollingEnabled_IMPL_26076, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("j_draw_IMPL_26110", ScrollView__j_draw_IMPL_26110, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("measureChild_IMPL_26096", ScrollView__measureChild_IMPL_26096, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("measureChildWithMargins_IMPL_26097", ScrollView__measureChildWithMargins_IMPL_26097, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", ScrollView__New_13, 0, true, ScrollView__typeof(), ::app::Android::android::content::Context__typeof()),
        ::uNewFunction(".ctor", ScrollView__New_14, 0, true, ScrollView__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Android::android::util::AttributeSet__typeof()),
        ::uNewFunction(".ctor", ScrollView__New_15, 0, true, ScrollView__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Android::android::util::AttributeSet__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", ScrollView__New_16, 0, true, ScrollView__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("onDetachedFromWindow_IMPL_26104", ScrollView__onDetachedFromWindow_IMPL_26104, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("onGenericMotionEvent_IMPL_26084", ScrollView__onGenericMotionEvent_IMPL_26084, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_26088", ScrollView__onInitializeAccessibilityEvent_IMPL_26088, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_26087", ScrollView__onInitializeAccessibilityNodeInfo_IMPL_26087, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onInterceptTouchEvent_IMPL_26082", ScrollView__onInterceptTouchEvent_IMPL_26082, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onLayout_IMPL_26105", ScrollView__onLayout_IMPL_26105, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onMeasure_IMPL_26078", ScrollView__onMeasure_IMPL_26078, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onOverScrolled_IMPL_26085", ScrollView__onOverScrolled_IMPL_26085, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("onRequestFocusInDescendants_IMPL_26101", ScrollView__onRequestFocusInDescendants_IMPL_26101, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onRestoreInstanceState_IMPL_26111", ScrollView__onRestoreInstanceState_IMPL_26111, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onSaveInstanceState_IMPL_26112", ScrollView__onSaveInstanceState_IMPL_26112, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onSizeChanged_IMPL_26106", ScrollView__onSizeChanged_IMPL_26106, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("onTouchEvent_IMPL_26083", ScrollView__onTouchEvent_IMPL_26083, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("pageScroll", ScrollView__pageScroll, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("pageScroll_IMPL_26089", ScrollView__pageScroll_IMPL_26089, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("performAccessibilityAction_IMPL_26086", ScrollView__performAccessibilityAction_IMPL_26086, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("requestChildFocus_IMPL_26100", ScrollView__requestChildFocus_IMPL_26100, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("requestChildRectangleOnScreen_IMPL_26102", ScrollView__requestChildRectangleOnScreen_IMPL_26102, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("requestDisallowInterceptTouchEvent_IMPL_26081", ScrollView__requestDisallowInterceptTouchEvent_IMPL_26081, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("requestLayout_IMPL_26103", ScrollView__requestLayout_IMPL_26103, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("scrollTo_IMPL_26108", ScrollView__scrollTo_IMPL_26108, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setFillViewport", ScrollView__setFillViewport, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setFillViewport_IMPL_26075", ScrollView__setFillViewport_IMPL_26075, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setOverScrollMode_IMPL_26109", ScrollView__setOverScrollMode_IMPL_26109, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setSmoothScrollingEnabled", ScrollView__setSmoothScrollingEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setSmoothScrollingEnabled_IMPL_26077", ScrollView__setSmoothScrollingEnabled_IMPL_26077, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("shouldDelayChildPressedState_IMPL_26066", ScrollView__shouldDelayChildPressedState_IMPL_26066, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("smoothScrollBy", ScrollView__smoothScrollBy, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("smoothScrollBy_IMPL_26092", ScrollView__smoothScrollBy_IMPL_26092, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("smoothScrollTo", ScrollView__smoothScrollTo, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("smoothScrollTo_IMPL_26093", ScrollView__smoothScrollTo_IMPL_26093, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void ScrollView___Init_5(::uStatic* __this)
{
    if (::app::Android::android::widget::ScrollView___javaClass_5) { return; }
    INIT_JNI;
    ::app::Android::android::widget::ScrollView___javaClass_5 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/ScrollView"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::ScrollView___javaClass_5) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.ScrollView'", 49);; }
}

void ScrollView___ObjInit_16(ScrollView* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::widget::FrameLayout___ObjInit_15(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__ScrollView_26063_ID_c,::app::Android::android::widget::ScrollView___javaClass_5,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__ScrollView_26063_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void ScrollView___ObjInit_17(ScrollView* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    ::app::Android::android::widget::FrameLayout___ObjInit_15(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__ScrollView_26064_ID_c,::app::Android::android::widget::ScrollView___javaClass_5,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__ScrollView_26064_ID_c, _obArg0, _obArg1);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void ScrollView___ObjInit_18(ScrollView* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    ::app::Android::android::widget::FrameLayout___ObjInit_15(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__ScrollView_26065_ID_c,::app::Android::android::widget::ScrollView___javaClass_5,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.ScrollView.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__ScrollView_26065_ID_c, _obArg0, _obArg1, ((jint)arg2));;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void ScrollView___ObjInit_19(ScrollView* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::widget::FrameLayout___ObjInit_15(__this, obj, utype, hasFallbackClass, resolveType);
}

void ScrollView__addView(ScrollView* __this, ::app::Android::android::view::View* arg0)
{
    ScrollView__addView_IMPL_26070(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ScrollView__addView_1(ScrollView* __this, ::app::Android::android::view::View* arg0, int arg1)
{
    ScrollView__addView_IMPL_26071(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void ScrollView__addView_3(ScrollView* __this, ::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg2)
{
    ScrollView__addView_IMPL_26073(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, (::uObject*)arg2);
}

void ScrollView__addView_4(ScrollView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg1)
{
    ScrollView__addView_IMPL_26072(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void ScrollView__addView_IMPL_26070(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__addView_26070_ID,::app::Android::android::widget::ScrollView___javaClass_5,"addView","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.addView could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__addView_26070_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__addView_26070_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__addView_IMPL_26071(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__addView_26071_ID,::app::Android::android::widget::ScrollView___javaClass_5,"addView","(Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.widget.ScrollView.addView could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__addView_26071_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__addView_26071_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__addView_IMPL_26072(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__addView_26072_ID,::app::Android::android::widget::ScrollView___javaClass_5,"addView","(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.addView could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__addView_26072_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__addView_26072_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__addView_IMPL_26073(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__addView_26073_ID,::app::Android::android::widget::ScrollView___javaClass_5,"addView","(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.addView could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__addView_26073_ID, _obArg2, ((jint)arg3_), _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__addView_26073_ID, _obArg2, ((jint)arg3_), _obArg4);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool ScrollView__arrowScroll(ScrollView* __this, int arg0)
{
    return ScrollView__arrowScroll_IMPL_26091(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

bool ScrollView__arrowScroll_IMPL_26091(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__arrowScroll_26091_ID,::app::Android::android::widget::ScrollView___javaClass_5,"arrowScroll","(I)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.arrowScroll could not be cached",80);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__arrowScroll_26091_ID, ((jint)arg2_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__arrowScroll_26091_ID, ((jint)arg2_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ScrollView__computeScroll(ScrollView* __this)
{
    ScrollView__computeScroll_IMPL_26098(NULL, __this->_subclassed, __this->_javaObject);
}

void ScrollView__computeScroll_IMPL_26098(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__computeScroll_26098_ID,::app::Android::android::widget::ScrollView___javaClass_5,"computeScroll","()V",GetMethodID,"Id for fallback method android.widget.ScrollView.computeScroll could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__computeScroll_26098_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__computeScroll_26098_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int ScrollView__computeScrollDeltaToGetChildRectOnScreen(ScrollView* __this, ::app::Android::android::graphics::Rect* arg0)
{
    return ScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_26099(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int ScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_26099(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__computeScrollDeltaToGetChildRectOnScreen_26099_ID,::app::Android::android::widget::ScrollView___javaClass_5,"computeScrollDeltaToGetChildRectOnScreen","(Landroid/graphics/Rect;)I",GetMethodID,"Id for fallback method android.widget.ScrollView.computeScrollDeltaToGetChildRectOnScreen could not be cached",109);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__computeScrollDeltaToGetChildRectOnScreen_26099_ID, _obArg2));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::ScrollView__computeScrollDeltaToGetChildRectOnScreen_26099_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int ScrollView__computeVerticalScrollOffset(ScrollView* __this)
{
    return ScrollView__computeVerticalScrollOffset_IMPL_26095(NULL, __this->_subclassed, __this->_javaObject);
}

int ScrollView__computeVerticalScrollOffset_IMPL_26095(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__computeVerticalScrollOffset_26095_ID,::app::Android::android::widget::ScrollView___javaClass_5,"computeVerticalScrollOffset","()I",GetMethodID,"Id for fallback method android.widget.ScrollView.computeVerticalScrollOffset could not be cached",96);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__computeVerticalScrollOffset_26095_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::ScrollView__computeVerticalScrollOffset_26095_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int ScrollView__computeVerticalScrollRange(ScrollView* __this)
{
    return ScrollView__computeVerticalScrollRange_IMPL_26094(NULL, __this->_subclassed, __this->_javaObject);
}

int ScrollView__computeVerticalScrollRange_IMPL_26094(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__computeVerticalScrollRange_26094_ID,::app::Android::android::widget::ScrollView___javaClass_5,"computeVerticalScrollRange","()I",GetMethodID,"Id for fallback method android.widget.ScrollView.computeVerticalScrollRange could not be cached",95);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__computeVerticalScrollRange_26094_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::ScrollView__computeVerticalScrollRange_26094_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool ScrollView__dispatchKeyEvent(ScrollView* __this, ::app::Android::android::view::KeyEvent* arg0)
{
    return ScrollView__dispatchKeyEvent_IMPL_26079(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool ScrollView__dispatchKeyEvent_IMPL_26079(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__dispatchKeyEvent_26079_ID,::app::Android::android::widget::ScrollView___javaClass_5,"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.dispatchKeyEvent could not be cached",85);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__dispatchKeyEvent_26079_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__dispatchKeyEvent_26079_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool ScrollView__executeKeyEvent(ScrollView* __this, ::app::Android::android::view::KeyEvent* arg0)
{
    return ScrollView__executeKeyEvent_IMPL_26080(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool ScrollView__executeKeyEvent_IMPL_26080(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__executeKeyEvent_26080_ID,::app::Android::android::widget::ScrollView___javaClass_5,"executeKeyEvent","(Landroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.executeKeyEvent could not be cached",84);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__executeKeyEvent_26080_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__executeKeyEvent_26080_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ScrollView__fling(ScrollView* __this, int arg0)
{
    ScrollView__fling_IMPL_26107(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ScrollView__fling_IMPL_26107(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__fling_26107_ID,::app::Android::android::widget::ScrollView___javaClass_5,"fling","(I)V",GetMethodID,"Id for fallback method android.widget.ScrollView.fling could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__fling_26107_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__fling_26107_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool ScrollView__fullScroll(ScrollView* __this, int arg0)
{
    return ScrollView__fullScroll_IMPL_26090(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

bool ScrollView__fullScroll_IMPL_26090(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__fullScroll_26090_ID,::app::Android::android::widget::ScrollView___javaClass_5,"fullScroll","(I)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.fullScroll could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__fullScroll_26090_ID, ((jint)arg2_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__fullScroll_26090_ID, ((jint)arg2_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

float ScrollView__getBottomFadingEdgeStrength(ScrollView* __this)
{
    return ScrollView__getBottomFadingEdgeStrength_IMPL_26068(NULL, __this->_subclassed, __this->_javaObject);
}

float ScrollView__getBottomFadingEdgeStrength_IMPL_26068(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    float result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__getBottomFadingEdgeStrength_26068_ID,::app::Android::android::widget::ScrollView___javaClass_5,"getBottomFadingEdgeStrength","()F",GetMethodID,"Id for fallback method android.widget.ScrollView.getBottomFadingEdgeStrength could not be cached",96);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__getBottomFadingEdgeStrength_26068_ID));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::android::widget::ScrollView__getBottomFadingEdgeStrength_26068_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int ScrollView__getMaxScrollAmount(ScrollView* __this)
{
    return ScrollView__getMaxScrollAmount_IMPL_26069(NULL, __this->_subclassed, __this->_javaObject);
}

int ScrollView__getMaxScrollAmount_IMPL_26069(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__getMaxScrollAmount_26069_ID,::app::Android::android::widget::ScrollView___javaClass_5,"getMaxScrollAmount","()I",GetMethodID,"Id for fallback method android.widget.ScrollView.getMaxScrollAmount could not be cached",87);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__getMaxScrollAmount_26069_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::ScrollView__getMaxScrollAmount_26069_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

float ScrollView__getTopFadingEdgeStrength(ScrollView* __this)
{
    return ScrollView__getTopFadingEdgeStrength_IMPL_26067(NULL, __this->_subclassed, __this->_javaObject);
}

float ScrollView__getTopFadingEdgeStrength_IMPL_26067(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    float result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__getTopFadingEdgeStrength_26067_ID,::app::Android::android::widget::ScrollView___javaClass_5,"getTopFadingEdgeStrength","()F",GetMethodID,"Id for fallback method android.widget.ScrollView.getTopFadingEdgeStrength could not be cached",93);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__getTopFadingEdgeStrength_26067_ID));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::android::widget::ScrollView__getTopFadingEdgeStrength_26067_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool ScrollView__isFillViewport(ScrollView* __this)
{
    return ScrollView__isFillViewport_IMPL_26074(NULL, __this->_subclassed, __this->_javaObject);
}

bool ScrollView__isFillViewport_IMPL_26074(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__isFillViewport_26074_ID,::app::Android::android::widget::ScrollView___javaClass_5,"isFillViewport","()Z",GetMethodID,"Id for fallback method android.widget.ScrollView.isFillViewport could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__isFillViewport_26074_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__isFillViewport_26074_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool ScrollView__isSmoothScrollingEnabled(ScrollView* __this)
{
    return ScrollView__isSmoothScrollingEnabled_IMPL_26076(NULL, __this->_subclassed, __this->_javaObject);
}

bool ScrollView__isSmoothScrollingEnabled_IMPL_26076(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__isSmoothScrollingEnabled_26076_ID,::app::Android::android::widget::ScrollView___javaClass_5,"isSmoothScrollingEnabled","()Z",GetMethodID,"Id for fallback method android.widget.ScrollView.isSmoothScrollingEnabled could not be cached",93);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__isSmoothScrollingEnabled_26076_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__isSmoothScrollingEnabled_26076_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ScrollView__j_draw(ScrollView* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    ScrollView__j_draw_IMPL_26110(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ScrollView__j_draw_IMPL_26110(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__j_draw_26110_ID,::app::Android::android::widget::ScrollView___javaClass_5,"draw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.draw could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__j_draw_26110_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__j_draw_26110_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__measureChild(ScrollView* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2)
{
    ScrollView__measureChild_IMPL_26096(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

void ScrollView__measureChild_IMPL_26096(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__measureChild_26096_ID,::app::Android::android::widget::ScrollView___javaClass_5,"measureChild","(Landroid/view/View;II)V",GetMethodID,"Id for fallback method android.widget.ScrollView.measureChild could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__measureChild_26096_ID, _obArg2, ((jint)arg3_), ((jint)arg4_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__measureChild_26096_ID, _obArg2, ((jint)arg3_), ((jint)arg4_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__measureChildWithMargins(ScrollView* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2, int arg3, int arg4)
{
    ScrollView__measureChildWithMargins_IMPL_26097(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3, arg4);
}

void ScrollView__measureChildWithMargins_IMPL_26097(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__measureChildWithMargins_26097_ID,::app::Android::android::widget::ScrollView___javaClass_5,"measureChildWithMargins","(Landroid/view/View;IIII)V",GetMethodID,"Id for fallback method android.widget.ScrollView.measureChildWithMargins could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__measureChildWithMargins_26097_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__measureChildWithMargins_26097_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

ScrollView* ScrollView__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    ScrollView* inst = (ScrollView*)::uAllocObject(sizeof(ScrollView), ScrollView__typeof());
    inst->_ObjInit_16(arg0);
    return inst;
}

ScrollView* ScrollView__New_14(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    ScrollView* inst = (ScrollView*)::uAllocObject(sizeof(ScrollView), ScrollView__typeof());
    inst->_ObjInit_17(arg0, arg1);
    return inst;
}

ScrollView* ScrollView__New_15(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    ScrollView* inst = (ScrollView*)::uAllocObject(sizeof(ScrollView), ScrollView__typeof());
    inst->_ObjInit_18(arg0, arg1, arg2);
    return inst;
}

ScrollView* ScrollView__New_16(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ScrollView* inst = (ScrollView*)::uAllocObject(sizeof(ScrollView), ScrollView__typeof());
    inst->_ObjInit_19(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

void ScrollView__onDetachedFromWindow(ScrollView* __this)
{
    ScrollView__onDetachedFromWindow_IMPL_26104(NULL, __this->_subclassed, __this->_javaObject);
}

void ScrollView__onDetachedFromWindow_IMPL_26104(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onDetachedFromWindow_26104_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onDetachedFromWindow","()V",GetMethodID,"Id for fallback method android.widget.ScrollView.onDetachedFromWindow could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onDetachedFromWindow_26104_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__onDetachedFromWindow_26104_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool ScrollView__onGenericMotionEvent(ScrollView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return ScrollView__onGenericMotionEvent_IMPL_26084(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool ScrollView__onGenericMotionEvent_IMPL_26084(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onGenericMotionEvent_26084_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onGenericMotionEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.onGenericMotionEvent could not be cached",89);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onGenericMotionEvent_26084_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__onGenericMotionEvent_26084_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ScrollView__onInitializeAccessibilityEvent(ScrollView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    ScrollView__onInitializeAccessibilityEvent_IMPL_26088(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ScrollView__onInitializeAccessibilityEvent_IMPL_26088(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onInitializeAccessibilityEvent_26088_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onInitializeAccessibilityEvent could not be cached",99);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onInitializeAccessibilityEvent_26088_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__onInitializeAccessibilityEvent_26088_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__onInitializeAccessibilityNodeInfo(ScrollView* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    ScrollView__onInitializeAccessibilityNodeInfo_IMPL_26087(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ScrollView__onInitializeAccessibilityNodeInfo_IMPL_26087(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onInitializeAccessibilityNodeInfo_26087_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onInitializeAccessibilityNodeInfo could not be cached",102);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onInitializeAccessibilityNodeInfo_26087_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__onInitializeAccessibilityNodeInfo_26087_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool ScrollView__onInterceptTouchEvent(ScrollView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return ScrollView__onInterceptTouchEvent_IMPL_26082(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool ScrollView__onInterceptTouchEvent_IMPL_26082(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onInterceptTouchEvent_26082_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onInterceptTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.onInterceptTouchEvent could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onInterceptTouchEvent_26082_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__onInterceptTouchEvent_26082_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ScrollView__onLayout(ScrollView* __this, bool arg0, int arg1, int arg2, int arg3, int arg4)
{
    ScrollView__onLayout_IMPL_26105(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3, arg4);
}

void ScrollView__onLayout_IMPL_26105(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onLayout_26105_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onLayout","(ZIIII)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onLayout could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onLayout_26105_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__onLayout_26105_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__onMeasure(ScrollView* __this, int arg0, int arg1)
{
    ScrollView__onMeasure_IMPL_26078(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void ScrollView__onMeasure_IMPL_26078(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onMeasure_26078_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onMeasure could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onMeasure_26078_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__onMeasure_26078_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__onOverScrolled(ScrollView* __this, int arg0, int arg1, bool arg2, bool arg3)
{
    ScrollView__onOverScrolled_IMPL_26085(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void ScrollView__onOverScrolled_IMPL_26085(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, bool arg4_, bool arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onOverScrolled_26085_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onOverScrolled","(IIZZ)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onOverScrolled could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onOverScrolled_26085_ID, ((jint)arg2_), ((jint)arg3_), ((jboolean)arg4_), ((jboolean)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__onOverScrolled_26085_ID, ((jint)arg2_), ((jint)arg3_), ((jboolean)arg4_), ((jboolean)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool ScrollView__onRequestFocusInDescendants(ScrollView* __this, int arg0, ::app::Android::android::graphics::Rect* arg1)
{
    return ScrollView__onRequestFocusInDescendants_IMPL_26101(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool ScrollView__onRequestFocusInDescendants_IMPL_26101(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onRequestFocusInDescendants_26101_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onRequestFocusInDescendants","(ILandroid/graphics/Rect;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.onRequestFocusInDescendants could not be cached",96);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onRequestFocusInDescendants_26101_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__onRequestFocusInDescendants_26101_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ScrollView__onRestoreInstanceState(ScrollView* __this, ::uObject* arg0)
{
    ScrollView__onRestoreInstanceState_IMPL_26111(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ScrollView__onRestoreInstanceState_IMPL_26111(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onRestoreInstanceState_26111_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onRestoreInstanceState","(Landroid/os/Parcelable;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onRestoreInstanceState could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onRestoreInstanceState_26111_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__onRestoreInstanceState_26111_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

::uObject* ScrollView__onSaveInstanceState(ScrollView* __this)
{
    return (::uObject*)ScrollView__onSaveInstanceState_IMPL_26112(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* ScrollView__onSaveInstanceState_IMPL_26112(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onSaveInstanceState_26112_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onSaveInstanceState","()Landroid/os/Parcelable;",GetMethodID,"Id for fallback method android.widget.ScrollView.onSaveInstanceState could not be cached",88);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onSaveInstanceState_26112_ID),result,::app::Android::Fallbacks::Android_android_os_Parcelable__typeof(),::uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::ScrollView__onSaveInstanceState_26112_ID),result,::app::Android::Fallbacks::Android_android_os_Parcelable__typeof(),::uObject*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ScrollView__onSizeChanged(ScrollView* __this, int arg0, int arg1, int arg2, int arg3)
{
    ScrollView__onSizeChanged_IMPL_26106(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void ScrollView__onSizeChanged_IMPL_26106(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onSizeChanged_26106_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onSizeChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onSizeChanged could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onSizeChanged_26106_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__onSizeChanged_26106_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool ScrollView__onTouchEvent(ScrollView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return ScrollView__onTouchEvent_IMPL_26083(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool ScrollView__onTouchEvent_IMPL_26083(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onTouchEvent_26083_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.onTouchEvent could not be cached",81);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onTouchEvent_26083_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__onTouchEvent_26083_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool ScrollView__pageScroll(ScrollView* __this, int arg0)
{
    return ScrollView__pageScroll_IMPL_26089(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

bool ScrollView__pageScroll_IMPL_26089(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__pageScroll_26089_ID,::app::Android::android::widget::ScrollView___javaClass_5,"pageScroll","(I)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.pageScroll could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__pageScroll_26089_ID, ((jint)arg2_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__pageScroll_26089_ID, ((jint)arg2_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool ScrollView__performAccessibilityAction(ScrollView* __this, int arg0, ::app::Android::android::os::Bundle* arg1)
{
    return ScrollView__performAccessibilityAction_IMPL_26086(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool ScrollView__performAccessibilityAction_IMPL_26086(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__performAccessibilityAction_26086_ID,::app::Android::android::widget::ScrollView___javaClass_5,"performAccessibilityAction","(ILandroid/os/Bundle;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.performAccessibilityAction could not be cached",95);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__performAccessibilityAction_26086_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__performAccessibilityAction_26086_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ScrollView__requestChildFocus(ScrollView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1)
{
    ScrollView__requestChildFocus_IMPL_26100(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void ScrollView__requestChildFocus_IMPL_26100(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__requestChildFocus_26100_ID,::app::Android::android::widget::ScrollView___javaClass_5,"requestChildFocus","(Landroid/view/View;Landroid/view/View;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.requestChildFocus could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__requestChildFocus_26100_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__requestChildFocus_26100_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool ScrollView__requestChildRectangleOnScreen(ScrollView* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, bool arg2)
{
    return ScrollView__requestChildRectangleOnScreen_IMPL_26102(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

bool ScrollView__requestChildRectangleOnScreen_IMPL_26102(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__requestChildRectangleOnScreen_26102_ID,::app::Android::android::widget::ScrollView___javaClass_5,"requestChildRectangleOnScreen","(Landroid/view/View;Landroid/graphics/Rect;Z)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.requestChildRectangleOnScreen could not be cached",98);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__requestChildRectangleOnScreen_26102_ID, _obArg2, _obArg3, ((jboolean)arg4_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__requestChildRectangleOnScreen_26102_ID, _obArg2, _obArg3, ((jboolean)arg4_)));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ScrollView__requestDisallowInterceptTouchEvent(ScrollView* __this, bool arg0)
{
    ScrollView__requestDisallowInterceptTouchEvent_IMPL_26081(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ScrollView__requestDisallowInterceptTouchEvent_IMPL_26081(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__requestDisallowInterceptTouchEvent_26081_ID,::app::Android::android::widget::ScrollView___javaClass_5,"requestDisallowInterceptTouchEvent","(Z)V",GetMethodID,"Id for fallback method android.widget.ScrollView.requestDisallowInterceptTouchEvent could not be cached",103);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__requestDisallowInterceptTouchEvent_26081_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__requestDisallowInterceptTouchEvent_26081_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__requestLayout(ScrollView* __this)
{
    ScrollView__requestLayout_IMPL_26103(NULL, __this->_subclassed, __this->_javaObject);
}

void ScrollView__requestLayout_IMPL_26103(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__requestLayout_26103_ID,::app::Android::android::widget::ScrollView___javaClass_5,"requestLayout","()V",GetMethodID,"Id for fallback method android.widget.ScrollView.requestLayout could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__requestLayout_26103_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__requestLayout_26103_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__scrollTo(ScrollView* __this, int arg0, int arg1)
{
    ScrollView__scrollTo_IMPL_26108(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void ScrollView__scrollTo_IMPL_26108(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__scrollTo_26108_ID,::app::Android::android::widget::ScrollView___javaClass_5,"scrollTo","(II)V",GetMethodID,"Id for fallback method android.widget.ScrollView.scrollTo could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__scrollTo_26108_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__scrollTo_26108_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__setFillViewport(ScrollView* __this, bool arg0)
{
    ScrollView__setFillViewport_IMPL_26075(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ScrollView__setFillViewport_IMPL_26075(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__setFillViewport_26075_ID,::app::Android::android::widget::ScrollView___javaClass_5,"setFillViewport","(Z)V",GetMethodID,"Id for fallback method android.widget.ScrollView.setFillViewport could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__setFillViewport_26075_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__setFillViewport_26075_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__setOverScrollMode(ScrollView* __this, int arg0)
{
    ScrollView__setOverScrollMode_IMPL_26109(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ScrollView__setOverScrollMode_IMPL_26109(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__setOverScrollMode_26109_ID,::app::Android::android::widget::ScrollView___javaClass_5,"setOverScrollMode","(I)V",GetMethodID,"Id for fallback method android.widget.ScrollView.setOverScrollMode could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__setOverScrollMode_26109_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__setOverScrollMode_26109_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__setSmoothScrollingEnabled(ScrollView* __this, bool arg0)
{
    ScrollView__setSmoothScrollingEnabled_IMPL_26077(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ScrollView__setSmoothScrollingEnabled_IMPL_26077(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__setSmoothScrollingEnabled_26077_ID,::app::Android::android::widget::ScrollView___javaClass_5,"setSmoothScrollingEnabled","(Z)V",GetMethodID,"Id for fallback method android.widget.ScrollView.setSmoothScrollingEnabled could not be cached",94);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__setSmoothScrollingEnabled_26077_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__setSmoothScrollingEnabled_26077_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool ScrollView__shouldDelayChildPressedState(ScrollView* __this)
{
    return ScrollView__shouldDelayChildPressedState_IMPL_26066(NULL, __this->_subclassed, __this->_javaObject);
}

bool ScrollView__shouldDelayChildPressedState_IMPL_26066(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__shouldDelayChildPressedState_26066_ID,::app::Android::android::widget::ScrollView___javaClass_5,"shouldDelayChildPressedState","()Z",GetMethodID,"Id for fallback method android.widget.ScrollView.shouldDelayChildPressedState could not be cached",97);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__shouldDelayChildPressedState_26066_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__shouldDelayChildPressedState_26066_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void ScrollView__smoothScrollBy(ScrollView* __this, int arg0, int arg1)
{
    ScrollView__smoothScrollBy_IMPL_26092(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void ScrollView__smoothScrollBy_IMPL_26092(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__smoothScrollBy_26092_ID,::app::Android::android::widget::ScrollView___javaClass_5,"smoothScrollBy","(II)V",GetMethodID,"Id for fallback method android.widget.ScrollView.smoothScrollBy could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__smoothScrollBy_26092_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__smoothScrollBy_26092_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void ScrollView__smoothScrollTo(ScrollView* __this, int arg0, int arg1)
{
    ScrollView__smoothScrollTo_IMPL_26093(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void ScrollView__smoothScrollTo_IMPL_26093(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ScrollView__smoothScrollTo_26093_ID,::app::Android::android::widget::ScrollView___javaClass_5,"smoothScrollTo","(II)V",GetMethodID,"Id for fallback method android.widget.ScrollView.smoothScrollTo could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__smoothScrollTo_26093_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__smoothScrollTo_26093_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass SeekBar___javaClass_5;
jmethodID SeekBar__onInitializeAccessibilityEvent_26188_ID;
jmethodID SeekBar__onInitializeAccessibilityNodeInfo_26189_ID;
jmethodID SeekBar__SeekBar_26184_ID_c;
jmethodID SeekBar__SeekBar_26185_ID_c;
jmethodID SeekBar__SeekBar_26186_ID_c;
jmethodID SeekBar__setOnSeekBarChangeListener_26187_ID;

SeekBar__uType* SeekBar__typeof()
{
    static ::uStaticStrong<SeekBar__uType*> type;
    if (type != NULL) return type;

    type = (SeekBar__uType*)::uAllocClassType(sizeof(SeekBar__uType), "Android.android.widget.SeekBar", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::AbsSeekBar__typeof());
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))SeekBar__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))SeekBar__onInitializeAccessibilityNodeInfo;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(SeekBar__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SeekBar__uType, __interface_1));

    type->SetFields(7,
        ::uNewField("_javaClass", &SeekBar___javaClass_5, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_26188_ID", &SeekBar__onInitializeAccessibilityEvent_26188_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_26189_ID", &SeekBar__onInitializeAccessibilityNodeInfo_26189_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("SeekBar_26184_ID_c", &SeekBar__SeekBar_26184_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("SeekBar_26185_ID_c", &SeekBar__SeekBar_26185_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("SeekBar_26186_ID_c", &SeekBar__SeekBar_26186_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setOnSeekBarChangeListener_26187_ID", &SeekBar__setOnSeekBarChangeListener_26187_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("_Init", SeekBar___Init_5, 0, true),
        ::uNewFunction(".ctor", SeekBar__New_13, 0, true, SeekBar__typeof(), ::app::Android::android::content::Context__typeof()),
        ::uNewFunction(".ctor", SeekBar__New_14, 0, true, SeekBar__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Android::android::util::AttributeSet__typeof()),
        ::uNewFunction(".ctor", SeekBar__New_15, 0, true, SeekBar__typeof(), ::app::Android::android::content::Context__typeof(), ::app::Android::android::util::AttributeSet__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", SeekBar__New_16, 0, true, SeekBar__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::uType__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_26188", SeekBar__onInitializeAccessibilityEvent_IMPL_26188, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_26189", SeekBar__onInitializeAccessibilityNodeInfo_IMPL_26189, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setOnSeekBarChangeListener", SeekBar__setOnSeekBarChangeListener, 0, false, ::app::Android::android::widget::SeekBarDLROnSeekBarChangeListener__typeof()),
        ::uNewFunctionVoid("setOnSeekBarChangeListener_IMPL_26187", SeekBar__setOnSeekBarChangeListener_IMPL_26187, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void SeekBar___Init_5(::uStatic* __this)
{
    if (::app::Android::android::widget::SeekBar___javaClass_5) { return; }
    INIT_JNI;
    ::app::Android::android::widget::SeekBar___javaClass_5 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/SeekBar"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::SeekBar___javaClass_5) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.SeekBar'", 46);; }
}

void SeekBar___ObjInit_16(SeekBar* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::widget::AbsSeekBar___ObjInit_15(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::SeekBar___javaClass_5,::app::Android::android::widget::SeekBar___Init_5(NULL));;
    CACHE_METHOD(::app::Android::android::widget::SeekBar__SeekBar_26184_ID_c,::app::Android::android::widget::SeekBar___javaClass_5,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.SeekBar.<init> could not be cached",72);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::SeekBar___javaClass_5, ::app::Android::android::widget::SeekBar__SeekBar_26184_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void SeekBar___ObjInit_17(SeekBar* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    ::app::Android::android::widget::AbsSeekBar___ObjInit_15(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::SeekBar___javaClass_5,::app::Android::android::widget::SeekBar___Init_5(NULL));;
    CACHE_METHOD(::app::Android::android::widget::SeekBar__SeekBar_26185_ID_c,::app::Android::android::widget::SeekBar___javaClass_5,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.SeekBar.<init> could not be cached",72);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::SeekBar___javaClass_5, ::app::Android::android::widget::SeekBar__SeekBar_26185_ID_c, _obArg0, _obArg1);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void SeekBar___ObjInit_18(SeekBar* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    ::app::Android::android::widget::AbsSeekBar___ObjInit_15(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::SeekBar___javaClass_5,::app::Android::android::widget::SeekBar___Init_5(NULL));;
    CACHE_METHOD(::app::Android::android::widget::SeekBar__SeekBar_26186_ID_c,::app::Android::android::widget::SeekBar___javaClass_5,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.SeekBar.<init> could not be cached",72);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::SeekBar___javaClass_5, ::app::Android::android::widget::SeekBar__SeekBar_26186_ID_c, _obArg0, _obArg1, ((jint)arg2));;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void SeekBar___ObjInit_19(SeekBar* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::widget::AbsSeekBar___ObjInit_15(__this, obj, utype, hasFallbackClass, resolveType);
}

SeekBar* SeekBar__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    SeekBar* inst = (SeekBar*)::uAllocObject(sizeof(SeekBar), SeekBar__typeof());
    inst->_ObjInit_16(arg0);
    return inst;
}

SeekBar* SeekBar__New_14(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1)
{
    SeekBar* inst = (SeekBar*)::uAllocObject(sizeof(SeekBar), SeekBar__typeof());
    inst->_ObjInit_17(arg0, arg1);
    return inst;
}

SeekBar* SeekBar__New_15(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2)
{
    SeekBar* inst = (SeekBar*)::uAllocObject(sizeof(SeekBar), SeekBar__typeof());
    inst->_ObjInit_18(arg0, arg1, arg2);
    return inst;
}

SeekBar* SeekBar__New_16(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    SeekBar* inst = (SeekBar*)::uAllocObject(sizeof(SeekBar), SeekBar__typeof());
    inst->_ObjInit_19(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

void SeekBar__onInitializeAccessibilityEvent(SeekBar* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    SeekBar__onInitializeAccessibilityEvent_IMPL_26188(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void SeekBar__onInitializeAccessibilityEvent_IMPL_26188(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::SeekBar___javaClass_5,::app::Android::android::widget::SeekBar___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::SeekBar__onInitializeAccessibilityEvent_26188_ID,::app::Android::android::widget::SeekBar___javaClass_5,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.SeekBar.onInitializeAccessibilityEvent could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::SeekBar___javaClass_5, ::app::Android::android::widget::SeekBar__onInitializeAccessibilityEvent_26188_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::SeekBar__onInitializeAccessibilityEvent_26188_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void SeekBar__onInitializeAccessibilityNodeInfo(SeekBar* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    SeekBar__onInitializeAccessibilityNodeInfo_IMPL_26189(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void SeekBar__onInitializeAccessibilityNodeInfo_IMPL_26189(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::SeekBar___javaClass_5,::app::Android::android::widget::SeekBar___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::SeekBar__onInitializeAccessibilityNodeInfo_26189_ID,::app::Android::android::widget::SeekBar___javaClass_5,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.SeekBar.onInitializeAccessibilityNodeInfo could not be cached",99);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::SeekBar___javaClass_5, ::app::Android::android::widget::SeekBar__onInitializeAccessibilityNodeInfo_26189_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::SeekBar__onInitializeAccessibilityNodeInfo_26189_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void SeekBar__setOnSeekBarChangeListener(SeekBar* __this, ::uObject* arg0)
{
    SeekBar__setOnSeekBarChangeListener_IMPL_26187(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void SeekBar__setOnSeekBarChangeListener_IMPL_26187(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::SeekBar___javaClass_5,::app::Android::android::widget::SeekBar___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::SeekBar__setOnSeekBarChangeListener_26187_ID,::app::Android::android::widget::SeekBar___javaClass_5,"setOnSeekBarChangeListener","(Landroid/widget/SeekBar$OnSeekBarChangeListener;)V",GetMethodID,"Id for fallback method android.widget.SeekBar.setOnSeekBarChangeListener could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::SeekBar___javaClass_5, ::app::Android::android::widget::SeekBar__setOnSeekBarChangeListener_26187_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::SeekBar__setOnSeekBarChangeListener_26187_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* SeekBarDLROnSeekBarChangeListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.widget.SeekBarDLROnSeekBarChangeListener");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Switch___javaClass_6;
jmethodID Switch__drawableStateChanged_26372_ID;
jmethodID Switch__jumpDrawablesToCurrentState_26374_ID;
jmethodID Switch__onCreateDrawableState_26371_ID;
jmethodID Switch__onDraw_26368_ID;
jmethodID Switch__onInitializeAccessibilityEvent_26375_ID;
jmethodID Switch__onInitializeAccessibilityNodeInfo_26376_ID;
jmethodID Switch__onLayout_26367_ID;
jmethodID Switch__onPopulateAccessibilityEvent_26364_ID;
jmethodID Switch__onTouchEvent_26365_ID;
jmethodID Switch__setChecked_26366_ID;
jmethodID Switch__Switch_26341_ID_c;
jmethodID Switch__verifyDrawable_26373_ID;

Switch__uType* Switch__typeof()
{
    static ::uStaticStrong<Switch__uType*> type;
    if (type != NULL) return type;

    type = (Switch__uType*)::uAllocClassType(sizeof(Switch__uType), "Android.android.widget.Switch", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::CompoundButton__typeof());
    type->__fp_drawableStateChanged = (void(*)(::app::Android::android::view::View*))Switch__drawableStateChanged;
    type->__fp_jumpDrawablesToCurrentState = (void(*)(::app::Android::android::view::View*))Switch__jumpDrawablesToCurrentState;
    type->__fp_onCreateDrawableState = (::app::Android::Runtime::IntArray*(*)(::app::Android::android::view::View*, int))Switch__onCreateDrawableState;
    type->__fp_onDraw = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::Canvas*))Switch__onDraw;
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))Switch__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))Switch__onInitializeAccessibilityNodeInfo;
    type->__fp_onLayout = (void(*)(::app::Android::android::view::View*, bool, int, int, int, int))Switch__onLayout;
    type->__fp_onPopulateAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))Switch__onPopulateAccessibilityEvent;
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))Switch__onTouchEvent;
    type->__fp_setChecked = (void(*)(::app::Android::android::widget::CompoundButton*, bool))Switch__setChecked;
    type->__fp_verifyDrawable = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::drawable::Drawable*))Switch__verifyDrawable;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Switch__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Switch__uType, __interface_1));

    type->SetFields(13,
        ::uNewField("_javaClass", &Switch___javaClass_6, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("drawableStateChanged_26372_ID", &Switch__drawableStateChanged_26372_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("jumpDrawablesToCurrentState_26374_ID", &Switch__jumpDrawablesToCurrentState_26374_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onCreateDrawableState_26371_ID", &Switch__onCreateDrawableState_26371_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDraw_26368_ID", &Switch__onDraw_26368_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_26375_ID", &Switch__onInitializeAccessibilityEvent_26375_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_26376_ID", &Switch__onInitializeAccessibilityNodeInfo_26376_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onLayout_26367_ID", &Switch__onLayout_26367_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onPopulateAccessibilityEvent_26364_ID", &Switch__onPopulateAccessibilityEvent_26364_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onTouchEvent_26365_ID", &Switch__onTouchEvent_26365_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setChecked_26366_ID", &Switch__setChecked_26366_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("Switch_26341_ID_c", &Switch__Switch_26341_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("verifyDrawable_26373_ID", &Switch__verifyDrawable_26373_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(13,
        ::uNewFunctionVoid("_Init", Switch___Init_6, 0, true),
        ::uNewFunctionVoid("drawableStateChanged_IMPL_26372", Switch__drawableStateChanged_IMPL_26372, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("jumpDrawablesToCurrentState_IMPL_26374", Switch__jumpDrawablesToCurrentState_IMPL_26374, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", Switch__New_17, 0, true, Switch__typeof(), ::app::Android::android::content::Context__typeof()),
        ::uNewFunction("onCreateDrawableState_IMPL_26371", Switch__onCreateDrawableState_IMPL_26371, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onDraw_IMPL_26368", Switch__onDraw_IMPL_26368, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_26375", Switch__onInitializeAccessibilityEvent_IMPL_26375, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_26376", Switch__onInitializeAccessibilityNodeInfo_IMPL_26376, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onLayout_IMPL_26367", Switch__onLayout_IMPL_26367, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onPopulateAccessibilityEvent_IMPL_26364", Switch__onPopulateAccessibilityEvent_IMPL_26364, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onTouchEvent_IMPL_26365", Switch__onTouchEvent_IMPL_26365, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setChecked_IMPL_26366", Switch__setChecked_IMPL_26366, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("verifyDrawable_IMPL_26373", Switch__verifyDrawable_IMPL_26373, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void Switch___Init_6(::uStatic* __this)
{
    if (::app::Android::android::widget::Switch___javaClass_6) { return; }
    INIT_JNI;
    ::app::Android::android::widget::Switch___javaClass_6 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/Switch"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::Switch___javaClass_6) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.Switch'", 45);; }
}

void Switch___ObjInit_20(Switch* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::widget::CompoundButton___ObjInit_19(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));;
    CACHE_METHOD(::app::Android::android::widget::Switch__Switch_26341_ID_c,::app::Android::android::widget::Switch___javaClass_6,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.Switch.<init> could not be cached",71);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__Switch_26341_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void Switch__drawableStateChanged(Switch* __this)
{
    Switch__drawableStateChanged_IMPL_26372(NULL, __this->_subclassed, __this->_javaObject);
}

void Switch__drawableStateChanged_IMPL_26372(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::Switch__drawableStateChanged_26372_ID,::app::Android::android::widget::Switch___javaClass_6,"drawableStateChanged","()V",GetMethodID,"Id for fallback method android.widget.Switch.drawableStateChanged could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__drawableStateChanged_26372_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::Switch__drawableStateChanged_26372_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Switch__jumpDrawablesToCurrentState(Switch* __this)
{
    Switch__jumpDrawablesToCurrentState_IMPL_26374(NULL, __this->_subclassed, __this->_javaObject);
}

void Switch__jumpDrawablesToCurrentState_IMPL_26374(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::Switch__jumpDrawablesToCurrentState_26374_ID,::app::Android::android::widget::Switch___javaClass_6,"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.Switch.jumpDrawablesToCurrentState could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__jumpDrawablesToCurrentState_26374_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::Switch__jumpDrawablesToCurrentState_26374_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

Switch* Switch__New_17(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    Switch* inst = (Switch*)::uAllocObject(sizeof(Switch), Switch__typeof());
    inst->_ObjInit_20(arg0);
    return inst;
}

::app::Android::Runtime::IntArray* Switch__onCreateDrawableState(Switch* __this, int arg0)
{
    return ::uCast< ::app::Android::Runtime::IntArray*>(Switch__onCreateDrawableState_IMPL_26371(NULL, __this->_subclassed, __this->_javaObject, arg0), ::app::Android::Runtime::IntArray__typeof());
}

::uObject* Switch__onCreateDrawableState_IMPL_26371(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::Switch__onCreateDrawableState_26371_ID,::app::Android::android::widget::Switch___javaClass_6,"onCreateDrawableState","(I)[I",GetMethodID,"Id for fallback method android.widget.Switch.onCreateDrawableState could not be cached",86);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__onCreateDrawableState_26371_ID, ((jint)arg2_)),result,::app::Android::Runtime::IntArray__typeof(),::app::Android::Runtime::IntArray*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::Switch__onCreateDrawableState_26371_ID, ((jint)arg2_)),result,::app::Android::Runtime::IntArray__typeof(),::app::Android::Runtime::IntArray*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Switch__onDraw(Switch* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    Switch__onDraw_IMPL_26368(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Switch__onDraw_IMPL_26368(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::Switch__onDraw_26368_ID,::app::Android::android::widget::Switch___javaClass_6,"onDraw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.Switch.onDraw could not be cached",71);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__onDraw_26368_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::Switch__onDraw_26368_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Switch__onInitializeAccessibilityEvent(Switch* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    Switch__onInitializeAccessibilityEvent_IMPL_26375(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Switch__onInitializeAccessibilityEvent_IMPL_26375(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::Switch__onInitializeAccessibilityEvent_26375_ID,::app::Android::android::widget::Switch___javaClass_6,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.Switch.onInitializeAccessibilityEvent could not be cached",95);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__onInitializeAccessibilityEvent_26375_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::Switch__onInitializeAccessibilityEvent_26375_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Switch__onInitializeAccessibilityNodeInfo(Switch* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    Switch__onInitializeAccessibilityNodeInfo_IMPL_26376(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Switch__onInitializeAccessibilityNodeInfo_IMPL_26376(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::Switch__onInitializeAccessibilityNodeInfo_26376_ID,::app::Android::android::widget::Switch___javaClass_6,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.Switch.onInitializeAccessibilityNodeInfo could not be cached",98);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__onInitializeAccessibilityNodeInfo_26376_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::Switch__onInitializeAccessibilityNodeInfo_26376_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Switch__onLayout(Switch* __this, bool arg0, int arg1, int arg2, int arg3, int arg4)
{
    Switch__onLayout_IMPL_26367(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3, arg4);
}

void Switch__onLayout_IMPL_26367(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::Switch__onLayout_26367_ID,::app::Android::android::widget::Switch___javaClass_6,"onLayout","(ZIIII)V",GetMethodID,"Id for fallback method android.widget.Switch.onLayout could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__onLayout_26367_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::Switch__onLayout_26367_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void Switch__onPopulateAccessibilityEvent(Switch* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    Switch__onPopulateAccessibilityEvent_IMPL_26364(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Switch__onPopulateAccessibilityEvent_IMPL_26364(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::Switch__onPopulateAccessibilityEvent_26364_ID,::app::Android::android::widget::Switch___javaClass_6,"onPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.Switch.onPopulateAccessibilityEvent could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__onPopulateAccessibilityEvent_26364_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::Switch__onPopulateAccessibilityEvent_26364_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool Switch__onTouchEvent(Switch* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return Switch__onTouchEvent_IMPL_26365(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Switch__onTouchEvent_IMPL_26365(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::Switch__onTouchEvent_26365_ID,::app::Android::android::widget::Switch___javaClass_6,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.Switch.onTouchEvent could not be cached",77);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__onTouchEvent_26365_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::Switch__onTouchEvent_26365_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Switch__setChecked(Switch* __this, bool arg0)
{
    Switch__setChecked_IMPL_26366(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Switch__setChecked_IMPL_26366(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::Switch__setChecked_26366_ID,::app::Android::android::widget::Switch___javaClass_6,"setChecked","(Z)V",GetMethodID,"Id for fallback method android.widget.Switch.setChecked could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__setChecked_26366_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::Switch__setChecked_26366_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool Switch__verifyDrawable(Switch* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return Switch__verifyDrawable_IMPL_26373(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Switch__verifyDrawable_IMPL_26373(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::Switch__verifyDrawable_26373_ID,::app::Android::android::widget::Switch___javaClass_6,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z",GetMethodID,"Id for fallback method android.widget.Switch.verifyDrawable could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__verifyDrawable_26373_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::Switch__verifyDrawable_26373_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass TextView___javaClass_3;
jmethodID TextView__addTextChangedListener_26729_ID;
jmethodID TextView__cancelLongPress_26741_ID;
jmethodID TextView__computeHorizontalScrollRange_26746_ID;
jmethodID TextView__computeScroll_26712_ID;
jmethodID TextView__computeVerticalScrollExtent_26748_ID;
jmethodID TextView__computeVerticalScrollRange_26747_ID;
jmethodID TextView__drawableStateChanged_26633_ID;
jmethodID TextView__findViewsWithText_26749_ID;
jmethodID TextView__getBaseline_26690_ID;
jmethodID TextView__getBottomPaddingOffset_26677_ID;
jmethodID TextView__getFocusedRect_26687_ID;
jmethodID TextView__getLeftFadingEdgeStrength_26744_ID;
jmethodID TextView__getLeftPaddingOffset_26675_ID;
jmethodID TextView__getLineCount_26688_ID;
jmethodID TextView__getRightFadingEdgeStrength_26745_ID;
jmethodID TextView__getRightPaddingOffset_26678_ID;
jmethodID TextView__getTextColors_26582_ID;
jmethodID TextView__getTopPaddingOffset_26676_ID;
jmethodID TextView__hasOverlappingRendering_26682_ID;
jmethodID TextView__invalidateDrawable_26681_ID;
jmethodID TextView__isPaddingOffsetRequired_26674_ID;
jmethodID TextView__jumpDrawablesToCurrentState_26680_ID;
jmethodID TextView__onAttachedToWindow_26671_ID;
jmethodID TextView__onCheckIsTextEditor_26695_ID;
jmethodID TextView__onCreateDrawableState_26685_ID;
jmethodID TextView__onCreateInputConnection_26696_ID;
jmethodID TextView__onDetachedFromWindow_26672_ID;
jmethodID TextView__onDragEvent_26766_ID;
jmethodID TextView__onDraw_26686_ID;
jmethodID TextView__onFinishTemporaryDetach_26732_ID;
jmethodID TextView__onFocusChanged_26733_ID;
jmethodID TextView__onGenericMotionEvent_26739_ID;
jmethodID TextView__onInitializeAccessibilityEvent_26754_ID;
jmethodID TextView__onInitializeAccessibilityNodeInfo_26755_ID;
jmethodID TextView__onKeyDown_26692_ID;
jmethodID TextView__onKeyMultiple_26693_ID;
jmethodID TextView__onKeyPreIme_26691_ID;
jmethodID TextView__onKeyShortcut_26752_ID;
jmethodID TextView__onKeyUp_26694_ID;
jmethodID TextView__onLayout_26709_ID;
jmethodID TextView__onMeasure_26708_ID;
jmethodID TextView__onPopulateAccessibilityEvent_26753_ID;
jmethodID TextView__onRtlPropertiesChanged_26767_ID;
jmethodID TextView__onScreenStateChanged_26673_ID;
jmethodID TextView__onScrollChanged_26761_ID;
jmethodID TextView__onStartTemporaryDetach_26731_ID;
jmethodID TextView__onTouchEvent_26738_ID;
jmethodID TextView__onTrackballEvent_26742_ID;
jmethodID TextView__onVisibilityChanged_26735_ID;
jmethodID TextView__onWindowFocusChanged_26734_ID;
jmethodID TextView__performAccessibilityAction_26756_ID;
jmethodID TextView__performLongClick_26760_ID;
jmethodID TextView__removeTextChangedListener_26730_ID;
jmethodID TextView__sendAccessibilityEvent_26757_ID;
jmethodID TextView__setEllipsize_26720_ID;
jmethodID TextView__setEnabled_26528_ID;
jmethodID TextView__setGravity_26603_ID;
jmethodID TextView__setHorizontallyScrolling_26607_ID;
jmethodID TextView__setIncludeFontPadding_26706_ID;
jmethodID TextView__setInputType_26650_ID;
jmethodID TextView__setMaxLines_26612_ID;
jmethodID TextView__setOnEditorActionListener_26658_ID;
jmethodID TextView__setPadding_26567_ID;
jmethodID TextView__setPaddingRelative_26568_ID;
jmethodID TextView__setSelected_26737_ID;
jmethodID TextView__setText_26640_ID;
jmethodID TextView__setTextColor_26580_ID;
jmethodID TextView__setTextSize_26575_ID;
jmethodID TextView__setTypeface_26578_ID;
jmethodID TextView__TextView_26525_ID_c;
jmethodID TextView__verifyDrawable_26679_ID;

TextView__uType* TextView__typeof()
{
    static ::uStaticStrong<TextView__uType*> type;
    if (type != NULL) return type;

    type = (TextView__uType*)::uAllocClassType(sizeof(TextView__uType), "Android.android.widget.TextView", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::View__typeof());
    type->__fp_cancelLongPress = (void(*)(::app::Android::android::view::View*))TextView__cancelLongPress;
    type->__fp_computeHorizontalScrollRange = (int(*)(::app::Android::android::view::View*))TextView__computeHorizontalScrollRange;
    type->__fp_computeScroll = (void(*)(::app::Android::android::view::View*))TextView__computeScroll;
    type->__fp_computeVerticalScrollExtent = (int(*)(::app::Android::android::view::View*))TextView__computeVerticalScrollExtent;
    type->__fp_computeVerticalScrollRange = (int(*)(::app::Android::android::view::View*))TextView__computeVerticalScrollRange;
    type->__fp_drawableStateChanged = (void(*)(::app::Android::android::view::View*))TextView__drawableStateChanged;
    type->__fp_findViewsWithText = (void(*)(::app::Android::android::view::View*, ::app::Android::java::util::ArrayList*, ::uObject*, int))TextView__findViewsWithText;
    type->__fp_getBaseline = (int(*)(::app::Android::android::view::View*))TextView__getBaseline;
    type->__fp_getBottomPaddingOffset = (int(*)(::app::Android::android::view::View*))TextView__getBottomPaddingOffset;
    type->__fp_getFocusedRect = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*))TextView__getFocusedRect;
    type->__fp_getLeftFadingEdgeStrength = (float(*)(::app::Android::android::view::View*))TextView__getLeftFadingEdgeStrength;
    type->__fp_getLeftPaddingOffset = (int(*)(::app::Android::android::view::View*))TextView__getLeftPaddingOffset;
    type->__fp_getRightFadingEdgeStrength = (float(*)(::app::Android::android::view::View*))TextView__getRightFadingEdgeStrength;
    type->__fp_getRightPaddingOffset = (int(*)(::app::Android::android::view::View*))TextView__getRightPaddingOffset;
    type->__fp_getTopPaddingOffset = (int(*)(::app::Android::android::view::View*))TextView__getTopPaddingOffset;
    type->__fp_hasOverlappingRendering = (bool(*)(::app::Android::android::view::View*))TextView__hasOverlappingRendering;
    type->__fp_invalidateDrawable = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::drawable::Drawable*))TextView__invalidateDrawable;
    type->__fp_isPaddingOffsetRequired = (bool(*)(::app::Android::android::view::View*))TextView__isPaddingOffsetRequired;
    type->__fp_jumpDrawablesToCurrentState = (void(*)(::app::Android::android::view::View*))TextView__jumpDrawablesToCurrentState;
    type->__fp_onAttachedToWindow = (void(*)(::app::Android::android::view::View*))TextView__onAttachedToWindow;
    type->__fp_onCheckIsTextEditor = (bool(*)(::app::Android::android::view::View*))TextView__onCheckIsTextEditor;
    type->__fp_onCreateDrawableState = (::app::Android::Runtime::IntArray*(*)(::app::Android::android::view::View*, int))TextView__onCreateDrawableState;
    type->__fp_onCreateInputConnection = (::uObject*(*)(::app::Android::android::view::View*, ::app::Android::android::view::inputmethod::EditorInfo*))TextView__onCreateInputConnection;
    type->__fp_onDetachedFromWindow = (void(*)(::app::Android::android::view::View*))TextView__onDetachedFromWindow;
    type->__fp_onDragEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::DragEvent*))TextView__onDragEvent;
    type->__fp_onDraw = (void(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::Canvas*))TextView__onDraw;
    type->__fp_onFinishTemporaryDetach = (void(*)(::app::Android::android::view::View*))TextView__onFinishTemporaryDetach;
    type->__fp_onFocusChanged = (void(*)(::app::Android::android::view::View*, bool, int, ::app::Android::android::graphics::Rect*))TextView__onFocusChanged;
    type->__fp_onGenericMotionEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))TextView__onGenericMotionEvent;
    type->__fp_onInitializeAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))TextView__onInitializeAccessibilityEvent;
    type->__fp_onInitializeAccessibilityNodeInfo = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*))TextView__onInitializeAccessibilityNodeInfo;
    type->__fp_onKeyDown = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::view::KeyEvent*))TextView__onKeyDown;
    type->__fp_onKeyMultiple = (bool(*)(::app::Android::android::view::View*, int, int, ::app::Android::android::view::KeyEvent*))TextView__onKeyMultiple;
    type->__fp_onKeyPreIme = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::view::KeyEvent*))TextView__onKeyPreIme;
    type->__fp_onKeyShortcut = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::view::KeyEvent*))TextView__onKeyShortcut;
    type->__fp_onKeyUp = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::view::KeyEvent*))TextView__onKeyUp;
    type->__fp_onLayout = (void(*)(::app::Android::android::view::View*, bool, int, int, int, int))TextView__onLayout;
    type->__fp_onMeasure = (void(*)(::app::Android::android::view::View*, int, int))TextView__onMeasure;
    type->__fp_onPopulateAccessibilityEvent = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*))TextView__onPopulateAccessibilityEvent;
    type->__fp_onRtlPropertiesChanged = (void(*)(::app::Android::android::view::View*, int))TextView__onRtlPropertiesChanged;
    type->__fp_onScreenStateChanged = (void(*)(::app::Android::android::view::View*, int))TextView__onScreenStateChanged;
    type->__fp_onScrollChanged = (void(*)(::app::Android::android::view::View*, int, int, int, int))TextView__onScrollChanged;
    type->__fp_onStartTemporaryDetach = (void(*)(::app::Android::android::view::View*))TextView__onStartTemporaryDetach;
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))TextView__onTouchEvent;
    type->__fp_onTrackballEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))TextView__onTrackballEvent;
    type->__fp_onVisibilityChanged = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::View*, int))TextView__onVisibilityChanged;
    type->__fp_onWindowFocusChanged = (void(*)(::app::Android::android::view::View*, bool))TextView__onWindowFocusChanged;
    type->__fp_performAccessibilityAction = (bool(*)(::app::Android::android::view::View*, int, ::app::Android::android::os::Bundle*))TextView__performAccessibilityAction;
    type->__fp_performLongClick = (bool(*)(::app::Android::android::view::View*))TextView__performLongClick;
    type->__fp_sendAccessibilityEvent = (void(*)(::app::Android::android::view::View*, int))TextView__sendAccessibilityEvent;
    type->__fp_setEllipsize = TextView__setEllipsize;
    type->__fp_setEnabled = (void(*)(::app::Android::android::view::View*, bool))TextView__setEnabled;
    type->__fp_setPadding = (void(*)(::app::Android::android::view::View*, int, int, int, int))TextView__setPadding;
    type->__fp_setPaddingRelative = (void(*)(::app::Android::android::view::View*, int, int, int, int))TextView__setPaddingRelative;
    type->__fp_setSelected = (void(*)(::app::Android::android::view::View*, bool))TextView__setSelected;
    type->__fp_verifyDrawable = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::graphics::drawable::Drawable*))TextView__verifyDrawable;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(TextView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(TextView__uType, __interface_1));

    type->SetFields(72,
        ::uNewField("_javaClass", &TextView___javaClass_3, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("addTextChangedListener_26729_ID", &TextView__addTextChangedListener_26729_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("cancelLongPress_26741_ID", &TextView__cancelLongPress_26741_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeHorizontalScrollRange_26746_ID", &TextView__computeHorizontalScrollRange_26746_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeScroll_26712_ID", &TextView__computeScroll_26712_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeVerticalScrollExtent_26748_ID", &TextView__computeVerticalScrollExtent_26748_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("computeVerticalScrollRange_26747_ID", &TextView__computeVerticalScrollRange_26747_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("drawableStateChanged_26633_ID", &TextView__drawableStateChanged_26633_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("findViewsWithText_26749_ID", &TextView__findViewsWithText_26749_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getBaseline_26690_ID", &TextView__getBaseline_26690_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getBottomPaddingOffset_26677_ID", &TextView__getBottomPaddingOffset_26677_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getFocusedRect_26687_ID", &TextView__getFocusedRect_26687_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getLeftFadingEdgeStrength_26744_ID", &TextView__getLeftFadingEdgeStrength_26744_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getLeftPaddingOffset_26675_ID", &TextView__getLeftPaddingOffset_26675_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getLineCount_26688_ID", &TextView__getLineCount_26688_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getRightFadingEdgeStrength_26745_ID", &TextView__getRightFadingEdgeStrength_26745_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getRightPaddingOffset_26678_ID", &TextView__getRightPaddingOffset_26678_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getTextColors_26582_ID", &TextView__getTextColors_26582_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("getTopPaddingOffset_26676_ID", &TextView__getTopPaddingOffset_26676_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hasOverlappingRendering_26682_ID", &TextView__hasOverlappingRendering_26682_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("invalidateDrawable_26681_ID", &TextView__invalidateDrawable_26681_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("isPaddingOffsetRequired_26674_ID", &TextView__isPaddingOffsetRequired_26674_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("jumpDrawablesToCurrentState_26680_ID", &TextView__jumpDrawablesToCurrentState_26680_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onAttachedToWindow_26671_ID", &TextView__onAttachedToWindow_26671_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onCheckIsTextEditor_26695_ID", &TextView__onCheckIsTextEditor_26695_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onCreateDrawableState_26685_ID", &TextView__onCreateDrawableState_26685_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onCreateInputConnection_26696_ID", &TextView__onCreateInputConnection_26696_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDetachedFromWindow_26672_ID", &TextView__onDetachedFromWindow_26672_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDragEvent_26766_ID", &TextView__onDragEvent_26766_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onDraw_26686_ID", &TextView__onDraw_26686_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onFinishTemporaryDetach_26732_ID", &TextView__onFinishTemporaryDetach_26732_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onFocusChanged_26733_ID", &TextView__onFocusChanged_26733_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onGenericMotionEvent_26739_ID", &TextView__onGenericMotionEvent_26739_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityEvent_26754_ID", &TextView__onInitializeAccessibilityEvent_26754_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onInitializeAccessibilityNodeInfo_26755_ID", &TextView__onInitializeAccessibilityNodeInfo_26755_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onKeyDown_26692_ID", &TextView__onKeyDown_26692_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onKeyMultiple_26693_ID", &TextView__onKeyMultiple_26693_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onKeyPreIme_26691_ID", &TextView__onKeyPreIme_26691_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onKeyShortcut_26752_ID", &TextView__onKeyShortcut_26752_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onKeyUp_26694_ID", &TextView__onKeyUp_26694_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onLayout_26709_ID", &TextView__onLayout_26709_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onMeasure_26708_ID", &TextView__onMeasure_26708_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onPopulateAccessibilityEvent_26753_ID", &TextView__onPopulateAccessibilityEvent_26753_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onRtlPropertiesChanged_26767_ID", &TextView__onRtlPropertiesChanged_26767_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onScreenStateChanged_26673_ID", &TextView__onScreenStateChanged_26673_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onScrollChanged_26761_ID", &TextView__onScrollChanged_26761_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onStartTemporaryDetach_26731_ID", &TextView__onStartTemporaryDetach_26731_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onTouchEvent_26738_ID", &TextView__onTouchEvent_26738_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onTrackballEvent_26742_ID", &TextView__onTrackballEvent_26742_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onVisibilityChanged_26735_ID", &TextView__onVisibilityChanged_26735_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("onWindowFocusChanged_26734_ID", &TextView__onWindowFocusChanged_26734_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performAccessibilityAction_26756_ID", &TextView__performAccessibilityAction_26756_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("performLongClick_26760_ID", &TextView__performLongClick_26760_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("removeTextChangedListener_26730_ID", &TextView__removeTextChangedListener_26730_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("sendAccessibilityEvent_26757_ID", &TextView__sendAccessibilityEvent_26757_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setEllipsize_26720_ID", &TextView__setEllipsize_26720_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setEnabled_26528_ID", &TextView__setEnabled_26528_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setGravity_26603_ID", &TextView__setGravity_26603_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setHorizontallyScrolling_26607_ID", &TextView__setHorizontallyScrolling_26607_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setIncludeFontPadding_26706_ID", &TextView__setIncludeFontPadding_26706_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setInputType_26650_ID", &TextView__setInputType_26650_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setMaxLines_26612_ID", &TextView__setMaxLines_26612_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setOnEditorActionListener_26658_ID", &TextView__setOnEditorActionListener_26658_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setPadding_26567_ID", &TextView__setPadding_26567_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setPaddingRelative_26568_ID", &TextView__setPaddingRelative_26568_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setSelected_26737_ID", &TextView__setSelected_26737_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setText_26640_ID", &TextView__setText_26640_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setTextColor_26580_ID", &TextView__setTextColor_26580_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setTextSize_26575_ID", &TextView__setTextSize_26575_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("setTypeface_26578_ID", &TextView__setTypeface_26578_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("TextView_26525_ID_c", &TextView__TextView_26525_ID_c, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("verifyDrawable_26679_ID", &TextView__verifyDrawable_26679_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(87,
        ::uNewFunctionVoid("_Init", TextView___Init_3, 0, true),
        ::uNewFunctionVoid("addTextChangedListener", TextView__addTextChangedListener, 0, false, ::app::Android::android::text::TextWatcher__typeof()),
        ::uNewFunctionVoid("addTextChangedListener_IMPL_26729", TextView__addTextChangedListener_IMPL_26729, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("cancelLongPress_IMPL_26741", TextView__cancelLongPress_IMPL_26741, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("computeHorizontalScrollRange_IMPL_26746", TextView__computeHorizontalScrollRange_IMPL_26746, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("computeScroll_IMPL_26712", TextView__computeScroll_IMPL_26712, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("computeVerticalScrollExtent_IMPL_26748", TextView__computeVerticalScrollExtent_IMPL_26748, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("computeVerticalScrollRange_IMPL_26747", TextView__computeVerticalScrollRange_IMPL_26747, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("drawableStateChanged_IMPL_26633", TextView__drawableStateChanged_IMPL_26633, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("findViewsWithText_IMPL_26749", TextView__findViewsWithText_IMPL_26749, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("getBaseline_IMPL_26690", TextView__getBaseline_IMPL_26690, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getBottomPaddingOffset_IMPL_26677", TextView__getBottomPaddingOffset_IMPL_26677, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("getFocusedRect_IMPL_26687", TextView__getFocusedRect_IMPL_26687, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("getLeftFadingEdgeStrength_IMPL_26744", TextView__getLeftFadingEdgeStrength_IMPL_26744, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getLeftPaddingOffset_IMPL_26675", TextView__getLeftPaddingOffset_IMPL_26675, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getLineCount", TextView__getLineCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("getLineCount_IMPL_26688", TextView__getLineCount_IMPL_26688, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getRightFadingEdgeStrength_IMPL_26745", TextView__getRightFadingEdgeStrength_IMPL_26745, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getRightPaddingOffset_IMPL_26678", TextView__getRightPaddingOffset_IMPL_26678, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getTextColors", TextView__getTextColors, 0, false, ::app::Android::android::content::res::ColorStateList__typeof()),
        ::uNewFunction("getTextColors_IMPL_26582", TextView__getTextColors_IMPL_26582, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("getTopPaddingOffset_IMPL_26676", TextView__getTopPaddingOffset_IMPL_26676, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("hasOverlappingRendering_IMPL_26682", TextView__hasOverlappingRendering_IMPL_26682, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("invalidateDrawable_IMPL_26681", TextView__invalidateDrawable_IMPL_26681, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("isPaddingOffsetRequired_IMPL_26674", TextView__isPaddingOffsetRequired_IMPL_26674, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("jumpDrawablesToCurrentState_IMPL_26680", TextView__jumpDrawablesToCurrentState_IMPL_26680, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction(".ctor", TextView__New_9, 0, true, TextView__typeof(), ::app::Android::android::content::Context__typeof()),
        ::uNewFunctionVoid("onAttachedToWindow_IMPL_26671", TextView__onAttachedToWindow_IMPL_26671, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("onCheckIsTextEditor_IMPL_26695", TextView__onCheckIsTextEditor_IMPL_26695, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("onCreateDrawableState_IMPL_26685", TextView__onCreateDrawableState_IMPL_26685, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("onCreateInputConnection_IMPL_26696", TextView__onCreateInputConnection_IMPL_26696, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onDetachedFromWindow_IMPL_26672", TextView__onDetachedFromWindow_IMPL_26672, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("onDragEvent_IMPL_26766", TextView__onDragEvent_IMPL_26766, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onDraw_IMPL_26686", TextView__onDraw_IMPL_26686, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onFinishTemporaryDetach_IMPL_26732", TextView__onFinishTemporaryDetach_IMPL_26732, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("onFocusChanged_IMPL_26733", TextView__onFocusChanged_IMPL_26733, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onGenericMotionEvent_IMPL_26739", TextView__onGenericMotionEvent_IMPL_26739, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityEvent_IMPL_26754", TextView__onInitializeAccessibilityEvent_IMPL_26754, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onInitializeAccessibilityNodeInfo_IMPL_26755", TextView__onInitializeAccessibilityNodeInfo_IMPL_26755, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onKeyDown_IMPL_26692", TextView__onKeyDown_IMPL_26692, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onKeyMultiple_IMPL_26693", TextView__onKeyMultiple_IMPL_26693, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onKeyPreIme_IMPL_26691", TextView__onKeyPreIme_IMPL_26691, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onKeyShortcut_IMPL_26752", TextView__onKeyShortcut_IMPL_26752, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onKeyUp_IMPL_26694", TextView__onKeyUp_IMPL_26694, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onLayout_IMPL_26709", TextView__onLayout_IMPL_26709, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onMeasure_IMPL_26708", TextView__onMeasure_IMPL_26708, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onPopulateAccessibilityEvent_IMPL_26753", TextView__onPopulateAccessibilityEvent_IMPL_26753, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onRtlPropertiesChanged_IMPL_26767", TextView__onRtlPropertiesChanged_IMPL_26767, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onScreenStateChanged_IMPL_26673", TextView__onScreenStateChanged_IMPL_26673, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onScrollChanged_IMPL_26761", TextView__onScrollChanged_IMPL_26761, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onStartTemporaryDetach_IMPL_26731", TextView__onStartTemporaryDetach_IMPL_26731, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("onTouchEvent_IMPL_26738", TextView__onTouchEvent_IMPL_26738, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("onTrackballEvent_IMPL_26742", TextView__onTrackballEvent_IMPL_26742, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("onVisibilityChanged_IMPL_26735", TextView__onVisibilityChanged_IMPL_26735, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("onWindowFocusChanged_IMPL_26734", TextView__onWindowFocusChanged_IMPL_26734, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("performAccessibilityAction_IMPL_26756", TextView__performAccessibilityAction_IMPL_26756, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("performLongClick_IMPL_26760", TextView__performLongClick_IMPL_26760, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("removeTextChangedListener", TextView__removeTextChangedListener, 0, false, ::app::Android::android::text::TextWatcher__typeof()),
        ::uNewFunctionVoid("removeTextChangedListener_IMPL_26730", TextView__removeTextChangedListener_IMPL_26730, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("sendAccessibilityEvent_IMPL_26757", TextView__sendAccessibilityEvent_IMPL_26757, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setEllipsize", type->__fp_setEllipsize, offsetof(TextView__uType, __fp_setEllipsize), false, ::app::Android::android::text::TextUtilsDLRTruncateAt__typeof()),
        ::uNewFunctionVoid("setEllipsize_IMPL_26720", TextView__setEllipsize_IMPL_26720, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setEnabled_IMPL_26528", TextView__setEnabled_IMPL_26528, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setGravity", TextView__setGravity, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setGravity_IMPL_26603", TextView__setGravity_IMPL_26603, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setHorizontallyScrolling", TextView__setHorizontallyScrolling, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setHorizontallyScrolling_IMPL_26607", TextView__setHorizontallyScrolling_IMPL_26607, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setIncludeFontPadding", TextView__setIncludeFontPadding, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setIncludeFontPadding_IMPL_26706", TextView__setIncludeFontPadding_IMPL_26706, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setInputType", TextView__setInputType, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setInputType_IMPL_26650", TextView__setInputType_IMPL_26650, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setMaxLines", TextView__setMaxLines, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setMaxLines_IMPL_26612", TextView__setMaxLines_IMPL_26612, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setOnEditorActionListener", TextView__setOnEditorActionListener, 0, false, ::app::Android::android::widget::TextViewDLROnEditorActionListener__typeof()),
        ::uNewFunctionVoid("setOnEditorActionListener_IMPL_26658", TextView__setOnEditorActionListener_IMPL_26658, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setPadding_IMPL_26567", TextView__setPadding_IMPL_26567, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setPaddingRelative_IMPL_26568", TextView__setPaddingRelative_IMPL_26568, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setSelected_IMPL_26737", TextView__setSelected_IMPL_26737, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("setText", TextView__setText_1, 0, false, ::app::Android::java::lang::CharSequence__typeof()),
        ::uNewFunctionVoid("setText_IMPL_26640", TextView__setText_IMPL_26640, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("setTextColor", TextView__setTextColor_1, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setTextColor_IMPL_26580", TextView__setTextColor_IMPL_26580, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("setTextSize", TextView__setTextSize_1, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("setTextSize_IMPL_26575", TextView__setTextSize_IMPL_26575, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("setTypeface", TextView__setTypeface, 0, false, ::app::Android::android::graphics::Typeface__typeof()),
        ::uNewFunctionVoid("setTypeface_IMPL_26578", TextView__setTypeface_IMPL_26578, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("verifyDrawable_IMPL_26679", TextView__verifyDrawable_IMPL_26679, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextView___Init_3(::uStatic* __this)
{
    if (::app::Android::android::widget::TextView___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::widget::TextView___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/TextView"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::TextView___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.TextView'", 47);; }
}

void TextView___ObjInit_11(TextView* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::View___ObjInit_7(__this, obj, utype, hasFallbackClass, resolveType);
}

void TextView___ObjInit_8(TextView* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::view::View___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::widget::TextView__TextView_26525_ID_c,::app::Android::android::widget::TextView___javaClass_3,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.TextView.<init> could not be cached",73);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__TextView_26525_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void TextView__addTextChangedListener(TextView* __this, ::uObject* arg0)
{
    TextView__addTextChangedListener_IMPL_26729(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__addTextChangedListener_IMPL_26729(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__addTextChangedListener_26729_ID,::app::Android::android::widget::TextView___javaClass_3,"addTextChangedListener","(Landroid/text/TextWatcher;)V",GetMethodID,"Id for fallback method android.widget.TextView.addTextChangedListener could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__addTextChangedListener_26729_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__addTextChangedListener_26729_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__cancelLongPress(TextView* __this)
{
    TextView__cancelLongPress_IMPL_26741(NULL, __this->_subclassed, __this->_javaObject);
}

void TextView__cancelLongPress_IMPL_26741(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__cancelLongPress_26741_ID,::app::Android::android::widget::TextView___javaClass_3,"cancelLongPress","()V",GetMethodID,"Id for fallback method android.widget.TextView.cancelLongPress could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__cancelLongPress_26741_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__cancelLongPress_26741_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int TextView__computeHorizontalScrollRange(TextView* __this)
{
    return TextView__computeHorizontalScrollRange_IMPL_26746(NULL, __this->_subclassed, __this->_javaObject);
}

int TextView__computeHorizontalScrollRange_IMPL_26746(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::TextView__computeHorizontalScrollRange_26746_ID,::app::Android::android::widget::TextView___javaClass_3,"computeHorizontalScrollRange","()I",GetMethodID,"Id for fallback method android.widget.TextView.computeHorizontalScrollRange could not be cached",95);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__computeHorizontalScrollRange_26746_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::TextView__computeHorizontalScrollRange_26746_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void TextView__computeScroll(TextView* __this)
{
    TextView__computeScroll_IMPL_26712(NULL, __this->_subclassed, __this->_javaObject);
}

void TextView__computeScroll_IMPL_26712(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__computeScroll_26712_ID,::app::Android::android::widget::TextView___javaClass_3,"computeScroll","()V",GetMethodID,"Id for fallback method android.widget.TextView.computeScroll could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__computeScroll_26712_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__computeScroll_26712_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int TextView__computeVerticalScrollExtent(TextView* __this)
{
    return TextView__computeVerticalScrollExtent_IMPL_26748(NULL, __this->_subclassed, __this->_javaObject);
}

int TextView__computeVerticalScrollExtent_IMPL_26748(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::TextView__computeVerticalScrollExtent_26748_ID,::app::Android::android::widget::TextView___javaClass_3,"computeVerticalScrollExtent","()I",GetMethodID,"Id for fallback method android.widget.TextView.computeVerticalScrollExtent could not be cached",94);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__computeVerticalScrollExtent_26748_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::TextView__computeVerticalScrollExtent_26748_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int TextView__computeVerticalScrollRange(TextView* __this)
{
    return TextView__computeVerticalScrollRange_IMPL_26747(NULL, __this->_subclassed, __this->_javaObject);
}

int TextView__computeVerticalScrollRange_IMPL_26747(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::TextView__computeVerticalScrollRange_26747_ID,::app::Android::android::widget::TextView___javaClass_3,"computeVerticalScrollRange","()I",GetMethodID,"Id for fallback method android.widget.TextView.computeVerticalScrollRange could not be cached",93);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__computeVerticalScrollRange_26747_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::TextView__computeVerticalScrollRange_26747_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void TextView__drawableStateChanged(TextView* __this)
{
    TextView__drawableStateChanged_IMPL_26633(NULL, __this->_subclassed, __this->_javaObject);
}

void TextView__drawableStateChanged_IMPL_26633(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__drawableStateChanged_26633_ID,::app::Android::android::widget::TextView___javaClass_3,"drawableStateChanged","()V",GetMethodID,"Id for fallback method android.widget.TextView.drawableStateChanged could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__drawableStateChanged_26633_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__drawableStateChanged_26633_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__findViewsWithText(TextView* __this, ::app::Android::java::util::ArrayList* arg0, ::uObject* arg1, int arg2)
{
    TextView__findViewsWithText_IMPL_26749(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

void TextView__findViewsWithText_IMPL_26749(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::widget::TextView__findViewsWithText_26749_ID,::app::Android::android::widget::TextView___javaClass_3,"findViewsWithText","(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",GetMethodID,"Id for fallback method android.widget.TextView.findViewsWithText could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__findViewsWithText_26749_ID, _obArg2, _obArg3, ((jint)arg4_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__findViewsWithText_26749_ID, _obArg2, _obArg3, ((jint)arg4_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

int TextView__getBaseline(TextView* __this)
{
    return TextView__getBaseline_IMPL_26690(NULL, __this->_subclassed, __this->_javaObject);
}

int TextView__getBaseline_IMPL_26690(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::TextView__getBaseline_26690_ID,::app::Android::android::widget::TextView___javaClass_3,"getBaseline","()I",GetMethodID,"Id for fallback method android.widget.TextView.getBaseline could not be cached",78);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__getBaseline_26690_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::TextView__getBaseline_26690_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int TextView__getBottomPaddingOffset(TextView* __this)
{
    return TextView__getBottomPaddingOffset_IMPL_26677(NULL, __this->_subclassed, __this->_javaObject);
}

int TextView__getBottomPaddingOffset_IMPL_26677(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::TextView__getBottomPaddingOffset_26677_ID,::app::Android::android::widget::TextView___javaClass_3,"getBottomPaddingOffset","()I",GetMethodID,"Id for fallback method android.widget.TextView.getBottomPaddingOffset could not be cached",89);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__getBottomPaddingOffset_26677_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::TextView__getBottomPaddingOffset_26677_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void TextView__getFocusedRect(TextView* __this, ::app::Android::android::graphics::Rect* arg0)
{
    TextView__getFocusedRect_IMPL_26687(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__getFocusedRect_IMPL_26687(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__getFocusedRect_26687_ID,::app::Android::android::widget::TextView___javaClass_3,"getFocusedRect","(Landroid/graphics/Rect;)V",GetMethodID,"Id for fallback method android.widget.TextView.getFocusedRect could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__getFocusedRect_26687_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__getFocusedRect_26687_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

float TextView__getLeftFadingEdgeStrength(TextView* __this)
{
    return TextView__getLeftFadingEdgeStrength_IMPL_26744(NULL, __this->_subclassed, __this->_javaObject);
}

float TextView__getLeftFadingEdgeStrength_IMPL_26744(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    float result;
    CACHE_METHOD(::app::Android::android::widget::TextView__getLeftFadingEdgeStrength_26744_ID,::app::Android::android::widget::TextView___javaClass_3,"getLeftFadingEdgeStrength","()F",GetMethodID,"Id for fallback method android.widget.TextView.getLeftFadingEdgeStrength could not be cached",92);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__getLeftFadingEdgeStrength_26744_ID));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::android::widget::TextView__getLeftFadingEdgeStrength_26744_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int TextView__getLeftPaddingOffset(TextView* __this)
{
    return TextView__getLeftPaddingOffset_IMPL_26675(NULL, __this->_subclassed, __this->_javaObject);
}

int TextView__getLeftPaddingOffset_IMPL_26675(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::TextView__getLeftPaddingOffset_26675_ID,::app::Android::android::widget::TextView___javaClass_3,"getLeftPaddingOffset","()I",GetMethodID,"Id for fallback method android.widget.TextView.getLeftPaddingOffset could not be cached",87);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__getLeftPaddingOffset_26675_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::TextView__getLeftPaddingOffset_26675_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int TextView__getLineCount(TextView* __this)
{
    return TextView__getLineCount_IMPL_26688(NULL, __this->_subclassed, __this->_javaObject);
}

int TextView__getLineCount_IMPL_26688(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::TextView__getLineCount_26688_ID,::app::Android::android::widget::TextView___javaClass_3,"getLineCount","()I",GetMethodID,"Id for fallback method android.widget.TextView.getLineCount could not be cached",79);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__getLineCount_26688_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::TextView__getLineCount_26688_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

float TextView__getRightFadingEdgeStrength(TextView* __this)
{
    return TextView__getRightFadingEdgeStrength_IMPL_26745(NULL, __this->_subclassed, __this->_javaObject);
}

float TextView__getRightFadingEdgeStrength_IMPL_26745(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    float result;
    CACHE_METHOD(::app::Android::android::widget::TextView__getRightFadingEdgeStrength_26745_ID,::app::Android::android::widget::TextView___javaClass_3,"getRightFadingEdgeStrength","()F",GetMethodID,"Id for fallback method android.widget.TextView.getRightFadingEdgeStrength could not be cached",93);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__getRightFadingEdgeStrength_26745_ID));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::android::widget::TextView__getRightFadingEdgeStrength_26745_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int TextView__getRightPaddingOffset(TextView* __this)
{
    return TextView__getRightPaddingOffset_IMPL_26678(NULL, __this->_subclassed, __this->_javaObject);
}

int TextView__getRightPaddingOffset_IMPL_26678(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::TextView__getRightPaddingOffset_26678_ID,::app::Android::android::widget::TextView___javaClass_3,"getRightPaddingOffset","()I",GetMethodID,"Id for fallback method android.widget.TextView.getRightPaddingOffset could not be cached",88);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__getRightPaddingOffset_26678_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::TextView__getRightPaddingOffset_26678_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::content::res::ColorStateList* TextView__getTextColors(TextView* __this)
{
    return ::uCast< ::app::Android::android::content::res::ColorStateList*>(TextView__getTextColors_IMPL_26582(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::content::res::ColorStateList__typeof());
}

::uObject* TextView__getTextColors_IMPL_26582(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::TextView__getTextColors_26582_ID,::app::Android::android::widget::TextView___javaClass_3,"getTextColors","()Landroid/content/res/ColorStateList;",GetMethodID,"Id for fallback method android.widget.TextView.getTextColors could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__getTextColors_26582_ID),result,::app::Android::android::content::res::ColorStateList__typeof(),::app::Android::android::content::res::ColorStateList*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::TextView__getTextColors_26582_ID),result,::app::Android::android::content::res::ColorStateList__typeof(),::app::Android::android::content::res::ColorStateList*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int TextView__getTopPaddingOffset(TextView* __this)
{
    return TextView__getTopPaddingOffset_IMPL_26676(NULL, __this->_subclassed, __this->_javaObject);
}

int TextView__getTopPaddingOffset_IMPL_26676(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::TextView__getTopPaddingOffset_26676_ID,::app::Android::android::widget::TextView___javaClass_3,"getTopPaddingOffset","()I",GetMethodID,"Id for fallback method android.widget.TextView.getTopPaddingOffset could not be cached",86);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__getTopPaddingOffset_26676_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::TextView__getTopPaddingOffset_26676_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool TextView__hasOverlappingRendering(TextView* __this)
{
    return TextView__hasOverlappingRendering_IMPL_26682(NULL, __this->_subclassed, __this->_javaObject);
}

bool TextView__hasOverlappingRendering_IMPL_26682(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__hasOverlappingRendering_26682_ID,::app::Android::android::widget::TextView___javaClass_3,"hasOverlappingRendering","()Z",GetMethodID,"Id for fallback method android.widget.TextView.hasOverlappingRendering could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__hasOverlappingRendering_26682_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__hasOverlappingRendering_26682_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void TextView__invalidateDrawable(TextView* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    TextView__invalidateDrawable_IMPL_26681(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__invalidateDrawable_IMPL_26681(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__invalidateDrawable_26681_ID,::app::Android::android::widget::TextView___javaClass_3,"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.TextView.invalidateDrawable could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__invalidateDrawable_26681_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__invalidateDrawable_26681_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool TextView__isPaddingOffsetRequired(TextView* __this)
{
    return TextView__isPaddingOffsetRequired_IMPL_26674(NULL, __this->_subclassed, __this->_javaObject);
}

bool TextView__isPaddingOffsetRequired_IMPL_26674(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__isPaddingOffsetRequired_26674_ID,::app::Android::android::widget::TextView___javaClass_3,"isPaddingOffsetRequired","()Z",GetMethodID,"Id for fallback method android.widget.TextView.isPaddingOffsetRequired could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__isPaddingOffsetRequired_26674_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__isPaddingOffsetRequired_26674_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void TextView__jumpDrawablesToCurrentState(TextView* __this)
{
    TextView__jumpDrawablesToCurrentState_IMPL_26680(NULL, __this->_subclassed, __this->_javaObject);
}

void TextView__jumpDrawablesToCurrentState_IMPL_26680(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__jumpDrawablesToCurrentState_26680_ID,::app::Android::android::widget::TextView___javaClass_3,"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.TextView.jumpDrawablesToCurrentState could not be cached",94);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__jumpDrawablesToCurrentState_26680_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__jumpDrawablesToCurrentState_26680_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

TextView* TextView__New_9(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    TextView* inst = (TextView*)::uAllocObject(sizeof(TextView), TextView__typeof());
    inst->_ObjInit_8(arg0);
    return inst;
}

void TextView__onAttachedToWindow(TextView* __this)
{
    TextView__onAttachedToWindow_IMPL_26671(NULL, __this->_subclassed, __this->_javaObject);
}

void TextView__onAttachedToWindow_IMPL_26671(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__onAttachedToWindow_26671_ID,::app::Android::android::widget::TextView___javaClass_3,"onAttachedToWindow","()V",GetMethodID,"Id for fallback method android.widget.TextView.onAttachedToWindow could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onAttachedToWindow_26671_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onAttachedToWindow_26671_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool TextView__onCheckIsTextEditor(TextView* __this)
{
    return TextView__onCheckIsTextEditor_IMPL_26695(NULL, __this->_subclassed, __this->_javaObject);
}

bool TextView__onCheckIsTextEditor_IMPL_26695(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onCheckIsTextEditor_26695_ID,::app::Android::android::widget::TextView___javaClass_3,"onCheckIsTextEditor","()Z",GetMethodID,"Id for fallback method android.widget.TextView.onCheckIsTextEditor could not be cached",86);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onCheckIsTextEditor_26695_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__onCheckIsTextEditor_26695_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::Runtime::IntArray* TextView__onCreateDrawableState(TextView* __this, int arg0)
{
    return ::uCast< ::app::Android::Runtime::IntArray*>(TextView__onCreateDrawableState_IMPL_26685(NULL, __this->_subclassed, __this->_javaObject, arg0), ::app::Android::Runtime::IntArray__typeof());
}

::uObject* TextView__onCreateDrawableState_IMPL_26685(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onCreateDrawableState_26685_ID,::app::Android::android::widget::TextView___javaClass_3,"onCreateDrawableState","(I)[I",GetMethodID,"Id for fallback method android.widget.TextView.onCreateDrawableState could not be cached",88);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onCreateDrawableState_26685_ID, ((jint)arg2_)),result,::app::Android::Runtime::IntArray__typeof(),::app::Android::Runtime::IntArray*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::TextView__onCreateDrawableState_26685_ID, ((jint)arg2_)),result,::app::Android::Runtime::IntArray__typeof(),::app::Android::Runtime::IntArray*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::uObject* TextView__onCreateInputConnection(TextView* __this, ::app::Android::android::view::inputmethod::EditorInfo* arg0)
{
    return (::uObject*)TextView__onCreateInputConnection_IMPL_26696(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* TextView__onCreateInputConnection_IMPL_26696(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onCreateInputConnection_26696_ID,::app::Android::android::widget::TextView___javaClass_3,"onCreateInputConnection","(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",GetMethodID,"Id for fallback method android.widget.TextView.onCreateInputConnection could not be cached",90);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onCreateInputConnection_26696_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__typeof(),::uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::TextView__onCreateInputConnection_26696_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_inputmethod_InputConnection__typeof(),::uObject*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void TextView__onDetachedFromWindow(TextView* __this)
{
    TextView__onDetachedFromWindow_IMPL_26672(NULL, __this->_subclassed, __this->_javaObject);
}

void TextView__onDetachedFromWindow_IMPL_26672(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__onDetachedFromWindow_26672_ID,::app::Android::android::widget::TextView___javaClass_3,"onDetachedFromWindow","()V",GetMethodID,"Id for fallback method android.widget.TextView.onDetachedFromWindow could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onDetachedFromWindow_26672_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onDetachedFromWindow_26672_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool TextView__onDragEvent(TextView* __this, ::app::Android::android::view::DragEvent* arg0)
{
    return TextView__onDragEvent_IMPL_26766(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool TextView__onDragEvent_IMPL_26766(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onDragEvent_26766_ID,::app::Android::android::widget::TextView___javaClass_3,"onDragEvent","(Landroid/view/DragEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onDragEvent could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onDragEvent_26766_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__onDragEvent_26766_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void TextView__onDraw(TextView* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    TextView__onDraw_IMPL_26686(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__onDraw_IMPL_26686(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__onDraw_26686_ID,::app::Android::android::widget::TextView___javaClass_3,"onDraw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.TextView.onDraw could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onDraw_26686_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onDraw_26686_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__onFinishTemporaryDetach(TextView* __this)
{
    TextView__onFinishTemporaryDetach_IMPL_26732(NULL, __this->_subclassed, __this->_javaObject);
}

void TextView__onFinishTemporaryDetach_IMPL_26732(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__onFinishTemporaryDetach_26732_ID,::app::Android::android::widget::TextView___javaClass_3,"onFinishTemporaryDetach","()V",GetMethodID,"Id for fallback method android.widget.TextView.onFinishTemporaryDetach could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onFinishTemporaryDetach_26732_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onFinishTemporaryDetach_26732_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__onFocusChanged(TextView* __this, bool arg0, int arg1, ::app::Android::android::graphics::Rect* arg2)
{
    TextView__onFocusChanged_IMPL_26733(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

void TextView__onFocusChanged_IMPL_26733(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    CACHE_METHOD(::app::Android::android::widget::TextView__onFocusChanged_26733_ID,::app::Android::android::widget::TextView___javaClass_3,"onFocusChanged","(ZILandroid/graphics/Rect;)V",GetMethodID,"Id for fallback method android.widget.TextView.onFocusChanged could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onFocusChanged_26733_ID, ((jboolean)arg2_), ((jint)arg3_), _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onFocusChanged_26733_ID, ((jboolean)arg2_), ((jint)arg3_), _obArg4);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool TextView__onGenericMotionEvent(TextView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return TextView__onGenericMotionEvent_IMPL_26739(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool TextView__onGenericMotionEvent_IMPL_26739(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onGenericMotionEvent_26739_ID,::app::Android::android::widget::TextView___javaClass_3,"onGenericMotionEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onGenericMotionEvent could not be cached",87);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onGenericMotionEvent_26739_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__onGenericMotionEvent_26739_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void TextView__onInitializeAccessibilityEvent(TextView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    TextView__onInitializeAccessibilityEvent_IMPL_26754(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__onInitializeAccessibilityEvent_IMPL_26754(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__onInitializeAccessibilityEvent_26754_ID,::app::Android::android::widget::TextView___javaClass_3,"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.TextView.onInitializeAccessibilityEvent could not be cached",97);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onInitializeAccessibilityEvent_26754_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onInitializeAccessibilityEvent_26754_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__onInitializeAccessibilityNodeInfo(TextView* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    TextView__onInitializeAccessibilityNodeInfo_IMPL_26755(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__onInitializeAccessibilityNodeInfo_IMPL_26755(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__onInitializeAccessibilityNodeInfo_26755_ID,::app::Android::android::widget::TextView___javaClass_3,"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.TextView.onInitializeAccessibilityNodeInfo could not be cached",100);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onInitializeAccessibilityNodeInfo_26755_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onInitializeAccessibilityNodeInfo_26755_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool TextView__onKeyDown(TextView* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1)
{
    return TextView__onKeyDown_IMPL_26692(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool TextView__onKeyDown_IMPL_26692(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onKeyDown_26692_ID,::app::Android::android::widget::TextView___javaClass_3,"onKeyDown","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onKeyDown could not be cached",76);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onKeyDown_26692_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__onKeyDown_26692_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool TextView__onKeyMultiple(TextView* __this, int arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2)
{
    return TextView__onKeyMultiple_IMPL_26693(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

bool TextView__onKeyMultiple_IMPL_26693(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onKeyMultiple_26693_ID,::app::Android::android::widget::TextView___javaClass_3,"onKeyMultiple","(IILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onKeyMultiple could not be cached",80);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onKeyMultiple_26693_ID, ((jint)arg2_), ((jint)arg3_), _obArg4));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__onKeyMultiple_26693_ID, ((jint)arg2_), ((jint)arg3_), _obArg4));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool TextView__onKeyPreIme(TextView* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1)
{
    return TextView__onKeyPreIme_IMPL_26691(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool TextView__onKeyPreIme_IMPL_26691(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onKeyPreIme_26691_ID,::app::Android::android::widget::TextView___javaClass_3,"onKeyPreIme","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onKeyPreIme could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onKeyPreIme_26691_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__onKeyPreIme_26691_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool TextView__onKeyShortcut(TextView* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1)
{
    return TextView__onKeyShortcut_IMPL_26752(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool TextView__onKeyShortcut_IMPL_26752(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onKeyShortcut_26752_ID,::app::Android::android::widget::TextView___javaClass_3,"onKeyShortcut","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onKeyShortcut could not be cached",80);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onKeyShortcut_26752_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__onKeyShortcut_26752_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool TextView__onKeyUp(TextView* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1)
{
    return TextView__onKeyUp_IMPL_26694(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool TextView__onKeyUp_IMPL_26694(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onKeyUp_26694_ID,::app::Android::android::widget::TextView___javaClass_3,"onKeyUp","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onKeyUp could not be cached",74);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onKeyUp_26694_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__onKeyUp_26694_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void TextView__onLayout(TextView* __this, bool arg0, int arg1, int arg2, int arg3, int arg4)
{
    TextView__onLayout_IMPL_26709(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3, arg4);
}

void TextView__onLayout_IMPL_26709(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__onLayout_26709_ID,::app::Android::android::widget::TextView___javaClass_3,"onLayout","(ZIIII)V",GetMethodID,"Id for fallback method android.widget.TextView.onLayout could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onLayout_26709_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onLayout_26709_ID, ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__onMeasure(TextView* __this, int arg0, int arg1)
{
    TextView__onMeasure_IMPL_26708(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void TextView__onMeasure_IMPL_26708(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__onMeasure_26708_ID,::app::Android::android::widget::TextView___javaClass_3,"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.TextView.onMeasure could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onMeasure_26708_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onMeasure_26708_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__onPopulateAccessibilityEvent(TextView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    TextView__onPopulateAccessibilityEvent_IMPL_26753(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__onPopulateAccessibilityEvent_IMPL_26753(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__onPopulateAccessibilityEvent_26753_ID,::app::Android::android::widget::TextView___javaClass_3,"onPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.TextView.onPopulateAccessibilityEvent could not be cached",95);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onPopulateAccessibilityEvent_26753_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onPopulateAccessibilityEvent_26753_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__onRtlPropertiesChanged(TextView* __this, int arg0)
{
    TextView__onRtlPropertiesChanged_IMPL_26767(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__onRtlPropertiesChanged_IMPL_26767(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__onRtlPropertiesChanged_26767_ID,::app::Android::android::widget::TextView___javaClass_3,"onRtlPropertiesChanged","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.onRtlPropertiesChanged could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onRtlPropertiesChanged_26767_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onRtlPropertiesChanged_26767_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__onScreenStateChanged(TextView* __this, int arg0)
{
    TextView__onScreenStateChanged_IMPL_26673(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__onScreenStateChanged_IMPL_26673(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__onScreenStateChanged_26673_ID,::app::Android::android::widget::TextView___javaClass_3,"onScreenStateChanged","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.onScreenStateChanged could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onScreenStateChanged_26673_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onScreenStateChanged_26673_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__onScrollChanged(TextView* __this, int arg0, int arg1, int arg2, int arg3)
{
    TextView__onScrollChanged_IMPL_26761(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void TextView__onScrollChanged_IMPL_26761(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__onScrollChanged_26761_ID,::app::Android::android::widget::TextView___javaClass_3,"onScrollChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.TextView.onScrollChanged could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onScrollChanged_26761_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onScrollChanged_26761_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__onStartTemporaryDetach(TextView* __this)
{
    TextView__onStartTemporaryDetach_IMPL_26731(NULL, __this->_subclassed, __this->_javaObject);
}

void TextView__onStartTemporaryDetach_IMPL_26731(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__onStartTemporaryDetach_26731_ID,::app::Android::android::widget::TextView___javaClass_3,"onStartTemporaryDetach","()V",GetMethodID,"Id for fallback method android.widget.TextView.onStartTemporaryDetach could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onStartTemporaryDetach_26731_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onStartTemporaryDetach_26731_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool TextView__onTouchEvent(TextView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return TextView__onTouchEvent_IMPL_26738(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool TextView__onTouchEvent_IMPL_26738(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onTouchEvent_26738_ID,::app::Android::android::widget::TextView___javaClass_3,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onTouchEvent could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onTouchEvent_26738_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__onTouchEvent_26738_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool TextView__onTrackballEvent(TextView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return TextView__onTrackballEvent_IMPL_26742(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool TextView__onTrackballEvent_IMPL_26742(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onTrackballEvent_26742_ID,::app::Android::android::widget::TextView___javaClass_3,"onTrackballEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onTrackballEvent could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onTrackballEvent_26742_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__onTrackballEvent_26742_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void TextView__onVisibilityChanged(TextView* __this, ::app::Android::android::view::View* arg0, int arg1)
{
    TextView__onVisibilityChanged_IMPL_26735(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void TextView__onVisibilityChanged_IMPL_26735(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__onVisibilityChanged_26735_ID,::app::Android::android::widget::TextView___javaClass_3,"onVisibilityChanged","(Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.widget.TextView.onVisibilityChanged could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onVisibilityChanged_26735_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onVisibilityChanged_26735_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__onWindowFocusChanged(TextView* __this, bool arg0)
{
    TextView__onWindowFocusChanged_IMPL_26734(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__onWindowFocusChanged_IMPL_26734(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__onWindowFocusChanged_26734_ID,::app::Android::android::widget::TextView___javaClass_3,"onWindowFocusChanged","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.onWindowFocusChanged could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onWindowFocusChanged_26734_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onWindowFocusChanged_26734_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool TextView__performAccessibilityAction(TextView* __this, int arg0, ::app::Android::android::os::Bundle* arg1)
{
    return TextView__performAccessibilityAction_IMPL_26756(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool TextView__performAccessibilityAction_IMPL_26756(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__performAccessibilityAction_26756_ID,::app::Android::android::widget::TextView___javaClass_3,"performAccessibilityAction","(ILandroid/os/Bundle;)Z",GetMethodID,"Id for fallback method android.widget.TextView.performAccessibilityAction could not be cached",93);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__performAccessibilityAction_26756_ID, ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__performAccessibilityAction_26756_ID, ((jint)arg2_), _obArg3));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

bool TextView__performLongClick(TextView* __this)
{
    return TextView__performLongClick_IMPL_26760(NULL, __this->_subclassed, __this->_javaObject);
}

bool TextView__performLongClick_IMPL_26760(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__performLongClick_26760_ID,::app::Android::android::widget::TextView___javaClass_3,"performLongClick","()Z",GetMethodID,"Id for fallback method android.widget.TextView.performLongClick could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__performLongClick_26760_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__performLongClick_26760_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void TextView__removeTextChangedListener(TextView* __this, ::uObject* arg0)
{
    TextView__removeTextChangedListener_IMPL_26730(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__removeTextChangedListener_IMPL_26730(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__removeTextChangedListener_26730_ID,::app::Android::android::widget::TextView___javaClass_3,"removeTextChangedListener","(Landroid/text/TextWatcher;)V",GetMethodID,"Id for fallback method android.widget.TextView.removeTextChangedListener could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__removeTextChangedListener_26730_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__removeTextChangedListener_26730_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__sendAccessibilityEvent(TextView* __this, int arg0)
{
    TextView__sendAccessibilityEvent_IMPL_26757(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__sendAccessibilityEvent_IMPL_26757(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__sendAccessibilityEvent_26757_ID,::app::Android::android::widget::TextView___javaClass_3,"sendAccessibilityEvent","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.sendAccessibilityEvent could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__sendAccessibilityEvent_26757_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__sendAccessibilityEvent_26757_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setEllipsize(TextView* __this, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg0)
{
    TextView__setEllipsize_IMPL_26720(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__setEllipsize_IMPL_26720(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__setEllipsize_26720_ID,::app::Android::android::widget::TextView___javaClass_3,"setEllipsize","(Landroid/text/TextUtils$TruncateAt;)V",GetMethodID,"Id for fallback method android.widget.TextView.setEllipsize could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setEllipsize_26720_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setEllipsize_26720_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setEnabled(TextView* __this, bool arg0)
{
    TextView__setEnabled_IMPL_26528(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setEnabled_IMPL_26528(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setEnabled_26528_ID,::app::Android::android::widget::TextView___javaClass_3,"setEnabled","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.setEnabled could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setEnabled_26528_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setEnabled_26528_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setGravity(TextView* __this, int arg0)
{
    TextView__setGravity_IMPL_26603(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setGravity_IMPL_26603(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setGravity_26603_ID,::app::Android::android::widget::TextView___javaClass_3,"setGravity","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setGravity could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setGravity_26603_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setGravity_26603_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setHorizontallyScrolling(TextView* __this, bool arg0)
{
    TextView__setHorizontallyScrolling_IMPL_26607(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setHorizontallyScrolling_IMPL_26607(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setHorizontallyScrolling_26607_ID,::app::Android::android::widget::TextView___javaClass_3,"setHorizontallyScrolling","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.setHorizontallyScrolling could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setHorizontallyScrolling_26607_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setHorizontallyScrolling_26607_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setIncludeFontPadding(TextView* __this, bool arg0)
{
    TextView__setIncludeFontPadding_IMPL_26706(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setIncludeFontPadding_IMPL_26706(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setIncludeFontPadding_26706_ID,::app::Android::android::widget::TextView___javaClass_3,"setIncludeFontPadding","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.setIncludeFontPadding could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setIncludeFontPadding_26706_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setIncludeFontPadding_26706_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setInputType(TextView* __this, int arg0)
{
    TextView__setInputType_IMPL_26650(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setInputType_IMPL_26650(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setInputType_26650_ID,::app::Android::android::widget::TextView___javaClass_3,"setInputType","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setInputType could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setInputType_26650_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setInputType_26650_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setMaxLines(TextView* __this, int arg0)
{
    TextView__setMaxLines_IMPL_26612(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setMaxLines_IMPL_26612(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setMaxLines_26612_ID,::app::Android::android::widget::TextView___javaClass_3,"setMaxLines","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setMaxLines could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setMaxLines_26612_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setMaxLines_26612_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setOnEditorActionListener(TextView* __this, ::uObject* arg0)
{
    TextView__setOnEditorActionListener_IMPL_26658(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__setOnEditorActionListener_IMPL_26658(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__setOnEditorActionListener_26658_ID,::app::Android::android::widget::TextView___javaClass_3,"setOnEditorActionListener","(Landroid/widget/TextView$OnEditorActionListener;)V",GetMethodID,"Id for fallback method android.widget.TextView.setOnEditorActionListener could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setOnEditorActionListener_26658_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setOnEditorActionListener_26658_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setPadding(TextView* __this, int arg0, int arg1, int arg2, int arg3)
{
    TextView__setPadding_IMPL_26567(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void TextView__setPadding_IMPL_26567(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setPadding_26567_ID,::app::Android::android::widget::TextView___javaClass_3,"setPadding","(IIII)V",GetMethodID,"Id for fallback method android.widget.TextView.setPadding could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setPadding_26567_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setPadding_26567_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setPaddingRelative(TextView* __this, int arg0, int arg1, int arg2, int arg3)
{
    TextView__setPaddingRelative_IMPL_26568(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void TextView__setPaddingRelative_IMPL_26568(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setPaddingRelative_26568_ID,::app::Android::android::widget::TextView___javaClass_3,"setPaddingRelative","(IIII)V",GetMethodID,"Id for fallback method android.widget.TextView.setPaddingRelative could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setPaddingRelative_26568_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setPaddingRelative_26568_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setSelected(TextView* __this, bool arg0)
{
    TextView__setSelected_IMPL_26737(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setSelected_IMPL_26737(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setSelected_26737_ID,::app::Android::android::widget::TextView___javaClass_3,"setSelected","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.setSelected could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setSelected_26737_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setSelected_26737_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setText_1(TextView* __this, ::uObject* arg0)
{
    TextView__setText_IMPL_26640(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__setText_IMPL_26640(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__setText_26640_ID,::app::Android::android::widget::TextView___javaClass_3,"setText","(Ljava/lang/CharSequence;)V",GetMethodID,"Id for fallback method android.widget.TextView.setText could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setText_26640_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setText_26640_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setTextColor_1(TextView* __this, int arg0)
{
    TextView__setTextColor_IMPL_26580(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setTextColor_IMPL_26580(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setTextColor_26580_ID,::app::Android::android::widget::TextView___javaClass_3,"setTextColor","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setTextColor could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setTextColor_26580_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setTextColor_26580_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setTextSize_1(TextView* __this, int arg0, float arg1)
{
    TextView__setTextSize_IMPL_26575(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void TextView__setTextSize_IMPL_26575(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, float arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setTextSize_26575_ID,::app::Android::android::widget::TextView___javaClass_3,"setTextSize","(IF)V",GetMethodID,"Id for fallback method android.widget.TextView.setTextSize could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setTextSize_26575_ID, ((jint)arg2_), ((jfloat)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setTextSize_26575_ID, ((jint)arg2_), ((jfloat)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

void TextView__setTypeface(TextView* __this, ::app::Android::android::graphics::Typeface* arg0)
{
    TextView__setTypeface_IMPL_26578(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__setTypeface_IMPL_26578(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__setTypeface_26578_ID,::app::Android::android::widget::TextView___javaClass_3,"setTypeface","(Landroid/graphics/Typeface;)V",GetMethodID,"Id for fallback method android.widget.TextView.setTypeface could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setTypeface_26578_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setTypeface_26578_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

bool TextView__verifyDrawable(TextView* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return TextView__verifyDrawable_IMPL_26679(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool TextView__verifyDrawable_IMPL_26679(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__verifyDrawable_26679_ID,::app::Android::android::widget::TextView___javaClass_3,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z",GetMethodID,"Id for fallback method android.widget.TextView.verifyDrawable could not be cached",81);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__verifyDrawable_26679_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__verifyDrawable_26679_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* TextViewDLROnEditorActionListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.widget.TextViewDLROnEditorActionListener");

    ::uRegisterType(type);
    return type;
}

}}}}
