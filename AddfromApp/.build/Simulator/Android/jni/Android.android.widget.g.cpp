// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.Context.h>
#include <Android.android.content.res.ColorStateList.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.Canvas.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.graphics.Matrix.h>
#include <Android.android.graphics.Rect.h>
#include <Android.android.graphics.Region.h>
#include <Android.android.graphics.Typeface.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.Parcelable.h>
#include <Android.android.text.TextUtilsDLRTruncateAt.h>
#include <Android.android.text.TextWatcher.h>
#include <Android.android.util.AttributeSet.h>
#include <Android.android.view.accessibility.AccessibilityEvent.h>
#include <Android.android.view.accessibility.AccessibilityNodeInfo.h>
#include <Android.android.view.animation.Interpolator.h>
#include <Android.android.view.DragEvent.h>
#include <Android.android.view.inputmethod.EditorInfo.h>
#include <Android.android.view.inputmethod.InputConnection.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.View.h>
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.android.widget.AbsoluteLayout.h>
#include <Android.android.widget.AbsSeekBar.h>
#include <Android.android.widget.Button.h>
#include <Android.android.widget.CompoundButton.h>
#include <Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h>
#include <Android.android.widget.EditText.h>
#include <Android.android.widget.FrameLayout.h>
#include <Android.android.widget.FrameLayoutDLRLayoutParams.h>
#include <Android.android.widget.HorizontalScrollView.h>
#include <Android.android.widget.ImageView.h>
#include <Android.android.widget.ImageViewDLRScaleType.h>
#include <Android.android.widget.ProgressBar.h>
#include <Android.android.widget.RelativeLayout.h>
#include <Android.android.widget.RelativeLayoutDLRLayoutParams.h>
#include <Android.android.widget.ScrollView.h>
#include <Android.android.widget.SeekBar.h>
#include <Android.android.widget.SeekBarDLROnSeekBarChangeListener.h>
#include <Android.android.widget.Switch.h>
#include <Android.android.widget.TextView.h>
#include <Android.android.widget.TextViewDLROnEditorActionListener.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <Android.Fallbacks.Android_android_os_Parcelable.h>
#include <Android.Fallbacks.Android_android_view_animation_Interpolator.h>
#include <Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h>
#include <Android.Fallbacks.Android_android_widget_AbsSeekBar.h>
#include <Android.Fallbacks.Android_android_widget_CompoundButton.h>
#include <Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h>
#include <Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h>
#include <Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.util.ArrayList.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Type.h>
static uType* TYPES[10];

namespace g{
namespace Android{
namespace android{
namespace widget{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(7534)
// -----------------------------------------------------------------------------

// public extern class AbsoluteLayout :7534
// {
::g::Android::android::view::ViewGroup_type* AbsoluteLayout_typeof()
{
    static uSStrong< ::g::Android::android::view::ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(AbsoluteLayout);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Android.android.widget.AbsoluteLayout", options);
    type->SetBase(::g::Android::android::view::ViewGroup_typeof());
    type->fp_generateLayoutParams = (void(*)(::g::Android::android::view::ViewGroup*, uObject*, ::g::Android::android::view::ViewGroupDLRLayoutParams**))AbsoluteLayout__generateLayoutParams_fn;
    type->fp_shouldDelayChildPressedState = (void(*)(::g::Android::android::view::ViewGroup*, bool*))AbsoluteLayout__shouldDelayChildPressedState_fn;
    type->interface2.fp_requestLayout = (void(*)(uObject*))::g::Android::android::view::View__requestLayout_fn;
    type->interface2.fp_isLayoutRequested = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutRequested_fn;
    type->interface2.fp_requestTransparentRegion = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestTransparentRegion_fn;
    type->interface2.fp_invalidateChild = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*))::g::Android::android::view::ViewGroup__invalidateChild_fn;
    type->interface2.fp_invalidateChildInParent = (void(*)(uObject*, ::g::Android::Runtime::IntArray*, ::g::Android::android::graphics::Rect*, uObject**))::g::Android::android::view::ViewGroup__invalidateChildInParent_fn;
    type->interface2.fp_getParent = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParent_fn;
    type->interface2.fp_requestChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestChildFocus_fn;
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
    type->interface2.fp_requestDisallowInterceptTouchEvent = (void(*)(uObject*, bool*))::g::Android::android::view::ViewGroup__requestDisallowInterceptTouchEvent_fn;
    type->interface2.fp_requestChildRectangleOnScreen = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*))::g::Android::android::view::ViewGroup__requestChildRectangleOnScreen_fn;
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
    ::TYPES[0] = ::g::Android::android::view::ViewGroupDLRLayoutParams_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1),
        ::g::Android::android::view::ViewParent_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::AbsoluteLayout::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsoluteLayout::generateLayoutParams_24586_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsoluteLayout::shouldDelayChildPressedState_24589_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("_Init", NULL, (void*)AbsoluteLayout___Init4_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("generateLayoutParams_IMPL_24586", NULL, (void*)AbsoluteLayout__generateLayoutParams_IMPL_24586_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("shouldDelayChildPressedState_IMPL_24589", NULL, (void*)AbsoluteLayout__shouldDelayChildPressedState_IMPL_24589_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
    return type;
}

// public AbsoluteLayout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :7539
void AbsoluteLayout__ctor_15_fn(AbsoluteLayout* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_15(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :7538
void AbsoluteLayout___Init4_fn()
{
    AbsoluteLayout::_Init4();
}

// public override sealed Android.android.view.ViewGroupDLRLayoutParams generateLayoutParams(Android.android.util.AttributeSet arg0) :7609
void AbsoluteLayout__generateLayoutParams_fn(AbsoluteLayout* __this, uObject* arg0, ::g::Android::android::view::ViewGroupDLRLayoutParams** __retval)
{
    return *__retval = uCast< ::g::Android::android::view::ViewGroupDLRLayoutParams*>(AbsoluteLayout::generateLayoutParams_IMPL_24586(__this->_subclassed, __this->_javaObject, arg0), ::TYPES[0/*Android.android.view.ViewGroupDLRLayoutParams*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper generateLayoutParams_IMPL_24586(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :7646
void AbsoluteLayout__generateLayoutParams_IMPL_24586_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = AbsoluteLayout::generateLayoutParams_IMPL_24586(*arg0_, *arg1_, arg2_);
}

// public override bool shouldDelayChildPressedState() :7627
void AbsoluteLayout__shouldDelayChildPressedState_fn(AbsoluteLayout* __this, bool* __retval)
{
    return *__retval = AbsoluteLayout::shouldDelayChildPressedState_IMPL_24589(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool shouldDelayChildPressedState_IMPL_24589(bool arg0, Android.Base.Primitives.ujobject arg1) :7655
void AbsoluteLayout__shouldDelayChildPressedState_IMPL_24589_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = AbsoluteLayout::shouldDelayChildPressedState_IMPL_24589(*arg0_, *arg1_);
}

jclass AbsoluteLayout::_javaClass4_;
jmethodID AbsoluteLayout::generateLayoutParams_24586_ID_;
jmethodID AbsoluteLayout::shouldDelayChildPressedState_24589_ID_;

// public AbsoluteLayout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :7539
void AbsoluteLayout::ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_11(obj, utype, hasFallbackClass, resolveType);
}

// public static extern new void _Init() [static] :7538
void AbsoluteLayout::_Init4()
{
    if (AbsoluteLayout::_javaClass4()) { return; }
    INIT_JNI;
    AbsoluteLayout::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/AbsoluteLayout"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AbsoluteLayout::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.AbsoluteLayout'", 53);; }
}

// public static extern Android.Base.Wrappers.IJWrapper generateLayoutParams_IMPL_24586(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :7646
uObject* AbsoluteLayout::generateLayoutParams_IMPL_24586(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbsoluteLayout::_javaClass4(),AbsoluteLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(AbsoluteLayout::generateLayoutParams_24586_ID(),AbsoluteLayout::_javaClass4(),"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;",GetMethodID,"Id for fallback method android.widget.AbsoluteLayout.generateLayoutParams could not be cached",93);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbsoluteLayout::_javaClass4(), AbsoluteLayout::generateLayoutParams_24586_ID(), _obArg2),result,::g::Android::android::view::ViewGroupDLRLayoutParams_typeof(),::g::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbsoluteLayout::generateLayoutParams_24586_ID(), _obArg2),result,::g::Android::android::view::ViewGroupDLRLayoutParams_typeof(),::g::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool shouldDelayChildPressedState_IMPL_24589(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :7655
bool AbsoluteLayout::shouldDelayChildPressedState_IMPL_24589(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbsoluteLayout::_javaClass4(),AbsoluteLayout::_Init4());
    
    bool result;
    CACHE_METHOD(AbsoluteLayout::shouldDelayChildPressedState_24589_ID(),AbsoluteLayout::_javaClass4(),"shouldDelayChildPressedState","()Z",GetMethodID,"Id for fallback method android.widget.AbsoluteLayout.shouldDelayChildPressedState could not be cached",101);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbsoluteLayout::_javaClass4(), AbsoluteLayout::shouldDelayChildPressedState_24589_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbsoluteLayout::shouldDelayChildPressedState_24589_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(2238)
// -----------------------------------------------------------------------------

// public abstract extern class AbsSeekBar :2238
// {
::g::Android::android::widget::ProgressBar_type* AbsSeekBar_typeof()
{
    static uSStrong< ::g::Android::android::widget::ProgressBar_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AbsSeekBar);
    options.TypeSize = sizeof(::g::Android::android::widget::ProgressBar_type);
    type = (::g::Android::android::widget::ProgressBar_type*)uClassType::New("Android.android.widget.AbsSeekBar", options);
    type->SetBase(::g::Android::android::widget::ProgressBar_typeof());
    type->fp_jumpDrawablesToCurrentState = (void(*)(::g::Android::android::view::View*))AbsSeekBar__jumpDrawablesToCurrentState_fn;
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))AbsSeekBar__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))AbsSeekBar__onInitializeAccessibilityNodeInfo_fn;
    type->fp_onKeyDown = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::view::KeyEvent*, bool*))AbsSeekBar__onKeyDown_fn;
    type->fp_onRtlPropertiesChanged = (void(*)(::g::Android::android::view::View*, int*))AbsSeekBar__onRtlPropertiesChanged_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))AbsSeekBar__onTouchEvent_fn;
    type->fp_performAccessibilityAction = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::os::Bundle*, bool*))AbsSeekBar__performAccessibilityAction_fn;
    type->fp_setMax = (void(*)(::g::Android::android::widget::ProgressBar*, int*))AbsSeekBar__setMax_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::android::graphics::drawable::Drawable_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::widget::ProgressBar_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::widget::ProgressBar_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::AbsSeekBar_24535_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::AbsSeekBar_24536_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::AbsSeekBar_24537_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::drawableStateChanged_24547_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::getKeyProgressIncrement_24543_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::getThumb_24539_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::getThumbOffset_24540_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::jumpDrawablesToCurrentState_24546_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::onDraw_24549_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::onInitializeAccessibilityEvent_24553_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::onInitializeAccessibilityNodeInfo_24554_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::onKeyDown_24552_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::onMeasure_24550_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::onRtlPropertiesChanged_24556_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::onSizeChanged_24548_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::onTouchEvent_24551_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::performAccessibilityAction_24555_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::setKeyProgressIncrement_24542_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::setMax_24544_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::setThumb_24538_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::setThumbOffset_24541_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::verifyDrawable_24545_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(26,
        new uFunction("_Init", NULL, (void*)AbsSeekBar___Init4_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("drawableStateChanged_IMPL_24547", NULL, (void*)AbsSeekBar__drawableStateChanged_IMPL_24547_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getKeyProgressIncrement", NULL, (void*)AbsSeekBar__getKeyProgressIncrement_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getKeyProgressIncrement_IMPL_24543", NULL, (void*)AbsSeekBar__getKeyProgressIncrement_IMPL_24543_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getThumb", NULL, (void*)AbsSeekBar__getThumb_fn, 0, false, ::g::Android::android::graphics::drawable::Drawable_typeof(), 0),
        new uFunction("getThumb_IMPL_24539", NULL, (void*)AbsSeekBar__getThumb_IMPL_24539_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getThumbOffset", NULL, (void*)AbsSeekBar__getThumbOffset_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getThumbOffset_IMPL_24540", NULL, (void*)AbsSeekBar__getThumbOffset_IMPL_24540_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("jumpDrawablesToCurrentState_IMPL_24546", NULL, (void*)AbsSeekBar__jumpDrawablesToCurrentState_IMPL_24546_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onDraw_IMPL_24549", NULL, (void*)AbsSeekBar__onDraw_IMPL_24549_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_24553", NULL, (void*)AbsSeekBar__onInitializeAccessibilityEvent_IMPL_24553_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_24554", NULL, (void*)AbsSeekBar__onInitializeAccessibilityNodeInfo_IMPL_24554_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onKeyDown_IMPL_24552", NULL, (void*)AbsSeekBar__onKeyDown_IMPL_24552_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onMeasure_IMPL_24550", NULL, (void*)AbsSeekBar__onMeasure_IMPL_24550_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onRtlPropertiesChanged_IMPL_24556", NULL, (void*)AbsSeekBar__onRtlPropertiesChanged_IMPL_24556_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onSizeChanged_IMPL_24548", NULL, (void*)AbsSeekBar__onSizeChanged_IMPL_24548_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onTouchEvent_IMPL_24551", NULL, (void*)AbsSeekBar__onTouchEvent_IMPL_24551_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("performAccessibilityAction_IMPL_24555", NULL, (void*)AbsSeekBar__performAccessibilityAction_IMPL_24555_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setKeyProgressIncrement", NULL, (void*)AbsSeekBar__setKeyProgressIncrement_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setKeyProgressIncrement_IMPL_24542", NULL, (void*)AbsSeekBar__setKeyProgressIncrement_IMPL_24542_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setMax_IMPL_24544", NULL, (void*)AbsSeekBar__setMax_IMPL_24544_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setThumb", NULL, (void*)AbsSeekBar__setThumb_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::graphics::drawable::Drawable_typeof()),
        new uFunction("setThumb_IMPL_24538", NULL, (void*)AbsSeekBar__setThumb_IMPL_24538_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setThumbOffset", NULL, (void*)AbsSeekBar__setThumbOffset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setThumbOffset_IMPL_24541", NULL, (void*)AbsSeekBar__setThumbOffset_IMPL_24541_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("verifyDrawable_IMPL_24545", NULL, (void*)AbsSeekBar__verifyDrawable_IMPL_24545_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// protected AbsSeekBar(Android.android.content.Context arg0) :2245
void AbsSeekBar__ctor_12_fn(AbsSeekBar* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_12(arg0);
}

// protected AbsSeekBar(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :2261
void AbsSeekBar__ctor_13_fn(AbsSeekBar* __this, ::g::Android::android::content::Context* arg0, uObject* arg1)
{
    __this->ctor_13(arg0, arg1);
}

// protected AbsSeekBar(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :2278
void AbsSeekBar__ctor_14_fn(AbsSeekBar* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2)
{
    __this->ctor_14(arg0, arg1, *arg2);
}

// protected AbsSeekBar(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :2243
void AbsSeekBar__ctor_15_fn(AbsSeekBar* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_15(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :2242
void AbsSeekBar___Init4_fn()
{
    AbsSeekBar::_Init4();
}

// public static extern void drawableStateChanged_IMPL_24547(bool arg0, Android.Base.Primitives.ujobject arg1) :2440
void AbsSeekBar__drawableStateChanged_IMPL_24547_fn(bool* arg0_, jobject* arg1_)
{
    AbsSeekBar::drawableStateChanged_IMPL_24547(*arg0_, *arg1_);
}

// public int getKeyProgressIncrement() :2325
void AbsSeekBar__getKeyProgressIncrement_fn(AbsSeekBar* __this, int* __retval)
{
    *__retval = __this->getKeyProgressIncrement();
}

// public static extern int getKeyProgressIncrement_IMPL_24543(bool arg0, Android.Base.Primitives.ujobject arg1) :2428
void AbsSeekBar__getKeyProgressIncrement_IMPL_24543_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = AbsSeekBar::getKeyProgressIncrement_IMPL_24543(*arg0_, *arg1_);
}

// public Android.android.graphics.drawable.Drawable getThumb() :2301
void AbsSeekBar__getThumb_fn(AbsSeekBar* __this, ::g::Android::android::graphics::drawable::Drawable** __retval)
{
    *__retval = __this->getThumb();
}

// public static extern Android.Base.Wrappers.IJWrapper getThumb_IMPL_24539(bool arg0, Android.Base.Primitives.ujobject arg1) :2416
void AbsSeekBar__getThumb_IMPL_24539_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = AbsSeekBar::getThumb_IMPL_24539(*arg0_, *arg1_);
}

// public int getThumbOffset() :2307
void AbsSeekBar__getThumbOffset_fn(AbsSeekBar* __this, int* __retval)
{
    *__retval = __this->getThumbOffset();
}

// public static extern int getThumbOffset_IMPL_24540(bool arg0, Android.Base.Primitives.ujobject arg1) :2419
void AbsSeekBar__getThumbOffset_IMPL_24540_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = AbsSeekBar::getThumbOffset_IMPL_24540(*arg0_, *arg1_);
}

// public override sealed void jumpDrawablesToCurrentState() :2343
void AbsSeekBar__jumpDrawablesToCurrentState_fn(AbsSeekBar* __this)
{
    AbsSeekBar::jumpDrawablesToCurrentState_IMPL_24546(__this->_subclassed, __this->_javaObject);
}

// public static extern void jumpDrawablesToCurrentState_IMPL_24546(bool arg0, Android.Base.Primitives.ujobject arg1) :2437
void AbsSeekBar__jumpDrawablesToCurrentState_IMPL_24546_fn(bool* arg0_, jobject* arg1_)
{
    AbsSeekBar::jumpDrawablesToCurrentState_IMPL_24546(*arg0_, *arg1_);
}

// public static extern void onDraw_IMPL_24549(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2446
void AbsSeekBar__onDraw_IMPL_24549_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    AbsSeekBar::onDraw_IMPL_24549(*arg0_, *arg1_, arg2_);
}

// public override void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :2385
void AbsSeekBar__onInitializeAccessibilityEvent_fn(AbsSeekBar* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    AbsSeekBar::onInitializeAccessibilityEvent_IMPL_24553(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_24553(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2458
void AbsSeekBar__onInitializeAccessibilityEvent_IMPL_24553_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    AbsSeekBar::onInitializeAccessibilityEvent_IMPL_24553(*arg0_, *arg1_, arg2_);
}

// public override void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :2391
void AbsSeekBar__onInitializeAccessibilityNodeInfo_fn(AbsSeekBar* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    AbsSeekBar::onInitializeAccessibilityNodeInfo_IMPL_24554(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_24554(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2461
void AbsSeekBar__onInitializeAccessibilityNodeInfo_IMPL_24554_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    AbsSeekBar::onInitializeAccessibilityNodeInfo_IMPL_24554(*arg0_, *arg1_, arg2_);
}

// public override sealed bool onKeyDown(int arg0, Android.android.view.KeyEvent arg1) :2379
void AbsSeekBar__onKeyDown_fn(AbsSeekBar* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = AbsSeekBar::onKeyDown_IMPL_24552(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool onKeyDown_IMPL_24552(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :2455
void AbsSeekBar__onKeyDown_IMPL_24552_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = AbsSeekBar::onKeyDown_IMPL_24552(*arg0_, *arg1_, *arg2_, arg3_);
}

// public static extern void onMeasure_IMPL_24550(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :2449
void AbsSeekBar__onMeasure_IMPL_24550_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    AbsSeekBar::onMeasure_IMPL_24550(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public override sealed void onRtlPropertiesChanged(int arg0) :2403
void AbsSeekBar__onRtlPropertiesChanged_fn(AbsSeekBar* __this, int* arg0)
{
    int arg0_ = *arg0;
    AbsSeekBar::onRtlPropertiesChanged_IMPL_24556(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void onRtlPropertiesChanged_IMPL_24556(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :2467
void AbsSeekBar__onRtlPropertiesChanged_IMPL_24556_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    AbsSeekBar::onRtlPropertiesChanged_IMPL_24556(*arg0_, *arg1_, *arg2_);
}

// public static extern void onSizeChanged_IMPL_24548(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :2443
void AbsSeekBar__onSizeChanged_IMPL_24548_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    AbsSeekBar::onSizeChanged_IMPL_24548(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public override bool onTouchEvent(Android.android.view.MotionEvent arg0) :2373
void AbsSeekBar__onTouchEvent_fn(AbsSeekBar* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = AbsSeekBar::onTouchEvent_IMPL_24551(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onTouchEvent_IMPL_24551(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2452
void AbsSeekBar__onTouchEvent_IMPL_24551_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = AbsSeekBar::onTouchEvent_IMPL_24551(*arg0_, *arg1_, arg2_);
}

// public override sealed bool performAccessibilityAction(int arg0, Android.android.os.Bundle arg1) :2397
void AbsSeekBar__performAccessibilityAction_fn(AbsSeekBar* __this, int* arg0, ::g::Android::android::os::Bundle* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = AbsSeekBar::performAccessibilityAction_IMPL_24555(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool performAccessibilityAction_IMPL_24555(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :2464
void AbsSeekBar__performAccessibilityAction_IMPL_24555_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = AbsSeekBar::performAccessibilityAction_IMPL_24555(*arg0_, *arg1_, *arg2_, arg3_);
}

// public void setKeyProgressIncrement(int arg0) :2319
void AbsSeekBar__setKeyProgressIncrement_fn(AbsSeekBar* __this, int* arg0)
{
    __this->setKeyProgressIncrement(*arg0);
}

// public static extern void setKeyProgressIncrement_IMPL_24542(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :2425
void AbsSeekBar__setKeyProgressIncrement_IMPL_24542_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    AbsSeekBar::setKeyProgressIncrement_IMPL_24542(*arg0_, *arg1_, *arg2_);
}

// public override sealed void setMax(int arg0) :2331
void AbsSeekBar__setMax_fn(AbsSeekBar* __this, int* arg0)
{
    int arg0_ = *arg0;
    AbsSeekBar::setMax_IMPL_24544(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setMax_IMPL_24544(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :2431
void AbsSeekBar__setMax_IMPL_24544_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    AbsSeekBar::setMax_IMPL_24544(*arg0_, *arg1_, *arg2_);
}

// public void setThumb(Android.android.graphics.drawable.Drawable arg0) :2295
void AbsSeekBar__setThumb_fn(AbsSeekBar* __this, ::g::Android::android::graphics::drawable::Drawable* arg0)
{
    __this->setThumb(arg0);
}

// public static extern void setThumb_IMPL_24538(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2413
void AbsSeekBar__setThumb_IMPL_24538_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    AbsSeekBar::setThumb_IMPL_24538(*arg0_, *arg1_, arg2_);
}

// public void setThumbOffset(int arg0) :2313
void AbsSeekBar__setThumbOffset_fn(AbsSeekBar* __this, int* arg0)
{
    __this->setThumbOffset(*arg0);
}

// public static extern void setThumbOffset_IMPL_24541(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :2422
void AbsSeekBar__setThumbOffset_IMPL_24541_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    AbsSeekBar::setThumbOffset_IMPL_24541(*arg0_, *arg1_, *arg2_);
}

// public static extern bool verifyDrawable_IMPL_24545(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2434
void AbsSeekBar__verifyDrawable_IMPL_24545_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = AbsSeekBar::verifyDrawable_IMPL_24545(*arg0_, *arg1_, arg2_);
}

jclass AbsSeekBar::_javaClass4_;
jmethodID AbsSeekBar::AbsSeekBar_24535_ID_c_;
jmethodID AbsSeekBar::AbsSeekBar_24536_ID_c_;
jmethodID AbsSeekBar::AbsSeekBar_24537_ID_c_;
jmethodID AbsSeekBar::drawableStateChanged_24547_ID_;
jmethodID AbsSeekBar::getKeyProgressIncrement_24543_ID_;
jmethodID AbsSeekBar::getThumb_24539_ID_;
jmethodID AbsSeekBar::getThumbOffset_24540_ID_;
jmethodID AbsSeekBar::jumpDrawablesToCurrentState_24546_ID_;
jmethodID AbsSeekBar::onDraw_24549_ID_;
jmethodID AbsSeekBar::onInitializeAccessibilityEvent_24553_ID_;
jmethodID AbsSeekBar::onInitializeAccessibilityNodeInfo_24554_ID_;
jmethodID AbsSeekBar::onKeyDown_24552_ID_;
jmethodID AbsSeekBar::onMeasure_24550_ID_;
jmethodID AbsSeekBar::onRtlPropertiesChanged_24556_ID_;
jmethodID AbsSeekBar::onSizeChanged_24548_ID_;
jmethodID AbsSeekBar::onTouchEvent_24551_ID_;
jmethodID AbsSeekBar::performAccessibilityAction_24555_ID_;
jmethodID AbsSeekBar::setKeyProgressIncrement_24542_ID_;
jmethodID AbsSeekBar::setMax_24544_ID_;
jmethodID AbsSeekBar::setThumb_24538_ID_;
jmethodID AbsSeekBar::setThumbOffset_24541_ID_;
jmethodID AbsSeekBar::verifyDrawable_24545_ID_;

// protected AbsSeekBar(Android.android.content.Context arg0) [instance] :2245
void AbsSeekBar::ctor_12(::g::Android::android::content::Context* arg0)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());;
    CACHE_METHOD(AbsSeekBar::AbsSeekBar_24535_ID_c(),AbsSeekBar::_javaClass4(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(AbsSeekBar::_javaClass4(), AbsSeekBar::AbsSeekBar_24535_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// protected AbsSeekBar(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [instance] :2261
void AbsSeekBar::ctor_13(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());;
    CACHE_METHOD(AbsSeekBar::AbsSeekBar_24536_ID_c(),AbsSeekBar::_javaClass4(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(AbsSeekBar::_javaClass4(), AbsSeekBar::AbsSeekBar_24536_ID_c(), _obArg0, _obArg1);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// protected AbsSeekBar(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [instance] :2278
void AbsSeekBar::ctor_14(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());;
    CACHE_METHOD(AbsSeekBar::AbsSeekBar_24537_ID_c(),AbsSeekBar::_javaClass4(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(AbsSeekBar::_javaClass4(), AbsSeekBar::AbsSeekBar_24537_ID_c(), _obArg0, _obArg1, ((jint)arg2));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// protected AbsSeekBar(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :2243
void AbsSeekBar::ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_11(obj, utype, hasFallbackClass, resolveType);
}

// public int getKeyProgressIncrement() [instance] :2325
int AbsSeekBar::getKeyProgressIncrement()
{
    return AbsSeekBar::getKeyProgressIncrement_IMPL_24543(_subclassed, _javaObject);
}

// public Android.android.graphics.drawable.Drawable getThumb() [instance] :2301
::g::Android::android::graphics::drawable::Drawable* AbsSeekBar::getThumb()
{
    return uCast< ::g::Android::android::graphics::drawable::Drawable*>(AbsSeekBar::getThumb_IMPL_24539(_subclassed, _javaObject), ::TYPES[3/*Android.android.graphics.drawable.Drawable*/]);
}

// public int getThumbOffset() [instance] :2307
int AbsSeekBar::getThumbOffset()
{
    return AbsSeekBar::getThumbOffset_IMPL_24540(_subclassed, _javaObject);
}

// public void setKeyProgressIncrement(int arg0) [instance] :2319
void AbsSeekBar::setKeyProgressIncrement(int arg0)
{
    int arg0_ = arg0;
    AbsSeekBar::setKeyProgressIncrement_IMPL_24542(_subclassed, _javaObject, arg0_);
}

// public void setThumb(Android.android.graphics.drawable.Drawable arg0) [instance] :2295
void AbsSeekBar::setThumb(::g::Android::android::graphics::drawable::Drawable* arg0)
{
    AbsSeekBar::setThumb_IMPL_24538(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setThumbOffset(int arg0) [instance] :2313
void AbsSeekBar::setThumbOffset(int arg0)
{
    int arg0_ = arg0;
    AbsSeekBar::setThumbOffset_IMPL_24541(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :2242
void AbsSeekBar::_Init4()
{
    if (AbsSeekBar::_javaClass4()) { return; }
    INIT_JNI;
    AbsSeekBar::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/AbsSeekBar"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AbsSeekBar::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.AbsSeekBar'", 49);; }
}

// public static extern void drawableStateChanged_IMPL_24547(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2440
void AbsSeekBar::drawableStateChanged_IMPL_24547(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    
    CACHE_METHOD(AbsSeekBar::drawableStateChanged_24547_ID(),AbsSeekBar::_javaClass4(),"drawableStateChanged","()V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.drawableStateChanged could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::drawableStateChanged_24547_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbsSeekBar::drawableStateChanged_24547_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern int getKeyProgressIncrement_IMPL_24543(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2428
int AbsSeekBar::getKeyProgressIncrement_IMPL_24543(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    
    int result;
    CACHE_METHOD(AbsSeekBar::getKeyProgressIncrement_24543_ID(),AbsSeekBar::_javaClass4(),"getKeyProgressIncrement","()I",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.getKeyProgressIncrement could not be cached",92);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::getKeyProgressIncrement_24543_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AbsSeekBar::getKeyProgressIncrement_24543_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getThumb_IMPL_24539(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2416
uObject* AbsSeekBar::getThumb_IMPL_24539(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    
    uObject* result;
    CACHE_METHOD(AbsSeekBar::getThumb_24539_ID(),AbsSeekBar::_javaClass4(),"getThumb","()Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.getThumb could not be cached",77);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::getThumb_24539_ID()),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, AbsSeekBar::getThumb_24539_ID()),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getThumbOffset_IMPL_24540(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2419
int AbsSeekBar::getThumbOffset_IMPL_24540(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    
    int result;
    CACHE_METHOD(AbsSeekBar::getThumbOffset_24540_ID(),AbsSeekBar::_javaClass4(),"getThumbOffset","()I",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.getThumbOffset could not be cached",83);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::getThumbOffset_24540_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AbsSeekBar::getThumbOffset_24540_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void jumpDrawablesToCurrentState_IMPL_24546(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2437
void AbsSeekBar::jumpDrawablesToCurrentState_IMPL_24546(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    
    CACHE_METHOD(AbsSeekBar::jumpDrawablesToCurrentState_24546_ID(),AbsSeekBar::_javaClass4(),"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.jumpDrawablesToCurrentState could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::jumpDrawablesToCurrentState_24546_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbsSeekBar::jumpDrawablesToCurrentState_24546_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onDraw_IMPL_24549(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2446
void AbsSeekBar::onDraw_IMPL_24549(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(AbsSeekBar::onDraw_24549_ID(),AbsSeekBar::_javaClass4(),"onDraw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onDraw could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::onDraw_24549_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbsSeekBar::onDraw_24549_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_24553(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2458
void AbsSeekBar::onInitializeAccessibilityEvent_IMPL_24553(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(AbsSeekBar::onInitializeAccessibilityEvent_24553_ID(),AbsSeekBar::_javaClass4(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onInitializeAccessibilityEvent could not be cached",99);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::onInitializeAccessibilityEvent_24553_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbsSeekBar::onInitializeAccessibilityEvent_24553_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_24554(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2461
void AbsSeekBar::onInitializeAccessibilityNodeInfo_IMPL_24554(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(AbsSeekBar::onInitializeAccessibilityNodeInfo_24554_ID(),AbsSeekBar::_javaClass4(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onInitializeAccessibilityNodeInfo could not be cached",102);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::onInitializeAccessibilityNodeInfo_24554_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbsSeekBar::onInitializeAccessibilityNodeInfo_24554_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onKeyDown_IMPL_24552(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :2455
bool AbsSeekBar::onKeyDown_IMPL_24552(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbsSeekBar::onKeyDown_24552_ID(),AbsSeekBar::_javaClass4(),"onKeyDown","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onKeyDown could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::onKeyDown_24552_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbsSeekBar::onKeyDown_24552_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onMeasure_IMPL_24550(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :2449
void AbsSeekBar::onMeasure_IMPL_24550(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    
    CACHE_METHOD(AbsSeekBar::onMeasure_24550_ID(),AbsSeekBar::_javaClass4(),"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onMeasure could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::onMeasure_24550_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbsSeekBar::onMeasure_24550_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onRtlPropertiesChanged_IMPL_24556(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :2467
void AbsSeekBar::onRtlPropertiesChanged_IMPL_24556(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    
    CACHE_METHOD(AbsSeekBar::onRtlPropertiesChanged_24556_ID(),AbsSeekBar::_javaClass4(),"onRtlPropertiesChanged","(I)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onRtlPropertiesChanged could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::onRtlPropertiesChanged_24556_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbsSeekBar::onRtlPropertiesChanged_24556_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onSizeChanged_IMPL_24548(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :2443
void AbsSeekBar::onSizeChanged_IMPL_24548(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    
    CACHE_METHOD(AbsSeekBar::onSizeChanged_24548_ID(),AbsSeekBar::_javaClass4(),"onSizeChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onSizeChanged could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::onSizeChanged_24548_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbsSeekBar::onSizeChanged_24548_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onTouchEvent_IMPL_24551(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2452
bool AbsSeekBar::onTouchEvent_IMPL_24551(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbsSeekBar::onTouchEvent_24551_ID(),AbsSeekBar::_javaClass4(),"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onTouchEvent could not be cached",81);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::onTouchEvent_24551_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbsSeekBar::onTouchEvent_24551_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performAccessibilityAction_IMPL_24555(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :2464
bool AbsSeekBar::performAccessibilityAction_IMPL_24555(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbsSeekBar::performAccessibilityAction_24555_ID(),AbsSeekBar::_javaClass4(),"performAccessibilityAction","(ILandroid/os/Bundle;)Z",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.performAccessibilityAction could not be cached",95);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::performAccessibilityAction_24555_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbsSeekBar::performAccessibilityAction_24555_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void setKeyProgressIncrement_IMPL_24542(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :2425
void AbsSeekBar::setKeyProgressIncrement_IMPL_24542(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    
    CACHE_METHOD(AbsSeekBar::setKeyProgressIncrement_24542_ID(),AbsSeekBar::_javaClass4(),"setKeyProgressIncrement","(I)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.setKeyProgressIncrement could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::setKeyProgressIncrement_24542_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbsSeekBar::setKeyProgressIncrement_24542_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setMax_IMPL_24544(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :2431
void AbsSeekBar::setMax_IMPL_24544(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    
    CACHE_METHOD(AbsSeekBar::setMax_24544_ID(),AbsSeekBar::_javaClass4(),"setMax","(I)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.setMax could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::setMax_24544_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbsSeekBar::setMax_24544_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setThumb_IMPL_24538(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2413
void AbsSeekBar::setThumb_IMPL_24538(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(AbsSeekBar::setThumb_24538_ID(),AbsSeekBar::_javaClass4(),"setThumb","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.setThumb could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::setThumb_24538_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbsSeekBar::setThumb_24538_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setThumbOffset_IMPL_24541(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :2422
void AbsSeekBar::setThumbOffset_IMPL_24541(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    
    CACHE_METHOD(AbsSeekBar::setThumbOffset_24541_ID(),AbsSeekBar::_javaClass4(),"setThumbOffset","(I)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.setThumbOffset could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::setThumbOffset_24541_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, AbsSeekBar::setThumbOffset_24541_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool verifyDrawable_IMPL_24545(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2434
bool AbsSeekBar::verifyDrawable_IMPL_24545(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(AbsSeekBar::_javaClass4(),AbsSeekBar::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(AbsSeekBar::verifyDrawable_24545_ID(),AbsSeekBar::_javaClass4(),"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.verifyDrawable could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, AbsSeekBar::_javaClass4(), AbsSeekBar::verifyDrawable_24545_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, AbsSeekBar::verifyDrawable_24545_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(5632)
// -----------------------------------------------------------------------------

// public extern class Button :5632
// {
::g::Android::android::widget::TextView_type* Button_typeof()
{
    static uSStrong< ::g::Android::android::widget::TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Android::android::widget::TextView_type);
    type = (::g::Android::android::widget::TextView_type*)uClassType::New("Android.android.widget.Button", options);
    type->SetBase(::g::Android::android::widget::TextView_typeof());
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))Button__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))Button__onInitializeAccessibilityNodeInfo_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::widget::TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::widget::TextView_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::Button::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Button::Button_24840_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Button::onInitializeAccessibilityEvent_24843_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Button::onInitializeAccessibilityNodeInfo_24844_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("_Init", NULL, (void*)Button___Init4_fn, 0, true, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Button__New13_fn, 0, true, Button_typeof(), 1, ::g::Android::android::content::Context_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_24843", NULL, (void*)Button__onInitializeAccessibilityEvent_IMPL_24843_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_24844", NULL, (void*)Button__onInitializeAccessibilityNodeInfo_IMPL_24844_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public Button(Android.android.content.Context arg0) :5639
void Button__ctor_12_fn(Button* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_12(arg0);
}

// public Button(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :5637
void Button__ctor_15_fn(Button* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_15(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :5636
void Button___Init4_fn()
{
    Button::_Init4();
}

// public Button New(Android.android.content.Context arg0) :5639
void Button__New13_fn(::g::Android::android::content::Context* arg0, Button** __retval)
{
    *__retval = Button::New13(arg0);
}

// public override void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :5689
void Button__onInitializeAccessibilityEvent_fn(Button* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    Button::onInitializeAccessibilityEvent_IMPL_24843(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_24843(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5705
void Button__onInitializeAccessibilityEvent_IMPL_24843_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Button::onInitializeAccessibilityEvent_IMPL_24843(*arg0_, *arg1_, arg2_);
}

// public override void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :5695
void Button__onInitializeAccessibilityNodeInfo_fn(Button* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    Button::onInitializeAccessibilityNodeInfo_IMPL_24844(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_24844(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5708
void Button__onInitializeAccessibilityNodeInfo_IMPL_24844_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Button::onInitializeAccessibilityNodeInfo_IMPL_24844(*arg0_, *arg1_, arg2_);
}

jclass Button::_javaClass4_;
jmethodID Button::Button_24840_ID_c_;
jmethodID Button::onInitializeAccessibilityEvent_24843_ID_;
jmethodID Button::onInitializeAccessibilityNodeInfo_24844_ID_;

// public Button(Android.android.content.Context arg0) [instance] :5639
void Button::ctor_12(::g::Android::android::content::Context* arg0)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(Button::_javaClass4(),Button::_Init4());;
    CACHE_METHOD(Button::Button_24840_ID_c(),Button::_javaClass4(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.Button.<init> could not be cached",71);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(Button::_javaClass4(), Button::Button_24840_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public Button(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :5637
void Button::ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_11(obj, utype, hasFallbackClass, resolveType);
}

// public static extern new void _Init() [static] :5636
void Button::_Init4()
{
    if (Button::_javaClass4()) { return; }
    INIT_JNI;
    Button::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/Button"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Button::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.Button'", 45);; }
}

// public Button New(Android.android.content.Context arg0) [static] :5639
Button* Button::New13(::g::Android::android::content::Context* arg0)
{
    Button* obj2 = (Button*)uNew(Button_typeof());
    obj2->ctor_12(arg0);
    return obj2;
}

// public static extern void onInitializeAccessibilityEvent_IMPL_24843(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5705
void Button::onInitializeAccessibilityEvent_IMPL_24843(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Button::_javaClass4(),Button::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Button::onInitializeAccessibilityEvent_24843_ID(),Button::_javaClass4(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.Button.onInitializeAccessibilityEvent could not be cached",95);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Button::_javaClass4(), Button::onInitializeAccessibilityEvent_24843_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Button::onInitializeAccessibilityEvent_24843_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_24844(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5708
void Button::onInitializeAccessibilityNodeInfo_IMPL_24844(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Button::_javaClass4(),Button::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Button::onInitializeAccessibilityNodeInfo_24844_ID(),Button::_javaClass4(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.Button.onInitializeAccessibilityNodeInfo could not be cached",98);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Button::_javaClass4(), Button::onInitializeAccessibilityNodeInfo_24844_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Button::onInitializeAccessibilityNodeInfo_24844_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(5723)
// -----------------------------------------------------------------------------

// public abstract extern class CompoundButton :5723
// {
CompoundButton_type* CompoundButton_typeof()
{
    static uSStrong<CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CompoundButton);
    options.TypeSize = sizeof(CompoundButton_type);
    type = (CompoundButton_type*)uClassType::New("Android.android.widget.CompoundButton", options);
    type->SetBase(::g::Android::android::widget::Button_typeof());
    type->fp_jumpDrawablesToCurrentState = (void(*)(::g::Android::android::view::View*))CompoundButton__jumpDrawablesToCurrentState_fn;
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))CompoundButton__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))CompoundButton__onInitializeAccessibilityNodeInfo_fn;
    type->fp_performClick = (void(*)(::g::Android::android::view::View*, bool*))CompoundButton__performClick_fn;
    type->fp_setChecked = CompoundButton__setChecked_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(CompoundButton_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(CompoundButton_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::CompoundButton::_javaClass5_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::CompoundButton::jumpDrawablesToCurrentState_24943_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::CompoundButton::onInitializeAccessibilityEvent_24935_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::CompoundButton::onInitializeAccessibilityNodeInfo_24936_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::CompoundButton::performClick_24929_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::CompoundButton::setChecked_24931_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::CompoundButton::setOnCheckedChangeListener_24932_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(9,
        new uFunction("_Init", NULL, (void*)CompoundButton___Init5_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("jumpDrawablesToCurrentState_IMPL_24943", NULL, (void*)CompoundButton__jumpDrawablesToCurrentState_IMPL_24943_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_24935", NULL, (void*)CompoundButton__onInitializeAccessibilityEvent_IMPL_24935_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_24936", NULL, (void*)CompoundButton__onInitializeAccessibilityNodeInfo_IMPL_24936_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("performClick_IMPL_24929", NULL, (void*)CompoundButton__performClick_IMPL_24929_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("setChecked", NULL, NULL, offsetof(CompoundButton_type, fp_setChecked), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setChecked_IMPL_24931", NULL, (void*)CompoundButton__setChecked_IMPL_24931_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setOnCheckedChangeListener", NULL, (void*)CompoundButton__setOnCheckedChangeListener_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::widget::CompoundButtonDLROnCheckedChangeListener_typeof()),
        new uFunction("setOnCheckedChangeListener_IMPL_24932", NULL, (void*)CompoundButton__setOnCheckedChangeListener_IMPL_24932_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// protected CompoundButton(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :5728
void CompoundButton__ctor_19_fn(CompoundButton* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_19(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :5727
void CompoundButton___Init5_fn()
{
    CompoundButton::_Init5();
}

// public override void jumpDrawablesToCurrentState() :5870
void CompoundButton__jumpDrawablesToCurrentState_fn(CompoundButton* __this)
{
    CompoundButton::jumpDrawablesToCurrentState_IMPL_24943(__this->_subclassed, __this->_javaObject);
}

// public static extern void jumpDrawablesToCurrentState_IMPL_24943(bool arg0, Android.Base.Primitives.ujobject arg1) :5937
void CompoundButton__jumpDrawablesToCurrentState_IMPL_24943_fn(bool* arg0_, jobject* arg1_)
{
    CompoundButton::jumpDrawablesToCurrentState_IMPL_24943(*arg0_, *arg1_);
}

// public override void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :5822
void CompoundButton__onInitializeAccessibilityEvent_fn(CompoundButton* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    CompoundButton::onInitializeAccessibilityEvent_IMPL_24935(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_24935(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5913
void CompoundButton__onInitializeAccessibilityEvent_IMPL_24935_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    CompoundButton::onInitializeAccessibilityEvent_IMPL_24935(*arg0_, *arg1_, arg2_);
}

// public override void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :5828
void CompoundButton__onInitializeAccessibilityNodeInfo_fn(CompoundButton* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    CompoundButton::onInitializeAccessibilityNodeInfo_IMPL_24936(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_24936(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5916
void CompoundButton__onInitializeAccessibilityNodeInfo_IMPL_24936_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    CompoundButton::onInitializeAccessibilityNodeInfo_IMPL_24936(*arg0_, *arg1_, arg2_);
}

// public override sealed bool performClick() :5786
void CompoundButton__performClick_fn(CompoundButton* __this, bool* __retval)
{
    return *__retval = CompoundButton::performClick_IMPL_24929(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool performClick_IMPL_24929(bool arg0, Android.Base.Primitives.ujobject arg1) :5895
void CompoundButton__performClick_IMPL_24929_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = CompoundButton::performClick_IMPL_24929(*arg0_, *arg1_);
}

// public virtual void setChecked(bool arg0) :5798
void CompoundButton__setChecked_fn(CompoundButton* __this, bool* arg0)
{
    bool arg0_ = *arg0;
    CompoundButton::setChecked_IMPL_24931(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setChecked_IMPL_24931(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :5901
void CompoundButton__setChecked_IMPL_24931_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    CompoundButton::setChecked_IMPL_24931(*arg0_, *arg1_, *arg2_);
}

// public void setOnCheckedChangeListener(Android.android.widget.CompoundButtonDLROnCheckedChangeListener arg0) :5804
void CompoundButton__setOnCheckedChangeListener_fn(CompoundButton* __this, uObject* arg0)
{
    __this->setOnCheckedChangeListener(arg0);
}

// public static extern void setOnCheckedChangeListener_IMPL_24932(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5904
void CompoundButton__setOnCheckedChangeListener_IMPL_24932_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    CompoundButton::setOnCheckedChangeListener_IMPL_24932(*arg0_, *arg1_, arg2_);
}

jclass CompoundButton::_javaClass5_;
jmethodID CompoundButton::jumpDrawablesToCurrentState_24943_ID_;
jmethodID CompoundButton::onInitializeAccessibilityEvent_24935_ID_;
jmethodID CompoundButton::onInitializeAccessibilityNodeInfo_24936_ID_;
jmethodID CompoundButton::performClick_24929_ID_;
jmethodID CompoundButton::setChecked_24931_ID_;
jmethodID CompoundButton::setOnCheckedChangeListener_24932_ID_;

// protected CompoundButton(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :5728
void CompoundButton::ctor_19(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_15(obj, utype, hasFallbackClass, resolveType);
}

// public void setOnCheckedChangeListener(Android.android.widget.CompoundButtonDLROnCheckedChangeListener arg0) [instance] :5804
void CompoundButton::setOnCheckedChangeListener(uObject* arg0)
{
    CompoundButton::setOnCheckedChangeListener_IMPL_24932(_subclassed, _javaObject, arg0);
}

// public static extern new void _Init() [static] :5727
void CompoundButton::_Init5()
{
    if (CompoundButton::_javaClass5()) { return; }
    INIT_JNI;
    CompoundButton::_javaClass5() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/CompoundButton"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!CompoundButton::_javaClass5()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.CompoundButton'", 53);; }
}

// public static extern void jumpDrawablesToCurrentState_IMPL_24943(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5937
void CompoundButton::jumpDrawablesToCurrentState_IMPL_24943(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(CompoundButton::_javaClass5(),CompoundButton::_Init5());
    
    CACHE_METHOD(CompoundButton::jumpDrawablesToCurrentState_24943_ID(),CompoundButton::_javaClass5(),"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.CompoundButton.jumpDrawablesToCurrentState could not be cached",100);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, CompoundButton::_javaClass5(), CompoundButton::jumpDrawablesToCurrentState_24943_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, CompoundButton::jumpDrawablesToCurrentState_24943_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_24935(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5913
void CompoundButton::onInitializeAccessibilityEvent_IMPL_24935(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(CompoundButton::_javaClass5(),CompoundButton::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(CompoundButton::onInitializeAccessibilityEvent_24935_ID(),CompoundButton::_javaClass5(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.CompoundButton.onInitializeAccessibilityEvent could not be cached",103);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, CompoundButton::_javaClass5(), CompoundButton::onInitializeAccessibilityEvent_24935_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, CompoundButton::onInitializeAccessibilityEvent_24935_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_24936(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5916
void CompoundButton::onInitializeAccessibilityNodeInfo_IMPL_24936(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(CompoundButton::_javaClass5(),CompoundButton::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(CompoundButton::onInitializeAccessibilityNodeInfo_24936_ID(),CompoundButton::_javaClass5(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.CompoundButton.onInitializeAccessibilityNodeInfo could not be cached",106);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, CompoundButton::_javaClass5(), CompoundButton::onInitializeAccessibilityNodeInfo_24936_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, CompoundButton::onInitializeAccessibilityNodeInfo_24936_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool performClick_IMPL_24929(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5895
bool CompoundButton::performClick_IMPL_24929(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(CompoundButton::_javaClass5(),CompoundButton::_Init5());
    
    bool result;
    CACHE_METHOD(CompoundButton::performClick_24929_ID(),CompoundButton::_javaClass5(),"performClick","()Z",GetMethodID,"Id for fallback method android.widget.CompoundButton.performClick could not be cached",85);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, CompoundButton::_javaClass5(), CompoundButton::performClick_24929_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, CompoundButton::performClick_24929_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void setChecked_IMPL_24931(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :5901
void CompoundButton::setChecked_IMPL_24931(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(CompoundButton::_javaClass5(),CompoundButton::_Init5());
    
    CACHE_METHOD(CompoundButton::setChecked_24931_ID(),CompoundButton::_javaClass5(),"setChecked","(Z)V",GetMethodID,"Id for fallback method android.widget.CompoundButton.setChecked could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, CompoundButton::_javaClass5(), CompoundButton::setChecked_24931_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, CompoundButton::setChecked_24931_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOnCheckedChangeListener_IMPL_24932(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5904
void CompoundButton::setOnCheckedChangeListener_IMPL_24932(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(CompoundButton::_javaClass5(),CompoundButton::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(CompoundButton::setOnCheckedChangeListener_24932_ID(),CompoundButton::_javaClass5(),"setOnCheckedChangeListener","(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V",GetMethodID,"Id for fallback method android.widget.CompoundButton.setOnCheckedChangeListener could not be cached",99);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, CompoundButton::_javaClass5(), CompoundButton::setOnCheckedChangeListener_24932_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, CompoundButton::setOnCheckedChangeListener_24932_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(28327)
// ------------------------------------------------------------------------------

// public abstract extern interface CompoundButtonDLROnCheckedChangeListener :28327
// {
uInterfaceType* CompoundButtonDLROnCheckedChangeListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.widget.CompoundButtonDLROnCheckedChangeListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("onCheckedChanged", NULL, NULL, offsetof(CompoundButtonDLROnCheckedChangeListener, fp_onCheckedChanged), false, uVoid_typeof(), 2, ::g::Android::android::widget::CompoundButton_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(8497)
// -----------------------------------------------------------------------------

// public sealed extern class EditText :8497
// {
::g::Android::android::widget::TextView_type* EditText_typeof()
{
    static uSStrong< ::g::Android::android::widget::TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EditText);
    options.TypeSize = sizeof(::g::Android::android::widget::TextView_type);
    type = (::g::Android::android::widget::TextView_type*)uClassType::New("Android.android.widget.EditText", options);
    type->SetBase(::g::Android::android::widget::TextView_typeof());
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))EditText__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))EditText__onInitializeAccessibilityNodeInfo_fn;
    type->fp_setEllipsize = (void(*)(::g::Android::android::widget::TextView*, ::g::Android::android::text::TextUtilsDLRTruncateAt*))EditText__setEllipsize_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::widget::TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::widget::TextView_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::EditText::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::EditText::EditText_25066_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::EditText::onInitializeAccessibilityEvent_25078_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::EditText::onInitializeAccessibilityNodeInfo_25079_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::EditText::setEllipsize_25077_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("_Init", NULL, (void*)EditText___Init4_fn, 0, true, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)EditText__New13_fn, 0, true, EditText_typeof(), 1, ::g::Android::android::content::Context_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_25078", NULL, (void*)EditText__onInitializeAccessibilityEvent_IMPL_25078_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_25079", NULL, (void*)EditText__onInitializeAccessibilityNodeInfo_IMPL_25079_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setEllipsize_IMPL_25077", NULL, (void*)EditText__setEllipsize_IMPL_25077_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public EditText(Android.android.content.Context arg0) :8504
void EditText__ctor_12_fn(EditText* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_12(arg0);
}

// public static extern new void _Init() :8501
void EditText___Init4_fn()
{
    EditText::_Init4();
}

// public EditText New(Android.android.content.Context arg0) :8504
void EditText__New13_fn(::g::Android::android::content::Context* arg0, EditText** __retval)
{
    *__retval = EditText::New13(arg0);
}

// public override sealed void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :8608
void EditText__onInitializeAccessibilityEvent_fn(EditText* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    EditText::onInitializeAccessibilityEvent_IMPL_25078(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_25078(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :8651
void EditText__onInitializeAccessibilityEvent_IMPL_25078_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    EditText::onInitializeAccessibilityEvent_IMPL_25078(*arg0_, *arg1_, arg2_);
}

// public override sealed void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :8614
void EditText__onInitializeAccessibilityNodeInfo_fn(EditText* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    EditText::onInitializeAccessibilityNodeInfo_IMPL_25079(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_25079(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :8654
void EditText__onInitializeAccessibilityNodeInfo_IMPL_25079_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    EditText::onInitializeAccessibilityNodeInfo_IMPL_25079(*arg0_, *arg1_, arg2_);
}

// public override sealed void setEllipsize(Android.android.text.TextUtilsDLRTruncateAt arg0) :8602
void EditText__setEllipsize_fn(EditText* __this, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg0)
{
    EditText::setEllipsize_IMPL_25077(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void setEllipsize_IMPL_25077(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :8648
void EditText__setEllipsize_IMPL_25077_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    EditText::setEllipsize_IMPL_25077(*arg0_, *arg1_, arg2_);
}

jclass EditText::_javaClass4_;
jmethodID EditText::EditText_25066_ID_c_;
jmethodID EditText::onInitializeAccessibilityEvent_25078_ID_;
jmethodID EditText::onInitializeAccessibilityNodeInfo_25079_ID_;
jmethodID EditText::setEllipsize_25077_ID_;

// public EditText(Android.android.content.Context arg0) [instance] :8504
void EditText::ctor_12(::g::Android::android::content::Context* arg0)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(EditText::_javaClass4(),EditText::_Init4());;
    CACHE_METHOD(EditText::EditText_25066_ID_c(),EditText::_javaClass4(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.EditText.<init> could not be cached",73);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(EditText::_javaClass4(), EditText::EditText_25066_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public static extern new void _Init() [static] :8501
void EditText::_Init4()
{
    if (EditText::_javaClass4()) { return; }
    INIT_JNI;
    EditText::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/EditText"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!EditText::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.EditText'", 47);; }
}

// public EditText New(Android.android.content.Context arg0) [static] :8504
EditText* EditText::New13(::g::Android::android::content::Context* arg0)
{
    EditText* obj2 = (EditText*)uNew(EditText_typeof());
    obj2->ctor_12(arg0);
    return obj2;
}

// public static extern void onInitializeAccessibilityEvent_IMPL_25078(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :8651
void EditText::onInitializeAccessibilityEvent_IMPL_25078(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(EditText::_javaClass4(),EditText::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(EditText::onInitializeAccessibilityEvent_25078_ID(),EditText::_javaClass4(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.EditText.onInitializeAccessibilityEvent could not be cached",97);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, EditText::_javaClass4(), EditText::onInitializeAccessibilityEvent_25078_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, EditText::onInitializeAccessibilityEvent_25078_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_25079(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :8654
void EditText::onInitializeAccessibilityNodeInfo_IMPL_25079(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(EditText::_javaClass4(),EditText::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(EditText::onInitializeAccessibilityNodeInfo_25079_ID(),EditText::_javaClass4(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.EditText.onInitializeAccessibilityNodeInfo could not be cached",100);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, EditText::_javaClass4(), EditText::onInitializeAccessibilityNodeInfo_25079_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, EditText::onInitializeAccessibilityNodeInfo_25079_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setEllipsize_IMPL_25077(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :8648
void EditText::setEllipsize_IMPL_25077(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(EditText::_javaClass4(),EditText::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(EditText::setEllipsize_25077_ID(),EditText::_javaClass4(),"setEllipsize","(Landroid/text/TextUtils$TruncateAt;)V",GetMethodID,"Id for fallback method android.widget.EditText.setEllipsize could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, EditText::_javaClass4(), EditText::setEllipsize_25077_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, EditText::setEllipsize_25077_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(9237)
// -----------------------------------------------------------------------------

// public extern class FrameLayout :9237
// {
::g::Android::android::view::ViewGroup_type* FrameLayout_typeof()
{
    static uSStrong< ::g::Android::android::view::ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 31;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(FrameLayout);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Android.android.widget.FrameLayout", options);
    type->SetBase(::g::Android::android::view::ViewGroup_typeof());
    type->fp_gatherTransparentRegion = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::graphics::Region*, bool*))FrameLayout__gatherTransparentRegion_fn;
    type->fp_j_draw = (void(*)(::g::Android::android::view::View*, ::g::Android::android::graphics::Canvas*))FrameLayout__j_draw_fn;
    type->fp_jumpDrawablesToCurrentState = (void(*)(::g::Android::android::view::View*))FrameLayout__jumpDrawablesToCurrentState_fn;
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))FrameLayout__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))FrameLayout__onInitializeAccessibilityNodeInfo_fn;
    type->fp_shouldDelayChildPressedState = (void(*)(::g::Android::android::view::ViewGroup*, bool*))FrameLayout__shouldDelayChildPressedState_fn;
    type->interface2.fp_requestLayout = (void(*)(uObject*))::g::Android::android::view::View__requestLayout_fn;
    type->interface2.fp_isLayoutRequested = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutRequested_fn;
    type->interface2.fp_requestTransparentRegion = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestTransparentRegion_fn;
    type->interface2.fp_invalidateChild = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*))::g::Android::android::view::ViewGroup__invalidateChild_fn;
    type->interface2.fp_invalidateChildInParent = (void(*)(uObject*, ::g::Android::Runtime::IntArray*, ::g::Android::android::graphics::Rect*, uObject**))::g::Android::android::view::ViewGroup__invalidateChildInParent_fn;
    type->interface2.fp_getParent = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParent_fn;
    type->interface2.fp_requestChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestChildFocus_fn;
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
    type->interface2.fp_requestDisallowInterceptTouchEvent = (void(*)(uObject*, bool*))::g::Android::android::view::ViewGroup__requestDisallowInterceptTouchEvent_fn;
    type->interface2.fp_requestChildRectangleOnScreen = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*))::g::Android::android::view::ViewGroup__requestChildRectangleOnScreen_fn;
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
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[4] = ::g::Android::android::widget::FrameLayoutDLRLayoutParams_typeof();
    ::TYPES[3] = ::g::Android::android::graphics::drawable::Drawable_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1),
        ::g::Android::android::view::ViewParent_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::checkLayoutParams_25192_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::drawableStateChanged_25178_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::FrameLayout_25171_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::FrameLayout_25172_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::FrameLayout_25173_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::gatherTransparentRegion_25186_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::generateDefaultLayoutParams_25179_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::generateLayoutParams_25190_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::generateLayoutParams_25193_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::getConsiderGoneChildrenWhenMeasuring_25188_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::getForeground_25181_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::getForegroundGravity_25174_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::getMeasureAllChildren_25189_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::j_draw_25185_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::jumpDrawablesToCurrentState_25177_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::onInitializeAccessibilityEvent_25194_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::onInitializeAccessibilityNodeInfo_25195_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::onLayout_25183_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::onMeasure_25182_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::onSizeChanged_25184_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::setForeground_25180_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::setForegroundGravity_25175_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::setMeasureAllChildren_25187_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::shouldDelayChildPressedState_25191_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::verifyDrawable_25176_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(35,
        new uFunction("_Init", NULL, (void*)FrameLayout___Init4_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("checkLayoutParams_IMPL_25192", NULL, (void*)FrameLayout__checkLayoutParams_IMPL_25192_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("drawableStateChanged_IMPL_25178", NULL, (void*)FrameLayout__drawableStateChanged_IMPL_25178_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("gatherTransparentRegion_IMPL_25186", NULL, (void*)FrameLayout__gatherTransparentRegion_IMPL_25186_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("generateDefaultLayoutParams_IMPL_25179", NULL, (void*)FrameLayout__generateDefaultLayoutParams_IMPL_25179_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("generateLayoutParams", NULL, (void*)FrameLayout__generateLayoutParams2_fn, 0, false, ::g::Android::android::widget::FrameLayoutDLRLayoutParams_typeof(), 1, ::g::Android::android::util::AttributeSet_typeof()),
        new uFunction("generateLayoutParams_IMPL_25190", NULL, (void*)FrameLayout__generateLayoutParams_IMPL_25190_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("generateLayoutParams_IMPL_25193", NULL, (void*)FrameLayout__generateLayoutParams_IMPL_25193_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("getConsiderGoneChildrenWhenMeasuring", NULL, (void*)FrameLayout__getConsiderGoneChildrenWhenMeasuring_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("getConsiderGoneChildrenWhenMeasuring_IMPL_25188", NULL, (void*)FrameLayout__getConsiderGoneChildrenWhenMeasuring_IMPL_25188_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getForeground", NULL, (void*)FrameLayout__getForeground_fn, 0, false, ::g::Android::android::graphics::drawable::Drawable_typeof(), 0),
        new uFunction("getForeground_IMPL_25181", NULL, (void*)FrameLayout__getForeground_IMPL_25181_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getForegroundGravity", NULL, (void*)FrameLayout__getForegroundGravity_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getForegroundGravity_IMPL_25174", NULL, (void*)FrameLayout__getForegroundGravity_IMPL_25174_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getMeasureAllChildren", NULL, (void*)FrameLayout__getMeasureAllChildren_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("getMeasureAllChildren_IMPL_25189", NULL, (void*)FrameLayout__getMeasureAllChildren_IMPL_25189_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("j_draw_IMPL_25185", NULL, (void*)FrameLayout__j_draw_IMPL_25185_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("jumpDrawablesToCurrentState_IMPL_25177", NULL, (void*)FrameLayout__jumpDrawablesToCurrentState_IMPL_25177_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction(".ctor", NULL, (void*)FrameLayout__New9_fn, 0, true, FrameLayout_typeof(), 1, ::g::Android::android::content::Context_typeof()),
        new uFunction(".ctor", NULL, (void*)FrameLayout__New10_fn, 0, true, FrameLayout_typeof(), 2, ::g::Android::android::content::Context_typeof(), ::g::Android::android::util::AttributeSet_typeof()),
        new uFunction(".ctor", NULL, (void*)FrameLayout__New11_fn, 0, true, FrameLayout_typeof(), 3, ::g::Android::android::content::Context_typeof(), ::g::Android::android::util::AttributeSet_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)FrameLayout__New12_fn, 0, true, FrameLayout_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_25194", NULL, (void*)FrameLayout__onInitializeAccessibilityEvent_IMPL_25194_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_25195", NULL, (void*)FrameLayout__onInitializeAccessibilityNodeInfo_IMPL_25195_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onLayout_IMPL_25183", NULL, (void*)FrameLayout__onLayout_IMPL_25183_fn, 0, true, uVoid_typeof(), 7, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onMeasure_IMPL_25182", NULL, (void*)FrameLayout__onMeasure_IMPL_25182_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onSizeChanged_IMPL_25184", NULL, (void*)FrameLayout__onSizeChanged_IMPL_25184_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setForeground", NULL, (void*)FrameLayout__setForeground_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::graphics::drawable::Drawable_typeof()),
        new uFunction("setForeground_IMPL_25180", NULL, (void*)FrameLayout__setForeground_IMPL_25180_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setForegroundGravity", NULL, (void*)FrameLayout__setForegroundGravity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setForegroundGravity_IMPL_25175", NULL, (void*)FrameLayout__setForegroundGravity_IMPL_25175_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setMeasureAllChildren", NULL, (void*)FrameLayout__setMeasureAllChildren_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setMeasureAllChildren_IMPL_25187", NULL, (void*)FrameLayout__setMeasureAllChildren_IMPL_25187_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("shouldDelayChildPressedState_IMPL_25191", NULL, (void*)FrameLayout__shouldDelayChildPressedState_IMPL_25191_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("verifyDrawable_IMPL_25176", NULL, (void*)FrameLayout__verifyDrawable_IMPL_25176_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public FrameLayout(Android.android.content.Context arg0) :9244
void FrameLayout__ctor_12_fn(FrameLayout* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_12(arg0);
}

// public FrameLayout(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :9260
void FrameLayout__ctor_13_fn(FrameLayout* __this, ::g::Android::android::content::Context* arg0, uObject* arg1)
{
    __this->ctor_13(arg0, arg1);
}

// public FrameLayout(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :9277
void FrameLayout__ctor_14_fn(FrameLayout* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2)
{
    __this->ctor_14(arg0, arg1, *arg2);
}

// public FrameLayout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :9242
void FrameLayout__ctor_15_fn(FrameLayout* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_15(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :9241
void FrameLayout___Init4_fn()
{
    FrameLayout::_Init4();
}

// public static extern bool checkLayoutParams_IMPL_25192(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9484
void FrameLayout__checkLayoutParams_IMPL_25192_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = FrameLayout::checkLayoutParams_IMPL_25192(*arg0_, *arg1_, arg2_);
}

// public static extern void drawableStateChanged_IMPL_25178(bool arg0, Android.Base.Primitives.ujobject arg1) :9442
void FrameLayout__drawableStateChanged_IMPL_25178_fn(bool* arg0_, jobject* arg1_)
{
    FrameLayout::drawableStateChanged_IMPL_25178(*arg0_, *arg1_);
}

// public override sealed bool gatherTransparentRegion(Android.android.graphics.Region arg0) :9366
void FrameLayout__gatherTransparentRegion_fn(FrameLayout* __this, ::g::Android::android::graphics::Region* arg0, bool* __retval)
{
    return *__retval = FrameLayout::gatherTransparentRegion_IMPL_25186(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool gatherTransparentRegion_IMPL_25186(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9466
void FrameLayout__gatherTransparentRegion_IMPL_25186_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = FrameLayout::gatherTransparentRegion_IMPL_25186(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper generateDefaultLayoutParams_IMPL_25179(bool arg0, Android.Base.Primitives.ujobject arg1) :9445
void FrameLayout__generateDefaultLayoutParams_IMPL_25179_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = FrameLayout::generateDefaultLayoutParams_IMPL_25179(*arg0_, *arg1_);
}

// public new Android.android.widget.FrameLayoutDLRLayoutParams generateLayoutParams(Android.android.util.AttributeSet arg0) :9390
void FrameLayout__generateLayoutParams2_fn(FrameLayout* __this, uObject* arg0, ::g::Android::android::widget::FrameLayoutDLRLayoutParams** __retval)
{
    *__retval = __this->generateLayoutParams2(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper generateLayoutParams_IMPL_25190(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9478
void FrameLayout__generateLayoutParams_IMPL_25190_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = FrameLayout::generateLayoutParams_IMPL_25190(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper generateLayoutParams_IMPL_25193(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9487
void FrameLayout__generateLayoutParams_IMPL_25193_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = FrameLayout::generateLayoutParams_IMPL_25193(*arg0_, *arg1_, arg2_);
}

// public bool getConsiderGoneChildrenWhenMeasuring() :9378
void FrameLayout__getConsiderGoneChildrenWhenMeasuring_fn(FrameLayout* __this, bool* __retval)
{
    *__retval = __this->getConsiderGoneChildrenWhenMeasuring();
}

// public static extern bool getConsiderGoneChildrenWhenMeasuring_IMPL_25188(bool arg0, Android.Base.Primitives.ujobject arg1) :9472
void FrameLayout__getConsiderGoneChildrenWhenMeasuring_IMPL_25188_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = FrameLayout::getConsiderGoneChildrenWhenMeasuring_IMPL_25188(*arg0_, *arg1_);
}

// public Android.android.graphics.drawable.Drawable getForeground() :9336
void FrameLayout__getForeground_fn(FrameLayout* __this, ::g::Android::android::graphics::drawable::Drawable** __retval)
{
    *__retval = __this->getForeground();
}

// public static extern Android.Base.Wrappers.IJWrapper getForeground_IMPL_25181(bool arg0, Android.Base.Primitives.ujobject arg1) :9451
void FrameLayout__getForeground_IMPL_25181_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = FrameLayout::getForeground_IMPL_25181(*arg0_, *arg1_);
}

// public int getForegroundGravity() :9294
void FrameLayout__getForegroundGravity_fn(FrameLayout* __this, int* __retval)
{
    *__retval = __this->getForegroundGravity();
}

// public static extern int getForegroundGravity_IMPL_25174(bool arg0, Android.Base.Primitives.ujobject arg1) :9430
void FrameLayout__getForegroundGravity_IMPL_25174_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = FrameLayout::getForegroundGravity_IMPL_25174(*arg0_, *arg1_);
}

// public bool getMeasureAllChildren() :9384
void FrameLayout__getMeasureAllChildren_fn(FrameLayout* __this, bool* __retval)
{
    *__retval = __this->getMeasureAllChildren();
}

// public static extern bool getMeasureAllChildren_IMPL_25189(bool arg0, Android.Base.Primitives.ujobject arg1) :9475
void FrameLayout__getMeasureAllChildren_IMPL_25189_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = FrameLayout::getMeasureAllChildren_IMPL_25189(*arg0_, *arg1_);
}

// public override void j_draw(Android.android.graphics.Canvas arg0) :9360
void FrameLayout__j_draw_fn(FrameLayout* __this, ::g::Android::android::graphics::Canvas* arg0)
{
    FrameLayout::j_draw_IMPL_25185(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void j_draw_IMPL_25185(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9463
void FrameLayout__j_draw_IMPL_25185_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    FrameLayout::j_draw_IMPL_25185(*arg0_, *arg1_, arg2_);
}

// public override sealed void jumpDrawablesToCurrentState() :9312
void FrameLayout__jumpDrawablesToCurrentState_fn(FrameLayout* __this)
{
    FrameLayout::jumpDrawablesToCurrentState_IMPL_25177(__this->_subclassed, __this->_javaObject);
}

// public static extern void jumpDrawablesToCurrentState_IMPL_25177(bool arg0, Android.Base.Primitives.ujobject arg1) :9439
void FrameLayout__jumpDrawablesToCurrentState_IMPL_25177_fn(bool* arg0_, jobject* arg1_)
{
    FrameLayout::jumpDrawablesToCurrentState_IMPL_25177(*arg0_, *arg1_);
}

// public FrameLayout New(Android.android.content.Context arg0) :9244
void FrameLayout__New9_fn(::g::Android::android::content::Context* arg0, FrameLayout** __retval)
{
    *__retval = FrameLayout::New9(arg0);
}

// public FrameLayout New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :9260
void FrameLayout__New10_fn(::g::Android::android::content::Context* arg0, uObject* arg1, FrameLayout** __retval)
{
    *__retval = FrameLayout::New10(arg0, arg1);
}

// public FrameLayout New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :9277
void FrameLayout__New11_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, FrameLayout** __retval)
{
    *__retval = FrameLayout::New11(arg0, arg1, *arg2);
}

// public FrameLayout New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :9242
void FrameLayout__New12_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, FrameLayout** __retval)
{
    *__retval = FrameLayout::New12(*obj, utype, *hasFallbackClass, *resolveType);
}

// public override void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :9414
void FrameLayout__onInitializeAccessibilityEvent_fn(FrameLayout* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    FrameLayout::onInitializeAccessibilityEvent_IMPL_25194(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_25194(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9490
void FrameLayout__onInitializeAccessibilityEvent_IMPL_25194_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    FrameLayout::onInitializeAccessibilityEvent_IMPL_25194(*arg0_, *arg1_, arg2_);
}

// public override void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :9420
void FrameLayout__onInitializeAccessibilityNodeInfo_fn(FrameLayout* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    FrameLayout::onInitializeAccessibilityNodeInfo_IMPL_25195(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_25195(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9493
void FrameLayout__onInitializeAccessibilityNodeInfo_IMPL_25195_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    FrameLayout::onInitializeAccessibilityNodeInfo_IMPL_25195(*arg0_, *arg1_, arg2_);
}

// public static extern void onLayout_IMPL_25183(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2, int arg3, int arg4, int arg5, int arg6) :9457
void FrameLayout__onLayout_IMPL_25183_fn(bool* arg0_, jobject* arg1_, bool* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_)
{
    FrameLayout::onLayout_IMPL_25183(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_, *arg6_);
}

// public static extern void onMeasure_IMPL_25182(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :9454
void FrameLayout__onMeasure_IMPL_25182_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    FrameLayout::onMeasure_IMPL_25182(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public static extern void onSizeChanged_IMPL_25184(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :9460
void FrameLayout__onSizeChanged_IMPL_25184_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    FrameLayout::onSizeChanged_IMPL_25184(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public void setForeground(Android.android.graphics.drawable.Drawable arg0) :9330
void FrameLayout__setForeground_fn(FrameLayout* __this, ::g::Android::android::graphics::drawable::Drawable* arg0)
{
    __this->setForeground(arg0);
}

// public static extern void setForeground_IMPL_25180(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9448
void FrameLayout__setForeground_IMPL_25180_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    FrameLayout::setForeground_IMPL_25180(*arg0_, *arg1_, arg2_);
}

// public void setForegroundGravity(int arg0) :9300
void FrameLayout__setForegroundGravity_fn(FrameLayout* __this, int* arg0)
{
    __this->setForegroundGravity(*arg0);
}

// public static extern void setForegroundGravity_IMPL_25175(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :9433
void FrameLayout__setForegroundGravity_IMPL_25175_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    FrameLayout::setForegroundGravity_IMPL_25175(*arg0_, *arg1_, *arg2_);
}

// public void setMeasureAllChildren(bool arg0) :9372
void FrameLayout__setMeasureAllChildren_fn(FrameLayout* __this, bool* arg0)
{
    __this->setMeasureAllChildren(*arg0);
}

// public static extern void setMeasureAllChildren_IMPL_25187(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :9469
void FrameLayout__setMeasureAllChildren_IMPL_25187_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    FrameLayout::setMeasureAllChildren_IMPL_25187(*arg0_, *arg1_, *arg2_);
}

// public override bool shouldDelayChildPressedState() :9396
void FrameLayout__shouldDelayChildPressedState_fn(FrameLayout* __this, bool* __retval)
{
    return *__retval = FrameLayout::shouldDelayChildPressedState_IMPL_25191(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool shouldDelayChildPressedState_IMPL_25191(bool arg0, Android.Base.Primitives.ujobject arg1) :9481
void FrameLayout__shouldDelayChildPressedState_IMPL_25191_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = FrameLayout::shouldDelayChildPressedState_IMPL_25191(*arg0_, *arg1_);
}

// public static extern bool verifyDrawable_IMPL_25176(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :9436
void FrameLayout__verifyDrawable_IMPL_25176_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = FrameLayout::verifyDrawable_IMPL_25176(*arg0_, *arg1_, arg2_);
}

jclass FrameLayout::_javaClass4_;
jmethodID FrameLayout::checkLayoutParams_25192_ID_;
jmethodID FrameLayout::drawableStateChanged_25178_ID_;
jmethodID FrameLayout::FrameLayout_25171_ID_c_;
jmethodID FrameLayout::FrameLayout_25172_ID_c_;
jmethodID FrameLayout::FrameLayout_25173_ID_c_;
jmethodID FrameLayout::gatherTransparentRegion_25186_ID_;
jmethodID FrameLayout::generateDefaultLayoutParams_25179_ID_;
jmethodID FrameLayout::generateLayoutParams_25190_ID_;
jmethodID FrameLayout::generateLayoutParams_25193_ID_;
jmethodID FrameLayout::getConsiderGoneChildrenWhenMeasuring_25188_ID_;
jmethodID FrameLayout::getForeground_25181_ID_;
jmethodID FrameLayout::getForegroundGravity_25174_ID_;
jmethodID FrameLayout::getMeasureAllChildren_25189_ID_;
jmethodID FrameLayout::j_draw_25185_ID_;
jmethodID FrameLayout::jumpDrawablesToCurrentState_25177_ID_;
jmethodID FrameLayout::onInitializeAccessibilityEvent_25194_ID_;
jmethodID FrameLayout::onInitializeAccessibilityNodeInfo_25195_ID_;
jmethodID FrameLayout::onLayout_25183_ID_;
jmethodID FrameLayout::onMeasure_25182_ID_;
jmethodID FrameLayout::onSizeChanged_25184_ID_;
jmethodID FrameLayout::setForeground_25180_ID_;
jmethodID FrameLayout::setForegroundGravity_25175_ID_;
jmethodID FrameLayout::setMeasureAllChildren_25187_ID_;
jmethodID FrameLayout::shouldDelayChildPressedState_25191_ID_;
jmethodID FrameLayout::verifyDrawable_25176_ID_;

// public FrameLayout(Android.android.content.Context arg0) [instance] :9244
void FrameLayout::ctor_12(::g::Android::android::content::Context* arg0)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());;
    CACHE_METHOD(FrameLayout::FrameLayout_25171_ID_c(),FrameLayout::_javaClass4(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(FrameLayout::_javaClass4(), FrameLayout::FrameLayout_25171_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public FrameLayout(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [instance] :9260
void FrameLayout::ctor_13(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());;
    CACHE_METHOD(FrameLayout::FrameLayout_25172_ID_c(),FrameLayout::_javaClass4(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(FrameLayout::_javaClass4(), FrameLayout::FrameLayout_25172_ID_c(), _obArg0, _obArg1);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public FrameLayout(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [instance] :9277
void FrameLayout::ctor_14(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());;
    CACHE_METHOD(FrameLayout::FrameLayout_25173_ID_c(),FrameLayout::_javaClass4(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(FrameLayout::_javaClass4(), FrameLayout::FrameLayout_25173_ID_c(), _obArg0, _obArg1, ((jint)arg2));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public FrameLayout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :9242
void FrameLayout::ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_11(obj, utype, hasFallbackClass, resolveType);
}

// public new Android.android.widget.FrameLayoutDLRLayoutParams generateLayoutParams(Android.android.util.AttributeSet arg0) [instance] :9390
::g::Android::android::widget::FrameLayoutDLRLayoutParams* FrameLayout::generateLayoutParams2(uObject* arg0)
{
    return uCast< ::g::Android::android::widget::FrameLayoutDLRLayoutParams*>(FrameLayout::generateLayoutParams_IMPL_25190(_subclassed, _javaObject, arg0), ::TYPES[4/*Android.android.widget.FrameLayoutDLRLayoutParams*/]);
}

// public bool getConsiderGoneChildrenWhenMeasuring() [instance] :9378
bool FrameLayout::getConsiderGoneChildrenWhenMeasuring()
{
    return FrameLayout::getConsiderGoneChildrenWhenMeasuring_IMPL_25188(_subclassed, _javaObject);
}

// public Android.android.graphics.drawable.Drawable getForeground() [instance] :9336
::g::Android::android::graphics::drawable::Drawable* FrameLayout::getForeground()
{
    return uCast< ::g::Android::android::graphics::drawable::Drawable*>(FrameLayout::getForeground_IMPL_25181(_subclassed, _javaObject), ::TYPES[3/*Android.android.graphics.drawable.Drawable*/]);
}

// public int getForegroundGravity() [instance] :9294
int FrameLayout::getForegroundGravity()
{
    return FrameLayout::getForegroundGravity_IMPL_25174(_subclassed, _javaObject);
}

// public bool getMeasureAllChildren() [instance] :9384
bool FrameLayout::getMeasureAllChildren()
{
    return FrameLayout::getMeasureAllChildren_IMPL_25189(_subclassed, _javaObject);
}

// public void setForeground(Android.android.graphics.drawable.Drawable arg0) [instance] :9330
void FrameLayout::setForeground(::g::Android::android::graphics::drawable::Drawable* arg0)
{
    FrameLayout::setForeground_IMPL_25180(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setForegroundGravity(int arg0) [instance] :9300
void FrameLayout::setForegroundGravity(int arg0)
{
    int arg0_ = arg0;
    FrameLayout::setForegroundGravity_IMPL_25175(_subclassed, _javaObject, arg0_);
}

// public void setMeasureAllChildren(bool arg0) [instance] :9372
void FrameLayout::setMeasureAllChildren(bool arg0)
{
    bool arg0_ = arg0;
    FrameLayout::setMeasureAllChildren_IMPL_25187(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :9241
void FrameLayout::_Init4()
{
    if (FrameLayout::_javaClass4()) { return; }
    INIT_JNI;
    FrameLayout::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/FrameLayout"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!FrameLayout::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.FrameLayout'", 50);; }
}

// public static extern bool checkLayoutParams_IMPL_25192(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9484
bool FrameLayout::checkLayoutParams_IMPL_25192(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(FrameLayout::checkLayoutParams_25192_ID(),FrameLayout::_javaClass4(),"checkLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Z",GetMethodID,"Id for fallback method android.widget.FrameLayout.checkLayoutParams could not be cached",87);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::checkLayoutParams_25192_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, FrameLayout::checkLayoutParams_25192_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void drawableStateChanged_IMPL_25178(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9442
void FrameLayout::drawableStateChanged_IMPL_25178(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    CACHE_METHOD(FrameLayout::drawableStateChanged_25178_ID(),FrameLayout::_javaClass4(),"drawableStateChanged","()V",GetMethodID,"Id for fallback method android.widget.FrameLayout.drawableStateChanged could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::drawableStateChanged_25178_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, FrameLayout::drawableStateChanged_25178_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool gatherTransparentRegion_IMPL_25186(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9466
bool FrameLayout::gatherTransparentRegion_IMPL_25186(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(FrameLayout::gatherTransparentRegion_25186_ID(),FrameLayout::_javaClass4(),"gatherTransparentRegion","(Landroid/graphics/Region;)Z",GetMethodID,"Id for fallback method android.widget.FrameLayout.gatherTransparentRegion could not be cached",93);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::gatherTransparentRegion_25186_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, FrameLayout::gatherTransparentRegion_25186_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper generateDefaultLayoutParams_IMPL_25179(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9445
uObject* FrameLayout::generateDefaultLayoutParams_IMPL_25179(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    uObject* result;
    CACHE_METHOD(FrameLayout::generateDefaultLayoutParams_25179_ID(),FrameLayout::_javaClass4(),"generateDefaultLayoutParams","()Landroid/widget/FrameLayout$LayoutParams;",GetMethodID,"Id for fallback method android.widget.FrameLayout.generateDefaultLayoutParams could not be cached",97);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::generateDefaultLayoutParams_25179_ID()),result,::g::Android::android::widget::FrameLayoutDLRLayoutParams_typeof(),::g::Android::android::widget::FrameLayoutDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, FrameLayout::generateDefaultLayoutParams_25179_ID()),result,::g::Android::android::widget::FrameLayoutDLRLayoutParams_typeof(),::g::Android::android::widget::FrameLayoutDLRLayoutParams*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper generateLayoutParams_IMPL_25190(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9478
uObject* FrameLayout::generateLayoutParams_IMPL_25190(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(FrameLayout::generateLayoutParams_25190_ID(),FrameLayout::_javaClass4(),"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;",GetMethodID,"Id for fallback method android.widget.FrameLayout.generateLayoutParams could not be cached",90);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::generateLayoutParams_25190_ID(), _obArg2),result,::g::Android::android::widget::FrameLayoutDLRLayoutParams_typeof(),::g::Android::android::widget::FrameLayoutDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, FrameLayout::generateLayoutParams_25190_ID(), _obArg2),result,::g::Android::android::widget::FrameLayoutDLRLayoutParams_typeof(),::g::Android::android::widget::FrameLayoutDLRLayoutParams*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper generateLayoutParams_IMPL_25193(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9487
uObject* FrameLayout::generateLayoutParams_IMPL_25193(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(FrameLayout::generateLayoutParams_25193_ID(),FrameLayout::_javaClass4(),"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/view/ViewGroup$LayoutParams;",GetMethodID,"Id for fallback method android.widget.FrameLayout.generateLayoutParams could not be cached",90);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::generateLayoutParams_25193_ID(), _obArg2),result,::g::Android::android::view::ViewGroupDLRLayoutParams_typeof(),::g::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, FrameLayout::generateLayoutParams_25193_ID(), _obArg2),result,::g::Android::android::view::ViewGroupDLRLayoutParams_typeof(),::g::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool getConsiderGoneChildrenWhenMeasuring_IMPL_25188(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9472
bool FrameLayout::getConsiderGoneChildrenWhenMeasuring_IMPL_25188(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    bool result;
    CACHE_METHOD(FrameLayout::getConsiderGoneChildrenWhenMeasuring_25188_ID(),FrameLayout::_javaClass4(),"getConsiderGoneChildrenWhenMeasuring","()Z",GetMethodID,"Id for fallback method android.widget.FrameLayout.getConsiderGoneChildrenWhenMeasuring could not be cached",106);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::getConsiderGoneChildrenWhenMeasuring_25188_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, FrameLayout::getConsiderGoneChildrenWhenMeasuring_25188_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getForeground_IMPL_25181(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9451
uObject* FrameLayout::getForeground_IMPL_25181(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    uObject* result;
    CACHE_METHOD(FrameLayout::getForeground_25181_ID(),FrameLayout::_javaClass4(),"getForeground","()Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.widget.FrameLayout.getForeground could not be cached",83);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::getForeground_25181_ID()),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, FrameLayout::getForeground_25181_ID()),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getForegroundGravity_IMPL_25174(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9430
int FrameLayout::getForegroundGravity_IMPL_25174(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    int result;
    CACHE_METHOD(FrameLayout::getForegroundGravity_25174_ID(),FrameLayout::_javaClass4(),"getForegroundGravity","()I",GetMethodID,"Id for fallback method android.widget.FrameLayout.getForegroundGravity could not be cached",90);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::getForegroundGravity_25174_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, FrameLayout::getForegroundGravity_25174_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool getMeasureAllChildren_IMPL_25189(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9475
bool FrameLayout::getMeasureAllChildren_IMPL_25189(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    bool result;
    CACHE_METHOD(FrameLayout::getMeasureAllChildren_25189_ID(),FrameLayout::_javaClass4(),"getMeasureAllChildren","()Z",GetMethodID,"Id for fallback method android.widget.FrameLayout.getMeasureAllChildren could not be cached",91);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::getMeasureAllChildren_25189_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, FrameLayout::getMeasureAllChildren_25189_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void j_draw_IMPL_25185(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9463
void FrameLayout::j_draw_IMPL_25185(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(FrameLayout::j_draw_25185_ID(),FrameLayout::_javaClass4(),"draw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.draw could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::j_draw_25185_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, FrameLayout::j_draw_25185_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void jumpDrawablesToCurrentState_IMPL_25177(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9439
void FrameLayout::jumpDrawablesToCurrentState_IMPL_25177(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    CACHE_METHOD(FrameLayout::jumpDrawablesToCurrentState_25177_ID(),FrameLayout::_javaClass4(),"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.FrameLayout.jumpDrawablesToCurrentState could not be cached",97);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::jumpDrawablesToCurrentState_25177_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, FrameLayout::jumpDrawablesToCurrentState_25177_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public FrameLayout New(Android.android.content.Context arg0) [static] :9244
FrameLayout* FrameLayout::New9(::g::Android::android::content::Context* arg0)
{
    FrameLayout* obj2 = (FrameLayout*)uNew(FrameLayout_typeof());
    obj2->ctor_12(arg0);
    return obj2;
}

// public FrameLayout New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [static] :9260
FrameLayout* FrameLayout::New10(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    FrameLayout* obj3 = (FrameLayout*)uNew(FrameLayout_typeof());
    obj3->ctor_13(arg0, arg1);
    return obj3;
}

// public FrameLayout New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [static] :9277
FrameLayout* FrameLayout::New11(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    FrameLayout* obj4 = (FrameLayout*)uNew(FrameLayout_typeof());
    obj4->ctor_14(arg0, arg1, arg2);
    return obj4;
}

// public FrameLayout New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [static] :9242
FrameLayout* FrameLayout::New12(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    FrameLayout* obj1 = (FrameLayout*)uNew(FrameLayout_typeof());
    obj1->ctor_15(obj, utype, hasFallbackClass, resolveType);
    return obj1;
}

// public static extern void onInitializeAccessibilityEvent_IMPL_25194(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9490
void FrameLayout::onInitializeAccessibilityEvent_IMPL_25194(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(FrameLayout::onInitializeAccessibilityEvent_25194_ID(),FrameLayout::_javaClass4(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.onInitializeAccessibilityEvent could not be cached",100);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::onInitializeAccessibilityEvent_25194_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, FrameLayout::onInitializeAccessibilityEvent_25194_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_25195(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9493
void FrameLayout::onInitializeAccessibilityNodeInfo_IMPL_25195(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(FrameLayout::onInitializeAccessibilityNodeInfo_25195_ID(),FrameLayout::_javaClass4(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.onInitializeAccessibilityNodeInfo could not be cached",103);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::onInitializeAccessibilityNodeInfo_25195_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, FrameLayout::onInitializeAccessibilityNodeInfo_25195_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onLayout_IMPL_25183(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2, int arg3, int arg4, int arg5, int arg6) [static] :9457
void FrameLayout::onLayout_IMPL_25183(bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    CACHE_METHOD(FrameLayout::onLayout_25183_ID(),FrameLayout::_javaClass4(),"onLayout","(ZIIII)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.onLayout could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::onLayout_25183_ID(), ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, FrameLayout::onLayout_25183_ID(), ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onMeasure_IMPL_25182(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :9454
void FrameLayout::onMeasure_IMPL_25182(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    CACHE_METHOD(FrameLayout::onMeasure_25182_ID(),FrameLayout::_javaClass4(),"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.onMeasure could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::onMeasure_25182_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, FrameLayout::onMeasure_25182_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onSizeChanged_IMPL_25184(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :9460
void FrameLayout::onSizeChanged_IMPL_25184(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    CACHE_METHOD(FrameLayout::onSizeChanged_25184_ID(),FrameLayout::_javaClass4(),"onSizeChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.onSizeChanged could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::onSizeChanged_25184_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, FrameLayout::onSizeChanged_25184_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setForeground_IMPL_25180(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9448
void FrameLayout::setForeground_IMPL_25180(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(FrameLayout::setForeground_25180_ID(),FrameLayout::_javaClass4(),"setForeground","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.setForeground could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::setForeground_25180_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, FrameLayout::setForeground_25180_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setForegroundGravity_IMPL_25175(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :9433
void FrameLayout::setForegroundGravity_IMPL_25175(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    CACHE_METHOD(FrameLayout::setForegroundGravity_25175_ID(),FrameLayout::_javaClass4(),"setForegroundGravity","(I)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.setForegroundGravity could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::setForegroundGravity_25175_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, FrameLayout::setForegroundGravity_25175_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setMeasureAllChildren_IMPL_25187(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :9469
void FrameLayout::setMeasureAllChildren_IMPL_25187(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    CACHE_METHOD(FrameLayout::setMeasureAllChildren_25187_ID(),FrameLayout::_javaClass4(),"setMeasureAllChildren","(Z)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.setMeasureAllChildren could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::setMeasureAllChildren_25187_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, FrameLayout::setMeasureAllChildren_25187_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool shouldDelayChildPressedState_IMPL_25191(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :9481
bool FrameLayout::shouldDelayChildPressedState_IMPL_25191(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    
    bool result;
    CACHE_METHOD(FrameLayout::shouldDelayChildPressedState_25191_ID(),FrameLayout::_javaClass4(),"shouldDelayChildPressedState","()Z",GetMethodID,"Id for fallback method android.widget.FrameLayout.shouldDelayChildPressedState could not be cached",98);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::shouldDelayChildPressedState_25191_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, FrameLayout::shouldDelayChildPressedState_25191_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool verifyDrawable_IMPL_25176(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :9436
bool FrameLayout::verifyDrawable_IMPL_25176(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(FrameLayout::_javaClass4(),FrameLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(FrameLayout::verifyDrawable_25176_ID(),FrameLayout::_javaClass4(),"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z",GetMethodID,"Id for fallback method android.widget.FrameLayout.verifyDrawable could not be cached",84);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, FrameLayout::_javaClass4(), FrameLayout::verifyDrawable_25176_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, FrameLayout::verifyDrawable_25176_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(12987)
// ------------------------------------------------------------------------------

// public sealed extern class FrameLayoutDLRLayoutParams :12987
// {
::g::Android::java::lang::Object_type* FrameLayoutDLRLayoutParams_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(FrameLayoutDLRLayoutParams);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.widget.FrameLayoutDLRLayoutParams", options);
    type->SetBase(::g::Android::android::view::ViewGroupDLRMarginLayoutParams_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayoutDLRLayoutParams::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayoutDLRLayoutParams::FrameLayoutDLRLayoutParams_25166_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)FrameLayoutDLRLayoutParams___Init4_fn, 0, true, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)FrameLayoutDLRLayoutParams__New19_fn, 0, true, FrameLayoutDLRLayoutParams_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public FrameLayoutDLRLayoutParams(int arg0, int arg1) :13036
void FrameLayoutDLRLayoutParams__ctor_18_fn(FrameLayoutDLRLayoutParams* __this, int* arg0, int* arg1)
{
    __this->ctor_18(*arg0, *arg1);
}

// public static extern new void _Init() :12991
void FrameLayoutDLRLayoutParams___Init4_fn()
{
    FrameLayoutDLRLayoutParams::_Init4();
}

// public FrameLayoutDLRLayoutParams New(int arg0, int arg1) :13036
void FrameLayoutDLRLayoutParams__New19_fn(int* arg0, int* arg1, FrameLayoutDLRLayoutParams** __retval)
{
    *__retval = FrameLayoutDLRLayoutParams::New19(*arg0, *arg1);
}

jclass FrameLayoutDLRLayoutParams::_javaClass4_;
jmethodID FrameLayoutDLRLayoutParams::FrameLayoutDLRLayoutParams_25166_ID_c_;

// public FrameLayoutDLRLayoutParams(int arg0, int arg1) [instance] :13036
void FrameLayoutDLRLayoutParams::ctor_18(int arg0, int arg1)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(FrameLayoutDLRLayoutParams::_javaClass4(),FrameLayoutDLRLayoutParams::_Init4());;
    CACHE_METHOD(FrameLayoutDLRLayoutParams::FrameLayoutDLRLayoutParams_25166_ID_c(),FrameLayoutDLRLayoutParams::_javaClass4(),"<init>","(II)V",GetMethodID,"Id for fallback method android.widget.FrameLayout$LayoutParams.<init> could not be cached",89);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(FrameLayoutDLRLayoutParams::_javaClass4(), FrameLayoutDLRLayoutParams::FrameLayoutDLRLayoutParams_25166_ID_c(), ((jint)arg0), ((jint)arg1));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public static extern new void _Init() [static] :12991
void FrameLayoutDLRLayoutParams::_Init4()
{
    if (FrameLayoutDLRLayoutParams::_javaClass4()) { return; }
    INIT_JNI;
    FrameLayoutDLRLayoutParams::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/FrameLayout$LayoutParams"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!FrameLayoutDLRLayoutParams::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.FrameLayout$LayoutParams'", 63);; }
}

// public FrameLayoutDLRLayoutParams New(int arg0, int arg1) [static] :13036
FrameLayoutDLRLayoutParams* FrameLayoutDLRLayoutParams::New19(int arg0, int arg1)
{
    FrameLayoutDLRLayoutParams* obj3 = (FrameLayoutDLRLayoutParams*)uNew(FrameLayoutDLRLayoutParams_typeof());
    obj3->ctor_18(arg0, arg1);
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(15049)
// ------------------------------------------------------------------------------

// public extern class HorizontalScrollView :15049
// {
::g::Android::android::view::ViewGroup_type* HorizontalScrollView_typeof()
{
    static uSStrong< ::g::Android::android::view::ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(HorizontalScrollView);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Android.android.widget.HorizontalScrollView", options);
    type->SetBase(::g::Android::android::widget::FrameLayout_typeof());
    type->fp_addView = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*))HorizontalScrollView__addView_fn;
    type->fp_addView1 = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, ::g::Android::android::view::ViewGroupDLRLayoutParams*))HorizontalScrollView__addView1_fn;
    type->fp_addView2 = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, int*))HorizontalScrollView__addView2_fn;
    type->fp_addView3 = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, int*, ::g::Android::android::view::ViewGroupDLRLayoutParams*))HorizontalScrollView__addView3_fn;
    type->fp_computeScroll = (void(*)(::g::Android::android::view::View*))HorizontalScrollView__computeScroll_fn;
    type->fp_dispatchKeyEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::KeyEvent*, bool*))HorizontalScrollView__dispatchKeyEvent_fn;
    type->fp_j_draw = (void(*)(::g::Android::android::view::View*, ::g::Android::android::graphics::Canvas*))HorizontalScrollView__j_draw_fn;
    type->fp_onGenericMotionEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))HorizontalScrollView__onGenericMotionEvent_fn;
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))HorizontalScrollView__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))HorizontalScrollView__onInitializeAccessibilityNodeInfo_fn;
    type->fp_onInterceptTouchEvent = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::MotionEvent*, bool*))HorizontalScrollView__onInterceptTouchEvent_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))HorizontalScrollView__onTouchEvent_fn;
    type->fp_performAccessibilityAction = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::os::Bundle*, bool*))HorizontalScrollView__performAccessibilityAction_fn;
    type->fp_requestChildFocus = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))HorizontalScrollView__requestChildFocus_fn;
    type->fp_requestChildRectangleOnScreen = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*))HorizontalScrollView__requestChildRectangleOnScreen_fn;
    type->fp_requestDisallowInterceptTouchEvent = (void(*)(::g::Android::android::view::ViewGroup*, bool*))HorizontalScrollView__requestDisallowInterceptTouchEvent_fn;
    type->fp_requestLayout = (void(*)(::g::Android::android::view::View*))HorizontalScrollView__requestLayout_fn;
    type->fp_scrollTo = (void(*)(::g::Android::android::view::View*, int*, int*))HorizontalScrollView__scrollTo_fn;
    type->fp_setOverScrollMode = (void(*)(::g::Android::android::view::View*, int*))HorizontalScrollView__setOverScrollMode_fn;
    type->fp_shouldDelayChildPressedState = (void(*)(::g::Android::android::view::ViewGroup*, bool*))HorizontalScrollView__shouldDelayChildPressedState_fn;
    type->interface2.fp_requestLayout = (void(*)(uObject*))::g::Android::android::view::View__requestLayout_fn;
    type->interface2.fp_isLayoutRequested = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutRequested_fn;
    type->interface2.fp_requestTransparentRegion = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestTransparentRegion_fn;
    type->interface2.fp_invalidateChild = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*))::g::Android::android::view::ViewGroup__invalidateChild_fn;
    type->interface2.fp_invalidateChildInParent = (void(*)(uObject*, ::g::Android::Runtime::IntArray*, ::g::Android::android::graphics::Rect*, uObject**))::g::Android::android::view::ViewGroup__invalidateChildInParent_fn;
    type->interface2.fp_getParent = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParent_fn;
    type->interface2.fp_requestChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))HorizontalScrollView__requestChildFocus_fn;
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
    type->interface2.fp_requestDisallowInterceptTouchEvent = (void(*)(uObject*, bool*))HorizontalScrollView__requestDisallowInterceptTouchEvent_fn;
    type->interface2.fp_requestChildRectangleOnScreen = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*))HorizontalScrollView__requestChildRectangleOnScreen_fn;
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
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1),
        ::g::Android::android::view::ViewParent_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::_javaClass5_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::addView_25366_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::addView_25367_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::addView_25368_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::addView_25369_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::arrowScroll_25388_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::computeHorizontalScrollOffset_25392_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::computeHorizontalScrollRange_25391_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::computeScroll_25395_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::computeScrollDeltaToGetChildRectOnScreen_25396_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::dispatchKeyEvent_25375_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::executeKeyEvent_25376_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::fling_25403_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::fullScroll_25387_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::getLeftFadingEdgeStrength_25363_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::getMaxScrollAmount_25365_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::getRightFadingEdgeStrength_25364_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::HorizontalScrollView_25360_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::HorizontalScrollView_25361_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::HorizontalScrollView_25362_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::isFillViewport_25370_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::isSmoothScrollingEnabled_25372_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::j_draw_25406_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::measureChild_25393_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::measureChildWithMargins_25394_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onGenericMotionEvent_25380_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onInitializeAccessibilityEvent_25385_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onInitializeAccessibilityNodeInfo_25384_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onInterceptTouchEvent_25378_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onLayout_25401_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onMeasure_25374_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onOverScrolled_25382_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onRequestFocusInDescendants_25398_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onRestoreInstanceState_25407_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onSaveInstanceState_25408_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onSizeChanged_25402_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onTouchEvent_25379_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::pageScroll_25386_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::performAccessibilityAction_25383_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::requestChildFocus_25397_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::requestChildRectangleOnScreen_25399_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::requestDisallowInterceptTouchEvent_25377_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::requestLayout_25400_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::scrollTo_25404_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::setFillViewport_25371_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::setOverScrollMode_25405_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::setSmoothScrollingEnabled_25373_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::shouldDelayChildPressedState_25381_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::smoothScrollBy_25389_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::smoothScrollTo_25390_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(63,
        new uFunction("_Init", NULL, (void*)HorizontalScrollView___Init5_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("addView_IMPL_25366", NULL, (void*)HorizontalScrollView__addView_IMPL_25366_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("addView_IMPL_25367", NULL, (void*)HorizontalScrollView__addView_IMPL_25367_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("addView_IMPL_25368", NULL, (void*)HorizontalScrollView__addView_IMPL_25368_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("addView_IMPL_25369", NULL, (void*)HorizontalScrollView__addView_IMPL_25369_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("arrowScroll", NULL, (void*)HorizontalScrollView__arrowScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("arrowScroll_IMPL_25388", NULL, (void*)HorizontalScrollView__arrowScroll_IMPL_25388_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("computeHorizontalScrollOffset_IMPL_25392", NULL, (void*)HorizontalScrollView__computeHorizontalScrollOffset_IMPL_25392_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("computeHorizontalScrollRange_IMPL_25391", NULL, (void*)HorizontalScrollView__computeHorizontalScrollRange_IMPL_25391_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("computeScroll_IMPL_25395", NULL, (void*)HorizontalScrollView__computeScroll_IMPL_25395_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("computeScrollDeltaToGetChildRectOnScreen_IMPL_25396", NULL, (void*)HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_25396_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("dispatchKeyEvent_IMPL_25375", NULL, (void*)HorizontalScrollView__dispatchKeyEvent_IMPL_25375_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("executeKeyEvent", NULL, (void*)HorizontalScrollView__executeKeyEvent_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Android::android::view::KeyEvent_typeof()),
        new uFunction("executeKeyEvent_IMPL_25376", NULL, (void*)HorizontalScrollView__executeKeyEvent_IMPL_25376_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("fling", NULL, (void*)HorizontalScrollView__fling_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("fling_IMPL_25403", NULL, (void*)HorizontalScrollView__fling_IMPL_25403_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("fullScroll", NULL, (void*)HorizontalScrollView__fullScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("fullScroll_IMPL_25387", NULL, (void*)HorizontalScrollView__fullScroll_IMPL_25387_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getLeftFadingEdgeStrength_IMPL_25363", NULL, (void*)HorizontalScrollView__getLeftFadingEdgeStrength_IMPL_25363_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getMaxScrollAmount", NULL, (void*)HorizontalScrollView__getMaxScrollAmount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getMaxScrollAmount_IMPL_25365", NULL, (void*)HorizontalScrollView__getMaxScrollAmount_IMPL_25365_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getRightFadingEdgeStrength_IMPL_25364", NULL, (void*)HorizontalScrollView__getRightFadingEdgeStrength_IMPL_25364_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("isFillViewport", NULL, (void*)HorizontalScrollView__isFillViewport_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isFillViewport_IMPL_25370", NULL, (void*)HorizontalScrollView__isFillViewport_IMPL_25370_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("isSmoothScrollingEnabled", NULL, (void*)HorizontalScrollView__isSmoothScrollingEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isSmoothScrollingEnabled_IMPL_25372", NULL, (void*)HorizontalScrollView__isSmoothScrollingEnabled_IMPL_25372_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("j_draw_IMPL_25406", NULL, (void*)HorizontalScrollView__j_draw_IMPL_25406_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("measureChild_IMPL_25393", NULL, (void*)HorizontalScrollView__measureChild_IMPL_25393_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("measureChildWithMargins_IMPL_25394", NULL, (void*)HorizontalScrollView__measureChildWithMargins_IMPL_25394_fn, 0, true, uVoid_typeof(), 7, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)HorizontalScrollView__New13_fn, 0, true, HorizontalScrollView_typeof(), 1, ::g::Android::android::content::Context_typeof()),
        new uFunction(".ctor", NULL, (void*)HorizontalScrollView__New14_fn, 0, true, HorizontalScrollView_typeof(), 2, ::g::Android::android::content::Context_typeof(), ::g::Android::android::util::AttributeSet_typeof()),
        new uFunction(".ctor", NULL, (void*)HorizontalScrollView__New15_fn, 0, true, HorizontalScrollView_typeof(), 3, ::g::Android::android::content::Context_typeof(), ::g::Android::android::util::AttributeSet_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)HorizontalScrollView__New16_fn, 0, true, HorizontalScrollView_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onGenericMotionEvent_IMPL_25380", NULL, (void*)HorizontalScrollView__onGenericMotionEvent_IMPL_25380_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_25385", NULL, (void*)HorizontalScrollView__onInitializeAccessibilityEvent_IMPL_25385_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_25384", NULL, (void*)HorizontalScrollView__onInitializeAccessibilityNodeInfo_IMPL_25384_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInterceptTouchEvent_IMPL_25378", NULL, (void*)HorizontalScrollView__onInterceptTouchEvent_IMPL_25378_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onLayout_IMPL_25401", NULL, (void*)HorizontalScrollView__onLayout_IMPL_25401_fn, 0, true, uVoid_typeof(), 7, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onMeasure_IMPL_25374", NULL, (void*)HorizontalScrollView__onMeasure_IMPL_25374_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onOverScrolled_IMPL_25382", NULL, (void*)HorizontalScrollView__onOverScrolled_IMPL_25382_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onRequestFocusInDescendants_IMPL_25398", NULL, (void*)HorizontalScrollView__onRequestFocusInDescendants_IMPL_25398_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onRestoreInstanceState_IMPL_25407", NULL, (void*)HorizontalScrollView__onRestoreInstanceState_IMPL_25407_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onSaveInstanceState_IMPL_25408", NULL, (void*)HorizontalScrollView__onSaveInstanceState_IMPL_25408_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onSizeChanged_IMPL_25402", NULL, (void*)HorizontalScrollView__onSizeChanged_IMPL_25402_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onTouchEvent_IMPL_25379", NULL, (void*)HorizontalScrollView__onTouchEvent_IMPL_25379_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("pageScroll", NULL, (void*)HorizontalScrollView__pageScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("pageScroll_IMPL_25386", NULL, (void*)HorizontalScrollView__pageScroll_IMPL_25386_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("performAccessibilityAction_IMPL_25383", NULL, (void*)HorizontalScrollView__performAccessibilityAction_IMPL_25383_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("requestChildFocus_IMPL_25397", NULL, (void*)HorizontalScrollView__requestChildFocus_IMPL_25397_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("requestChildRectangleOnScreen_IMPL_25399", NULL, (void*)HorizontalScrollView__requestChildRectangleOnScreen_IMPL_25399_fn, 0, true, ::g::Uno::Bool_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("requestDisallowInterceptTouchEvent_IMPL_25377", NULL, (void*)HorizontalScrollView__requestDisallowInterceptTouchEvent_IMPL_25377_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("requestLayout_IMPL_25400", NULL, (void*)HorizontalScrollView__requestLayout_IMPL_25400_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("scrollTo_IMPL_25404", NULL, (void*)HorizontalScrollView__scrollTo_IMPL_25404_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setFillViewport", NULL, (void*)HorizontalScrollView__setFillViewport_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setFillViewport_IMPL_25371", NULL, (void*)HorizontalScrollView__setFillViewport_IMPL_25371_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setOverScrollMode_IMPL_25405", NULL, (void*)HorizontalScrollView__setOverScrollMode_IMPL_25405_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setSmoothScrollingEnabled", NULL, (void*)HorizontalScrollView__setSmoothScrollingEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setSmoothScrollingEnabled_IMPL_25373", NULL, (void*)HorizontalScrollView__setSmoothScrollingEnabled_IMPL_25373_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("shouldDelayChildPressedState_IMPL_25381", NULL, (void*)HorizontalScrollView__shouldDelayChildPressedState_IMPL_25381_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("smoothScrollBy", NULL, (void*)HorizontalScrollView__smoothScrollBy_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("smoothScrollBy_IMPL_25389", NULL, (void*)HorizontalScrollView__smoothScrollBy_IMPL_25389_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("smoothScrollTo", NULL, (void*)HorizontalScrollView__smoothScrollTo_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("smoothScrollTo_IMPL_25390", NULL, (void*)HorizontalScrollView__smoothScrollTo_IMPL_25390_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public HorizontalScrollView(Android.android.content.Context arg0) :15056
void HorizontalScrollView__ctor_16_fn(HorizontalScrollView* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_16(arg0);
}

// public HorizontalScrollView(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :15072
void HorizontalScrollView__ctor_17_fn(HorizontalScrollView* __this, ::g::Android::android::content::Context* arg0, uObject* arg1)
{
    __this->ctor_17(arg0, arg1);
}

// public HorizontalScrollView(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :15089
void HorizontalScrollView__ctor_18_fn(HorizontalScrollView* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2)
{
    __this->ctor_18(arg0, arg1, *arg2);
}

// public HorizontalScrollView(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :15054
void HorizontalScrollView__ctor_19_fn(HorizontalScrollView* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_19(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :15053
void HorizontalScrollView___Init5_fn()
{
    HorizontalScrollView::_Init5();
}

// public override sealed void addView(Android.android.view.View arg0) :15124
void HorizontalScrollView__addView_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0)
{
    HorizontalScrollView::addView_IMPL_25366(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public override sealed void addView(Android.android.view.View arg0, Android.android.view.ViewGroupDLRLayoutParams arg1) :15136
void HorizontalScrollView__addView1_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg1)
{
    HorizontalScrollView::addView_IMPL_25368(__this->_subclassed, __this->_javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public override sealed void addView(Android.android.view.View arg0, int arg1) :15130
void HorizontalScrollView__addView2_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0, int* arg1)
{
    int arg1_ = *arg1;
    HorizontalScrollView::addView_IMPL_25367(__this->_subclassed, __this->_javaObject, (uObject*)arg0, arg1_);
}

// public override sealed void addView(Android.android.view.View arg0, int arg1, Android.android.view.ViewGroupDLRLayoutParams arg2) :15142
void HorizontalScrollView__addView3_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0, int* arg1, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg2)
{
    int arg1_ = *arg1;
    HorizontalScrollView::addView_IMPL_25369(__this->_subclassed, __this->_javaObject, (uObject*)arg0, arg1_, (uObject*)arg2);
}

// public static extern void addView_IMPL_25366(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15395
void HorizontalScrollView__addView_IMPL_25366_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    HorizontalScrollView::addView_IMPL_25366(*arg0_, *arg1_, arg2_);
}

// public static extern void addView_IMPL_25367(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :15398
void HorizontalScrollView__addView_IMPL_25367_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    HorizontalScrollView::addView_IMPL_25367(*arg0_, *arg1_, arg2_, *arg3_);
}

// public static extern void addView_IMPL_25368(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :15401
void HorizontalScrollView__addView_IMPL_25368_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    HorizontalScrollView::addView_IMPL_25368(*arg0_, *arg1_, arg2_, arg3_);
}

// public static extern void addView_IMPL_25369(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :15404
void HorizontalScrollView__addView_IMPL_25369_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_)
{
    HorizontalScrollView::addView_IMPL_25369(*arg0_, *arg1_, arg2_, *arg3_, arg4_);
}

// public bool arrowScroll(int arg0) :15256
void HorizontalScrollView__arrowScroll_fn(HorizontalScrollView* __this, int* arg0, bool* __retval)
{
    *__retval = __this->arrowScroll(*arg0);
}

// public static extern bool arrowScroll_IMPL_25388(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :15461
void HorizontalScrollView__arrowScroll_IMPL_25388_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval)
{
    *__retval = HorizontalScrollView::arrowScroll_IMPL_25388(*arg0_, *arg1_, *arg2_);
}

// public static extern int computeHorizontalScrollOffset_IMPL_25392(bool arg0, Android.Base.Primitives.ujobject arg1) :15473
void HorizontalScrollView__computeHorizontalScrollOffset_IMPL_25392_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = HorizontalScrollView::computeHorizontalScrollOffset_IMPL_25392(*arg0_, *arg1_);
}

// public static extern int computeHorizontalScrollRange_IMPL_25391(bool arg0, Android.Base.Primitives.ujobject arg1) :15470
void HorizontalScrollView__computeHorizontalScrollRange_IMPL_25391_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = HorizontalScrollView::computeHorizontalScrollRange_IMPL_25391(*arg0_, *arg1_);
}

// public override sealed void computeScroll() :15298
void HorizontalScrollView__computeScroll_fn(HorizontalScrollView* __this)
{
    HorizontalScrollView::computeScroll_IMPL_25395(__this->_subclassed, __this->_javaObject);
}

// public static extern void computeScroll_IMPL_25395(bool arg0, Android.Base.Primitives.ujobject arg1) :15482
void HorizontalScrollView__computeScroll_IMPL_25395_fn(bool* arg0_, jobject* arg1_)
{
    HorizontalScrollView::computeScroll_IMPL_25395(*arg0_, *arg1_);
}

// public static extern int computeScrollDeltaToGetChildRectOnScreen_IMPL_25396(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15485
void HorizontalScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_25396_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = HorizontalScrollView::computeScrollDeltaToGetChildRectOnScreen_IMPL_25396(*arg0_, *arg1_, arg2_);
}

// public override sealed bool dispatchKeyEvent(Android.android.view.KeyEvent arg0) :15178
void HorizontalScrollView__dispatchKeyEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval)
{
    return *__retval = HorizontalScrollView::dispatchKeyEvent_IMPL_25375(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool dispatchKeyEvent_IMPL_25375(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15422
void HorizontalScrollView__dispatchKeyEvent_IMPL_25375_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = HorizontalScrollView::dispatchKeyEvent_IMPL_25375(*arg0_, *arg1_, arg2_);
}

// public bool executeKeyEvent(Android.android.view.KeyEvent arg0) :15184
void HorizontalScrollView__executeKeyEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval)
{
    *__retval = __this->executeKeyEvent(arg0);
}

// public static extern bool executeKeyEvent_IMPL_25376(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15425
void HorizontalScrollView__executeKeyEvent_IMPL_25376_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = HorizontalScrollView::executeKeyEvent_IMPL_25376(*arg0_, *arg1_, arg2_);
}

// public void fling(int arg0) :15346
void HorizontalScrollView__fling_fn(HorizontalScrollView* __this, int* arg0)
{
    __this->fling(*arg0);
}

// public static extern void fling_IMPL_25403(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :15506
void HorizontalScrollView__fling_IMPL_25403_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    HorizontalScrollView::fling_IMPL_25403(*arg0_, *arg1_, *arg2_);
}

// public bool fullScroll(int arg0) :15250
void HorizontalScrollView__fullScroll_fn(HorizontalScrollView* __this, int* arg0, bool* __retval)
{
    *__retval = __this->fullScroll(*arg0);
}

// public static extern bool fullScroll_IMPL_25387(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :15458
void HorizontalScrollView__fullScroll_IMPL_25387_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval)
{
    *__retval = HorizontalScrollView::fullScroll_IMPL_25387(*arg0_, *arg1_, *arg2_);
}

// public static extern float getLeftFadingEdgeStrength_IMPL_25363(bool arg0, Android.Base.Primitives.ujobject arg1) :15386
void HorizontalScrollView__getLeftFadingEdgeStrength_IMPL_25363_fn(bool* arg0_, jobject* arg1_, float* __retval)
{
    *__retval = HorizontalScrollView::getLeftFadingEdgeStrength_IMPL_25363(*arg0_, *arg1_);
}

// public int getMaxScrollAmount() :15118
void HorizontalScrollView__getMaxScrollAmount_fn(HorizontalScrollView* __this, int* __retval)
{
    *__retval = __this->getMaxScrollAmount();
}

// public static extern int getMaxScrollAmount_IMPL_25365(bool arg0, Android.Base.Primitives.ujobject arg1) :15392
void HorizontalScrollView__getMaxScrollAmount_IMPL_25365_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = HorizontalScrollView::getMaxScrollAmount_IMPL_25365(*arg0_, *arg1_);
}

// public static extern float getRightFadingEdgeStrength_IMPL_25364(bool arg0, Android.Base.Primitives.ujobject arg1) :15389
void HorizontalScrollView__getRightFadingEdgeStrength_IMPL_25364_fn(bool* arg0_, jobject* arg1_, float* __retval)
{
    *__retval = HorizontalScrollView::getRightFadingEdgeStrength_IMPL_25364(*arg0_, *arg1_);
}

// public bool isFillViewport() :15148
void HorizontalScrollView__isFillViewport_fn(HorizontalScrollView* __this, bool* __retval)
{
    *__retval = __this->isFillViewport();
}

// public static extern bool isFillViewport_IMPL_25370(bool arg0, Android.Base.Primitives.ujobject arg1) :15407
void HorizontalScrollView__isFillViewport_IMPL_25370_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = HorizontalScrollView::isFillViewport_IMPL_25370(*arg0_, *arg1_);
}

// public bool isSmoothScrollingEnabled() :15160
void HorizontalScrollView__isSmoothScrollingEnabled_fn(HorizontalScrollView* __this, bool* __retval)
{
    *__retval = __this->isSmoothScrollingEnabled();
}

// public static extern bool isSmoothScrollingEnabled_IMPL_25372(bool arg0, Android.Base.Primitives.ujobject arg1) :15413
void HorizontalScrollView__isSmoothScrollingEnabled_IMPL_25372_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = HorizontalScrollView::isSmoothScrollingEnabled_IMPL_25372(*arg0_, *arg1_);
}

// public override sealed void j_draw(Android.android.graphics.Canvas arg0) :15364
void HorizontalScrollView__j_draw_fn(HorizontalScrollView* __this, ::g::Android::android::graphics::Canvas* arg0)
{
    HorizontalScrollView::j_draw_IMPL_25406(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void j_draw_IMPL_25406(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15515
void HorizontalScrollView__j_draw_IMPL_25406_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    HorizontalScrollView::j_draw_IMPL_25406(*arg0_, *arg1_, arg2_);
}

// public static extern void measureChild_IMPL_25393(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) :15476
void HorizontalScrollView__measureChild_IMPL_25393_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_)
{
    HorizontalScrollView::measureChild_IMPL_25393(*arg0_, *arg1_, arg2_, *arg3_, *arg4_);
}

// public static extern void measureChildWithMargins_IMPL_25394(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5, int arg6) :15479
void HorizontalScrollView__measureChildWithMargins_IMPL_25394_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_)
{
    HorizontalScrollView::measureChildWithMargins_IMPL_25394(*arg0_, *arg1_, arg2_, *arg3_, *arg4_, *arg5_, *arg6_);
}

// public HorizontalScrollView New(Android.android.content.Context arg0) :15056
void HorizontalScrollView__New13_fn(::g::Android::android::content::Context* arg0, HorizontalScrollView** __retval)
{
    *__retval = HorizontalScrollView::New13(arg0);
}

// public HorizontalScrollView New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :15072
void HorizontalScrollView__New14_fn(::g::Android::android::content::Context* arg0, uObject* arg1, HorizontalScrollView** __retval)
{
    *__retval = HorizontalScrollView::New14(arg0, arg1);
}

// public HorizontalScrollView New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :15089
void HorizontalScrollView__New15_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, HorizontalScrollView** __retval)
{
    *__retval = HorizontalScrollView::New15(arg0, arg1, *arg2);
}

// public HorizontalScrollView New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :15054
void HorizontalScrollView__New16_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, HorizontalScrollView** __retval)
{
    *__retval = HorizontalScrollView::New16(*obj, utype, *hasFallbackClass, *resolveType);
}

// public override sealed bool onGenericMotionEvent(Android.android.view.MotionEvent arg0) :15208
void HorizontalScrollView__onGenericMotionEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = HorizontalScrollView::onGenericMotionEvent_IMPL_25380(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onGenericMotionEvent_IMPL_25380(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15437
void HorizontalScrollView__onGenericMotionEvent_IMPL_25380_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = HorizontalScrollView::onGenericMotionEvent_IMPL_25380(*arg0_, *arg1_, arg2_);
}

// public override sealed void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :15238
void HorizontalScrollView__onInitializeAccessibilityEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    HorizontalScrollView::onInitializeAccessibilityEvent_IMPL_25385(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_25385(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15452
void HorizontalScrollView__onInitializeAccessibilityEvent_IMPL_25385_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    HorizontalScrollView::onInitializeAccessibilityEvent_IMPL_25385(*arg0_, *arg1_, arg2_);
}

// public override sealed void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :15232
void HorizontalScrollView__onInitializeAccessibilityNodeInfo_fn(HorizontalScrollView* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    HorizontalScrollView::onInitializeAccessibilityNodeInfo_IMPL_25384(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_25384(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15449
void HorizontalScrollView__onInitializeAccessibilityNodeInfo_IMPL_25384_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    HorizontalScrollView::onInitializeAccessibilityNodeInfo_IMPL_25384(*arg0_, *arg1_, arg2_);
}

// public override sealed bool onInterceptTouchEvent(Android.android.view.MotionEvent arg0) :15196
void HorizontalScrollView__onInterceptTouchEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = HorizontalScrollView::onInterceptTouchEvent_IMPL_25378(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onInterceptTouchEvent_IMPL_25378(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15431
void HorizontalScrollView__onInterceptTouchEvent_IMPL_25378_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = HorizontalScrollView::onInterceptTouchEvent_IMPL_25378(*arg0_, *arg1_, arg2_);
}

// public static extern void onLayout_IMPL_25401(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2, int arg3, int arg4, int arg5, int arg6) :15500
void HorizontalScrollView__onLayout_IMPL_25401_fn(bool* arg0_, jobject* arg1_, bool* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_)
{
    HorizontalScrollView::onLayout_IMPL_25401(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_, *arg6_);
}

// public static extern void onMeasure_IMPL_25374(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :15419
void HorizontalScrollView__onMeasure_IMPL_25374_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    HorizontalScrollView::onMeasure_IMPL_25374(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public static extern void onOverScrolled_IMPL_25382(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, bool arg4, bool arg5) :15443
void HorizontalScrollView__onOverScrolled_IMPL_25382_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* arg4_, bool* arg5_)
{
    HorizontalScrollView::onOverScrolled_IMPL_25382(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public static extern bool onRequestFocusInDescendants_IMPL_25398(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :15491
void HorizontalScrollView__onRequestFocusInDescendants_IMPL_25398_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = HorizontalScrollView::onRequestFocusInDescendants_IMPL_25398(*arg0_, *arg1_, *arg2_, arg3_);
}

// public static extern void onRestoreInstanceState_IMPL_25407(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15518
void HorizontalScrollView__onRestoreInstanceState_IMPL_25407_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    HorizontalScrollView::onRestoreInstanceState_IMPL_25407(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper onSaveInstanceState_IMPL_25408(bool arg0, Android.Base.Primitives.ujobject arg1) :15521
void HorizontalScrollView__onSaveInstanceState_IMPL_25408_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = HorizontalScrollView::onSaveInstanceState_IMPL_25408(*arg0_, *arg1_);
}

// public static extern void onSizeChanged_IMPL_25402(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :15503
void HorizontalScrollView__onSizeChanged_IMPL_25402_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    HorizontalScrollView::onSizeChanged_IMPL_25402(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public override sealed bool onTouchEvent(Android.android.view.MotionEvent arg0) :15202
void HorizontalScrollView__onTouchEvent_fn(HorizontalScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = HorizontalScrollView::onTouchEvent_IMPL_25379(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onTouchEvent_IMPL_25379(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15434
void HorizontalScrollView__onTouchEvent_IMPL_25379_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = HorizontalScrollView::onTouchEvent_IMPL_25379(*arg0_, *arg1_, arg2_);
}

// public bool pageScroll(int arg0) :15244
void HorizontalScrollView__pageScroll_fn(HorizontalScrollView* __this, int* arg0, bool* __retval)
{
    *__retval = __this->pageScroll(*arg0);
}

// public static extern bool pageScroll_IMPL_25386(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :15455
void HorizontalScrollView__pageScroll_IMPL_25386_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval)
{
    *__retval = HorizontalScrollView::pageScroll_IMPL_25386(*arg0_, *arg1_, *arg2_);
}

// public override sealed bool performAccessibilityAction(int arg0, Android.android.os.Bundle arg1) :15226
void HorizontalScrollView__performAccessibilityAction_fn(HorizontalScrollView* __this, int* arg0, ::g::Android::android::os::Bundle* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = HorizontalScrollView::performAccessibilityAction_IMPL_25383(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool performAccessibilityAction_IMPL_25383(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :15446
void HorizontalScrollView__performAccessibilityAction_IMPL_25383_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = HorizontalScrollView::performAccessibilityAction_IMPL_25383(*arg0_, *arg1_, *arg2_, arg3_);
}

// public override sealed void requestChildFocus(Android.android.view.View arg0, Android.android.view.View arg1) :15310
void HorizontalScrollView__requestChildFocus_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1)
{
    HorizontalScrollView::requestChildFocus_IMPL_25397(__this->_subclassed, __this->_javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public static extern void requestChildFocus_IMPL_25397(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :15488
void HorizontalScrollView__requestChildFocus_IMPL_25397_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    HorizontalScrollView::requestChildFocus_IMPL_25397(*arg0_, *arg1_, arg2_, arg3_);
}

// public override sealed bool requestChildRectangleOnScreen(Android.android.view.View arg0, Android.android.graphics.Rect arg1, bool arg2) :15322
void HorizontalScrollView__requestChildRectangleOnScreen_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, bool* arg2, bool* __retval)
{
    bool arg2_ = *arg2;
    return *__retval = HorizontalScrollView::requestChildRectangleOnScreen_IMPL_25399(__this->_subclassed, __this->_javaObject, (uObject*)arg0, (uObject*)arg1, arg2_), void();
}

// public static extern bool requestChildRectangleOnScreen_IMPL_25399(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) :15494
void HorizontalScrollView__requestChildRectangleOnScreen_IMPL_25399_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_, bool* __retval)
{
    *__retval = HorizontalScrollView::requestChildRectangleOnScreen_IMPL_25399(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public override sealed void requestDisallowInterceptTouchEvent(bool arg0) :15190
void HorizontalScrollView__requestDisallowInterceptTouchEvent_fn(HorizontalScrollView* __this, bool* arg0)
{
    bool arg0_ = *arg0;
    HorizontalScrollView::requestDisallowInterceptTouchEvent_IMPL_25377(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void requestDisallowInterceptTouchEvent_IMPL_25377(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :15428
void HorizontalScrollView__requestDisallowInterceptTouchEvent_IMPL_25377_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    HorizontalScrollView::requestDisallowInterceptTouchEvent_IMPL_25377(*arg0_, *arg1_, *arg2_);
}

// public override sealed void requestLayout() :15328
void HorizontalScrollView__requestLayout_fn(HorizontalScrollView* __this)
{
    HorizontalScrollView::requestLayout_IMPL_25400(__this->_subclassed, __this->_javaObject);
}

// public static extern void requestLayout_IMPL_25400(bool arg0, Android.Base.Primitives.ujobject arg1) :15497
void HorizontalScrollView__requestLayout_IMPL_25400_fn(bool* arg0_, jobject* arg1_)
{
    HorizontalScrollView::requestLayout_IMPL_25400(*arg0_, *arg1_);
}

// public override sealed void scrollTo(int arg0, int arg1) :15352
void HorizontalScrollView__scrollTo_fn(HorizontalScrollView* __this, int* arg0, int* arg1)
{
    int arg0_ = *arg0;
    int arg1_ = *arg1;
    HorizontalScrollView::scrollTo_IMPL_25404(__this->_subclassed, __this->_javaObject, arg0_, arg1_);
}

// public static extern void scrollTo_IMPL_25404(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :15509
void HorizontalScrollView__scrollTo_IMPL_25404_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    HorizontalScrollView::scrollTo_IMPL_25404(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setFillViewport(bool arg0) :15154
void HorizontalScrollView__setFillViewport_fn(HorizontalScrollView* __this, bool* arg0)
{
    __this->setFillViewport(*arg0);
}

// public static extern void setFillViewport_IMPL_25371(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :15410
void HorizontalScrollView__setFillViewport_IMPL_25371_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    HorizontalScrollView::setFillViewport_IMPL_25371(*arg0_, *arg1_, *arg2_);
}

// public override sealed void setOverScrollMode(int arg0) :15358
void HorizontalScrollView__setOverScrollMode_fn(HorizontalScrollView* __this, int* arg0)
{
    int arg0_ = *arg0;
    HorizontalScrollView::setOverScrollMode_IMPL_25405(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setOverScrollMode_IMPL_25405(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :15512
void HorizontalScrollView__setOverScrollMode_IMPL_25405_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    HorizontalScrollView::setOverScrollMode_IMPL_25405(*arg0_, *arg1_, *arg2_);
}

// public void setSmoothScrollingEnabled(bool arg0) :15166
void HorizontalScrollView__setSmoothScrollingEnabled_fn(HorizontalScrollView* __this, bool* arg0)
{
    __this->setSmoothScrollingEnabled(*arg0);
}

// public static extern void setSmoothScrollingEnabled_IMPL_25373(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :15416
void HorizontalScrollView__setSmoothScrollingEnabled_IMPL_25373_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    HorizontalScrollView::setSmoothScrollingEnabled_IMPL_25373(*arg0_, *arg1_, *arg2_);
}

// public override sealed bool shouldDelayChildPressedState() :15214
void HorizontalScrollView__shouldDelayChildPressedState_fn(HorizontalScrollView* __this, bool* __retval)
{
    return *__retval = HorizontalScrollView::shouldDelayChildPressedState_IMPL_25381(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool shouldDelayChildPressedState_IMPL_25381(bool arg0, Android.Base.Primitives.ujobject arg1) :15440
void HorizontalScrollView__shouldDelayChildPressedState_IMPL_25381_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = HorizontalScrollView::shouldDelayChildPressedState_IMPL_25381(*arg0_, *arg1_);
}

// public void smoothScrollBy(int arg0, int arg1) :15262
void HorizontalScrollView__smoothScrollBy_fn(HorizontalScrollView* __this, int* arg0, int* arg1)
{
    __this->smoothScrollBy(*arg0, *arg1);
}

// public static extern void smoothScrollBy_IMPL_25389(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :15464
void HorizontalScrollView__smoothScrollBy_IMPL_25389_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    HorizontalScrollView::smoothScrollBy_IMPL_25389(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void smoothScrollTo(int arg0, int arg1) :15268
void HorizontalScrollView__smoothScrollTo_fn(HorizontalScrollView* __this, int* arg0, int* arg1)
{
    __this->smoothScrollTo(*arg0, *arg1);
}

// public static extern void smoothScrollTo_IMPL_25390(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :15467
void HorizontalScrollView__smoothScrollTo_IMPL_25390_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    HorizontalScrollView::smoothScrollTo_IMPL_25390(*arg0_, *arg1_, *arg2_, *arg3_);
}

jclass HorizontalScrollView::_javaClass5_;
jmethodID HorizontalScrollView::addView_25366_ID_;
jmethodID HorizontalScrollView::addView_25367_ID_;
jmethodID HorizontalScrollView::addView_25368_ID_;
jmethodID HorizontalScrollView::addView_25369_ID_;
jmethodID HorizontalScrollView::arrowScroll_25388_ID_;
jmethodID HorizontalScrollView::computeHorizontalScrollOffset_25392_ID_;
jmethodID HorizontalScrollView::computeHorizontalScrollRange_25391_ID_;
jmethodID HorizontalScrollView::computeScroll_25395_ID_;
jmethodID HorizontalScrollView::computeScrollDeltaToGetChildRectOnScreen_25396_ID_;
jmethodID HorizontalScrollView::dispatchKeyEvent_25375_ID_;
jmethodID HorizontalScrollView::executeKeyEvent_25376_ID_;
jmethodID HorizontalScrollView::fling_25403_ID_;
jmethodID HorizontalScrollView::fullScroll_25387_ID_;
jmethodID HorizontalScrollView::getLeftFadingEdgeStrength_25363_ID_;
jmethodID HorizontalScrollView::getMaxScrollAmount_25365_ID_;
jmethodID HorizontalScrollView::getRightFadingEdgeStrength_25364_ID_;
jmethodID HorizontalScrollView::HorizontalScrollView_25360_ID_c_;
jmethodID HorizontalScrollView::HorizontalScrollView_25361_ID_c_;
jmethodID HorizontalScrollView::HorizontalScrollView_25362_ID_c_;
jmethodID HorizontalScrollView::isFillViewport_25370_ID_;
jmethodID HorizontalScrollView::isSmoothScrollingEnabled_25372_ID_;
jmethodID HorizontalScrollView::j_draw_25406_ID_;
jmethodID HorizontalScrollView::measureChild_25393_ID_;
jmethodID HorizontalScrollView::measureChildWithMargins_25394_ID_;
jmethodID HorizontalScrollView::onGenericMotionEvent_25380_ID_;
jmethodID HorizontalScrollView::onInitializeAccessibilityEvent_25385_ID_;
jmethodID HorizontalScrollView::onInitializeAccessibilityNodeInfo_25384_ID_;
jmethodID HorizontalScrollView::onInterceptTouchEvent_25378_ID_;
jmethodID HorizontalScrollView::onLayout_25401_ID_;
jmethodID HorizontalScrollView::onMeasure_25374_ID_;
jmethodID HorizontalScrollView::onOverScrolled_25382_ID_;
jmethodID HorizontalScrollView::onRequestFocusInDescendants_25398_ID_;
jmethodID HorizontalScrollView::onRestoreInstanceState_25407_ID_;
jmethodID HorizontalScrollView::onSaveInstanceState_25408_ID_;
jmethodID HorizontalScrollView::onSizeChanged_25402_ID_;
jmethodID HorizontalScrollView::onTouchEvent_25379_ID_;
jmethodID HorizontalScrollView::pageScroll_25386_ID_;
jmethodID HorizontalScrollView::performAccessibilityAction_25383_ID_;
jmethodID HorizontalScrollView::requestChildFocus_25397_ID_;
jmethodID HorizontalScrollView::requestChildRectangleOnScreen_25399_ID_;
jmethodID HorizontalScrollView::requestDisallowInterceptTouchEvent_25377_ID_;
jmethodID HorizontalScrollView::requestLayout_25400_ID_;
jmethodID HorizontalScrollView::scrollTo_25404_ID_;
jmethodID HorizontalScrollView::setFillViewport_25371_ID_;
jmethodID HorizontalScrollView::setOverScrollMode_25405_ID_;
jmethodID HorizontalScrollView::setSmoothScrollingEnabled_25373_ID_;
jmethodID HorizontalScrollView::shouldDelayChildPressedState_25381_ID_;
jmethodID HorizontalScrollView::smoothScrollBy_25389_ID_;
jmethodID HorizontalScrollView::smoothScrollTo_25390_ID_;

// public HorizontalScrollView(Android.android.content.Context arg0) [instance] :15056
void HorizontalScrollView::ctor_16(::g::Android::android::content::Context* arg0)
{
    ctor_15(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());;
    CACHE_METHOD(HorizontalScrollView::HorizontalScrollView_25360_ID_c(),HorizontalScrollView::_javaClass5(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.<init> could not be cached",85);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(HorizontalScrollView::_javaClass5(), HorizontalScrollView::HorizontalScrollView_25360_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public HorizontalScrollView(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [instance] :15072
void HorizontalScrollView::ctor_17(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    ctor_15(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());;
    CACHE_METHOD(HorizontalScrollView::HorizontalScrollView_25361_ID_c(),HorizontalScrollView::_javaClass5(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.<init> could not be cached",85);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(HorizontalScrollView::_javaClass5(), HorizontalScrollView::HorizontalScrollView_25361_ID_c(), _obArg0, _obArg1);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public HorizontalScrollView(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [instance] :15089
void HorizontalScrollView::ctor_18(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    ctor_15(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());;
    CACHE_METHOD(HorizontalScrollView::HorizontalScrollView_25362_ID_c(),HorizontalScrollView::_javaClass5(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.<init> could not be cached",85);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(HorizontalScrollView::_javaClass5(), HorizontalScrollView::HorizontalScrollView_25362_ID_c(), _obArg0, _obArg1, ((jint)arg2));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public HorizontalScrollView(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :15054
void HorizontalScrollView::ctor_19(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_15(obj, utype, hasFallbackClass, resolveType);
}

// public bool arrowScroll(int arg0) [instance] :15256
bool HorizontalScrollView::arrowScroll(int arg0)
{
    int arg0_ = arg0;
    return HorizontalScrollView::arrowScroll_IMPL_25388(_subclassed, _javaObject, arg0_);
}

// public bool executeKeyEvent(Android.android.view.KeyEvent arg0) [instance] :15184
bool HorizontalScrollView::executeKeyEvent(::g::Android::android::view::KeyEvent* arg0)
{
    return HorizontalScrollView::executeKeyEvent_IMPL_25376(_subclassed, _javaObject, (uObject*)arg0);
}

// public void fling(int arg0) [instance] :15346
void HorizontalScrollView::fling(int arg0)
{
    int arg0_ = arg0;
    HorizontalScrollView::fling_IMPL_25403(_subclassed, _javaObject, arg0_);
}

// public bool fullScroll(int arg0) [instance] :15250
bool HorizontalScrollView::fullScroll(int arg0)
{
    int arg0_ = arg0;
    return HorizontalScrollView::fullScroll_IMPL_25387(_subclassed, _javaObject, arg0_);
}

// public int getMaxScrollAmount() [instance] :15118
int HorizontalScrollView::getMaxScrollAmount()
{
    return HorizontalScrollView::getMaxScrollAmount_IMPL_25365(_subclassed, _javaObject);
}

// public bool isFillViewport() [instance] :15148
bool HorizontalScrollView::isFillViewport()
{
    return HorizontalScrollView::isFillViewport_IMPL_25370(_subclassed, _javaObject);
}

// public bool isSmoothScrollingEnabled() [instance] :15160
bool HorizontalScrollView::isSmoothScrollingEnabled()
{
    return HorizontalScrollView::isSmoothScrollingEnabled_IMPL_25372(_subclassed, _javaObject);
}

// public bool pageScroll(int arg0) [instance] :15244
bool HorizontalScrollView::pageScroll(int arg0)
{
    int arg0_ = arg0;
    return HorizontalScrollView::pageScroll_IMPL_25386(_subclassed, _javaObject, arg0_);
}

// public void setFillViewport(bool arg0) [instance] :15154
void HorizontalScrollView::setFillViewport(bool arg0)
{
    bool arg0_ = arg0;
    HorizontalScrollView::setFillViewport_IMPL_25371(_subclassed, _javaObject, arg0_);
}

// public void setSmoothScrollingEnabled(bool arg0) [instance] :15166
void HorizontalScrollView::setSmoothScrollingEnabled(bool arg0)
{
    bool arg0_ = arg0;
    HorizontalScrollView::setSmoothScrollingEnabled_IMPL_25373(_subclassed, _javaObject, arg0_);
}

// public void smoothScrollBy(int arg0, int arg1) [instance] :15262
void HorizontalScrollView::smoothScrollBy(int arg0, int arg1)
{
    int arg0_ = arg0;
    int arg1_ = arg1;
    HorizontalScrollView::smoothScrollBy_IMPL_25389(_subclassed, _javaObject, arg0_, arg1_);
}

// public void smoothScrollTo(int arg0, int arg1) [instance] :15268
void HorizontalScrollView::smoothScrollTo(int arg0, int arg1)
{
    int arg0_ = arg0;
    int arg1_ = arg1;
    HorizontalScrollView::smoothScrollTo_IMPL_25390(_subclassed, _javaObject, arg0_, arg1_);
}

// public static extern new void _Init() [static] :15053
void HorizontalScrollView::_Init5()
{
    if (HorizontalScrollView::_javaClass5()) { return; }
    INIT_JNI;
    HorizontalScrollView::_javaClass5() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/HorizontalScrollView"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!HorizontalScrollView::_javaClass5()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.HorizontalScrollView'", 59);; }
}

// public static extern void addView_IMPL_25366(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15395
void HorizontalScrollView::addView_IMPL_25366(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(HorizontalScrollView::addView_25366_ID(),HorizontalScrollView::_javaClass5(),"addView","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.addView could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::addView_25366_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::addView_25366_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void addView_IMPL_25367(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :15398
void HorizontalScrollView::addView_IMPL_25367(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(HorizontalScrollView::addView_25367_ID(),HorizontalScrollView::_javaClass5(),"addView","(Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.addView could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::addView_25367_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::addView_25367_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void addView_IMPL_25368(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :15401
void HorizontalScrollView::addView_IMPL_25368(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(HorizontalScrollView::addView_25368_ID(),HorizontalScrollView::_javaClass5(),"addView","(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.addView could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::addView_25368_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::addView_25368_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void addView_IMPL_25369(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :15404
void HorizontalScrollView::addView_IMPL_25369(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(HorizontalScrollView::addView_25369_ID(),HorizontalScrollView::_javaClass5(),"addView","(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.addView could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::addView_25369_ID(), _obArg2, ((jint)arg3_), _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::addView_25369_ID(), _obArg2, ((jint)arg3_), _obArg4);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool arrowScroll_IMPL_25388(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :15461
bool HorizontalScrollView::arrowScroll_IMPL_25388(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    bool result;
    CACHE_METHOD(HorizontalScrollView::arrowScroll_25388_ID(),HorizontalScrollView::_javaClass5(),"arrowScroll","(I)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.arrowScroll could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::arrowScroll_25388_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::arrowScroll_25388_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int computeHorizontalScrollOffset_IMPL_25392(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15473
int HorizontalScrollView::computeHorizontalScrollOffset_IMPL_25392(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    int result;
    CACHE_METHOD(HorizontalScrollView::computeHorizontalScrollOffset_25392_ID(),HorizontalScrollView::_javaClass5(),"computeHorizontalScrollOffset","()I",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.computeHorizontalScrollOffset could not be cached",108);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::computeHorizontalScrollOffset_25392_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, HorizontalScrollView::computeHorizontalScrollOffset_25392_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int computeHorizontalScrollRange_IMPL_25391(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15470
int HorizontalScrollView::computeHorizontalScrollRange_IMPL_25391(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    int result;
    CACHE_METHOD(HorizontalScrollView::computeHorizontalScrollRange_25391_ID(),HorizontalScrollView::_javaClass5(),"computeHorizontalScrollRange","()I",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.computeHorizontalScrollRange could not be cached",107);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::computeHorizontalScrollRange_25391_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, HorizontalScrollView::computeHorizontalScrollRange_25391_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void computeScroll_IMPL_25395(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15482
void HorizontalScrollView::computeScroll_IMPL_25395(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::computeScroll_25395_ID(),HorizontalScrollView::_javaClass5(),"computeScroll","()V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.computeScroll could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::computeScroll_25395_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::computeScroll_25395_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern int computeScrollDeltaToGetChildRectOnScreen_IMPL_25396(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15485
int HorizontalScrollView::computeScrollDeltaToGetChildRectOnScreen_IMPL_25396(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    CACHE_METHOD(HorizontalScrollView::computeScrollDeltaToGetChildRectOnScreen_25396_ID(),HorizontalScrollView::_javaClass5(),"computeScrollDeltaToGetChildRectOnScreen","(Landroid/graphics/Rect;)I",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.computeScrollDeltaToGetChildRectOnScreen could not be cached",119);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::computeScrollDeltaToGetChildRectOnScreen_25396_ID(), _obArg2));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, HorizontalScrollView::computeScrollDeltaToGetChildRectOnScreen_25396_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool dispatchKeyEvent_IMPL_25375(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15422
bool HorizontalScrollView::dispatchKeyEvent_IMPL_25375(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(HorizontalScrollView::dispatchKeyEvent_25375_ID(),HorizontalScrollView::_javaClass5(),"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.dispatchKeyEvent could not be cached",95);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::dispatchKeyEvent_25375_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::dispatchKeyEvent_25375_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool executeKeyEvent_IMPL_25376(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15425
bool HorizontalScrollView::executeKeyEvent_IMPL_25376(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(HorizontalScrollView::executeKeyEvent_25376_ID(),HorizontalScrollView::_javaClass5(),"executeKeyEvent","(Landroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.executeKeyEvent could not be cached",94);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::executeKeyEvent_25376_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::executeKeyEvent_25376_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void fling_IMPL_25403(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :15506
void HorizontalScrollView::fling_IMPL_25403(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::fling_25403_ID(),HorizontalScrollView::_javaClass5(),"fling","(I)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.fling could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::fling_25403_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::fling_25403_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool fullScroll_IMPL_25387(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :15458
bool HorizontalScrollView::fullScroll_IMPL_25387(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    bool result;
    CACHE_METHOD(HorizontalScrollView::fullScroll_25387_ID(),HorizontalScrollView::_javaClass5(),"fullScroll","(I)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.fullScroll could not be cached",89);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::fullScroll_25387_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::fullScroll_25387_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern float getLeftFadingEdgeStrength_IMPL_25363(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15386
float HorizontalScrollView::getLeftFadingEdgeStrength_IMPL_25363(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    float result;
    CACHE_METHOD(HorizontalScrollView::getLeftFadingEdgeStrength_25363_ID(),HorizontalScrollView::_javaClass5(),"getLeftFadingEdgeStrength","()F",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.getLeftFadingEdgeStrength could not be cached",104);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::getLeftFadingEdgeStrength_25363_ID()));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, HorizontalScrollView::getLeftFadingEdgeStrength_25363_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getMaxScrollAmount_IMPL_25365(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15392
int HorizontalScrollView::getMaxScrollAmount_IMPL_25365(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    int result;
    CACHE_METHOD(HorizontalScrollView::getMaxScrollAmount_25365_ID(),HorizontalScrollView::_javaClass5(),"getMaxScrollAmount","()I",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.getMaxScrollAmount could not be cached",97);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::getMaxScrollAmount_25365_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, HorizontalScrollView::getMaxScrollAmount_25365_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern float getRightFadingEdgeStrength_IMPL_25364(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15389
float HorizontalScrollView::getRightFadingEdgeStrength_IMPL_25364(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    float result;
    CACHE_METHOD(HorizontalScrollView::getRightFadingEdgeStrength_25364_ID(),HorizontalScrollView::_javaClass5(),"getRightFadingEdgeStrength","()F",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.getRightFadingEdgeStrength could not be cached",105);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::getRightFadingEdgeStrength_25364_ID()));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, HorizontalScrollView::getRightFadingEdgeStrength_25364_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isFillViewport_IMPL_25370(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15407
bool HorizontalScrollView::isFillViewport_IMPL_25370(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    bool result;
    CACHE_METHOD(HorizontalScrollView::isFillViewport_25370_ID(),HorizontalScrollView::_javaClass5(),"isFillViewport","()Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.isFillViewport could not be cached",93);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::isFillViewport_25370_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::isFillViewport_25370_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isSmoothScrollingEnabled_IMPL_25372(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15413
bool HorizontalScrollView::isSmoothScrollingEnabled_IMPL_25372(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    bool result;
    CACHE_METHOD(HorizontalScrollView::isSmoothScrollingEnabled_25372_ID(),HorizontalScrollView::_javaClass5(),"isSmoothScrollingEnabled","()Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.isSmoothScrollingEnabled could not be cached",103);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::isSmoothScrollingEnabled_25372_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::isSmoothScrollingEnabled_25372_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void j_draw_IMPL_25406(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15515
void HorizontalScrollView::j_draw_IMPL_25406(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(HorizontalScrollView::j_draw_25406_ID(),HorizontalScrollView::_javaClass5(),"draw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.draw could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::j_draw_25406_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::j_draw_25406_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void measureChild_IMPL_25393(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) [static] :15476
void HorizontalScrollView::measureChild_IMPL_25393(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(HorizontalScrollView::measureChild_25393_ID(),HorizontalScrollView::_javaClass5(),"measureChild","(Landroid/view/View;II)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.measureChild could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::measureChild_25393_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::measureChild_25393_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void measureChildWithMargins_IMPL_25394(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5, int arg6) [static] :15479
void HorizontalScrollView::measureChildWithMargins_IMPL_25394(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(HorizontalScrollView::measureChildWithMargins_25394_ID(),HorizontalScrollView::_javaClass5(),"measureChildWithMargins","(Landroid/view/View;IIII)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.measureChildWithMargins could not be cached",102);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::measureChildWithMargins_25394_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::measureChildWithMargins_25394_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public HorizontalScrollView New(Android.android.content.Context arg0) [static] :15056
HorizontalScrollView* HorizontalScrollView::New13(::g::Android::android::content::Context* arg0)
{
    HorizontalScrollView* obj2 = (HorizontalScrollView*)uNew(HorizontalScrollView_typeof());
    obj2->ctor_16(arg0);
    return obj2;
}

// public HorizontalScrollView New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [static] :15072
HorizontalScrollView* HorizontalScrollView::New14(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    HorizontalScrollView* obj3 = (HorizontalScrollView*)uNew(HorizontalScrollView_typeof());
    obj3->ctor_17(arg0, arg1);
    return obj3;
}

// public HorizontalScrollView New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [static] :15089
HorizontalScrollView* HorizontalScrollView::New15(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    HorizontalScrollView* obj4 = (HorizontalScrollView*)uNew(HorizontalScrollView_typeof());
    obj4->ctor_18(arg0, arg1, arg2);
    return obj4;
}

// public HorizontalScrollView New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [static] :15054
HorizontalScrollView* HorizontalScrollView::New16(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    HorizontalScrollView* obj1 = (HorizontalScrollView*)uNew(HorizontalScrollView_typeof());
    obj1->ctor_19(obj, utype, hasFallbackClass, resolveType);
    return obj1;
}

// public static extern bool onGenericMotionEvent_IMPL_25380(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15437
bool HorizontalScrollView::onGenericMotionEvent_IMPL_25380(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(HorizontalScrollView::onGenericMotionEvent_25380_ID(),HorizontalScrollView::_javaClass5(),"onGenericMotionEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onGenericMotionEvent could not be cached",99);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::onGenericMotionEvent_25380_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::onGenericMotionEvent_25380_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onInitializeAccessibilityEvent_IMPL_25385(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15452
void HorizontalScrollView::onInitializeAccessibilityEvent_IMPL_25385(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(HorizontalScrollView::onInitializeAccessibilityEvent_25385_ID(),HorizontalScrollView::_javaClass5(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onInitializeAccessibilityEvent could not be cached",109);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::onInitializeAccessibilityEvent_25385_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::onInitializeAccessibilityEvent_25385_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_25384(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15449
void HorizontalScrollView::onInitializeAccessibilityNodeInfo_IMPL_25384(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(HorizontalScrollView::onInitializeAccessibilityNodeInfo_25384_ID(),HorizontalScrollView::_javaClass5(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onInitializeAccessibilityNodeInfo could not be cached",112);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::onInitializeAccessibilityNodeInfo_25384_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::onInitializeAccessibilityNodeInfo_25384_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onInterceptTouchEvent_IMPL_25378(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15431
bool HorizontalScrollView::onInterceptTouchEvent_IMPL_25378(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(HorizontalScrollView::onInterceptTouchEvent_25378_ID(),HorizontalScrollView::_javaClass5(),"onInterceptTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onInterceptTouchEvent could not be cached",100);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::onInterceptTouchEvent_25378_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::onInterceptTouchEvent_25378_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onLayout_IMPL_25401(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2, int arg3, int arg4, int arg5, int arg6) [static] :15500
void HorizontalScrollView::onLayout_IMPL_25401(bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::onLayout_25401_ID(),HorizontalScrollView::_javaClass5(),"onLayout","(ZIIII)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onLayout could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::onLayout_25401_ID(), ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::onLayout_25401_ID(), ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onMeasure_IMPL_25374(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :15419
void HorizontalScrollView::onMeasure_IMPL_25374(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::onMeasure_25374_ID(),HorizontalScrollView::_javaClass5(),"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onMeasure could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::onMeasure_25374_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::onMeasure_25374_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onOverScrolled_IMPL_25382(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, bool arg4, bool arg5) [static] :15443
void HorizontalScrollView::onOverScrolled_IMPL_25382(bool arg0_, jobject arg1_, int arg2_, int arg3_, bool arg4_, bool arg5_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::onOverScrolled_25382_ID(),HorizontalScrollView::_javaClass5(),"onOverScrolled","(IIZZ)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onOverScrolled could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::onOverScrolled_25382_ID(), ((jint)arg2_), ((jint)arg3_), ((jboolean)arg4_), ((jboolean)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::onOverScrolled_25382_ID(), ((jint)arg2_), ((jint)arg3_), ((jboolean)arg4_), ((jboolean)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onRequestFocusInDescendants_IMPL_25398(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :15491
bool HorizontalScrollView::onRequestFocusInDescendants_IMPL_25398(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(HorizontalScrollView::onRequestFocusInDescendants_25398_ID(),HorizontalScrollView::_javaClass5(),"onRequestFocusInDescendants","(ILandroid/graphics/Rect;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onRequestFocusInDescendants could not be cached",106);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::onRequestFocusInDescendants_25398_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::onRequestFocusInDescendants_25398_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onRestoreInstanceState_IMPL_25407(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15518
void HorizontalScrollView::onRestoreInstanceState_IMPL_25407(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(HorizontalScrollView::onRestoreInstanceState_25407_ID(),HorizontalScrollView::_javaClass5(),"onRestoreInstanceState","(Landroid/os/Parcelable;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onRestoreInstanceState could not be cached",101);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::onRestoreInstanceState_25407_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::onRestoreInstanceState_25407_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper onSaveInstanceState_IMPL_25408(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15521
uObject* HorizontalScrollView::onSaveInstanceState_IMPL_25408(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    uObject* result;
    CACHE_METHOD(HorizontalScrollView::onSaveInstanceState_25408_ID(),HorizontalScrollView::_javaClass5(),"onSaveInstanceState","()Landroid/os/Parcelable;",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onSaveInstanceState could not be cached",98);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::onSaveInstanceState_25408_ID()),result,::g::Android::Fallbacks::Android_android_os_Parcelable_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, HorizontalScrollView::onSaveInstanceState_25408_ID()),result,::g::Android::Fallbacks::Android_android_os_Parcelable_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onSizeChanged_IMPL_25402(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :15503
void HorizontalScrollView::onSizeChanged_IMPL_25402(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::onSizeChanged_25402_ID(),HorizontalScrollView::_javaClass5(),"onSizeChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onSizeChanged could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::onSizeChanged_25402_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::onSizeChanged_25402_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onTouchEvent_IMPL_25379(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15434
bool HorizontalScrollView::onTouchEvent_IMPL_25379(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(HorizontalScrollView::onTouchEvent_25379_ID(),HorizontalScrollView::_javaClass5(),"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onTouchEvent could not be cached",91);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::onTouchEvent_25379_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::onTouchEvent_25379_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool pageScroll_IMPL_25386(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :15455
bool HorizontalScrollView::pageScroll_IMPL_25386(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    bool result;
    CACHE_METHOD(HorizontalScrollView::pageScroll_25386_ID(),HorizontalScrollView::_javaClass5(),"pageScroll","(I)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.pageScroll could not be cached",89);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::pageScroll_25386_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::pageScroll_25386_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performAccessibilityAction_IMPL_25383(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :15446
bool HorizontalScrollView::performAccessibilityAction_IMPL_25383(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(HorizontalScrollView::performAccessibilityAction_25383_ID(),HorizontalScrollView::_javaClass5(),"performAccessibilityAction","(ILandroid/os/Bundle;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.performAccessibilityAction could not be cached",105);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::performAccessibilityAction_25383_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::performAccessibilityAction_25383_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void requestChildFocus_IMPL_25397(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :15488
void HorizontalScrollView::requestChildFocus_IMPL_25397(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(HorizontalScrollView::requestChildFocus_25397_ID(),HorizontalScrollView::_javaClass5(),"requestChildFocus","(Landroid/view/View;Landroid/view/View;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.requestChildFocus could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::requestChildFocus_25397_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::requestChildFocus_25397_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool requestChildRectangleOnScreen_IMPL_25399(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) [static] :15494
bool HorizontalScrollView::requestChildRectangleOnScreen_IMPL_25399(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(HorizontalScrollView::requestChildRectangleOnScreen_25399_ID(),HorizontalScrollView::_javaClass5(),"requestChildRectangleOnScreen","(Landroid/view/View;Landroid/graphics/Rect;Z)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.requestChildRectangleOnScreen could not be cached",108);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::requestChildRectangleOnScreen_25399_ID(), _obArg2, _obArg3, ((jboolean)arg4_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::requestChildRectangleOnScreen_25399_ID(), _obArg2, _obArg3, ((jboolean)arg4_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void requestDisallowInterceptTouchEvent_IMPL_25377(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :15428
void HorizontalScrollView::requestDisallowInterceptTouchEvent_IMPL_25377(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::requestDisallowInterceptTouchEvent_25377_ID(),HorizontalScrollView::_javaClass5(),"requestDisallowInterceptTouchEvent","(Z)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.requestDisallowInterceptTouchEvent could not be cached",113);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::requestDisallowInterceptTouchEvent_25377_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::requestDisallowInterceptTouchEvent_25377_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void requestLayout_IMPL_25400(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15497
void HorizontalScrollView::requestLayout_IMPL_25400(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::requestLayout_25400_ID(),HorizontalScrollView::_javaClass5(),"requestLayout","()V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.requestLayout could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::requestLayout_25400_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::requestLayout_25400_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void scrollTo_IMPL_25404(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :15509
void HorizontalScrollView::scrollTo_IMPL_25404(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::scrollTo_25404_ID(),HorizontalScrollView::_javaClass5(),"scrollTo","(II)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.scrollTo could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::scrollTo_25404_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::scrollTo_25404_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setFillViewport_IMPL_25371(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :15410
void HorizontalScrollView::setFillViewport_IMPL_25371(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::setFillViewport_25371_ID(),HorizontalScrollView::_javaClass5(),"setFillViewport","(Z)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.setFillViewport could not be cached",94);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::setFillViewport_25371_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::setFillViewport_25371_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOverScrollMode_IMPL_25405(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :15512
void HorizontalScrollView::setOverScrollMode_IMPL_25405(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::setOverScrollMode_25405_ID(),HorizontalScrollView::_javaClass5(),"setOverScrollMode","(I)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.setOverScrollMode could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::setOverScrollMode_25405_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::setOverScrollMode_25405_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setSmoothScrollingEnabled_IMPL_25373(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :15416
void HorizontalScrollView::setSmoothScrollingEnabled_IMPL_25373(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::setSmoothScrollingEnabled_25373_ID(),HorizontalScrollView::_javaClass5(),"setSmoothScrollingEnabled","(Z)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.setSmoothScrollingEnabled could not be cached",104);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::setSmoothScrollingEnabled_25373_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::setSmoothScrollingEnabled_25373_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool shouldDelayChildPressedState_IMPL_25381(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15440
bool HorizontalScrollView::shouldDelayChildPressedState_IMPL_25381(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    bool result;
    CACHE_METHOD(HorizontalScrollView::shouldDelayChildPressedState_25381_ID(),HorizontalScrollView::_javaClass5(),"shouldDelayChildPressedState","()Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.shouldDelayChildPressedState could not be cached",107);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::shouldDelayChildPressedState_25381_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, HorizontalScrollView::shouldDelayChildPressedState_25381_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void smoothScrollBy_IMPL_25389(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :15464
void HorizontalScrollView::smoothScrollBy_IMPL_25389(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::smoothScrollBy_25389_ID(),HorizontalScrollView::_javaClass5(),"smoothScrollBy","(II)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.smoothScrollBy could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::smoothScrollBy_25389_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::smoothScrollBy_25389_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void smoothScrollTo_IMPL_25390(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :15467
void HorizontalScrollView::smoothScrollTo_IMPL_25390(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(HorizontalScrollView::_javaClass5(),HorizontalScrollView::_Init5());
    
    CACHE_METHOD(HorizontalScrollView::smoothScrollTo_25390_ID(),HorizontalScrollView::_javaClass5(),"smoothScrollTo","(II)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.smoothScrollTo could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, HorizontalScrollView::_javaClass5(), HorizontalScrollView::smoothScrollTo_25390_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, HorizontalScrollView::smoothScrollTo_25390_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(15536)
// ------------------------------------------------------------------------------

// public sealed extern class ImageView :15536
// {
::g::Android::android::view::View_type* ImageView_typeof()
{
    static uSStrong< ::g::Android::android::view::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ImageView);
    options.TypeSize = sizeof(::g::Android::android::view::View_type);
    type = (::g::Android::android::view::View_type*)uClassType::New("Android.android.widget.ImageView", options);
    type->SetBase(::g::Android::android::view::View_typeof());
    type->fp_getBaseline = (void(*)(::g::Android::android::view::View*, int*))ImageView__getBaseline_fn;
    type->fp_hasOverlappingRendering = (void(*)(::g::Android::android::view::View*, bool*))ImageView__hasOverlappingRendering_fn;
    type->fp_invalidateDrawable = (void(*)(::g::Android::android::view::View*, ::g::Android::android::graphics::drawable::Drawable*))ImageView__invalidateDrawable_fn;
    type->fp_jumpDrawablesToCurrentState = (void(*)(::g::Android::android::view::View*))ImageView__jumpDrawablesToCurrentState_fn;
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))ImageView__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))ImageView__onInitializeAccessibilityNodeInfo_fn;
    type->fp_onPopulateAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))ImageView__onPopulateAccessibilityEvent_fn;
    type->fp_onRtlPropertiesChanged = (void(*)(::g::Android::android::view::View*, int*))ImageView__onRtlPropertiesChanged_fn;
    type->fp_setSelected = (void(*)(::g::Android::android::view::View*, bool*))ImageView__setSelected_fn;
    type->fp_setVisibility = (void(*)(::g::Android::android::view::View*, int*))ImageView__setVisibility_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::View_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::getBaseline_25466_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::hasOverlappingRendering_25438_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::ImageView_25432_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::invalidateDrawable_25437_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::jumpDrawablesToCurrentState_25436_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::onInitializeAccessibilityEvent_25481_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::onInitializeAccessibilityNodeInfo_25482_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::onPopulateAccessibilityEvent_25439_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::onRtlPropertiesChanged_25461_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::setImageBitmap_25450_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::setImageMatrix_25457_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::setScaleType_25454_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::setSelected_25452_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::setVisibility_25478_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(18,
        new uFunction("_Init", NULL, (void*)ImageView___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("getBaseline_IMPL_25466", NULL, (void*)ImageView__getBaseline_IMPL_25466_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("hasOverlappingRendering_IMPL_25438", NULL, (void*)ImageView__hasOverlappingRendering_IMPL_25438_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("invalidateDrawable_IMPL_25437", NULL, (void*)ImageView__invalidateDrawable_IMPL_25437_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("jumpDrawablesToCurrentState_IMPL_25436", NULL, (void*)ImageView__jumpDrawablesToCurrentState_IMPL_25436_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction(".ctor", NULL, (void*)ImageView__New9_fn, 0, true, ImageView_typeof(), 1, ::g::Android::android::content::Context_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_25481", NULL, (void*)ImageView__onInitializeAccessibilityEvent_IMPL_25481_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_25482", NULL, (void*)ImageView__onInitializeAccessibilityNodeInfo_IMPL_25482_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onPopulateAccessibilityEvent_IMPL_25439", NULL, (void*)ImageView__onPopulateAccessibilityEvent_IMPL_25439_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onRtlPropertiesChanged_IMPL_25461", NULL, (void*)ImageView__onRtlPropertiesChanged_IMPL_25461_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setImageBitmap", NULL, (void*)ImageView__setImageBitmap_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::graphics::Bitmap_typeof()),
        new uFunction("setImageBitmap_IMPL_25450", NULL, (void*)ImageView__setImageBitmap_IMPL_25450_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setImageMatrix", NULL, (void*)ImageView__setImageMatrix_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::graphics::Matrix_typeof()),
        new uFunction("setImageMatrix_IMPL_25457", NULL, (void*)ImageView__setImageMatrix_IMPL_25457_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setScaleType", NULL, (void*)ImageView__setScaleType_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::widget::ImageViewDLRScaleType_typeof()),
        new uFunction("setScaleType_IMPL_25454", NULL, (void*)ImageView__setScaleType_IMPL_25454_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setSelected_IMPL_25452", NULL, (void*)ImageView__setSelected_IMPL_25452_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setVisibility_IMPL_25478", NULL, (void*)ImageView__setVisibility_IMPL_25478_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public ImageView(Android.android.content.Context arg0) :15543
void ImageView__ctor_8_fn(ImageView* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_8(arg0);
}

// public static extern new void _Init() :15540
void ImageView___Init3_fn()
{
    ImageView::_Init3();
}

// public override sealed int getBaseline() :15779
void ImageView__getBaseline_fn(ImageView* __this, int* __retval)
{
    return *__retval = ImageView::getBaseline_IMPL_25466(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int getBaseline_IMPL_25466(bool arg0, Android.Base.Primitives.ujobject arg1) :15978
void ImageView__getBaseline_IMPL_25466_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ImageView::getBaseline_IMPL_25466(*arg0_, *arg1_);
}

// public override sealed bool hasOverlappingRendering() :15611
void ImageView__hasOverlappingRendering_fn(ImageView* __this, bool* __retval)
{
    return *__retval = ImageView::hasOverlappingRendering_IMPL_25438(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool hasOverlappingRendering_IMPL_25438(bool arg0, Android.Base.Primitives.ujobject arg1) :15894
void ImageView__hasOverlappingRendering_IMPL_25438_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = ImageView::hasOverlappingRendering_IMPL_25438(*arg0_, *arg1_);
}

// public override sealed void invalidateDrawable(Android.android.graphics.drawable.Drawable arg0) :15605
void ImageView__invalidateDrawable_fn(ImageView* __this, ::g::Android::android::graphics::drawable::Drawable* arg0)
{
    ImageView::invalidateDrawable_IMPL_25437(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void invalidateDrawable_IMPL_25437(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15891
void ImageView__invalidateDrawable_IMPL_25437_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ImageView::invalidateDrawable_IMPL_25437(*arg0_, *arg1_, arg2_);
}

// public override sealed void jumpDrawablesToCurrentState() :15599
void ImageView__jumpDrawablesToCurrentState_fn(ImageView* __this)
{
    ImageView::jumpDrawablesToCurrentState_IMPL_25436(__this->_subclassed, __this->_javaObject);
}

// public static extern void jumpDrawablesToCurrentState_IMPL_25436(bool arg0, Android.Base.Primitives.ujobject arg1) :15888
void ImageView__jumpDrawablesToCurrentState_IMPL_25436_fn(bool* arg0_, jobject* arg1_)
{
    ImageView::jumpDrawablesToCurrentState_IMPL_25436(*arg0_, *arg1_);
}

// public ImageView New(Android.android.content.Context arg0) :15543
void ImageView__New9_fn(::g::Android::android::content::Context* arg0, ImageView** __retval)
{
    *__retval = ImageView::New9(arg0);
}

// public override sealed void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :15869
void ImageView__onInitializeAccessibilityEvent_fn(ImageView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    ImageView::onInitializeAccessibilityEvent_IMPL_25481(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_25481(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :16023
void ImageView__onInitializeAccessibilityEvent_IMPL_25481_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ImageView::onInitializeAccessibilityEvent_IMPL_25481(*arg0_, *arg1_, arg2_);
}

// public override sealed void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :15875
void ImageView__onInitializeAccessibilityNodeInfo_fn(ImageView* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    ImageView::onInitializeAccessibilityNodeInfo_IMPL_25482(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_25482(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :16026
void ImageView__onInitializeAccessibilityNodeInfo_IMPL_25482_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ImageView::onInitializeAccessibilityNodeInfo_IMPL_25482(*arg0_, *arg1_, arg2_);
}

// public override sealed void onPopulateAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :15617
void ImageView__onPopulateAccessibilityEvent_fn(ImageView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    ImageView::onPopulateAccessibilityEvent_IMPL_25439(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onPopulateAccessibilityEvent_IMPL_25439(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15897
void ImageView__onPopulateAccessibilityEvent_IMPL_25439_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ImageView::onPopulateAccessibilityEvent_IMPL_25439(*arg0_, *arg1_, arg2_);
}

// public override sealed void onRtlPropertiesChanged(int arg0) :15749
void ImageView__onRtlPropertiesChanged_fn(ImageView* __this, int* arg0)
{
    int arg0_ = *arg0;
    ImageView::onRtlPropertiesChanged_IMPL_25461(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void onRtlPropertiesChanged_IMPL_25461(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :15963
void ImageView__onRtlPropertiesChanged_IMPL_25461_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    ImageView::onRtlPropertiesChanged_IMPL_25461(*arg0_, *arg1_, *arg2_);
}

// public void setImageBitmap(Android.android.graphics.Bitmap arg0) :15683
void ImageView__setImageBitmap_fn(ImageView* __this, ::g::Android::android::graphics::Bitmap* arg0)
{
    __this->setImageBitmap(arg0);
}

// public static extern void setImageBitmap_IMPL_25450(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15930
void ImageView__setImageBitmap_IMPL_25450_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ImageView::setImageBitmap_IMPL_25450(*arg0_, *arg1_, arg2_);
}

// public void setImageMatrix(Android.android.graphics.Matrix arg0) :15725
void ImageView__setImageMatrix_fn(ImageView* __this, ::g::Android::android::graphics::Matrix* arg0)
{
    __this->setImageMatrix(arg0);
}

// public static extern void setImageMatrix_IMPL_25457(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15951
void ImageView__setImageMatrix_IMPL_25457_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ImageView::setImageMatrix_IMPL_25457(*arg0_, *arg1_, arg2_);
}

// public void setScaleType(Android.android.widget.ImageViewDLRScaleType arg0) :15707
void ImageView__setScaleType_fn(ImageView* __this, ::g::Android::android::widget::ImageViewDLRScaleType* arg0)
{
    __this->setScaleType(arg0);
}

// public static extern void setScaleType_IMPL_25454(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :15942
void ImageView__setScaleType_IMPL_25454_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ImageView::setScaleType_IMPL_25454(*arg0_, *arg1_, arg2_);
}

// public override sealed void setSelected(bool arg0) :15695
void ImageView__setSelected_fn(ImageView* __this, bool* arg0)
{
    bool arg0_ = *arg0;
    ImageView::setSelected_IMPL_25452(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setSelected_IMPL_25452(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :15936
void ImageView__setSelected_IMPL_25452_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    ImageView::setSelected_IMPL_25452(*arg0_, *arg1_, *arg2_);
}

// public override sealed void setVisibility(int arg0) :15851
void ImageView__setVisibility_fn(ImageView* __this, int* arg0)
{
    int arg0_ = *arg0;
    ImageView::setVisibility_IMPL_25478(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setVisibility_IMPL_25478(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :16014
void ImageView__setVisibility_IMPL_25478_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    ImageView::setVisibility_IMPL_25478(*arg0_, *arg1_, *arg2_);
}

jclass ImageView::_javaClass3_;
jmethodID ImageView::getBaseline_25466_ID_;
jmethodID ImageView::hasOverlappingRendering_25438_ID_;
jmethodID ImageView::ImageView_25432_ID_c_;
jmethodID ImageView::invalidateDrawable_25437_ID_;
jmethodID ImageView::jumpDrawablesToCurrentState_25436_ID_;
jmethodID ImageView::onInitializeAccessibilityEvent_25481_ID_;
jmethodID ImageView::onInitializeAccessibilityNodeInfo_25482_ID_;
jmethodID ImageView::onPopulateAccessibilityEvent_25439_ID_;
jmethodID ImageView::onRtlPropertiesChanged_25461_ID_;
jmethodID ImageView::setImageBitmap_25450_ID_;
jmethodID ImageView::setImageMatrix_25457_ID_;
jmethodID ImageView::setScaleType_25454_ID_;
jmethodID ImageView::setSelected_25452_ID_;
jmethodID ImageView::setVisibility_25478_ID_;

// public ImageView(Android.android.content.Context arg0) [instance] :15543
void ImageView::ctor_8(::g::Android::android::content::Context* arg0)
{
    ctor_7(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());;
    CACHE_METHOD(ImageView::ImageView_25432_ID_c(),ImageView::_javaClass3(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.ImageView.<init> could not be cached",74);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(ImageView::_javaClass3(), ImageView::ImageView_25432_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public void setImageBitmap(Android.android.graphics.Bitmap arg0) [instance] :15683
void ImageView::setImageBitmap(::g::Android::android::graphics::Bitmap* arg0)
{
    ImageView::setImageBitmap_IMPL_25450(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setImageMatrix(Android.android.graphics.Matrix arg0) [instance] :15725
void ImageView::setImageMatrix(::g::Android::android::graphics::Matrix* arg0)
{
    ImageView::setImageMatrix_IMPL_25457(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setScaleType(Android.android.widget.ImageViewDLRScaleType arg0) [instance] :15707
void ImageView::setScaleType(::g::Android::android::widget::ImageViewDLRScaleType* arg0)
{
    ImageView::setScaleType_IMPL_25454(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern new void _Init() [static] :15540
void ImageView::_Init3()
{
    if (ImageView::_javaClass3()) { return; }
    INIT_JNI;
    ImageView::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/ImageView"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ImageView::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.ImageView'", 48);; }
}

// public static extern int getBaseline_IMPL_25466(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15978
int ImageView::getBaseline_IMPL_25466(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    
    int result;
    CACHE_METHOD(ImageView::getBaseline_25466_ID(),ImageView::_javaClass3(),"getBaseline","()I",GetMethodID,"Id for fallback method android.widget.ImageView.getBaseline could not be cached",79);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ImageView::_javaClass3(), ImageView::getBaseline_25466_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ImageView::getBaseline_25466_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool hasOverlappingRendering_IMPL_25438(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15894
bool ImageView::hasOverlappingRendering_IMPL_25438(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    
    bool result;
    CACHE_METHOD(ImageView::hasOverlappingRendering_25438_ID(),ImageView::_javaClass3(),"hasOverlappingRendering","()Z",GetMethodID,"Id for fallback method android.widget.ImageView.hasOverlappingRendering could not be cached",91);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ImageView::_javaClass3(), ImageView::hasOverlappingRendering_25438_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ImageView::hasOverlappingRendering_25438_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void invalidateDrawable_IMPL_25437(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15891
void ImageView::invalidateDrawable_IMPL_25437(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ImageView::invalidateDrawable_25437_ID(),ImageView::_javaClass3(),"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.ImageView.invalidateDrawable could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ImageView::_javaClass3(), ImageView::invalidateDrawable_25437_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ImageView::invalidateDrawable_25437_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void jumpDrawablesToCurrentState_IMPL_25436(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :15888
void ImageView::jumpDrawablesToCurrentState_IMPL_25436(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    
    CACHE_METHOD(ImageView::jumpDrawablesToCurrentState_25436_ID(),ImageView::_javaClass3(),"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.ImageView.jumpDrawablesToCurrentState could not be cached",95);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ImageView::_javaClass3(), ImageView::jumpDrawablesToCurrentState_25436_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ImageView::jumpDrawablesToCurrentState_25436_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public ImageView New(Android.android.content.Context arg0) [static] :15543
ImageView* ImageView::New9(::g::Android::android::content::Context* arg0)
{
    ImageView* obj2 = (ImageView*)uNew(ImageView_typeof());
    obj2->ctor_8(arg0);
    return obj2;
}

// public static extern void onInitializeAccessibilityEvent_IMPL_25481(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :16023
void ImageView::onInitializeAccessibilityEvent_IMPL_25481(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ImageView::onInitializeAccessibilityEvent_25481_ID(),ImageView::_javaClass3(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.ImageView.onInitializeAccessibilityEvent could not be cached",98);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ImageView::_javaClass3(), ImageView::onInitializeAccessibilityEvent_25481_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ImageView::onInitializeAccessibilityEvent_25481_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_25482(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :16026
void ImageView::onInitializeAccessibilityNodeInfo_IMPL_25482(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ImageView::onInitializeAccessibilityNodeInfo_25482_ID(),ImageView::_javaClass3(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.ImageView.onInitializeAccessibilityNodeInfo could not be cached",101);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ImageView::_javaClass3(), ImageView::onInitializeAccessibilityNodeInfo_25482_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ImageView::onInitializeAccessibilityNodeInfo_25482_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onPopulateAccessibilityEvent_IMPL_25439(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15897
void ImageView::onPopulateAccessibilityEvent_IMPL_25439(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ImageView::onPopulateAccessibilityEvent_25439_ID(),ImageView::_javaClass3(),"onPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.ImageView.onPopulateAccessibilityEvent could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ImageView::_javaClass3(), ImageView::onPopulateAccessibilityEvent_25439_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ImageView::onPopulateAccessibilityEvent_25439_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onRtlPropertiesChanged_IMPL_25461(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :15963
void ImageView::onRtlPropertiesChanged_IMPL_25461(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    
    CACHE_METHOD(ImageView::onRtlPropertiesChanged_25461_ID(),ImageView::_javaClass3(),"onRtlPropertiesChanged","(I)V",GetMethodID,"Id for fallback method android.widget.ImageView.onRtlPropertiesChanged could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ImageView::_javaClass3(), ImageView::onRtlPropertiesChanged_25461_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ImageView::onRtlPropertiesChanged_25461_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setImageBitmap_IMPL_25450(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15930
void ImageView::setImageBitmap_IMPL_25450(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ImageView::setImageBitmap_25450_ID(),ImageView::_javaClass3(),"setImageBitmap","(Landroid/graphics/Bitmap;)V",GetMethodID,"Id for fallback method android.widget.ImageView.setImageBitmap could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ImageView::_javaClass3(), ImageView::setImageBitmap_25450_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ImageView::setImageBitmap_25450_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setImageMatrix_IMPL_25457(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15951
void ImageView::setImageMatrix_IMPL_25457(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ImageView::setImageMatrix_25457_ID(),ImageView::_javaClass3(),"setImageMatrix","(Landroid/graphics/Matrix;)V",GetMethodID,"Id for fallback method android.widget.ImageView.setImageMatrix could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ImageView::_javaClass3(), ImageView::setImageMatrix_25457_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ImageView::setImageMatrix_25457_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setScaleType_IMPL_25454(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :15942
void ImageView::setScaleType_IMPL_25454(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ImageView::setScaleType_25454_ID(),ImageView::_javaClass3(),"setScaleType","(Landroid/widget/ImageView$ScaleType;)V",GetMethodID,"Id for fallback method android.widget.ImageView.setScaleType could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ImageView::_javaClass3(), ImageView::setScaleType_25454_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ImageView::setScaleType_25454_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setSelected_IMPL_25452(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :15936
void ImageView::setSelected_IMPL_25452(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    
    CACHE_METHOD(ImageView::setSelected_25452_ID(),ImageView::_javaClass3(),"setSelected","(Z)V",GetMethodID,"Id for fallback method android.widget.ImageView.setSelected could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ImageView::_javaClass3(), ImageView::setSelected_25452_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ImageView::setSelected_25452_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setVisibility_IMPL_25478(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :16014
void ImageView::setVisibility_IMPL_25478(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ImageView::_javaClass3(),ImageView::_Init3());
    
    CACHE_METHOD(ImageView::setVisibility_25478_ID(),ImageView::_javaClass3(),"setVisibility","(I)V",GetMethodID,"Id for fallback method android.widget.ImageView.setVisibility could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ImageView::_javaClass3(), ImageView::setVisibility_25478_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ImageView::setVisibility_25478_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(7054)
// -----------------------------------------------------------------------------

// public sealed extern class ImageViewDLRScaleType :7054
// {
::g::Android::java::lang::Object_type* ImageViewDLRScaleType_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ImageViewDLRScaleType);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.widget.ImageViewDLRScaleType", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::ImageViewDLRScaleType::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageViewDLRScaleType::MATRIX_25429_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)ImageViewDLRScaleType___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_MATRIX", NULL, (void*)ImageViewDLRScaleType__get_MATRIX_fn, 0, true, ImageViewDLRScaleType_typeof(), 0));
    return type;
}

// public static extern new void _Init() :7058
void ImageViewDLRScaleType___Init3_fn()
{
    ImageViewDLRScaleType::_Init3();
}

// public static Android.android.widget.ImageViewDLRScaleType get_MATRIX() :7182
void ImageViewDLRScaleType__get_MATRIX_fn(ImageViewDLRScaleType** __retval)
{
    *__retval = ImageViewDLRScaleType::MATRIX();
}

jclass ImageViewDLRScaleType::_javaClass3_;
jfieldID ImageViewDLRScaleType::MATRIX_25429_ID_;

// public static extern new void _Init() [static] :7058
void ImageViewDLRScaleType::_Init3()
{
    if (ImageViewDLRScaleType::_javaClass3()) { return; }
    INIT_JNI;
    ImageViewDLRScaleType::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/ImageView$ScaleType"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ImageViewDLRScaleType::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.ImageView$ScaleType'", 58);; }
}

// public static Android.android.widget.ImageViewDLRScaleType get_MATRIX() [static] :7182
ImageViewDLRScaleType* ImageViewDLRScaleType::MATRIX()
{
    INIT_JNI;
    CLASS_INIT(ImageViewDLRScaleType::_javaClass3(),ImageViewDLRScaleType::_Init3());
    if (::uEnterCriticalIfNull(&ImageViewDLRScaleType::MATRIX_25429_ID())) {;
    CACHE_FIELD(ImageViewDLRScaleType::MATRIX_25429_ID(),ImageViewDLRScaleType::_javaClass3(),"MATRIX","Landroid/widget/ImageView$ScaleType;",GetStaticFieldID,"Id for field ImageViewDLRScaleType.MATRIX could not be cached",61);
    ::uExitCritical();;
    };
    ImageViewDLRScaleType* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(ImageViewDLRScaleType::_javaClass3(), ImageViewDLRScaleType::MATRIX_25429_ID()),result,ImageViewDLRScaleType_typeof(),ImageViewDLRScaleType*,false,true);;
    return uCast<ImageViewDLRScaleType*>(result, ImageViewDLRScaleType_typeof());
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(1868)
// -----------------------------------------------------------------------------

// public extern class ProgressBar :1868
// {
ProgressBar_type* ProgressBar_typeof()
{
    static uSStrong<ProgressBar_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 42;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ProgressBar);
    options.TypeSize = sizeof(ProgressBar_type);
    type = (ProgressBar_type*)uClassType::New("Android.android.widget.ProgressBar", options);
    type->SetBase(::g::Android::android::view::View_typeof());
    type->fp_invalidateDrawable = (void(*)(::g::Android::android::view::View*, ::g::Android::android::graphics::drawable::Drawable*))ProgressBar__invalidateDrawable_fn;
    type->fp_jumpDrawablesToCurrentState = (void(*)(::g::Android::android::view::View*))ProgressBar__jumpDrawablesToCurrentState_fn;
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))ProgressBar__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))ProgressBar__onInitializeAccessibilityNodeInfo_fn;
    type->fp_postInvalidate = (void(*)(::g::Android::android::view::View*))ProgressBar__postInvalidate_fn;
    type->fp_setMax = ProgressBar__setMax_fn;
    type->fp_setVisibility = (void(*)(::g::Android::android::view::View*, int*))ProgressBar__setVisibility_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::android::graphics::drawable::Drawable_typeof();
    ::TYPES[5] = ::g::Android::android::view::animation::Interpolator_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[6] = ::g::Android::android::os::Parcelable_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ProgressBar_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ProgressBar_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::drawableStateChanged_25861_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::getIndeterminateDrawable_25837_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::getInterpolator_25854_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::getMax_25848_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::getProgress_25846_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::getProgressDrawable_25839_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::getSecondaryProgress_25847_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::incrementProgressBy_25850_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::incrementSecondaryProgressBy_25851_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::invalidateDrawable_25857_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::isIndeterminate_25835_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::jumpDrawablesToCurrentState_25842_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::onAttachedToWindow_25864_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::onDetachedFromWindow_25865_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::onDraw_25859_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::onInitializeAccessibilityEvent_25866_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::onInitializeAccessibilityNodeInfo_25867_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::onMeasure_25860_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::onRestoreInstanceState_25863_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::onSaveInstanceState_25862_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::onSizeChanged_25858_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::onVisibilityChanged_25856_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::postInvalidate_25843_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::ProgressBar_25832_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::ProgressBar_25833_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::ProgressBar_25834_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::setIndeterminate_25836_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::setIndeterminateDrawable_25838_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::setInterpolator_25852_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::setInterpolator_25853_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::setMax_25849_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::setProgress_25844_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::setProgressDrawable_25840_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::setSecondaryProgress_25845_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::setVisibility_25855_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::verifyDrawable_25841_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(57,
        new uFunction("_Init", NULL, (void*)ProgressBar___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("drawableStateChanged_IMPL_25861", NULL, (void*)ProgressBar__drawableStateChanged_IMPL_25861_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getIndeterminateDrawable", NULL, (void*)ProgressBar__getIndeterminateDrawable_fn, 0, false, ::g::Android::android::graphics::drawable::Drawable_typeof(), 0),
        new uFunction("getIndeterminateDrawable_IMPL_25837", NULL, (void*)ProgressBar__getIndeterminateDrawable_IMPL_25837_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getInterpolator", NULL, (void*)ProgressBar__getInterpolator_fn, 0, false, ::g::Android::android::view::animation::Interpolator_typeof(), 0),
        new uFunction("getInterpolator_IMPL_25854", NULL, (void*)ProgressBar__getInterpolator_IMPL_25854_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getMax", NULL, (void*)ProgressBar__getMax_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getMax_IMPL_25848", NULL, (void*)ProgressBar__getMax_IMPL_25848_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getProgress", NULL, (void*)ProgressBar__getProgress_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getProgress_IMPL_25846", NULL, (void*)ProgressBar__getProgress_IMPL_25846_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getProgressDrawable", NULL, (void*)ProgressBar__getProgressDrawable_fn, 0, false, ::g::Android::android::graphics::drawable::Drawable_typeof(), 0),
        new uFunction("getProgressDrawable_IMPL_25839", NULL, (void*)ProgressBar__getProgressDrawable_IMPL_25839_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getSecondaryProgress", NULL, (void*)ProgressBar__getSecondaryProgress_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getSecondaryProgress_IMPL_25847", NULL, (void*)ProgressBar__getSecondaryProgress_IMPL_25847_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("incrementProgressBy", NULL, (void*)ProgressBar__incrementProgressBy_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("incrementProgressBy_IMPL_25850", NULL, (void*)ProgressBar__incrementProgressBy_IMPL_25850_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("incrementSecondaryProgressBy", NULL, (void*)ProgressBar__incrementSecondaryProgressBy_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("incrementSecondaryProgressBy_IMPL_25851", NULL, (void*)ProgressBar__incrementSecondaryProgressBy_IMPL_25851_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("invalidateDrawable_IMPL_25857", NULL, (void*)ProgressBar__invalidateDrawable_IMPL_25857_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("isIndeterminate", NULL, (void*)ProgressBar__isIndeterminate_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isIndeterminate_IMPL_25835", NULL, (void*)ProgressBar__isIndeterminate_IMPL_25835_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("jumpDrawablesToCurrentState_IMPL_25842", NULL, (void*)ProgressBar__jumpDrawablesToCurrentState_IMPL_25842_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction(".ctor", NULL, (void*)ProgressBar__New9_fn, 0, true, ProgressBar_typeof(), 1, ::g::Android::android::content::Context_typeof()),
        new uFunction(".ctor", NULL, (void*)ProgressBar__New10_fn, 0, true, ProgressBar_typeof(), 2, ::g::Android::android::content::Context_typeof(), ::g::Android::android::util::AttributeSet_typeof()),
        new uFunction(".ctor", NULL, (void*)ProgressBar__New11_fn, 0, true, ProgressBar_typeof(), 3, ::g::Android::android::content::Context_typeof(), ::g::Android::android::util::AttributeSet_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)ProgressBar__New12_fn, 0, true, ProgressBar_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onAttachedToWindow_IMPL_25864", NULL, (void*)ProgressBar__onAttachedToWindow_IMPL_25864_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onDetachedFromWindow_IMPL_25865", NULL, (void*)ProgressBar__onDetachedFromWindow_IMPL_25865_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onDraw_IMPL_25859", NULL, (void*)ProgressBar__onDraw_IMPL_25859_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_25866", NULL, (void*)ProgressBar__onInitializeAccessibilityEvent_IMPL_25866_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_25867", NULL, (void*)ProgressBar__onInitializeAccessibilityNodeInfo_IMPL_25867_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onMeasure_IMPL_25860", NULL, (void*)ProgressBar__onMeasure_IMPL_25860_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onRestoreInstanceState", NULL, (void*)ProgressBar__onRestoreInstanceState1_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::os::Parcelable_typeof()),
        new uFunction("onRestoreInstanceState_IMPL_25863", NULL, (void*)ProgressBar__onRestoreInstanceState_IMPL_25863_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onSaveInstanceState", NULL, (void*)ProgressBar__onSaveInstanceState1_fn, 0, false, ::g::Android::android::os::Parcelable_typeof(), 0),
        new uFunction("onSaveInstanceState_IMPL_25862", NULL, (void*)ProgressBar__onSaveInstanceState_IMPL_25862_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onSizeChanged_IMPL_25858", NULL, (void*)ProgressBar__onSizeChanged_IMPL_25858_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onVisibilityChanged_IMPL_25856", NULL, (void*)ProgressBar__onVisibilityChanged_IMPL_25856_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("postInvalidate_IMPL_25843", NULL, (void*)ProgressBar__postInvalidate_IMPL_25843_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("setIndeterminate", NULL, (void*)ProgressBar__setIndeterminate_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setIndeterminate_IMPL_25836", NULL, (void*)ProgressBar__setIndeterminate_IMPL_25836_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setIndeterminateDrawable", NULL, (void*)ProgressBar__setIndeterminateDrawable_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::graphics::drawable::Drawable_typeof()),
        new uFunction("setIndeterminateDrawable_IMPL_25838", NULL, (void*)ProgressBar__setIndeterminateDrawable_IMPL_25838_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setInterpolator", NULL, (void*)ProgressBar__setInterpolator_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::content::Context_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setInterpolator", NULL, (void*)ProgressBar__setInterpolator1_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::view::animation::Interpolator_typeof()),
        new uFunction("setInterpolator_IMPL_25852", NULL, (void*)ProgressBar__setInterpolator_IMPL_25852_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setInterpolator_IMPL_25853", NULL, (void*)ProgressBar__setInterpolator_IMPL_25853_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setMax", NULL, NULL, offsetof(ProgressBar_type, fp_setMax), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setMax_IMPL_25849", NULL, (void*)ProgressBar__setMax_IMPL_25849_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setProgress", NULL, (void*)ProgressBar__setProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setProgress_IMPL_25844", NULL, (void*)ProgressBar__setProgress_IMPL_25844_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setProgressDrawable", NULL, (void*)ProgressBar__setProgressDrawable_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::graphics::drawable::Drawable_typeof()),
        new uFunction("setProgressDrawable_IMPL_25840", NULL, (void*)ProgressBar__setProgressDrawable_IMPL_25840_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setSecondaryProgress", NULL, (void*)ProgressBar__setSecondaryProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setSecondaryProgress_IMPL_25845", NULL, (void*)ProgressBar__setSecondaryProgress_IMPL_25845_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setVisibility_IMPL_25855", NULL, (void*)ProgressBar__setVisibility_IMPL_25855_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("verifyDrawable_IMPL_25841", NULL, (void*)ProgressBar__verifyDrawable_IMPL_25841_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public ProgressBar(Android.android.content.Context arg0) :1875
void ProgressBar__ctor_8_fn(ProgressBar* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_8(arg0);
}

// public ProgressBar(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :1891
void ProgressBar__ctor_9_fn(ProgressBar* __this, ::g::Android::android::content::Context* arg0, uObject* arg1)
{
    __this->ctor_9(arg0, arg1);
}

// public ProgressBar(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :1908
void ProgressBar__ctor_10_fn(ProgressBar* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2)
{
    __this->ctor_10(arg0, arg1, *arg2);
}

// public ProgressBar(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :1873
void ProgressBar__ctor_11_fn(ProgressBar* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_11(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :1872
void ProgressBar___Init3_fn()
{
    ProgressBar::_Init3();
}

// public static extern void drawableStateChanged_IMPL_25861(bool arg0, Android.Base.Primitives.ujobject arg1) :2205
void ProgressBar__drawableStateChanged_IMPL_25861_fn(bool* arg0_, jobject* arg1_)
{
    ProgressBar::drawableStateChanged_IMPL_25861(*arg0_, *arg1_);
}

// public Android.android.graphics.drawable.Drawable getIndeterminateDrawable() :1937
void ProgressBar__getIndeterminateDrawable_fn(ProgressBar* __this, ::g::Android::android::graphics::drawable::Drawable** __retval)
{
    *__retval = __this->getIndeterminateDrawable();
}

// public static extern Android.Base.Wrappers.IJWrapper getIndeterminateDrawable_IMPL_25837(bool arg0, Android.Base.Primitives.ujobject arg1) :2133
void ProgressBar__getIndeterminateDrawable_IMPL_25837_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ProgressBar::getIndeterminateDrawable_IMPL_25837(*arg0_, *arg1_);
}

// public Android.android.view.animation.Interpolator getInterpolator() :2039
void ProgressBar__getInterpolator_fn(ProgressBar* __this, uObject** __retval)
{
    *__retval = __this->getInterpolator();
}

// public static extern Android.Base.Wrappers.IJWrapper getInterpolator_IMPL_25854(bool arg0, Android.Base.Primitives.ujobject arg1) :2184
void ProgressBar__getInterpolator_IMPL_25854_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ProgressBar::getInterpolator_IMPL_25854(*arg0_, *arg1_);
}

// public int getMax() :2003
void ProgressBar__getMax_fn(ProgressBar* __this, int* __retval)
{
    *__retval = __this->getMax();
}

// public static extern int getMax_IMPL_25848(bool arg0, Android.Base.Primitives.ujobject arg1) :2166
void ProgressBar__getMax_IMPL_25848_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ProgressBar::getMax_IMPL_25848(*arg0_, *arg1_);
}

// public int getProgress() :1991
void ProgressBar__getProgress_fn(ProgressBar* __this, int* __retval)
{
    *__retval = __this->getProgress();
}

// public static extern int getProgress_IMPL_25846(bool arg0, Android.Base.Primitives.ujobject arg1) :2160
void ProgressBar__getProgress_IMPL_25846_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ProgressBar::getProgress_IMPL_25846(*arg0_, *arg1_);
}

// public Android.android.graphics.drawable.Drawable getProgressDrawable() :1949
void ProgressBar__getProgressDrawable_fn(ProgressBar* __this, ::g::Android::android::graphics::drawable::Drawable** __retval)
{
    *__retval = __this->getProgressDrawable();
}

// public static extern Android.Base.Wrappers.IJWrapper getProgressDrawable_IMPL_25839(bool arg0, Android.Base.Primitives.ujobject arg1) :2139
void ProgressBar__getProgressDrawable_IMPL_25839_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ProgressBar::getProgressDrawable_IMPL_25839(*arg0_, *arg1_);
}

// public int getSecondaryProgress() :1997
void ProgressBar__getSecondaryProgress_fn(ProgressBar* __this, int* __retval)
{
    *__retval = __this->getSecondaryProgress();
}

// public static extern int getSecondaryProgress_IMPL_25847(bool arg0, Android.Base.Primitives.ujobject arg1) :2163
void ProgressBar__getSecondaryProgress_IMPL_25847_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ProgressBar::getSecondaryProgress_IMPL_25847(*arg0_, *arg1_);
}

// public void incrementProgressBy(int arg0) :2015
void ProgressBar__incrementProgressBy_fn(ProgressBar* __this, int* arg0)
{
    __this->incrementProgressBy(*arg0);
}

// public static extern void incrementProgressBy_IMPL_25850(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :2172
void ProgressBar__incrementProgressBy_IMPL_25850_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    ProgressBar::incrementProgressBy_IMPL_25850(*arg0_, *arg1_, *arg2_);
}

// public void incrementSecondaryProgressBy(int arg0) :2021
void ProgressBar__incrementSecondaryProgressBy_fn(ProgressBar* __this, int* arg0)
{
    __this->incrementSecondaryProgressBy(*arg0);
}

// public static extern void incrementSecondaryProgressBy_IMPL_25851(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :2175
void ProgressBar__incrementSecondaryProgressBy_IMPL_25851_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    ProgressBar::incrementSecondaryProgressBy_IMPL_25851(*arg0_, *arg1_, *arg2_);
}

// public override sealed void invalidateDrawable(Android.android.graphics.drawable.Drawable arg0) :2057
void ProgressBar__invalidateDrawable_fn(ProgressBar* __this, ::g::Android::android::graphics::drawable::Drawable* arg0)
{
    ProgressBar::invalidateDrawable_IMPL_25857(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void invalidateDrawable_IMPL_25857(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2193
void ProgressBar__invalidateDrawable_IMPL_25857_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ProgressBar::invalidateDrawable_IMPL_25857(*arg0_, *arg1_, arg2_);
}

// public bool isIndeterminate() :1925
void ProgressBar__isIndeterminate_fn(ProgressBar* __this, bool* __retval)
{
    *__retval = __this->isIndeterminate();
}

// public static extern bool isIndeterminate_IMPL_25835(bool arg0, Android.Base.Primitives.ujobject arg1) :2127
void ProgressBar__isIndeterminate_IMPL_25835_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = ProgressBar::isIndeterminate_IMPL_25835(*arg0_, *arg1_);
}

// public override void jumpDrawablesToCurrentState() :1967
void ProgressBar__jumpDrawablesToCurrentState_fn(ProgressBar* __this)
{
    ProgressBar::jumpDrawablesToCurrentState_IMPL_25842(__this->_subclassed, __this->_javaObject);
}

// public static extern void jumpDrawablesToCurrentState_IMPL_25842(bool arg0, Android.Base.Primitives.ujobject arg1) :2148
void ProgressBar__jumpDrawablesToCurrentState_IMPL_25842_fn(bool* arg0_, jobject* arg1_)
{
    ProgressBar::jumpDrawablesToCurrentState_IMPL_25842(*arg0_, *arg1_);
}

// public ProgressBar New(Android.android.content.Context arg0) :1875
void ProgressBar__New9_fn(::g::Android::android::content::Context* arg0, ProgressBar** __retval)
{
    *__retval = ProgressBar::New9(arg0);
}

// public ProgressBar New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :1891
void ProgressBar__New10_fn(::g::Android::android::content::Context* arg0, uObject* arg1, ProgressBar** __retval)
{
    *__retval = ProgressBar::New10(arg0, arg1);
}

// public ProgressBar New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :1908
void ProgressBar__New11_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, ProgressBar** __retval)
{
    *__retval = ProgressBar::New11(arg0, arg1, *arg2);
}

// public ProgressBar New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :1873
void ProgressBar__New12_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, ProgressBar** __retval)
{
    *__retval = ProgressBar::New12(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern void onAttachedToWindow_IMPL_25864(bool arg0, Android.Base.Primitives.ujobject arg1) :2214
void ProgressBar__onAttachedToWindow_IMPL_25864_fn(bool* arg0_, jobject* arg1_)
{
    ProgressBar::onAttachedToWindow_IMPL_25864(*arg0_, *arg1_);
}

// public static extern void onDetachedFromWindow_IMPL_25865(bool arg0, Android.Base.Primitives.ujobject arg1) :2217
void ProgressBar__onDetachedFromWindow_IMPL_25865_fn(bool* arg0_, jobject* arg1_)
{
    ProgressBar::onDetachedFromWindow_IMPL_25865(*arg0_, *arg1_);
}

// public static extern void onDraw_IMPL_25859(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2199
void ProgressBar__onDraw_IMPL_25859_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ProgressBar::onDraw_IMPL_25859(*arg0_, *arg1_, arg2_);
}

// public override void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :2111
void ProgressBar__onInitializeAccessibilityEvent_fn(ProgressBar* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    ProgressBar::onInitializeAccessibilityEvent_IMPL_25866(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_25866(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2220
void ProgressBar__onInitializeAccessibilityEvent_IMPL_25866_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ProgressBar::onInitializeAccessibilityEvent_IMPL_25866(*arg0_, *arg1_, arg2_);
}

// public override void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :2117
void ProgressBar__onInitializeAccessibilityNodeInfo_fn(ProgressBar* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    ProgressBar::onInitializeAccessibilityNodeInfo_IMPL_25867(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_25867(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2223
void ProgressBar__onInitializeAccessibilityNodeInfo_IMPL_25867_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ProgressBar::onInitializeAccessibilityNodeInfo_IMPL_25867(*arg0_, *arg1_, arg2_);
}

// public static extern void onMeasure_IMPL_25860(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :2202
void ProgressBar__onMeasure_IMPL_25860_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    ProgressBar::onMeasure_IMPL_25860(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public new void onRestoreInstanceState(Android.android.os.Parcelable arg0) :2093
void ProgressBar__onRestoreInstanceState1_fn(ProgressBar* __this, uObject* arg0)
{
    __this->onRestoreInstanceState1(arg0);
}

// public static extern void onRestoreInstanceState_IMPL_25863(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2211
void ProgressBar__onRestoreInstanceState_IMPL_25863_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ProgressBar::onRestoreInstanceState_IMPL_25863(*arg0_, *arg1_, arg2_);
}

// public new Android.android.os.Parcelable onSaveInstanceState() :2087
void ProgressBar__onSaveInstanceState1_fn(ProgressBar* __this, uObject** __retval)
{
    *__retval = __this->onSaveInstanceState1();
}

// public static extern Android.Base.Wrappers.IJWrapper onSaveInstanceState_IMPL_25862(bool arg0, Android.Base.Primitives.ujobject arg1) :2208
void ProgressBar__onSaveInstanceState_IMPL_25862_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ProgressBar::onSaveInstanceState_IMPL_25862(*arg0_, *arg1_);
}

// public static extern void onSizeChanged_IMPL_25858(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :2196
void ProgressBar__onSizeChanged_IMPL_25858_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    ProgressBar::onSizeChanged_IMPL_25858(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public static extern void onVisibilityChanged_IMPL_25856(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :2190
void ProgressBar__onVisibilityChanged_IMPL_25856_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    ProgressBar::onVisibilityChanged_IMPL_25856(*arg0_, *arg1_, arg2_, *arg3_);
}

// public override sealed void postInvalidate() :1973
void ProgressBar__postInvalidate_fn(ProgressBar* __this)
{
    ProgressBar::postInvalidate_IMPL_25843(__this->_subclassed, __this->_javaObject);
}

// public static extern void postInvalidate_IMPL_25843(bool arg0, Android.Base.Primitives.ujobject arg1) :2151
void ProgressBar__postInvalidate_IMPL_25843_fn(bool* arg0_, jobject* arg1_)
{
    ProgressBar::postInvalidate_IMPL_25843(*arg0_, *arg1_);
}

// public void setIndeterminate(bool arg0) :1931
void ProgressBar__setIndeterminate_fn(ProgressBar* __this, bool* arg0)
{
    __this->setIndeterminate(*arg0);
}

// public static extern void setIndeterminate_IMPL_25836(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :2130
void ProgressBar__setIndeterminate_IMPL_25836_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    ProgressBar::setIndeterminate_IMPL_25836(*arg0_, *arg1_, *arg2_);
}

// public void setIndeterminateDrawable(Android.android.graphics.drawable.Drawable arg0) :1943
void ProgressBar__setIndeterminateDrawable_fn(ProgressBar* __this, ::g::Android::android::graphics::drawable::Drawable* arg0)
{
    __this->setIndeterminateDrawable(arg0);
}

// public static extern void setIndeterminateDrawable_IMPL_25838(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2136
void ProgressBar__setIndeterminateDrawable_IMPL_25838_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ProgressBar::setIndeterminateDrawable_IMPL_25838(*arg0_, *arg1_, arg2_);
}

// public void setInterpolator(Android.android.content.Context arg0, int arg1) :2027
void ProgressBar__setInterpolator_fn(ProgressBar* __this, ::g::Android::android::content::Context* arg0, int* arg1)
{
    __this->setInterpolator(arg0, *arg1);
}

// public void setInterpolator(Android.android.view.animation.Interpolator arg0) :2033
void ProgressBar__setInterpolator1_fn(ProgressBar* __this, uObject* arg0)
{
    __this->setInterpolator1(arg0);
}

// public static extern void setInterpolator_IMPL_25852(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :2178
void ProgressBar__setInterpolator_IMPL_25852_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    ProgressBar::setInterpolator_IMPL_25852(*arg0_, *arg1_, arg2_, *arg3_);
}

// public static extern void setInterpolator_IMPL_25853(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2181
void ProgressBar__setInterpolator_IMPL_25853_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ProgressBar::setInterpolator_IMPL_25853(*arg0_, *arg1_, arg2_);
}

// public virtual void setMax(int arg0) :2009
void ProgressBar__setMax_fn(ProgressBar* __this, int* arg0)
{
    int arg0_ = *arg0;
    ProgressBar::setMax_IMPL_25849(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setMax_IMPL_25849(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :2169
void ProgressBar__setMax_IMPL_25849_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    ProgressBar::setMax_IMPL_25849(*arg0_, *arg1_, *arg2_);
}

// public void setProgress(int arg0) :1979
void ProgressBar__setProgress_fn(ProgressBar* __this, int* arg0)
{
    __this->setProgress(*arg0);
}

// public static extern void setProgress_IMPL_25844(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :2154
void ProgressBar__setProgress_IMPL_25844_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    ProgressBar::setProgress_IMPL_25844(*arg0_, *arg1_, *arg2_);
}

// public void setProgressDrawable(Android.android.graphics.drawable.Drawable arg0) :1955
void ProgressBar__setProgressDrawable_fn(ProgressBar* __this, ::g::Android::android::graphics::drawable::Drawable* arg0)
{
    __this->setProgressDrawable(arg0);
}

// public static extern void setProgressDrawable_IMPL_25840(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2142
void ProgressBar__setProgressDrawable_IMPL_25840_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ProgressBar::setProgressDrawable_IMPL_25840(*arg0_, *arg1_, arg2_);
}

// public void setSecondaryProgress(int arg0) :1985
void ProgressBar__setSecondaryProgress_fn(ProgressBar* __this, int* arg0)
{
    __this->setSecondaryProgress(*arg0);
}

// public static extern void setSecondaryProgress_IMPL_25845(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :2157
void ProgressBar__setSecondaryProgress_IMPL_25845_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    ProgressBar::setSecondaryProgress_IMPL_25845(*arg0_, *arg1_, *arg2_);
}

// public override sealed void setVisibility(int arg0) :2045
void ProgressBar__setVisibility_fn(ProgressBar* __this, int* arg0)
{
    int arg0_ = *arg0;
    ProgressBar::setVisibility_IMPL_25855(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setVisibility_IMPL_25855(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :2187
void ProgressBar__setVisibility_IMPL_25855_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    ProgressBar::setVisibility_IMPL_25855(*arg0_, *arg1_, *arg2_);
}

// public static extern bool verifyDrawable_IMPL_25841(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2145
void ProgressBar__verifyDrawable_IMPL_25841_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ProgressBar::verifyDrawable_IMPL_25841(*arg0_, *arg1_, arg2_);
}

jclass ProgressBar::_javaClass3_;
jmethodID ProgressBar::drawableStateChanged_25861_ID_;
jmethodID ProgressBar::getIndeterminateDrawable_25837_ID_;
jmethodID ProgressBar::getInterpolator_25854_ID_;
jmethodID ProgressBar::getMax_25848_ID_;
jmethodID ProgressBar::getProgress_25846_ID_;
jmethodID ProgressBar::getProgressDrawable_25839_ID_;
jmethodID ProgressBar::getSecondaryProgress_25847_ID_;
jmethodID ProgressBar::incrementProgressBy_25850_ID_;
jmethodID ProgressBar::incrementSecondaryProgressBy_25851_ID_;
jmethodID ProgressBar::invalidateDrawable_25857_ID_;
jmethodID ProgressBar::isIndeterminate_25835_ID_;
jmethodID ProgressBar::jumpDrawablesToCurrentState_25842_ID_;
jmethodID ProgressBar::onAttachedToWindow_25864_ID_;
jmethodID ProgressBar::onDetachedFromWindow_25865_ID_;
jmethodID ProgressBar::onDraw_25859_ID_;
jmethodID ProgressBar::onInitializeAccessibilityEvent_25866_ID_;
jmethodID ProgressBar::onInitializeAccessibilityNodeInfo_25867_ID_;
jmethodID ProgressBar::onMeasure_25860_ID_;
jmethodID ProgressBar::onRestoreInstanceState_25863_ID_;
jmethodID ProgressBar::onSaveInstanceState_25862_ID_;
jmethodID ProgressBar::onSizeChanged_25858_ID_;
jmethodID ProgressBar::onVisibilityChanged_25856_ID_;
jmethodID ProgressBar::postInvalidate_25843_ID_;
jmethodID ProgressBar::ProgressBar_25832_ID_c_;
jmethodID ProgressBar::ProgressBar_25833_ID_c_;
jmethodID ProgressBar::ProgressBar_25834_ID_c_;
jmethodID ProgressBar::setIndeterminate_25836_ID_;
jmethodID ProgressBar::setIndeterminateDrawable_25838_ID_;
jmethodID ProgressBar::setInterpolator_25852_ID_;
jmethodID ProgressBar::setInterpolator_25853_ID_;
jmethodID ProgressBar::setMax_25849_ID_;
jmethodID ProgressBar::setProgress_25844_ID_;
jmethodID ProgressBar::setProgressDrawable_25840_ID_;
jmethodID ProgressBar::setSecondaryProgress_25845_ID_;
jmethodID ProgressBar::setVisibility_25855_ID_;
jmethodID ProgressBar::verifyDrawable_25841_ID_;

// public ProgressBar(Android.android.content.Context arg0) [instance] :1875
void ProgressBar::ctor_8(::g::Android::android::content::Context* arg0)
{
    ctor_7(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());;
    CACHE_METHOD(ProgressBar::ProgressBar_25832_ID_c(),ProgressBar::_javaClass3(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(ProgressBar::_javaClass3(), ProgressBar::ProgressBar_25832_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public ProgressBar(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [instance] :1891
void ProgressBar::ctor_9(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    ctor_7(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());;
    CACHE_METHOD(ProgressBar::ProgressBar_25833_ID_c(),ProgressBar::_javaClass3(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(ProgressBar::_javaClass3(), ProgressBar::ProgressBar_25833_ID_c(), _obArg0, _obArg1);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public ProgressBar(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [instance] :1908
void ProgressBar::ctor_10(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    ctor_7(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());;
    CACHE_METHOD(ProgressBar::ProgressBar_25834_ID_c(),ProgressBar::_javaClass3(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(ProgressBar::_javaClass3(), ProgressBar::ProgressBar_25834_ID_c(), _obArg0, _obArg1, ((jint)arg2));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public ProgressBar(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :1873
void ProgressBar::ctor_11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_7(obj, utype, hasFallbackClass, resolveType);
}

// public Android.android.graphics.drawable.Drawable getIndeterminateDrawable() [instance] :1937
::g::Android::android::graphics::drawable::Drawable* ProgressBar::getIndeterminateDrawable()
{
    return uCast< ::g::Android::android::graphics::drawable::Drawable*>(ProgressBar::getIndeterminateDrawable_IMPL_25837(_subclassed, _javaObject), ::TYPES[3/*Android.android.graphics.drawable.Drawable*/]);
}

// public Android.android.view.animation.Interpolator getInterpolator() [instance] :2039
uObject* ProgressBar::getInterpolator()
{
    return ProgressBar::getInterpolator_IMPL_25854(_subclassed, _javaObject);
}

// public int getMax() [instance] :2003
int ProgressBar::getMax()
{
    return ProgressBar::getMax_IMPL_25848(_subclassed, _javaObject);
}

// public int getProgress() [instance] :1991
int ProgressBar::getProgress()
{
    return ProgressBar::getProgress_IMPL_25846(_subclassed, _javaObject);
}

// public Android.android.graphics.drawable.Drawable getProgressDrawable() [instance] :1949
::g::Android::android::graphics::drawable::Drawable* ProgressBar::getProgressDrawable()
{
    return uCast< ::g::Android::android::graphics::drawable::Drawable*>(ProgressBar::getProgressDrawable_IMPL_25839(_subclassed, _javaObject), ::TYPES[3/*Android.android.graphics.drawable.Drawable*/]);
}

// public int getSecondaryProgress() [instance] :1997
int ProgressBar::getSecondaryProgress()
{
    return ProgressBar::getSecondaryProgress_IMPL_25847(_subclassed, _javaObject);
}

// public void incrementProgressBy(int arg0) [instance] :2015
void ProgressBar::incrementProgressBy(int arg0)
{
    int arg0_ = arg0;
    ProgressBar::incrementProgressBy_IMPL_25850(_subclassed, _javaObject, arg0_);
}

// public void incrementSecondaryProgressBy(int arg0) [instance] :2021
void ProgressBar::incrementSecondaryProgressBy(int arg0)
{
    int arg0_ = arg0;
    ProgressBar::incrementSecondaryProgressBy_IMPL_25851(_subclassed, _javaObject, arg0_);
}

// public bool isIndeterminate() [instance] :1925
bool ProgressBar::isIndeterminate()
{
    return ProgressBar::isIndeterminate_IMPL_25835(_subclassed, _javaObject);
}

// public new void onRestoreInstanceState(Android.android.os.Parcelable arg0) [instance] :2093
void ProgressBar::onRestoreInstanceState1(uObject* arg0)
{
    ProgressBar::onRestoreInstanceState_IMPL_25863(_subclassed, _javaObject, arg0);
}

// public new Android.android.os.Parcelable onSaveInstanceState() [instance] :2087
uObject* ProgressBar::onSaveInstanceState1()
{
    return ProgressBar::onSaveInstanceState_IMPL_25862(_subclassed, _javaObject);
}

// public void setIndeterminate(bool arg0) [instance] :1931
void ProgressBar::setIndeterminate(bool arg0)
{
    bool arg0_ = arg0;
    ProgressBar::setIndeterminate_IMPL_25836(_subclassed, _javaObject, arg0_);
}

// public void setIndeterminateDrawable(Android.android.graphics.drawable.Drawable arg0) [instance] :1943
void ProgressBar::setIndeterminateDrawable(::g::Android::android::graphics::drawable::Drawable* arg0)
{
    ProgressBar::setIndeterminateDrawable_IMPL_25838(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setInterpolator(Android.android.content.Context arg0, int arg1) [instance] :2027
void ProgressBar::setInterpolator(::g::Android::android::content::Context* arg0, int arg1)
{
    int arg1_ = arg1;
    ProgressBar::setInterpolator_IMPL_25852(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public void setInterpolator(Android.android.view.animation.Interpolator arg0) [instance] :2033
void ProgressBar::setInterpolator1(uObject* arg0)
{
    ProgressBar::setInterpolator_IMPL_25853(_subclassed, _javaObject, arg0);
}

// public void setProgress(int arg0) [instance] :1979
void ProgressBar::setProgress(int arg0)
{
    int arg0_ = arg0;
    ProgressBar::setProgress_IMPL_25844(_subclassed, _javaObject, arg0_);
}

// public void setProgressDrawable(Android.android.graphics.drawable.Drawable arg0) [instance] :1955
void ProgressBar::setProgressDrawable(::g::Android::android::graphics::drawable::Drawable* arg0)
{
    ProgressBar::setProgressDrawable_IMPL_25840(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setSecondaryProgress(int arg0) [instance] :1985
void ProgressBar::setSecondaryProgress(int arg0)
{
    int arg0_ = arg0;
    ProgressBar::setSecondaryProgress_IMPL_25845(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :1872
void ProgressBar::_Init3()
{
    if (ProgressBar::_javaClass3()) { return; }
    INIT_JNI;
    ProgressBar::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/ProgressBar"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ProgressBar::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.ProgressBar'", 50);; }
}

// public static extern void drawableStateChanged_IMPL_25861(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2205
void ProgressBar::drawableStateChanged_IMPL_25861(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::drawableStateChanged_25861_ID(),ProgressBar::_javaClass3(),"drawableStateChanged","()V",GetMethodID,"Id for fallback method android.widget.ProgressBar.drawableStateChanged could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::drawableStateChanged_25861_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::drawableStateChanged_25861_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper getIndeterminateDrawable_IMPL_25837(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2133
uObject* ProgressBar::getIndeterminateDrawable_IMPL_25837(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    uObject* result;
    CACHE_METHOD(ProgressBar::getIndeterminateDrawable_25837_ID(),ProgressBar::_javaClass3(),"getIndeterminateDrawable","()Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.widget.ProgressBar.getIndeterminateDrawable could not be cached",94);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::getIndeterminateDrawable_25837_ID()),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ProgressBar::getIndeterminateDrawable_25837_ID()),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getInterpolator_IMPL_25854(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2184
uObject* ProgressBar::getInterpolator_IMPL_25854(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    uObject* result;
    CACHE_METHOD(ProgressBar::getInterpolator_25854_ID(),ProgressBar::_javaClass3(),"getInterpolator","()Landroid/view/animation/Interpolator;",GetMethodID,"Id for fallback method android.widget.ProgressBar.getInterpolator could not be cached",85);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::getInterpolator_25854_ID()),result,::g::Android::Fallbacks::Android_android_view_animation_Interpolator_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ProgressBar::getInterpolator_25854_ID()),result,::g::Android::Fallbacks::Android_android_view_animation_Interpolator_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getMax_IMPL_25848(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2166
int ProgressBar::getMax_IMPL_25848(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    int result;
    CACHE_METHOD(ProgressBar::getMax_25848_ID(),ProgressBar::_javaClass3(),"getMax","()I",GetMethodID,"Id for fallback method android.widget.ProgressBar.getMax could not be cached",76);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::getMax_25848_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ProgressBar::getMax_25848_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getProgress_IMPL_25846(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2160
int ProgressBar::getProgress_IMPL_25846(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    int result;
    CACHE_METHOD(ProgressBar::getProgress_25846_ID(),ProgressBar::_javaClass3(),"getProgress","()I",GetMethodID,"Id for fallback method android.widget.ProgressBar.getProgress could not be cached",81);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::getProgress_25846_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ProgressBar::getProgress_25846_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getProgressDrawable_IMPL_25839(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2139
uObject* ProgressBar::getProgressDrawable_IMPL_25839(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    uObject* result;
    CACHE_METHOD(ProgressBar::getProgressDrawable_25839_ID(),ProgressBar::_javaClass3(),"getProgressDrawable","()Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.widget.ProgressBar.getProgressDrawable could not be cached",89);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::getProgressDrawable_25839_ID()),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ProgressBar::getProgressDrawable_25839_ID()),result,::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof(),::g::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getSecondaryProgress_IMPL_25847(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2163
int ProgressBar::getSecondaryProgress_IMPL_25847(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    int result;
    CACHE_METHOD(ProgressBar::getSecondaryProgress_25847_ID(),ProgressBar::_javaClass3(),"getSecondaryProgress","()I",GetMethodID,"Id for fallback method android.widget.ProgressBar.getSecondaryProgress could not be cached",90);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::getSecondaryProgress_25847_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ProgressBar::getSecondaryProgress_25847_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void incrementProgressBy_IMPL_25850(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :2172
void ProgressBar::incrementProgressBy_IMPL_25850(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::incrementProgressBy_25850_ID(),ProgressBar::_javaClass3(),"incrementProgressBy","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.incrementProgressBy could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::incrementProgressBy_25850_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::incrementProgressBy_25850_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void incrementSecondaryProgressBy_IMPL_25851(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :2175
void ProgressBar::incrementSecondaryProgressBy_IMPL_25851(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::incrementSecondaryProgressBy_25851_ID(),ProgressBar::_javaClass3(),"incrementSecondaryProgressBy","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.incrementSecondaryProgressBy could not be cached",98);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::incrementSecondaryProgressBy_25851_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::incrementSecondaryProgressBy_25851_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void invalidateDrawable_IMPL_25857(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2193
void ProgressBar::invalidateDrawable_IMPL_25857(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ProgressBar::invalidateDrawable_25857_ID(),ProgressBar::_javaClass3(),"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.invalidateDrawable could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::invalidateDrawable_25857_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::invalidateDrawable_25857_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool isIndeterminate_IMPL_25835(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2127
bool ProgressBar::isIndeterminate_IMPL_25835(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    bool result;
    CACHE_METHOD(ProgressBar::isIndeterminate_25835_ID(),ProgressBar::_javaClass3(),"isIndeterminate","()Z",GetMethodID,"Id for fallback method android.widget.ProgressBar.isIndeterminate could not be cached",85);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::isIndeterminate_25835_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ProgressBar::isIndeterminate_25835_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void jumpDrawablesToCurrentState_IMPL_25842(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2148
void ProgressBar::jumpDrawablesToCurrentState_IMPL_25842(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::jumpDrawablesToCurrentState_25842_ID(),ProgressBar::_javaClass3(),"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.ProgressBar.jumpDrawablesToCurrentState could not be cached",97);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::jumpDrawablesToCurrentState_25842_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::jumpDrawablesToCurrentState_25842_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public ProgressBar New(Android.android.content.Context arg0) [static] :1875
ProgressBar* ProgressBar::New9(::g::Android::android::content::Context* arg0)
{
    ProgressBar* obj2 = (ProgressBar*)uNew(ProgressBar_typeof());
    obj2->ctor_8(arg0);
    return obj2;
}

// public ProgressBar New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [static] :1891
ProgressBar* ProgressBar::New10(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    ProgressBar* obj3 = (ProgressBar*)uNew(ProgressBar_typeof());
    obj3->ctor_9(arg0, arg1);
    return obj3;
}

// public ProgressBar New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [static] :1908
ProgressBar* ProgressBar::New11(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    ProgressBar* obj4 = (ProgressBar*)uNew(ProgressBar_typeof());
    obj4->ctor_10(arg0, arg1, arg2);
    return obj4;
}

// public ProgressBar New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [static] :1873
ProgressBar* ProgressBar::New12(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ProgressBar* obj1 = (ProgressBar*)uNew(ProgressBar_typeof());
    obj1->ctor_11(obj, utype, hasFallbackClass, resolveType);
    return obj1;
}

// public static extern void onAttachedToWindow_IMPL_25864(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2214
void ProgressBar::onAttachedToWindow_IMPL_25864(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::onAttachedToWindow_25864_ID(),ProgressBar::_javaClass3(),"onAttachedToWindow","()V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onAttachedToWindow could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::onAttachedToWindow_25864_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::onAttachedToWindow_25864_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onDetachedFromWindow_IMPL_25865(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2217
void ProgressBar::onDetachedFromWindow_IMPL_25865(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::onDetachedFromWindow_25865_ID(),ProgressBar::_javaClass3(),"onDetachedFromWindow","()V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onDetachedFromWindow could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::onDetachedFromWindow_25865_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::onDetachedFromWindow_25865_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onDraw_IMPL_25859(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2199
void ProgressBar::onDraw_IMPL_25859(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ProgressBar::onDraw_25859_ID(),ProgressBar::_javaClass3(),"onDraw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onDraw could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::onDraw_25859_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::onDraw_25859_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_25866(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2220
void ProgressBar::onInitializeAccessibilityEvent_IMPL_25866(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ProgressBar::onInitializeAccessibilityEvent_25866_ID(),ProgressBar::_javaClass3(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onInitializeAccessibilityEvent could not be cached",100);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::onInitializeAccessibilityEvent_25866_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::onInitializeAccessibilityEvent_25866_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_25867(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2223
void ProgressBar::onInitializeAccessibilityNodeInfo_IMPL_25867(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ProgressBar::onInitializeAccessibilityNodeInfo_25867_ID(),ProgressBar::_javaClass3(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onInitializeAccessibilityNodeInfo could not be cached",103);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::onInitializeAccessibilityNodeInfo_25867_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::onInitializeAccessibilityNodeInfo_25867_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onMeasure_IMPL_25860(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :2202
void ProgressBar::onMeasure_IMPL_25860(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::onMeasure_25860_ID(),ProgressBar::_javaClass3(),"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onMeasure could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::onMeasure_25860_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::onMeasure_25860_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onRestoreInstanceState_IMPL_25863(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2211
void ProgressBar::onRestoreInstanceState_IMPL_25863(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ProgressBar::onRestoreInstanceState_25863_ID(),ProgressBar::_javaClass3(),"onRestoreInstanceState","(Landroid/os/Parcelable;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onRestoreInstanceState could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::onRestoreInstanceState_25863_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::onRestoreInstanceState_25863_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper onSaveInstanceState_IMPL_25862(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2208
uObject* ProgressBar::onSaveInstanceState_IMPL_25862(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    uObject* result;
    CACHE_METHOD(ProgressBar::onSaveInstanceState_25862_ID(),ProgressBar::_javaClass3(),"onSaveInstanceState","()Landroid/os/Parcelable;",GetMethodID,"Id for fallback method android.widget.ProgressBar.onSaveInstanceState could not be cached",89);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::onSaveInstanceState_25862_ID()),result,::g::Android::Fallbacks::Android_android_os_Parcelable_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ProgressBar::onSaveInstanceState_25862_ID()),result,::g::Android::Fallbacks::Android_android_os_Parcelable_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onSizeChanged_IMPL_25858(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :2196
void ProgressBar::onSizeChanged_IMPL_25858(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::onSizeChanged_25858_ID(),ProgressBar::_javaClass3(),"onSizeChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onSizeChanged could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::onSizeChanged_25858_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::onSizeChanged_25858_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onVisibilityChanged_IMPL_25856(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :2190
void ProgressBar::onVisibilityChanged_IMPL_25856(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ProgressBar::onVisibilityChanged_25856_ID(),ProgressBar::_javaClass3(),"onVisibilityChanged","(Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.onVisibilityChanged could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::onVisibilityChanged_25856_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::onVisibilityChanged_25856_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void postInvalidate_IMPL_25843(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2151
void ProgressBar::postInvalidate_IMPL_25843(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::postInvalidate_25843_ID(),ProgressBar::_javaClass3(),"postInvalidate","()V",GetMethodID,"Id for fallback method android.widget.ProgressBar.postInvalidate could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::postInvalidate_25843_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::postInvalidate_25843_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setIndeterminate_IMPL_25836(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :2130
void ProgressBar::setIndeterminate_IMPL_25836(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::setIndeterminate_25836_ID(),ProgressBar::_javaClass3(),"setIndeterminate","(Z)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setIndeterminate could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::setIndeterminate_25836_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::setIndeterminate_25836_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setIndeterminateDrawable_IMPL_25838(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2136
void ProgressBar::setIndeterminateDrawable_IMPL_25838(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ProgressBar::setIndeterminateDrawable_25838_ID(),ProgressBar::_javaClass3(),"setIndeterminateDrawable","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setIndeterminateDrawable could not be cached",94);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::setIndeterminateDrawable_25838_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::setIndeterminateDrawable_25838_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setInterpolator_IMPL_25852(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :2178
void ProgressBar::setInterpolator_IMPL_25852(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ProgressBar::setInterpolator_25852_ID(),ProgressBar::_javaClass3(),"setInterpolator","(Landroid/content/Context;I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setInterpolator could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::setInterpolator_25852_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::setInterpolator_25852_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setInterpolator_IMPL_25853(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2181
void ProgressBar::setInterpolator_IMPL_25853(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ProgressBar::setInterpolator_25853_ID(),ProgressBar::_javaClass3(),"setInterpolator","(Landroid/view/animation/Interpolator;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setInterpolator could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::setInterpolator_25853_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::setInterpolator_25853_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setMax_IMPL_25849(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :2169
void ProgressBar::setMax_IMPL_25849(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::setMax_25849_ID(),ProgressBar::_javaClass3(),"setMax","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setMax could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::setMax_25849_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::setMax_25849_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setProgress_IMPL_25844(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :2154
void ProgressBar::setProgress_IMPL_25844(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::setProgress_25844_ID(),ProgressBar::_javaClass3(),"setProgress","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setProgress could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::setProgress_25844_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::setProgress_25844_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setProgressDrawable_IMPL_25840(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2142
void ProgressBar::setProgressDrawable_IMPL_25840(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ProgressBar::setProgressDrawable_25840_ID(),ProgressBar::_javaClass3(),"setProgressDrawable","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setProgressDrawable could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::setProgressDrawable_25840_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::setProgressDrawable_25840_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setSecondaryProgress_IMPL_25845(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :2157
void ProgressBar::setSecondaryProgress_IMPL_25845(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::setSecondaryProgress_25845_ID(),ProgressBar::_javaClass3(),"setSecondaryProgress","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setSecondaryProgress could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::setSecondaryProgress_25845_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::setSecondaryProgress_25845_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setVisibility_IMPL_25855(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :2187
void ProgressBar::setVisibility_IMPL_25855(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    
    CACHE_METHOD(ProgressBar::setVisibility_25855_ID(),ProgressBar::_javaClass3(),"setVisibility","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setVisibility could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::setVisibility_25855_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ProgressBar::setVisibility_25855_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool verifyDrawable_IMPL_25841(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2145
bool ProgressBar::verifyDrawable_IMPL_25841(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ProgressBar::_javaClass3(),ProgressBar::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ProgressBar::verifyDrawable_25841_ID(),ProgressBar::_javaClass3(),"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z",GetMethodID,"Id for fallback method android.widget.ProgressBar.verifyDrawable could not be cached",84);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ProgressBar::_javaClass3(), ProgressBar::verifyDrawable_25841_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ProgressBar::verifyDrawable_25841_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(10647)
// ------------------------------------------------------------------------------

// public extern class RelativeLayout :10647
// {
::g::Android::android::view::ViewGroup_type* RelativeLayout_typeof()
{
    static uSStrong< ::g::Android::android::view::ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 49;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(RelativeLayout);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Android.android.widget.RelativeLayout", options);
    type->SetBase(::g::Android::android::view::ViewGroup_typeof());
    type->fp_dispatchPopulateAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*, bool*))RelativeLayout__dispatchPopulateAccessibilityEvent_fn;
    type->fp_getBaseline = (void(*)(::g::Android::android::view::View*, int*))RelativeLayout__getBaseline_fn;
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))RelativeLayout__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))RelativeLayout__onInitializeAccessibilityNodeInfo_fn;
    type->fp_requestLayout = (void(*)(::g::Android::android::view::View*))RelativeLayout__requestLayout_fn;
    type->fp_shouldDelayChildPressedState = (void(*)(::g::Android::android::view::ViewGroup*, bool*))RelativeLayout__shouldDelayChildPressedState_fn;
    type->interface2.fp_requestLayout = (void(*)(uObject*))::g::Android::android::view::View__requestLayout_fn;
    type->interface2.fp_isLayoutRequested = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutRequested_fn;
    type->interface2.fp_requestTransparentRegion = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestTransparentRegion_fn;
    type->interface2.fp_invalidateChild = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*))::g::Android::android::view::ViewGroup__invalidateChild_fn;
    type->interface2.fp_invalidateChildInParent = (void(*)(uObject*, ::g::Android::Runtime::IntArray*, ::g::Android::android::graphics::Rect*, uObject**))::g::Android::android::view::ViewGroup__invalidateChildInParent_fn;
    type->interface2.fp_getParent = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParent_fn;
    type->interface2.fp_requestChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestChildFocus_fn;
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
    type->interface2.fp_requestDisallowInterceptTouchEvent = (void(*)(uObject*, bool*))::g::Android::android::view::ViewGroup__requestDisallowInterceptTouchEvent_fn;
    type->interface2.fp_requestChildRectangleOnScreen = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*))::g::Android::android::view::ViewGroup__requestChildRectangleOnScreen_fn;
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
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[7] = ::g::Android::android::widget::RelativeLayoutDLRLayoutParams_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1),
        ::g::Android::android::view::ViewParent_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ABOVE_25944_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_BASELINE_25946_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_BOTTOM_25950_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_END_25961_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_LEFT_25947_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_PARENT_BOTTOM_25954_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_PARENT_END_25963_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_PARENT_LEFT_25951_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_PARENT_RIGHT_25953_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_PARENT_START_25962_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_PARENT_TOP_25952_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_RIGHT_25949_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_START_25960_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::ALIGN_TOP_25948_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::BELOW_25945_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::CENTER_HORIZONTAL_25956_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::CENTER_IN_PARENT_25955_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::CENTER_VERTICAL_25957_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::checkLayoutParams_25979_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::dispatchPopulateAccessibilityEvent_25981_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::END_OF_25959_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::generateDefaultLayoutParams_25978_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::generateLayoutParams_25977_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::generateLayoutParams_25980_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::getBaseline_25973_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::getGravity_25969_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::LEFT_OF_25942_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::onInitializeAccessibilityEvent_25982_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::onInitializeAccessibilityNodeInfo_25983_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::onLayout_25976_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::onMeasure_25975_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::RelativeLayout_25964_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::RelativeLayout_25965_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::RelativeLayout_25966_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::requestLayout_25974_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::RIGHT_OF_25943_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::setGravity_25970_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::setHorizontalGravity_25971_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::setIgnoreGravity_25968_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::setVerticalGravity_25972_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::shouldDelayChildPressedState_25967_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::START_OF_25958_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::TRUE_25941_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(51,
        new uFunction("_Init", NULL, (void*)RelativeLayout___Init4_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_ABOVE", NULL, (void*)RelativeLayout__get_ABOVE_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_BASELINE", NULL, (void*)RelativeLayout__get_ALIGN_BASELINE_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_BOTTOM", NULL, (void*)RelativeLayout__get_ALIGN_BOTTOM_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_END", NULL, (void*)RelativeLayout__get_ALIGN_END_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_LEFT", NULL, (void*)RelativeLayout__get_ALIGN_LEFT_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_PARENT_BOTTOM", NULL, (void*)RelativeLayout__get_ALIGN_PARENT_BOTTOM_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_PARENT_END", NULL, (void*)RelativeLayout__get_ALIGN_PARENT_END_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_PARENT_LEFT", NULL, (void*)RelativeLayout__get_ALIGN_PARENT_LEFT_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_PARENT_RIGHT", NULL, (void*)RelativeLayout__get_ALIGN_PARENT_RIGHT_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_PARENT_START", NULL, (void*)RelativeLayout__get_ALIGN_PARENT_START_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_PARENT_TOP", NULL, (void*)RelativeLayout__get_ALIGN_PARENT_TOP_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_RIGHT", NULL, (void*)RelativeLayout__get_ALIGN_RIGHT_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_START", NULL, (void*)RelativeLayout__get_ALIGN_START_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_ALIGN_TOP", NULL, (void*)RelativeLayout__get_ALIGN_TOP_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_BELOW", NULL, (void*)RelativeLayout__get_BELOW_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_CENTER_HORIZONTAL", NULL, (void*)RelativeLayout__get_CENTER_HORIZONTAL_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_CENTER_IN_PARENT", NULL, (void*)RelativeLayout__get_CENTER_IN_PARENT_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_CENTER_VERTICAL", NULL, (void*)RelativeLayout__get_CENTER_VERTICAL_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("checkLayoutParams_IMPL_25979", NULL, (void*)RelativeLayout__checkLayoutParams_IMPL_25979_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("dispatchPopulateAccessibilityEvent_IMPL_25981", NULL, (void*)RelativeLayout__dispatchPopulateAccessibilityEvent_IMPL_25981_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("get_END_OF", NULL, (void*)RelativeLayout__get_END_OF_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("generateDefaultLayoutParams_IMPL_25978", NULL, (void*)RelativeLayout__generateDefaultLayoutParams_IMPL_25978_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("generateLayoutParams", NULL, (void*)RelativeLayout__generateLayoutParams2_fn, 0, false, ::g::Android::android::widget::RelativeLayoutDLRLayoutParams_typeof(), 1, ::g::Android::android::util::AttributeSet_typeof()),
        new uFunction("generateLayoutParams_IMPL_25977", NULL, (void*)RelativeLayout__generateLayoutParams_IMPL_25977_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("generateLayoutParams_IMPL_25980", NULL, (void*)RelativeLayout__generateLayoutParams_IMPL_25980_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("getBaseline_IMPL_25973", NULL, (void*)RelativeLayout__getBaseline_IMPL_25973_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getGravity", NULL, (void*)RelativeLayout__getGravity_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getGravity_IMPL_25969", NULL, (void*)RelativeLayout__getGravity_IMPL_25969_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("get_LEFT_OF", NULL, (void*)RelativeLayout__get_LEFT_OF_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)RelativeLayout__New9_fn, 0, true, RelativeLayout_typeof(), 1, ::g::Android::android::content::Context_typeof()),
        new uFunction(".ctor", NULL, (void*)RelativeLayout__New10_fn, 0, true, RelativeLayout_typeof(), 2, ::g::Android::android::content::Context_typeof(), ::g::Android::android::util::AttributeSet_typeof()),
        new uFunction(".ctor", NULL, (void*)RelativeLayout__New11_fn, 0, true, RelativeLayout_typeof(), 3, ::g::Android::android::content::Context_typeof(), ::g::Android::android::util::AttributeSet_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)RelativeLayout__New12_fn, 0, true, RelativeLayout_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_25982", NULL, (void*)RelativeLayout__onInitializeAccessibilityEvent_IMPL_25982_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_25983", NULL, (void*)RelativeLayout__onInitializeAccessibilityNodeInfo_IMPL_25983_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onLayout_IMPL_25976", NULL, (void*)RelativeLayout__onLayout_IMPL_25976_fn, 0, true, uVoid_typeof(), 7, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onMeasure_IMPL_25975", NULL, (void*)RelativeLayout__onMeasure_IMPL_25975_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("requestLayout_IMPL_25974", NULL, (void*)RelativeLayout__requestLayout_IMPL_25974_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("get_RIGHT_OF", NULL, (void*)RelativeLayout__get_RIGHT_OF_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("setGravity", NULL, (void*)RelativeLayout__setGravity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setGravity_IMPL_25970", NULL, (void*)RelativeLayout__setGravity_IMPL_25970_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setHorizontalGravity", NULL, (void*)RelativeLayout__setHorizontalGravity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setHorizontalGravity_IMPL_25971", NULL, (void*)RelativeLayout__setHorizontalGravity_IMPL_25971_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setIgnoreGravity", NULL, (void*)RelativeLayout__setIgnoreGravity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setIgnoreGravity_IMPL_25968", NULL, (void*)RelativeLayout__setIgnoreGravity_IMPL_25968_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setVerticalGravity", NULL, (void*)RelativeLayout__setVerticalGravity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setVerticalGravity_IMPL_25972", NULL, (void*)RelativeLayout__setVerticalGravity_IMPL_25972_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("shouldDelayChildPressedState_IMPL_25967", NULL, (void*)RelativeLayout__shouldDelayChildPressedState_IMPL_25967_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("get_START_OF", NULL, (void*)RelativeLayout__get_START_OF_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_TRUE", NULL, (void*)RelativeLayout__get_TRUE_fn, 0, true, ::g::Uno::Int_typeof(), 0));
    return type;
}

// public RelativeLayout(Android.android.content.Context arg0) :11045
void RelativeLayout__ctor_12_fn(RelativeLayout* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_12(arg0);
}

// public RelativeLayout(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :11061
void RelativeLayout__ctor_13_fn(RelativeLayout* __this, ::g::Android::android::content::Context* arg0, uObject* arg1)
{
    __this->ctor_13(arg0, arg1);
}

// public RelativeLayout(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :11078
void RelativeLayout__ctor_14_fn(RelativeLayout* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2)
{
    __this->ctor_14(arg0, arg1, *arg2);
}

// public RelativeLayout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :10652
void RelativeLayout__ctor_15_fn(RelativeLayout* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_15(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :10651
void RelativeLayout___Init4_fn()
{
    RelativeLayout::_Init4();
}

// public static int get_ABOVE() :10707
void RelativeLayout__get_ABOVE_fn(int* __retval)
{
    *__retval = RelativeLayout::ABOVE();
}

// public static int get_ALIGN_BASELINE() :10741
void RelativeLayout__get_ALIGN_BASELINE_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_BASELINE();
}

// public static int get_ALIGN_BOTTOM() :10809
void RelativeLayout__get_ALIGN_BOTTOM_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_BOTTOM();
}

// public static int get_ALIGN_END() :10996
void RelativeLayout__get_ALIGN_END_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_END();
}

// public static int get_ALIGN_LEFT() :10758
void RelativeLayout__get_ALIGN_LEFT_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_LEFT();
}

// public static int get_ALIGN_PARENT_BOTTOM() :10877
void RelativeLayout__get_ALIGN_PARENT_BOTTOM_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_PARENT_BOTTOM();
}

// public static int get_ALIGN_PARENT_END() :11030
void RelativeLayout__get_ALIGN_PARENT_END_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_PARENT_END();
}

// public static int get_ALIGN_PARENT_LEFT() :10826
void RelativeLayout__get_ALIGN_PARENT_LEFT_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_PARENT_LEFT();
}

// public static int get_ALIGN_PARENT_RIGHT() :10860
void RelativeLayout__get_ALIGN_PARENT_RIGHT_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_PARENT_RIGHT();
}

// public static int get_ALIGN_PARENT_START() :11013
void RelativeLayout__get_ALIGN_PARENT_START_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_PARENT_START();
}

// public static int get_ALIGN_PARENT_TOP() :10843
void RelativeLayout__get_ALIGN_PARENT_TOP_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_PARENT_TOP();
}

// public static int get_ALIGN_RIGHT() :10792
void RelativeLayout__get_ALIGN_RIGHT_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_RIGHT();
}

// public static int get_ALIGN_START() :10979
void RelativeLayout__get_ALIGN_START_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_START();
}

// public static int get_ALIGN_TOP() :10775
void RelativeLayout__get_ALIGN_TOP_fn(int* __retval)
{
    *__retval = RelativeLayout::ALIGN_TOP();
}

// public static int get_BELOW() :10724
void RelativeLayout__get_BELOW_fn(int* __retval)
{
    *__retval = RelativeLayout::BELOW();
}

// public static int get_CENTER_HORIZONTAL() :10911
void RelativeLayout__get_CENTER_HORIZONTAL_fn(int* __retval)
{
    *__retval = RelativeLayout::CENTER_HORIZONTAL();
}

// public static int get_CENTER_IN_PARENT() :10894
void RelativeLayout__get_CENTER_IN_PARENT_fn(int* __retval)
{
    *__retval = RelativeLayout::CENTER_IN_PARENT();
}

// public static int get_CENTER_VERTICAL() :10928
void RelativeLayout__get_CENTER_VERTICAL_fn(int* __retval)
{
    *__retval = RelativeLayout::CENTER_VERTICAL();
}

// public static extern bool checkLayoutParams_IMPL_25979(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :11237
void RelativeLayout__checkLayoutParams_IMPL_25979_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = RelativeLayout::checkLayoutParams_IMPL_25979(*arg0_, *arg1_, arg2_);
}

// public override sealed bool dispatchPopulateAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :11179
void RelativeLayout__dispatchPopulateAccessibilityEvent_fn(RelativeLayout* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0, bool* __retval)
{
    return *__retval = RelativeLayout::dispatchPopulateAccessibilityEvent_IMPL_25981(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool dispatchPopulateAccessibilityEvent_IMPL_25981(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :11243
void RelativeLayout__dispatchPopulateAccessibilityEvent_IMPL_25981_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = RelativeLayout::dispatchPopulateAccessibilityEvent_IMPL_25981(*arg0_, *arg1_, arg2_);
}

// public static int get_END_OF() :10962
void RelativeLayout__get_END_OF_fn(int* __retval)
{
    *__retval = RelativeLayout::END_OF();
}

// public static extern Android.Base.Wrappers.IJWrapper generateDefaultLayoutParams_IMPL_25978(bool arg0, Android.Base.Primitives.ujobject arg1) :11234
void RelativeLayout__generateDefaultLayoutParams_IMPL_25978_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = RelativeLayout::generateDefaultLayoutParams_IMPL_25978(*arg0_, *arg1_);
}

// public new Android.android.widget.RelativeLayoutDLRLayoutParams generateLayoutParams(Android.android.util.AttributeSet arg0) :11155
void RelativeLayout__generateLayoutParams2_fn(RelativeLayout* __this, uObject* arg0, ::g::Android::android::widget::RelativeLayoutDLRLayoutParams** __retval)
{
    *__retval = __this->generateLayoutParams2(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper generateLayoutParams_IMPL_25977(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :11231
void RelativeLayout__generateLayoutParams_IMPL_25977_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = RelativeLayout::generateLayoutParams_IMPL_25977(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper generateLayoutParams_IMPL_25980(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :11240
void RelativeLayout__generateLayoutParams_IMPL_25980_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = RelativeLayout::generateLayoutParams_IMPL_25980(*arg0_, *arg1_, arg2_);
}

// public override sealed int getBaseline() :11131
void RelativeLayout__getBaseline_fn(RelativeLayout* __this, int* __retval)
{
    return *__retval = RelativeLayout::getBaseline_IMPL_25973(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int getBaseline_IMPL_25973(bool arg0, Android.Base.Primitives.ujobject arg1) :11219
void RelativeLayout__getBaseline_IMPL_25973_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = RelativeLayout::getBaseline_IMPL_25973(*arg0_, *arg1_);
}

// public int getGravity() :11107
void RelativeLayout__getGravity_fn(RelativeLayout* __this, int* __retval)
{
    *__retval = __this->getGravity();
}

// public static extern int getGravity_IMPL_25969(bool arg0, Android.Base.Primitives.ujobject arg1) :11207
void RelativeLayout__getGravity_IMPL_25969_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = RelativeLayout::getGravity_IMPL_25969(*arg0_, *arg1_);
}

// public static int get_LEFT_OF() :10673
void RelativeLayout__get_LEFT_OF_fn(int* __retval)
{
    *__retval = RelativeLayout::LEFT_OF();
}

// public RelativeLayout New(Android.android.content.Context arg0) :11045
void RelativeLayout__New9_fn(::g::Android::android::content::Context* arg0, RelativeLayout** __retval)
{
    *__retval = RelativeLayout::New9(arg0);
}

// public RelativeLayout New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :11061
void RelativeLayout__New10_fn(::g::Android::android::content::Context* arg0, uObject* arg1, RelativeLayout** __retval)
{
    *__retval = RelativeLayout::New10(arg0, arg1);
}

// public RelativeLayout New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :11078
void RelativeLayout__New11_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, RelativeLayout** __retval)
{
    *__retval = RelativeLayout::New11(arg0, arg1, *arg2);
}

// public RelativeLayout New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :10652
void RelativeLayout__New12_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, RelativeLayout** __retval)
{
    *__retval = RelativeLayout::New12(*obj, utype, *hasFallbackClass, *resolveType);
}

// public override sealed void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :11185
void RelativeLayout__onInitializeAccessibilityEvent_fn(RelativeLayout* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    RelativeLayout::onInitializeAccessibilityEvent_IMPL_25982(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_25982(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :11246
void RelativeLayout__onInitializeAccessibilityEvent_IMPL_25982_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    RelativeLayout::onInitializeAccessibilityEvent_IMPL_25982(*arg0_, *arg1_, arg2_);
}

// public override sealed void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :11191
void RelativeLayout__onInitializeAccessibilityNodeInfo_fn(RelativeLayout* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    RelativeLayout::onInitializeAccessibilityNodeInfo_IMPL_25983(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_25983(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :11249
void RelativeLayout__onInitializeAccessibilityNodeInfo_IMPL_25983_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    RelativeLayout::onInitializeAccessibilityNodeInfo_IMPL_25983(*arg0_, *arg1_, arg2_);
}

// public static extern void onLayout_IMPL_25976(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2, int arg3, int arg4, int arg5, int arg6) :11228
void RelativeLayout__onLayout_IMPL_25976_fn(bool* arg0_, jobject* arg1_, bool* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_)
{
    RelativeLayout::onLayout_IMPL_25976(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_, *arg6_);
}

// public static extern void onMeasure_IMPL_25975(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :11225
void RelativeLayout__onMeasure_IMPL_25975_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    RelativeLayout::onMeasure_IMPL_25975(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public override sealed void requestLayout() :11137
void RelativeLayout__requestLayout_fn(RelativeLayout* __this)
{
    RelativeLayout::requestLayout_IMPL_25974(__this->_subclassed, __this->_javaObject);
}

// public static extern void requestLayout_IMPL_25974(bool arg0, Android.Base.Primitives.ujobject arg1) :11222
void RelativeLayout__requestLayout_IMPL_25974_fn(bool* arg0_, jobject* arg1_)
{
    RelativeLayout::requestLayout_IMPL_25974(*arg0_, *arg1_);
}

// public static int get_RIGHT_OF() :10690
void RelativeLayout__get_RIGHT_OF_fn(int* __retval)
{
    *__retval = RelativeLayout::RIGHT_OF();
}

// public void setGravity(int arg0) :11113
void RelativeLayout__setGravity_fn(RelativeLayout* __this, int* arg0)
{
    __this->setGravity(*arg0);
}

// public static extern void setGravity_IMPL_25970(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :11210
void RelativeLayout__setGravity_IMPL_25970_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    RelativeLayout::setGravity_IMPL_25970(*arg0_, *arg1_, *arg2_);
}

// public void setHorizontalGravity(int arg0) :11119
void RelativeLayout__setHorizontalGravity_fn(RelativeLayout* __this, int* arg0)
{
    __this->setHorizontalGravity(*arg0);
}

// public static extern void setHorizontalGravity_IMPL_25971(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :11213
void RelativeLayout__setHorizontalGravity_IMPL_25971_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    RelativeLayout::setHorizontalGravity_IMPL_25971(*arg0_, *arg1_, *arg2_);
}

// public void setIgnoreGravity(int arg0) :11101
void RelativeLayout__setIgnoreGravity_fn(RelativeLayout* __this, int* arg0)
{
    __this->setIgnoreGravity(*arg0);
}

// public static extern void setIgnoreGravity_IMPL_25968(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :11204
void RelativeLayout__setIgnoreGravity_IMPL_25968_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    RelativeLayout::setIgnoreGravity_IMPL_25968(*arg0_, *arg1_, *arg2_);
}

// public void setVerticalGravity(int arg0) :11125
void RelativeLayout__setVerticalGravity_fn(RelativeLayout* __this, int* arg0)
{
    __this->setVerticalGravity(*arg0);
}

// public static extern void setVerticalGravity_IMPL_25972(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :11216
void RelativeLayout__setVerticalGravity_IMPL_25972_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    RelativeLayout::setVerticalGravity_IMPL_25972(*arg0_, *arg1_, *arg2_);
}

// public override sealed bool shouldDelayChildPressedState() :11095
void RelativeLayout__shouldDelayChildPressedState_fn(RelativeLayout* __this, bool* __retval)
{
    return *__retval = RelativeLayout::shouldDelayChildPressedState_IMPL_25967(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool shouldDelayChildPressedState_IMPL_25967(bool arg0, Android.Base.Primitives.ujobject arg1) :11201
void RelativeLayout__shouldDelayChildPressedState_IMPL_25967_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = RelativeLayout::shouldDelayChildPressedState_IMPL_25967(*arg0_, *arg1_);
}

// public static int get_START_OF() :10945
void RelativeLayout__get_START_OF_fn(int* __retval)
{
    *__retval = RelativeLayout::START_OF();
}

// public static int get_TRUE() :10656
void RelativeLayout__get_TRUE_fn(int* __retval)
{
    *__retval = RelativeLayout::TRUE();
}

jclass RelativeLayout::_javaClass4_;
jfieldID RelativeLayout::ABOVE_25944_ID_;
jfieldID RelativeLayout::ALIGN_BASELINE_25946_ID_;
jfieldID RelativeLayout::ALIGN_BOTTOM_25950_ID_;
jfieldID RelativeLayout::ALIGN_END_25961_ID_;
jfieldID RelativeLayout::ALIGN_LEFT_25947_ID_;
jfieldID RelativeLayout::ALIGN_PARENT_BOTTOM_25954_ID_;
jfieldID RelativeLayout::ALIGN_PARENT_END_25963_ID_;
jfieldID RelativeLayout::ALIGN_PARENT_LEFT_25951_ID_;
jfieldID RelativeLayout::ALIGN_PARENT_RIGHT_25953_ID_;
jfieldID RelativeLayout::ALIGN_PARENT_START_25962_ID_;
jfieldID RelativeLayout::ALIGN_PARENT_TOP_25952_ID_;
jfieldID RelativeLayout::ALIGN_RIGHT_25949_ID_;
jfieldID RelativeLayout::ALIGN_START_25960_ID_;
jfieldID RelativeLayout::ALIGN_TOP_25948_ID_;
jfieldID RelativeLayout::BELOW_25945_ID_;
jfieldID RelativeLayout::CENTER_HORIZONTAL_25956_ID_;
jfieldID RelativeLayout::CENTER_IN_PARENT_25955_ID_;
jfieldID RelativeLayout::CENTER_VERTICAL_25957_ID_;
jmethodID RelativeLayout::checkLayoutParams_25979_ID_;
jmethodID RelativeLayout::dispatchPopulateAccessibilityEvent_25981_ID_;
jfieldID RelativeLayout::END_OF_25959_ID_;
jmethodID RelativeLayout::generateDefaultLayoutParams_25978_ID_;
jmethodID RelativeLayout::generateLayoutParams_25977_ID_;
jmethodID RelativeLayout::generateLayoutParams_25980_ID_;
jmethodID RelativeLayout::getBaseline_25973_ID_;
jmethodID RelativeLayout::getGravity_25969_ID_;
jfieldID RelativeLayout::LEFT_OF_25942_ID_;
jmethodID RelativeLayout::onInitializeAccessibilityEvent_25982_ID_;
jmethodID RelativeLayout::onInitializeAccessibilityNodeInfo_25983_ID_;
jmethodID RelativeLayout::onLayout_25976_ID_;
jmethodID RelativeLayout::onMeasure_25975_ID_;
jmethodID RelativeLayout::RelativeLayout_25964_ID_c_;
jmethodID RelativeLayout::RelativeLayout_25965_ID_c_;
jmethodID RelativeLayout::RelativeLayout_25966_ID_c_;
jmethodID RelativeLayout::requestLayout_25974_ID_;
jfieldID RelativeLayout::RIGHT_OF_25943_ID_;
jmethodID RelativeLayout::setGravity_25970_ID_;
jmethodID RelativeLayout::setHorizontalGravity_25971_ID_;
jmethodID RelativeLayout::setIgnoreGravity_25968_ID_;
jmethodID RelativeLayout::setVerticalGravity_25972_ID_;
jmethodID RelativeLayout::shouldDelayChildPressedState_25967_ID_;
jfieldID RelativeLayout::START_OF_25958_ID_;
jfieldID RelativeLayout::TRUE_25941_ID_;

// public RelativeLayout(Android.android.content.Context arg0) [instance] :11045
void RelativeLayout::ctor_12(::g::Android::android::content::Context* arg0)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());;
    CACHE_METHOD(RelativeLayout::RelativeLayout_25964_ID_c(),RelativeLayout::_javaClass4(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.<init> could not be cached",79);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(RelativeLayout::_javaClass4(), RelativeLayout::RelativeLayout_25964_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public RelativeLayout(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [instance] :11061
void RelativeLayout::ctor_13(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());;
    CACHE_METHOD(RelativeLayout::RelativeLayout_25965_ID_c(),RelativeLayout::_javaClass4(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.<init> could not be cached",79);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(RelativeLayout::_javaClass4(), RelativeLayout::RelativeLayout_25965_ID_c(), _obArg0, _obArg1);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public RelativeLayout(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [instance] :11078
void RelativeLayout::ctor_14(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());;
    CACHE_METHOD(RelativeLayout::RelativeLayout_25966_ID_c(),RelativeLayout::_javaClass4(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.<init> could not be cached",79);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(RelativeLayout::_javaClass4(), RelativeLayout::RelativeLayout_25966_ID_c(), _obArg0, _obArg1, ((jint)arg2));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public RelativeLayout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :10652
void RelativeLayout::ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_11(obj, utype, hasFallbackClass, resolveType);
}

// public new Android.android.widget.RelativeLayoutDLRLayoutParams generateLayoutParams(Android.android.util.AttributeSet arg0) [instance] :11155
::g::Android::android::widget::RelativeLayoutDLRLayoutParams* RelativeLayout::generateLayoutParams2(uObject* arg0)
{
    return uCast< ::g::Android::android::widget::RelativeLayoutDLRLayoutParams*>(RelativeLayout::generateLayoutParams_IMPL_25977(_subclassed, _javaObject, arg0), ::TYPES[7/*Android.android.widget.RelativeLayoutDLRLayoutParams*/]);
}

// public int getGravity() [instance] :11107
int RelativeLayout::getGravity()
{
    return RelativeLayout::getGravity_IMPL_25969(_subclassed, _javaObject);
}

// public void setGravity(int arg0) [instance] :11113
void RelativeLayout::setGravity(int arg0)
{
    int arg0_ = arg0;
    RelativeLayout::setGravity_IMPL_25970(_subclassed, _javaObject, arg0_);
}

// public void setHorizontalGravity(int arg0) [instance] :11119
void RelativeLayout::setHorizontalGravity(int arg0)
{
    int arg0_ = arg0;
    RelativeLayout::setHorizontalGravity_IMPL_25971(_subclassed, _javaObject, arg0_);
}

// public void setIgnoreGravity(int arg0) [instance] :11101
void RelativeLayout::setIgnoreGravity(int arg0)
{
    int arg0_ = arg0;
    RelativeLayout::setIgnoreGravity_IMPL_25968(_subclassed, _javaObject, arg0_);
}

// public void setVerticalGravity(int arg0) [instance] :11125
void RelativeLayout::setVerticalGravity(int arg0)
{
    int arg0_ = arg0;
    RelativeLayout::setVerticalGravity_IMPL_25972(_subclassed, _javaObject, arg0_);
}

// public static extern new void _Init() [static] :10651
void RelativeLayout::_Init4()
{
    if (RelativeLayout::_javaClass4()) { return; }
    INIT_JNI;
    RelativeLayout::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/RelativeLayout"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!RelativeLayout::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.RelativeLayout'", 53);; }
}

// public static extern bool checkLayoutParams_IMPL_25979(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :11237
bool RelativeLayout::checkLayoutParams_IMPL_25979(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(RelativeLayout::checkLayoutParams_25979_ID(),RelativeLayout::_javaClass4(),"checkLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Z",GetMethodID,"Id for fallback method android.widget.RelativeLayout.checkLayoutParams could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::checkLayoutParams_25979_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, RelativeLayout::checkLayoutParams_25979_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool dispatchPopulateAccessibilityEvent_IMPL_25981(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :11243
bool RelativeLayout::dispatchPopulateAccessibilityEvent_IMPL_25981(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(RelativeLayout::dispatchPopulateAccessibilityEvent_25981_ID(),RelativeLayout::_javaClass4(),"dispatchPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)Z",GetMethodID,"Id for fallback method android.widget.RelativeLayout.dispatchPopulateAccessibilityEvent could not be cached",107);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::dispatchPopulateAccessibilityEvent_25981_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, RelativeLayout::dispatchPopulateAccessibilityEvent_25981_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper generateDefaultLayoutParams_IMPL_25978(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :11234
uObject* RelativeLayout::generateDefaultLayoutParams_IMPL_25978(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    
    uObject* result;
    CACHE_METHOD(RelativeLayout::generateDefaultLayoutParams_25978_ID(),RelativeLayout::_javaClass4(),"generateDefaultLayoutParams","()Landroid/view/ViewGroup$LayoutParams;",GetMethodID,"Id for fallback method android.widget.RelativeLayout.generateDefaultLayoutParams could not be cached",100);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::generateDefaultLayoutParams_25978_ID()),result,::g::Android::android::view::ViewGroupDLRLayoutParams_typeof(),::g::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, RelativeLayout::generateDefaultLayoutParams_25978_ID()),result,::g::Android::android::view::ViewGroupDLRLayoutParams_typeof(),::g::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper generateLayoutParams_IMPL_25977(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :11231
uObject* RelativeLayout::generateLayoutParams_IMPL_25977(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(RelativeLayout::generateLayoutParams_25977_ID(),RelativeLayout::_javaClass4(),"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;",GetMethodID,"Id for fallback method android.widget.RelativeLayout.generateLayoutParams could not be cached",93);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::generateLayoutParams_25977_ID(), _obArg2),result,::g::Android::android::widget::RelativeLayoutDLRLayoutParams_typeof(),::g::Android::android::widget::RelativeLayoutDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, RelativeLayout::generateLayoutParams_25977_ID(), _obArg2),result,::g::Android::android::widget::RelativeLayoutDLRLayoutParams_typeof(),::g::Android::android::widget::RelativeLayoutDLRLayoutParams*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper generateLayoutParams_IMPL_25980(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :11240
uObject* RelativeLayout::generateLayoutParams_IMPL_25980(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(RelativeLayout::generateLayoutParams_25980_ID(),RelativeLayout::_javaClass4(),"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/view/ViewGroup$LayoutParams;",GetMethodID,"Id for fallback method android.widget.RelativeLayout.generateLayoutParams could not be cached",93);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::generateLayoutParams_25980_ID(), _obArg2),result,::g::Android::android::view::ViewGroupDLRLayoutParams_typeof(),::g::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, RelativeLayout::generateLayoutParams_25980_ID(), _obArg2),result,::g::Android::android::view::ViewGroupDLRLayoutParams_typeof(),::g::Android::android::view::ViewGroupDLRLayoutParams*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getBaseline_IMPL_25973(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :11219
int RelativeLayout::getBaseline_IMPL_25973(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    
    int result;
    CACHE_METHOD(RelativeLayout::getBaseline_25973_ID(),RelativeLayout::_javaClass4(),"getBaseline","()I",GetMethodID,"Id for fallback method android.widget.RelativeLayout.getBaseline could not be cached",84);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::getBaseline_25973_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, RelativeLayout::getBaseline_25973_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getGravity_IMPL_25969(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :11207
int RelativeLayout::getGravity_IMPL_25969(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    
    int result;
    CACHE_METHOD(RelativeLayout::getGravity_25969_ID(),RelativeLayout::_javaClass4(),"getGravity","()I",GetMethodID,"Id for fallback method android.widget.RelativeLayout.getGravity could not be cached",83);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::getGravity_25969_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, RelativeLayout::getGravity_25969_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public RelativeLayout New(Android.android.content.Context arg0) [static] :11045
RelativeLayout* RelativeLayout::New9(::g::Android::android::content::Context* arg0)
{
    RelativeLayout* obj2 = (RelativeLayout*)uNew(RelativeLayout_typeof());
    obj2->ctor_12(arg0);
    return obj2;
}

// public RelativeLayout New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [static] :11061
RelativeLayout* RelativeLayout::New10(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    RelativeLayout* obj3 = (RelativeLayout*)uNew(RelativeLayout_typeof());
    obj3->ctor_13(arg0, arg1);
    return obj3;
}

// public RelativeLayout New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [static] :11078
RelativeLayout* RelativeLayout::New11(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    RelativeLayout* obj4 = (RelativeLayout*)uNew(RelativeLayout_typeof());
    obj4->ctor_14(arg0, arg1, arg2);
    return obj4;
}

// public RelativeLayout New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [static] :10652
RelativeLayout* RelativeLayout::New12(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    RelativeLayout* obj1 = (RelativeLayout*)uNew(RelativeLayout_typeof());
    obj1->ctor_15(obj, utype, hasFallbackClass, resolveType);
    return obj1;
}

// public static extern void onInitializeAccessibilityEvent_IMPL_25982(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :11246
void RelativeLayout::onInitializeAccessibilityEvent_IMPL_25982(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(RelativeLayout::onInitializeAccessibilityEvent_25982_ID(),RelativeLayout::_javaClass4(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.onInitializeAccessibilityEvent could not be cached",103);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::onInitializeAccessibilityEvent_25982_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, RelativeLayout::onInitializeAccessibilityEvent_25982_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_25983(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :11249
void RelativeLayout::onInitializeAccessibilityNodeInfo_IMPL_25983(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(RelativeLayout::onInitializeAccessibilityNodeInfo_25983_ID(),RelativeLayout::_javaClass4(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.onInitializeAccessibilityNodeInfo could not be cached",106);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::onInitializeAccessibilityNodeInfo_25983_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, RelativeLayout::onInitializeAccessibilityNodeInfo_25983_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onLayout_IMPL_25976(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2, int arg3, int arg4, int arg5, int arg6) [static] :11228
void RelativeLayout::onLayout_IMPL_25976(bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    
    CACHE_METHOD(RelativeLayout::onLayout_25976_ID(),RelativeLayout::_javaClass4(),"onLayout","(ZIIII)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.onLayout could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::onLayout_25976_ID(), ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, RelativeLayout::onLayout_25976_ID(), ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onMeasure_IMPL_25975(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :11225
void RelativeLayout::onMeasure_IMPL_25975(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    
    CACHE_METHOD(RelativeLayout::onMeasure_25975_ID(),RelativeLayout::_javaClass4(),"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.onMeasure could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::onMeasure_25975_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, RelativeLayout::onMeasure_25975_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void requestLayout_IMPL_25974(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :11222
void RelativeLayout::requestLayout_IMPL_25974(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    
    CACHE_METHOD(RelativeLayout::requestLayout_25974_ID(),RelativeLayout::_javaClass4(),"requestLayout","()V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.requestLayout could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::requestLayout_25974_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, RelativeLayout::requestLayout_25974_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGravity_IMPL_25970(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :11210
void RelativeLayout::setGravity_IMPL_25970(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    
    CACHE_METHOD(RelativeLayout::setGravity_25970_ID(),RelativeLayout::_javaClass4(),"setGravity","(I)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.setGravity could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::setGravity_25970_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, RelativeLayout::setGravity_25970_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setHorizontalGravity_IMPL_25971(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :11213
void RelativeLayout::setHorizontalGravity_IMPL_25971(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    
    CACHE_METHOD(RelativeLayout::setHorizontalGravity_25971_ID(),RelativeLayout::_javaClass4(),"setHorizontalGravity","(I)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.setHorizontalGravity could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::setHorizontalGravity_25971_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, RelativeLayout::setHorizontalGravity_25971_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setIgnoreGravity_IMPL_25968(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :11204
void RelativeLayout::setIgnoreGravity_IMPL_25968(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    
    CACHE_METHOD(RelativeLayout::setIgnoreGravity_25968_ID(),RelativeLayout::_javaClass4(),"setIgnoreGravity","(I)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.setIgnoreGravity could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::setIgnoreGravity_25968_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, RelativeLayout::setIgnoreGravity_25968_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setVerticalGravity_IMPL_25972(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :11216
void RelativeLayout::setVerticalGravity_IMPL_25972(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    
    CACHE_METHOD(RelativeLayout::setVerticalGravity_25972_ID(),RelativeLayout::_javaClass4(),"setVerticalGravity","(I)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.setVerticalGravity could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::setVerticalGravity_25972_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, RelativeLayout::setVerticalGravity_25972_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool shouldDelayChildPressedState_IMPL_25967(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :11201
bool RelativeLayout::shouldDelayChildPressedState_IMPL_25967(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    
    bool result;
    CACHE_METHOD(RelativeLayout::shouldDelayChildPressedState_25967_ID(),RelativeLayout::_javaClass4(),"shouldDelayChildPressedState","()Z",GetMethodID,"Id for fallback method android.widget.RelativeLayout.shouldDelayChildPressedState could not be cached",101);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, RelativeLayout::_javaClass4(), RelativeLayout::shouldDelayChildPressedState_25967_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, RelativeLayout::shouldDelayChildPressedState_25967_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static int get_ABOVE() [static] :10707
int RelativeLayout::ABOVE()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ABOVE_25944_ID())) {;
    CACHE_FIELD(RelativeLayout::ABOVE_25944_ID(),RelativeLayout::_javaClass4(),"ABOVE","I",GetStaticFieldID,"Id for field RelativeLayout.ABOVE could not be cached",53);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ABOVE_25944_ID()));;
    return result;
}

// public static int get_ALIGN_BASELINE() [static] :10741
int RelativeLayout::ALIGN_BASELINE()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_BASELINE_25946_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_BASELINE_25946_ID(),RelativeLayout::_javaClass4(),"ALIGN_BASELINE","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_BASELINE could not be cached",62);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_BASELINE_25946_ID()));;
    return result;
}

// public static int get_ALIGN_BOTTOM() [static] :10809
int RelativeLayout::ALIGN_BOTTOM()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_BOTTOM_25950_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_BOTTOM_25950_ID(),RelativeLayout::_javaClass4(),"ALIGN_BOTTOM","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_BOTTOM could not be cached",60);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_BOTTOM_25950_ID()));;
    return result;
}

// public static int get_ALIGN_END() [static] :10996
int RelativeLayout::ALIGN_END()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_END_25961_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_END_25961_ID(),RelativeLayout::_javaClass4(),"ALIGN_END","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_END could not be cached",57);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_END_25961_ID()));;
    return result;
}

// public static int get_ALIGN_LEFT() [static] :10758
int RelativeLayout::ALIGN_LEFT()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_LEFT_25947_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_LEFT_25947_ID(),RelativeLayout::_javaClass4(),"ALIGN_LEFT","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_LEFT could not be cached",58);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_LEFT_25947_ID()));;
    return result;
}

// public static int get_ALIGN_PARENT_BOTTOM() [static] :10877
int RelativeLayout::ALIGN_PARENT_BOTTOM()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_PARENT_BOTTOM_25954_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_PARENT_BOTTOM_25954_ID(),RelativeLayout::_javaClass4(),"ALIGN_PARENT_BOTTOM","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_PARENT_BOTTOM could not be cached",67);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_PARENT_BOTTOM_25954_ID()));;
    return result;
}

// public static int get_ALIGN_PARENT_END() [static] :11030
int RelativeLayout::ALIGN_PARENT_END()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_PARENT_END_25963_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_PARENT_END_25963_ID(),RelativeLayout::_javaClass4(),"ALIGN_PARENT_END","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_PARENT_END could not be cached",64);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_PARENT_END_25963_ID()));;
    return result;
}

// public static int get_ALIGN_PARENT_LEFT() [static] :10826
int RelativeLayout::ALIGN_PARENT_LEFT()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_PARENT_LEFT_25951_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_PARENT_LEFT_25951_ID(),RelativeLayout::_javaClass4(),"ALIGN_PARENT_LEFT","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_PARENT_LEFT could not be cached",65);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_PARENT_LEFT_25951_ID()));;
    return result;
}

// public static int get_ALIGN_PARENT_RIGHT() [static] :10860
int RelativeLayout::ALIGN_PARENT_RIGHT()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_PARENT_RIGHT_25953_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_PARENT_RIGHT_25953_ID(),RelativeLayout::_javaClass4(),"ALIGN_PARENT_RIGHT","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_PARENT_RIGHT could not be cached",66);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_PARENT_RIGHT_25953_ID()));;
    return result;
}

// public static int get_ALIGN_PARENT_START() [static] :11013
int RelativeLayout::ALIGN_PARENT_START()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_PARENT_START_25962_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_PARENT_START_25962_ID(),RelativeLayout::_javaClass4(),"ALIGN_PARENT_START","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_PARENT_START could not be cached",66);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_PARENT_START_25962_ID()));;
    return result;
}

// public static int get_ALIGN_PARENT_TOP() [static] :10843
int RelativeLayout::ALIGN_PARENT_TOP()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_PARENT_TOP_25952_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_PARENT_TOP_25952_ID(),RelativeLayout::_javaClass4(),"ALIGN_PARENT_TOP","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_PARENT_TOP could not be cached",64);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_PARENT_TOP_25952_ID()));;
    return result;
}

// public static int get_ALIGN_RIGHT() [static] :10792
int RelativeLayout::ALIGN_RIGHT()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_RIGHT_25949_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_RIGHT_25949_ID(),RelativeLayout::_javaClass4(),"ALIGN_RIGHT","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_RIGHT could not be cached",59);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_RIGHT_25949_ID()));;
    return result;
}

// public static int get_ALIGN_START() [static] :10979
int RelativeLayout::ALIGN_START()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_START_25960_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_START_25960_ID(),RelativeLayout::_javaClass4(),"ALIGN_START","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_START could not be cached",59);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_START_25960_ID()));;
    return result;
}

// public static int get_ALIGN_TOP() [static] :10775
int RelativeLayout::ALIGN_TOP()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::ALIGN_TOP_25948_ID())) {;
    CACHE_FIELD(RelativeLayout::ALIGN_TOP_25948_ID(),RelativeLayout::_javaClass4(),"ALIGN_TOP","I",GetStaticFieldID,"Id for field RelativeLayout.ALIGN_TOP could not be cached",57);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::ALIGN_TOP_25948_ID()));;
    return result;
}

// public static int get_BELOW() [static] :10724
int RelativeLayout::BELOW()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::BELOW_25945_ID())) {;
    CACHE_FIELD(RelativeLayout::BELOW_25945_ID(),RelativeLayout::_javaClass4(),"BELOW","I",GetStaticFieldID,"Id for field RelativeLayout.BELOW could not be cached",53);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::BELOW_25945_ID()));;
    return result;
}

// public static int get_CENTER_HORIZONTAL() [static] :10911
int RelativeLayout::CENTER_HORIZONTAL()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::CENTER_HORIZONTAL_25956_ID())) {;
    CACHE_FIELD(RelativeLayout::CENTER_HORIZONTAL_25956_ID(),RelativeLayout::_javaClass4(),"CENTER_HORIZONTAL","I",GetStaticFieldID,"Id for field RelativeLayout.CENTER_HORIZONTAL could not be cached",65);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::CENTER_HORIZONTAL_25956_ID()));;
    return result;
}

// public static int get_CENTER_IN_PARENT() [static] :10894
int RelativeLayout::CENTER_IN_PARENT()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::CENTER_IN_PARENT_25955_ID())) {;
    CACHE_FIELD(RelativeLayout::CENTER_IN_PARENT_25955_ID(),RelativeLayout::_javaClass4(),"CENTER_IN_PARENT","I",GetStaticFieldID,"Id for field RelativeLayout.CENTER_IN_PARENT could not be cached",64);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::CENTER_IN_PARENT_25955_ID()));;
    return result;
}

// public static int get_CENTER_VERTICAL() [static] :10928
int RelativeLayout::CENTER_VERTICAL()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::CENTER_VERTICAL_25957_ID())) {;
    CACHE_FIELD(RelativeLayout::CENTER_VERTICAL_25957_ID(),RelativeLayout::_javaClass4(),"CENTER_VERTICAL","I",GetStaticFieldID,"Id for field RelativeLayout.CENTER_VERTICAL could not be cached",63);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::CENTER_VERTICAL_25957_ID()));;
    return result;
}

// public static int get_END_OF() [static] :10962
int RelativeLayout::END_OF()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::END_OF_25959_ID())) {;
    CACHE_FIELD(RelativeLayout::END_OF_25959_ID(),RelativeLayout::_javaClass4(),"END_OF","I",GetStaticFieldID,"Id for field RelativeLayout.END_OF could not be cached",54);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::END_OF_25959_ID()));;
    return result;
}

// public static int get_LEFT_OF() [static] :10673
int RelativeLayout::LEFT_OF()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::LEFT_OF_25942_ID())) {;
    CACHE_FIELD(RelativeLayout::LEFT_OF_25942_ID(),RelativeLayout::_javaClass4(),"LEFT_OF","I",GetStaticFieldID,"Id for field RelativeLayout.LEFT_OF could not be cached",55);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::LEFT_OF_25942_ID()));;
    return result;
}

// public static int get_RIGHT_OF() [static] :10690
int RelativeLayout::RIGHT_OF()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::RIGHT_OF_25943_ID())) {;
    CACHE_FIELD(RelativeLayout::RIGHT_OF_25943_ID(),RelativeLayout::_javaClass4(),"RIGHT_OF","I",GetStaticFieldID,"Id for field RelativeLayout.RIGHT_OF could not be cached",56);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::RIGHT_OF_25943_ID()));;
    return result;
}

// public static int get_START_OF() [static] :10945
int RelativeLayout::START_OF()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::START_OF_25958_ID())) {;
    CACHE_FIELD(RelativeLayout::START_OF_25958_ID(),RelativeLayout::_javaClass4(),"START_OF","I",GetStaticFieldID,"Id for field RelativeLayout.START_OF could not be cached",56);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::START_OF_25958_ID()));;
    return result;
}

// public static int get_TRUE() [static] :10656
int RelativeLayout::TRUE()
{
    INIT_JNI;
    CLASS_INIT(RelativeLayout::_javaClass4(),RelativeLayout::_Init4());
    if (::uEnterCriticalIfNull(&RelativeLayout::TRUE_25941_ID())) {;
    CACHE_FIELD(RelativeLayout::TRUE_25941_ID(),RelativeLayout::_javaClass4(),"TRUE","I",GetStaticFieldID,"Id for field RelativeLayout.TRUE could not be cached",52);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(RelativeLayout::_javaClass4(), RelativeLayout::TRUE_25941_ID()));;
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(20552)
// ------------------------------------------------------------------------------

// public sealed extern class RelativeLayoutDLRLayoutParams :20552
// {
::g::Android::java::lang::Object_type* RelativeLayoutDLRLayoutParams_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RelativeLayoutDLRLayoutParams);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.widget.RelativeLayoutDLRLayoutParams", options);
    type->SetBase(::g::Android::android::view::ViewGroupDLRMarginLayoutParams_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayoutDLRLayoutParams::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayoutDLRLayoutParams::RelativeLayoutDLRLayoutParams_25931_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)RelativeLayoutDLRLayoutParams___Init4_fn, 0, true, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)RelativeLayoutDLRLayoutParams__New19_fn, 0, true, RelativeLayoutDLRLayoutParams_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public RelativeLayoutDLRLayoutParams(int arg0, int arg1) :20601
void RelativeLayoutDLRLayoutParams__ctor_18_fn(RelativeLayoutDLRLayoutParams* __this, int* arg0, int* arg1)
{
    __this->ctor_18(*arg0, *arg1);
}

// public static extern new void _Init() :20556
void RelativeLayoutDLRLayoutParams___Init4_fn()
{
    RelativeLayoutDLRLayoutParams::_Init4();
}

// public RelativeLayoutDLRLayoutParams New(int arg0, int arg1) :20601
void RelativeLayoutDLRLayoutParams__New19_fn(int* arg0, int* arg1, RelativeLayoutDLRLayoutParams** __retval)
{
    *__retval = RelativeLayoutDLRLayoutParams::New19(*arg0, *arg1);
}

jclass RelativeLayoutDLRLayoutParams::_javaClass4_;
jmethodID RelativeLayoutDLRLayoutParams::RelativeLayoutDLRLayoutParams_25931_ID_c_;

// public RelativeLayoutDLRLayoutParams(int arg0, int arg1) [instance] :20601
void RelativeLayoutDLRLayoutParams::ctor_18(int arg0, int arg1)
{
    ctor_11(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(RelativeLayoutDLRLayoutParams::_javaClass4(),RelativeLayoutDLRLayoutParams::_Init4());;
    CACHE_METHOD(RelativeLayoutDLRLayoutParams::RelativeLayoutDLRLayoutParams_25931_ID_c(),RelativeLayoutDLRLayoutParams::_javaClass4(),"<init>","(II)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout$LayoutParams.<init> could not be cached",92);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(RelativeLayoutDLRLayoutParams::_javaClass4(), RelativeLayoutDLRLayoutParams::RelativeLayoutDLRLayoutParams_25931_ID_c(), ((jint)arg0), ((jint)arg1));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public static extern new void _Init() [static] :20556
void RelativeLayoutDLRLayoutParams::_Init4()
{
    if (RelativeLayoutDLRLayoutParams::_javaClass4()) { return; }
    INIT_JNI;
    RelativeLayoutDLRLayoutParams::_javaClass4() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/RelativeLayout$LayoutParams"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!RelativeLayoutDLRLayoutParams::_javaClass4()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.RelativeLayout$LayoutParams'", 66);; }
}

// public RelativeLayoutDLRLayoutParams New(int arg0, int arg1) [static] :20601
RelativeLayoutDLRLayoutParams* RelativeLayoutDLRLayoutParams::New19(int arg0, int arg1)
{
    RelativeLayoutDLRLayoutParams* obj3 = (RelativeLayoutDLRLayoutParams*)uNew(RelativeLayoutDLRLayoutParams_typeof());
    obj3->ctor_18(arg0, arg1);
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(21321)
// ------------------------------------------------------------------------------

// public extern class ScrollView :21321
// {
::g::Android::android::view::ViewGroup_type* ScrollView_typeof()
{
    static uSStrong< ::g::Android::android::view::ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 56;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Android.android.widget.ScrollView", options);
    type->SetBase(::g::Android::android::widget::FrameLayout_typeof());
    type->fp_addView = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*))ScrollView__addView_fn;
    type->fp_addView1 = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, ::g::Android::android::view::ViewGroupDLRLayoutParams*))ScrollView__addView1_fn;
    type->fp_addView2 = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, int*))ScrollView__addView2_fn;
    type->fp_addView3 = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, int*, ::g::Android::android::view::ViewGroupDLRLayoutParams*))ScrollView__addView3_fn;
    type->fp_computeScroll = (void(*)(::g::Android::android::view::View*))ScrollView__computeScroll_fn;
    type->fp_dispatchKeyEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::KeyEvent*, bool*))ScrollView__dispatchKeyEvent_fn;
    type->fp_j_draw = (void(*)(::g::Android::android::view::View*, ::g::Android::android::graphics::Canvas*))ScrollView__j_draw_fn;
    type->fp_onGenericMotionEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))ScrollView__onGenericMotionEvent_fn;
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))ScrollView__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))ScrollView__onInitializeAccessibilityNodeInfo_fn;
    type->fp_onInterceptTouchEvent = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::MotionEvent*, bool*))ScrollView__onInterceptTouchEvent_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))ScrollView__onTouchEvent_fn;
    type->fp_performAccessibilityAction = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::os::Bundle*, bool*))ScrollView__performAccessibilityAction_fn;
    type->fp_requestChildFocus = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))ScrollView__requestChildFocus_fn;
    type->fp_requestChildRectangleOnScreen = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*))ScrollView__requestChildRectangleOnScreen_fn;
    type->fp_requestDisallowInterceptTouchEvent = (void(*)(::g::Android::android::view::ViewGroup*, bool*))ScrollView__requestDisallowInterceptTouchEvent_fn;
    type->fp_requestLayout = (void(*)(::g::Android::android::view::View*))ScrollView__requestLayout_fn;
    type->fp_scrollTo = (void(*)(::g::Android::android::view::View*, int*, int*))ScrollView__scrollTo_fn;
    type->fp_setOverScrollMode = (void(*)(::g::Android::android::view::View*, int*))ScrollView__setOverScrollMode_fn;
    type->fp_shouldDelayChildPressedState = (void(*)(::g::Android::android::view::ViewGroup*, bool*))ScrollView__shouldDelayChildPressedState_fn;
    type->interface2.fp_requestLayout = (void(*)(uObject*))::g::Android::android::view::View__requestLayout_fn;
    type->interface2.fp_isLayoutRequested = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutRequested_fn;
    type->interface2.fp_requestTransparentRegion = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestTransparentRegion_fn;
    type->interface2.fp_invalidateChild = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*))::g::Android::android::view::ViewGroup__invalidateChild_fn;
    type->interface2.fp_invalidateChildInParent = (void(*)(uObject*, ::g::Android::Runtime::IntArray*, ::g::Android::android::graphics::Rect*, uObject**))::g::Android::android::view::ViewGroup__invalidateChildInParent_fn;
    type->interface2.fp_getParent = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParent_fn;
    type->interface2.fp_requestChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))ScrollView__requestChildFocus_fn;
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
    type->interface2.fp_requestDisallowInterceptTouchEvent = (void(*)(uObject*, bool*))ScrollView__requestDisallowInterceptTouchEvent_fn;
    type->interface2.fp_requestChildRectangleOnScreen = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*))ScrollView__requestChildRectangleOnScreen_fn;
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
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1),
        ::g::Android::android::view::ViewParent_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::_javaClass5_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::addView_26070_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::addView_26071_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::addView_26072_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::addView_26073_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::arrowScroll_26091_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::computeScroll_26098_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::computeScrollDeltaToGetChildRectOnScreen_26099_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::computeVerticalScrollOffset_26095_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::computeVerticalScrollRange_26094_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::dispatchKeyEvent_26079_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::executeKeyEvent_26080_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::fling_26107_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::fullScroll_26090_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::getBottomFadingEdgeStrength_26068_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::getMaxScrollAmount_26069_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::getTopFadingEdgeStrength_26067_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::isFillViewport_26074_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::isSmoothScrollingEnabled_26076_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::j_draw_26110_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::measureChild_26096_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::measureChildWithMargins_26097_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onDetachedFromWindow_26104_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onGenericMotionEvent_26084_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onInitializeAccessibilityEvent_26088_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onInitializeAccessibilityNodeInfo_26087_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onInterceptTouchEvent_26082_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onLayout_26105_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onMeasure_26078_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onOverScrolled_26085_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onRequestFocusInDescendants_26101_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onRestoreInstanceState_26111_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onSaveInstanceState_26112_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onSizeChanged_26106_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onTouchEvent_26083_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::pageScroll_26089_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::performAccessibilityAction_26086_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::requestChildFocus_26100_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::requestChildRectangleOnScreen_26102_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::requestDisallowInterceptTouchEvent_26081_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::requestLayout_26103_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::scrollTo_26108_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::ScrollView_26063_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::ScrollView_26064_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::ScrollView_26065_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::setFillViewport_26075_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::setOverScrollMode_26109_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::setSmoothScrollingEnabled_26077_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::shouldDelayChildPressedState_26066_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::smoothScrollBy_26092_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::smoothScrollTo_26093_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(64,
        new uFunction("_Init", NULL, (void*)ScrollView___Init5_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("addView_IMPL_26070", NULL, (void*)ScrollView__addView_IMPL_26070_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("addView_IMPL_26071", NULL, (void*)ScrollView__addView_IMPL_26071_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("addView_IMPL_26072", NULL, (void*)ScrollView__addView_IMPL_26072_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("addView_IMPL_26073", NULL, (void*)ScrollView__addView_IMPL_26073_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("arrowScroll", NULL, (void*)ScrollView__arrowScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("arrowScroll_IMPL_26091", NULL, (void*)ScrollView__arrowScroll_IMPL_26091_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("computeScroll_IMPL_26098", NULL, (void*)ScrollView__computeScroll_IMPL_26098_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("computeScrollDeltaToGetChildRectOnScreen_IMPL_26099", NULL, (void*)ScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_26099_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("computeVerticalScrollOffset_IMPL_26095", NULL, (void*)ScrollView__computeVerticalScrollOffset_IMPL_26095_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("computeVerticalScrollRange_IMPL_26094", NULL, (void*)ScrollView__computeVerticalScrollRange_IMPL_26094_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("dispatchKeyEvent_IMPL_26079", NULL, (void*)ScrollView__dispatchKeyEvent_IMPL_26079_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("executeKeyEvent", NULL, (void*)ScrollView__executeKeyEvent_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Android::android::view::KeyEvent_typeof()),
        new uFunction("executeKeyEvent_IMPL_26080", NULL, (void*)ScrollView__executeKeyEvent_IMPL_26080_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("fling", NULL, (void*)ScrollView__fling_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("fling_IMPL_26107", NULL, (void*)ScrollView__fling_IMPL_26107_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("fullScroll", NULL, (void*)ScrollView__fullScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("fullScroll_IMPL_26090", NULL, (void*)ScrollView__fullScroll_IMPL_26090_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getBottomFadingEdgeStrength_IMPL_26068", NULL, (void*)ScrollView__getBottomFadingEdgeStrength_IMPL_26068_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getMaxScrollAmount", NULL, (void*)ScrollView__getMaxScrollAmount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getMaxScrollAmount_IMPL_26069", NULL, (void*)ScrollView__getMaxScrollAmount_IMPL_26069_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getTopFadingEdgeStrength_IMPL_26067", NULL, (void*)ScrollView__getTopFadingEdgeStrength_IMPL_26067_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("isFillViewport", NULL, (void*)ScrollView__isFillViewport_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isFillViewport_IMPL_26074", NULL, (void*)ScrollView__isFillViewport_IMPL_26074_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("isSmoothScrollingEnabled", NULL, (void*)ScrollView__isSmoothScrollingEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isSmoothScrollingEnabled_IMPL_26076", NULL, (void*)ScrollView__isSmoothScrollingEnabled_IMPL_26076_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("j_draw_IMPL_26110", NULL, (void*)ScrollView__j_draw_IMPL_26110_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("measureChild_IMPL_26096", NULL, (void*)ScrollView__measureChild_IMPL_26096_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("measureChildWithMargins_IMPL_26097", NULL, (void*)ScrollView__measureChildWithMargins_IMPL_26097_fn, 0, true, uVoid_typeof(), 7, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollView__New13_fn, 0, true, ScrollView_typeof(), 1, ::g::Android::android::content::Context_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollView__New14_fn, 0, true, ScrollView_typeof(), 2, ::g::Android::android::content::Context_typeof(), ::g::Android::android::util::AttributeSet_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollView__New15_fn, 0, true, ScrollView_typeof(), 3, ::g::Android::android::content::Context_typeof(), ::g::Android::android::util::AttributeSet_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollView__New16_fn, 0, true, ScrollView_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onDetachedFromWindow_IMPL_26104", NULL, (void*)ScrollView__onDetachedFromWindow_IMPL_26104_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onGenericMotionEvent_IMPL_26084", NULL, (void*)ScrollView__onGenericMotionEvent_IMPL_26084_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_26088", NULL, (void*)ScrollView__onInitializeAccessibilityEvent_IMPL_26088_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_26087", NULL, (void*)ScrollView__onInitializeAccessibilityNodeInfo_IMPL_26087_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInterceptTouchEvent_IMPL_26082", NULL, (void*)ScrollView__onInterceptTouchEvent_IMPL_26082_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onLayout_IMPL_26105", NULL, (void*)ScrollView__onLayout_IMPL_26105_fn, 0, true, uVoid_typeof(), 7, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onMeasure_IMPL_26078", NULL, (void*)ScrollView__onMeasure_IMPL_26078_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onOverScrolled_IMPL_26085", NULL, (void*)ScrollView__onOverScrolled_IMPL_26085_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onRequestFocusInDescendants_IMPL_26101", NULL, (void*)ScrollView__onRequestFocusInDescendants_IMPL_26101_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onRestoreInstanceState_IMPL_26111", NULL, (void*)ScrollView__onRestoreInstanceState_IMPL_26111_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onSaveInstanceState_IMPL_26112", NULL, (void*)ScrollView__onSaveInstanceState_IMPL_26112_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onSizeChanged_IMPL_26106", NULL, (void*)ScrollView__onSizeChanged_IMPL_26106_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onTouchEvent_IMPL_26083", NULL, (void*)ScrollView__onTouchEvent_IMPL_26083_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("pageScroll", NULL, (void*)ScrollView__pageScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("pageScroll_IMPL_26089", NULL, (void*)ScrollView__pageScroll_IMPL_26089_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("performAccessibilityAction_IMPL_26086", NULL, (void*)ScrollView__performAccessibilityAction_IMPL_26086_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("requestChildFocus_IMPL_26100", NULL, (void*)ScrollView__requestChildFocus_IMPL_26100_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("requestChildRectangleOnScreen_IMPL_26102", NULL, (void*)ScrollView__requestChildRectangleOnScreen_IMPL_26102_fn, 0, true, ::g::Uno::Bool_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("requestDisallowInterceptTouchEvent_IMPL_26081", NULL, (void*)ScrollView__requestDisallowInterceptTouchEvent_IMPL_26081_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("requestLayout_IMPL_26103", NULL, (void*)ScrollView__requestLayout_IMPL_26103_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("scrollTo_IMPL_26108", NULL, (void*)ScrollView__scrollTo_IMPL_26108_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setFillViewport", NULL, (void*)ScrollView__setFillViewport_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setFillViewport_IMPL_26075", NULL, (void*)ScrollView__setFillViewport_IMPL_26075_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setOverScrollMode_IMPL_26109", NULL, (void*)ScrollView__setOverScrollMode_IMPL_26109_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setSmoothScrollingEnabled", NULL, (void*)ScrollView__setSmoothScrollingEnabled_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setSmoothScrollingEnabled_IMPL_26077", NULL, (void*)ScrollView__setSmoothScrollingEnabled_IMPL_26077_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("shouldDelayChildPressedState_IMPL_26066", NULL, (void*)ScrollView__shouldDelayChildPressedState_IMPL_26066_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("smoothScrollBy", NULL, (void*)ScrollView__smoothScrollBy_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("smoothScrollBy_IMPL_26092", NULL, (void*)ScrollView__smoothScrollBy_IMPL_26092_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("smoothScrollTo", NULL, (void*)ScrollView__smoothScrollTo_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("smoothScrollTo_IMPL_26093", NULL, (void*)ScrollView__smoothScrollTo_IMPL_26093_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public ScrollView(Android.android.content.Context arg0) :21328
void ScrollView__ctor_16_fn(ScrollView* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_16(arg0);
}

// public ScrollView(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :21344
void ScrollView__ctor_17_fn(ScrollView* __this, ::g::Android::android::content::Context* arg0, uObject* arg1)
{
    __this->ctor_17(arg0, arg1);
}

// public ScrollView(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :21361
void ScrollView__ctor_18_fn(ScrollView* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2)
{
    __this->ctor_18(arg0, arg1, *arg2);
}

// public ScrollView(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :21326
void ScrollView__ctor_19_fn(ScrollView* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_19(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :21325
void ScrollView___Init5_fn()
{
    ScrollView::_Init5();
}

// public override sealed void addView(Android.android.view.View arg0) :21402
void ScrollView__addView_fn(ScrollView* __this, ::g::Android::android::view::View* arg0)
{
    ScrollView::addView_IMPL_26070(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public override sealed void addView(Android.android.view.View arg0, Android.android.view.ViewGroupDLRLayoutParams arg1) :21414
void ScrollView__addView1_fn(ScrollView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg1)
{
    ScrollView::addView_IMPL_26072(__this->_subclassed, __this->_javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public override sealed void addView(Android.android.view.View arg0, int arg1) :21408
void ScrollView__addView2_fn(ScrollView* __this, ::g::Android::android::view::View* arg0, int* arg1)
{
    int arg1_ = *arg1;
    ScrollView::addView_IMPL_26071(__this->_subclassed, __this->_javaObject, (uObject*)arg0, arg1_);
}

// public override sealed void addView(Android.android.view.View arg0, int arg1, Android.android.view.ViewGroupDLRLayoutParams arg2) :21420
void ScrollView__addView3_fn(ScrollView* __this, ::g::Android::android::view::View* arg0, int* arg1, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg2)
{
    int arg1_ = *arg1;
    ScrollView::addView_IMPL_26073(__this->_subclassed, __this->_javaObject, (uObject*)arg0, arg1_, (uObject*)arg2);
}

// public static extern void addView_IMPL_26070(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :21676
void ScrollView__addView_IMPL_26070_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ScrollView::addView_IMPL_26070(*arg0_, *arg1_, arg2_);
}

// public static extern void addView_IMPL_26071(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :21679
void ScrollView__addView_IMPL_26071_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    ScrollView::addView_IMPL_26071(*arg0_, *arg1_, arg2_, *arg3_);
}

// public static extern void addView_IMPL_26072(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :21682
void ScrollView__addView_IMPL_26072_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    ScrollView::addView_IMPL_26072(*arg0_, *arg1_, arg2_, arg3_);
}

// public static extern void addView_IMPL_26073(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :21685
void ScrollView__addView_IMPL_26073_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_)
{
    ScrollView::addView_IMPL_26073(*arg0_, *arg1_, arg2_, *arg3_, arg4_);
}

// public bool arrowScroll(int arg0) :21528
void ScrollView__arrowScroll_fn(ScrollView* __this, int* arg0, bool* __retval)
{
    *__retval = __this->arrowScroll(*arg0);
}

// public static extern bool arrowScroll_IMPL_26091(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :21739
void ScrollView__arrowScroll_IMPL_26091_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval)
{
    *__retval = ScrollView::arrowScroll_IMPL_26091(*arg0_, *arg1_, *arg2_);
}

// public override sealed void computeScroll() :21570
void ScrollView__computeScroll_fn(ScrollView* __this)
{
    ScrollView::computeScroll_IMPL_26098(__this->_subclassed, __this->_javaObject);
}

// public static extern void computeScroll_IMPL_26098(bool arg0, Android.Base.Primitives.ujobject arg1) :21760
void ScrollView__computeScroll_IMPL_26098_fn(bool* arg0_, jobject* arg1_)
{
    ScrollView::computeScroll_IMPL_26098(*arg0_, *arg1_);
}

// public static extern int computeScrollDeltaToGetChildRectOnScreen_IMPL_26099(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :21763
void ScrollView__computeScrollDeltaToGetChildRectOnScreen_IMPL_26099_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = ScrollView::computeScrollDeltaToGetChildRectOnScreen_IMPL_26099(*arg0_, *arg1_, arg2_);
}

// public static extern int computeVerticalScrollOffset_IMPL_26095(bool arg0, Android.Base.Primitives.ujobject arg1) :21751
void ScrollView__computeVerticalScrollOffset_IMPL_26095_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ScrollView::computeVerticalScrollOffset_IMPL_26095(*arg0_, *arg1_);
}

// public static extern int computeVerticalScrollRange_IMPL_26094(bool arg0, Android.Base.Primitives.ujobject arg1) :21748
void ScrollView__computeVerticalScrollRange_IMPL_26094_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ScrollView::computeVerticalScrollRange_IMPL_26094(*arg0_, *arg1_);
}

// public override sealed bool dispatchKeyEvent(Android.android.view.KeyEvent arg0) :21456
void ScrollView__dispatchKeyEvent_fn(ScrollView* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval)
{
    return *__retval = ScrollView::dispatchKeyEvent_IMPL_26079(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool dispatchKeyEvent_IMPL_26079(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :21703
void ScrollView__dispatchKeyEvent_IMPL_26079_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ScrollView::dispatchKeyEvent_IMPL_26079(*arg0_, *arg1_, arg2_);
}

// public bool executeKeyEvent(Android.android.view.KeyEvent arg0) :21462
void ScrollView__executeKeyEvent_fn(ScrollView* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval)
{
    *__retval = __this->executeKeyEvent(arg0);
}

// public static extern bool executeKeyEvent_IMPL_26080(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :21706
void ScrollView__executeKeyEvent_IMPL_26080_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ScrollView::executeKeyEvent_IMPL_26080(*arg0_, *arg1_, arg2_);
}

// public void fling(int arg0) :21624
void ScrollView__fling_fn(ScrollView* __this, int* arg0)
{
    __this->fling(*arg0);
}

// public static extern void fling_IMPL_26107(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :21787
void ScrollView__fling_IMPL_26107_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    ScrollView::fling_IMPL_26107(*arg0_, *arg1_, *arg2_);
}

// public bool fullScroll(int arg0) :21522
void ScrollView__fullScroll_fn(ScrollView* __this, int* arg0, bool* __retval)
{
    *__retval = __this->fullScroll(*arg0);
}

// public static extern bool fullScroll_IMPL_26090(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :21736
void ScrollView__fullScroll_IMPL_26090_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval)
{
    *__retval = ScrollView::fullScroll_IMPL_26090(*arg0_, *arg1_, *arg2_);
}

// public static extern float getBottomFadingEdgeStrength_IMPL_26068(bool arg0, Android.Base.Primitives.ujobject arg1) :21670
void ScrollView__getBottomFadingEdgeStrength_IMPL_26068_fn(bool* arg0_, jobject* arg1_, float* __retval)
{
    *__retval = ScrollView::getBottomFadingEdgeStrength_IMPL_26068(*arg0_, *arg1_);
}

// public int getMaxScrollAmount() :21396
void ScrollView__getMaxScrollAmount_fn(ScrollView* __this, int* __retval)
{
    *__retval = __this->getMaxScrollAmount();
}

// public static extern int getMaxScrollAmount_IMPL_26069(bool arg0, Android.Base.Primitives.ujobject arg1) :21673
void ScrollView__getMaxScrollAmount_IMPL_26069_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = ScrollView::getMaxScrollAmount_IMPL_26069(*arg0_, *arg1_);
}

// public static extern float getTopFadingEdgeStrength_IMPL_26067(bool arg0, Android.Base.Primitives.ujobject arg1) :21667
void ScrollView__getTopFadingEdgeStrength_IMPL_26067_fn(bool* arg0_, jobject* arg1_, float* __retval)
{
    *__retval = ScrollView::getTopFadingEdgeStrength_IMPL_26067(*arg0_, *arg1_);
}

// public bool isFillViewport() :21426
void ScrollView__isFillViewport_fn(ScrollView* __this, bool* __retval)
{
    *__retval = __this->isFillViewport();
}

// public static extern bool isFillViewport_IMPL_26074(bool arg0, Android.Base.Primitives.ujobject arg1) :21688
void ScrollView__isFillViewport_IMPL_26074_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = ScrollView::isFillViewport_IMPL_26074(*arg0_, *arg1_);
}

// public bool isSmoothScrollingEnabled() :21438
void ScrollView__isSmoothScrollingEnabled_fn(ScrollView* __this, bool* __retval)
{
    *__retval = __this->isSmoothScrollingEnabled();
}

// public static extern bool isSmoothScrollingEnabled_IMPL_26076(bool arg0, Android.Base.Primitives.ujobject arg1) :21694
void ScrollView__isSmoothScrollingEnabled_IMPL_26076_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = ScrollView::isSmoothScrollingEnabled_IMPL_26076(*arg0_, *arg1_);
}

// public override sealed void j_draw(Android.android.graphics.Canvas arg0) :21642
void ScrollView__j_draw_fn(ScrollView* __this, ::g::Android::android::graphics::Canvas* arg0)
{
    ScrollView::j_draw_IMPL_26110(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void j_draw_IMPL_26110(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :21796
void ScrollView__j_draw_IMPL_26110_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ScrollView::j_draw_IMPL_26110(*arg0_, *arg1_, arg2_);
}

// public static extern void measureChild_IMPL_26096(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) :21754
void ScrollView__measureChild_IMPL_26096_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_)
{
    ScrollView::measureChild_IMPL_26096(*arg0_, *arg1_, arg2_, *arg3_, *arg4_);
}

// public static extern void measureChildWithMargins_IMPL_26097(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5, int arg6) :21757
void ScrollView__measureChildWithMargins_IMPL_26097_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_)
{
    ScrollView::measureChildWithMargins_IMPL_26097(*arg0_, *arg1_, arg2_, *arg3_, *arg4_, *arg5_, *arg6_);
}

// public ScrollView New(Android.android.content.Context arg0) :21328
void ScrollView__New13_fn(::g::Android::android::content::Context* arg0, ScrollView** __retval)
{
    *__retval = ScrollView::New13(arg0);
}

// public ScrollView New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :21344
void ScrollView__New14_fn(::g::Android::android::content::Context* arg0, uObject* arg1, ScrollView** __retval)
{
    *__retval = ScrollView::New14(arg0, arg1);
}

// public ScrollView New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :21361
void ScrollView__New15_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, ScrollView** __retval)
{
    *__retval = ScrollView::New15(arg0, arg1, *arg2);
}

// public ScrollView New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :21326
void ScrollView__New16_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, ScrollView** __retval)
{
    *__retval = ScrollView::New16(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern void onDetachedFromWindow_IMPL_26104(bool arg0, Android.Base.Primitives.ujobject arg1) :21778
void ScrollView__onDetachedFromWindow_IMPL_26104_fn(bool* arg0_, jobject* arg1_)
{
    ScrollView::onDetachedFromWindow_IMPL_26104(*arg0_, *arg1_);
}

// public override sealed bool onGenericMotionEvent(Android.android.view.MotionEvent arg0) :21486
void ScrollView__onGenericMotionEvent_fn(ScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = ScrollView::onGenericMotionEvent_IMPL_26084(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onGenericMotionEvent_IMPL_26084(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :21718
void ScrollView__onGenericMotionEvent_IMPL_26084_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ScrollView::onGenericMotionEvent_IMPL_26084(*arg0_, *arg1_, arg2_);
}

// public override sealed void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :21510
void ScrollView__onInitializeAccessibilityEvent_fn(ScrollView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    ScrollView::onInitializeAccessibilityEvent_IMPL_26088(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_26088(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :21730
void ScrollView__onInitializeAccessibilityEvent_IMPL_26088_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ScrollView::onInitializeAccessibilityEvent_IMPL_26088(*arg0_, *arg1_, arg2_);
}

// public override sealed void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :21504
void ScrollView__onInitializeAccessibilityNodeInfo_fn(ScrollView* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    ScrollView::onInitializeAccessibilityNodeInfo_IMPL_26087(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_26087(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :21727
void ScrollView__onInitializeAccessibilityNodeInfo_IMPL_26087_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ScrollView::onInitializeAccessibilityNodeInfo_IMPL_26087(*arg0_, *arg1_, arg2_);
}

// public override sealed bool onInterceptTouchEvent(Android.android.view.MotionEvent arg0) :21474
void ScrollView__onInterceptTouchEvent_fn(ScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = ScrollView::onInterceptTouchEvent_IMPL_26082(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onInterceptTouchEvent_IMPL_26082(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :21712
void ScrollView__onInterceptTouchEvent_IMPL_26082_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ScrollView::onInterceptTouchEvent_IMPL_26082(*arg0_, *arg1_, arg2_);
}

// public static extern void onLayout_IMPL_26105(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2, int arg3, int arg4, int arg5, int arg6) :21781
void ScrollView__onLayout_IMPL_26105_fn(bool* arg0_, jobject* arg1_, bool* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_)
{
    ScrollView::onLayout_IMPL_26105(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_, *arg6_);
}

// public static extern void onMeasure_IMPL_26078(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :21700
void ScrollView__onMeasure_IMPL_26078_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    ScrollView::onMeasure_IMPL_26078(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public static extern void onOverScrolled_IMPL_26085(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, bool arg4, bool arg5) :21721
void ScrollView__onOverScrolled_IMPL_26085_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* arg4_, bool* arg5_)
{
    ScrollView::onOverScrolled_IMPL_26085(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public static extern bool onRequestFocusInDescendants_IMPL_26101(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :21769
void ScrollView__onRequestFocusInDescendants_IMPL_26101_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = ScrollView::onRequestFocusInDescendants_IMPL_26101(*arg0_, *arg1_, *arg2_, arg3_);
}

// public static extern void onRestoreInstanceState_IMPL_26111(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :21799
void ScrollView__onRestoreInstanceState_IMPL_26111_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    ScrollView::onRestoreInstanceState_IMPL_26111(*arg0_, *arg1_, arg2_);
}

// public static extern Android.Base.Wrappers.IJWrapper onSaveInstanceState_IMPL_26112(bool arg0, Android.Base.Primitives.ujobject arg1) :21802
void ScrollView__onSaveInstanceState_IMPL_26112_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = ScrollView::onSaveInstanceState_IMPL_26112(*arg0_, *arg1_);
}

// public static extern void onSizeChanged_IMPL_26106(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :21784
void ScrollView__onSizeChanged_IMPL_26106_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    ScrollView::onSizeChanged_IMPL_26106(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public override sealed bool onTouchEvent(Android.android.view.MotionEvent arg0) :21480
void ScrollView__onTouchEvent_fn(ScrollView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = ScrollView::onTouchEvent_IMPL_26083(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onTouchEvent_IMPL_26083(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :21715
void ScrollView__onTouchEvent_IMPL_26083_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = ScrollView::onTouchEvent_IMPL_26083(*arg0_, *arg1_, arg2_);
}

// public bool pageScroll(int arg0) :21516
void ScrollView__pageScroll_fn(ScrollView* __this, int* arg0, bool* __retval)
{
    *__retval = __this->pageScroll(*arg0);
}

// public static extern bool pageScroll_IMPL_26089(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :21733
void ScrollView__pageScroll_IMPL_26089_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval)
{
    *__retval = ScrollView::pageScroll_IMPL_26089(*arg0_, *arg1_, *arg2_);
}

// public override sealed bool performAccessibilityAction(int arg0, Android.android.os.Bundle arg1) :21498
void ScrollView__performAccessibilityAction_fn(ScrollView* __this, int* arg0, ::g::Android::android::os::Bundle* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = ScrollView::performAccessibilityAction_IMPL_26086(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool performAccessibilityAction_IMPL_26086(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :21724
void ScrollView__performAccessibilityAction_IMPL_26086_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = ScrollView::performAccessibilityAction_IMPL_26086(*arg0_, *arg1_, *arg2_, arg3_);
}

// public override sealed void requestChildFocus(Android.android.view.View arg0, Android.android.view.View arg1) :21582
void ScrollView__requestChildFocus_fn(ScrollView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1)
{
    ScrollView::requestChildFocus_IMPL_26100(__this->_subclassed, __this->_javaObject, (uObject*)arg0, (uObject*)arg1);
}

// public static extern void requestChildFocus_IMPL_26100(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) :21766
void ScrollView__requestChildFocus_IMPL_26100_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_)
{
    ScrollView::requestChildFocus_IMPL_26100(*arg0_, *arg1_, arg2_, arg3_);
}

// public override sealed bool requestChildRectangleOnScreen(Android.android.view.View arg0, Android.android.graphics.Rect arg1, bool arg2) :21594
void ScrollView__requestChildRectangleOnScreen_fn(ScrollView* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, bool* arg2, bool* __retval)
{
    bool arg2_ = *arg2;
    return *__retval = ScrollView::requestChildRectangleOnScreen_IMPL_26102(__this->_subclassed, __this->_javaObject, (uObject*)arg0, (uObject*)arg1, arg2_), void();
}

// public static extern bool requestChildRectangleOnScreen_IMPL_26102(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) :21772
void ScrollView__requestChildRectangleOnScreen_IMPL_26102_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_, bool* __retval)
{
    *__retval = ScrollView::requestChildRectangleOnScreen_IMPL_26102(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public override sealed void requestDisallowInterceptTouchEvent(bool arg0) :21468
void ScrollView__requestDisallowInterceptTouchEvent_fn(ScrollView* __this, bool* arg0)
{
    bool arg0_ = *arg0;
    ScrollView::requestDisallowInterceptTouchEvent_IMPL_26081(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void requestDisallowInterceptTouchEvent_IMPL_26081(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :21709
void ScrollView__requestDisallowInterceptTouchEvent_IMPL_26081_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    ScrollView::requestDisallowInterceptTouchEvent_IMPL_26081(*arg0_, *arg1_, *arg2_);
}

// public override sealed void requestLayout() :21600
void ScrollView__requestLayout_fn(ScrollView* __this)
{
    ScrollView::requestLayout_IMPL_26103(__this->_subclassed, __this->_javaObject);
}

// public static extern void requestLayout_IMPL_26103(bool arg0, Android.Base.Primitives.ujobject arg1) :21775
void ScrollView__requestLayout_IMPL_26103_fn(bool* arg0_, jobject* arg1_)
{
    ScrollView::requestLayout_IMPL_26103(*arg0_, *arg1_);
}

// public override sealed void scrollTo(int arg0, int arg1) :21630
void ScrollView__scrollTo_fn(ScrollView* __this, int* arg0, int* arg1)
{
    int arg0_ = *arg0;
    int arg1_ = *arg1;
    ScrollView::scrollTo_IMPL_26108(__this->_subclassed, __this->_javaObject, arg0_, arg1_);
}

// public static extern void scrollTo_IMPL_26108(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :21790
void ScrollView__scrollTo_IMPL_26108_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    ScrollView::scrollTo_IMPL_26108(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setFillViewport(bool arg0) :21432
void ScrollView__setFillViewport_fn(ScrollView* __this, bool* arg0)
{
    __this->setFillViewport(*arg0);
}

// public static extern void setFillViewport_IMPL_26075(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :21691
void ScrollView__setFillViewport_IMPL_26075_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    ScrollView::setFillViewport_IMPL_26075(*arg0_, *arg1_, *arg2_);
}

// public override sealed void setOverScrollMode(int arg0) :21636
void ScrollView__setOverScrollMode_fn(ScrollView* __this, int* arg0)
{
    int arg0_ = *arg0;
    ScrollView::setOverScrollMode_IMPL_26109(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setOverScrollMode_IMPL_26109(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :21793
void ScrollView__setOverScrollMode_IMPL_26109_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    ScrollView::setOverScrollMode_IMPL_26109(*arg0_, *arg1_, *arg2_);
}

// public void setSmoothScrollingEnabled(bool arg0) :21444
void ScrollView__setSmoothScrollingEnabled_fn(ScrollView* __this, bool* arg0)
{
    __this->setSmoothScrollingEnabled(*arg0);
}

// public static extern void setSmoothScrollingEnabled_IMPL_26077(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :21697
void ScrollView__setSmoothScrollingEnabled_IMPL_26077_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    ScrollView::setSmoothScrollingEnabled_IMPL_26077(*arg0_, *arg1_, *arg2_);
}

// public override sealed bool shouldDelayChildPressedState() :21378
void ScrollView__shouldDelayChildPressedState_fn(ScrollView* __this, bool* __retval)
{
    return *__retval = ScrollView::shouldDelayChildPressedState_IMPL_26066(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool shouldDelayChildPressedState_IMPL_26066(bool arg0, Android.Base.Primitives.ujobject arg1) :21664
void ScrollView__shouldDelayChildPressedState_IMPL_26066_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = ScrollView::shouldDelayChildPressedState_IMPL_26066(*arg0_, *arg1_);
}

// public void smoothScrollBy(int arg0, int arg1) :21534
void ScrollView__smoothScrollBy_fn(ScrollView* __this, int* arg0, int* arg1)
{
    __this->smoothScrollBy(*arg0, *arg1);
}

// public static extern void smoothScrollBy_IMPL_26092(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :21742
void ScrollView__smoothScrollBy_IMPL_26092_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    ScrollView::smoothScrollBy_IMPL_26092(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void smoothScrollTo(int arg0, int arg1) :21540
void ScrollView__smoothScrollTo_fn(ScrollView* __this, int* arg0, int* arg1)
{
    __this->smoothScrollTo(*arg0, *arg1);
}

// public static extern void smoothScrollTo_IMPL_26093(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :21745
void ScrollView__smoothScrollTo_IMPL_26093_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_)
{
    ScrollView::smoothScrollTo_IMPL_26093(*arg0_, *arg1_, *arg2_, *arg3_);
}

jclass ScrollView::_javaClass5_;
jmethodID ScrollView::addView_26070_ID_;
jmethodID ScrollView::addView_26071_ID_;
jmethodID ScrollView::addView_26072_ID_;
jmethodID ScrollView::addView_26073_ID_;
jmethodID ScrollView::arrowScroll_26091_ID_;
jmethodID ScrollView::computeScroll_26098_ID_;
jmethodID ScrollView::computeScrollDeltaToGetChildRectOnScreen_26099_ID_;
jmethodID ScrollView::computeVerticalScrollOffset_26095_ID_;
jmethodID ScrollView::computeVerticalScrollRange_26094_ID_;
jmethodID ScrollView::dispatchKeyEvent_26079_ID_;
jmethodID ScrollView::executeKeyEvent_26080_ID_;
jmethodID ScrollView::fling_26107_ID_;
jmethodID ScrollView::fullScroll_26090_ID_;
jmethodID ScrollView::getBottomFadingEdgeStrength_26068_ID_;
jmethodID ScrollView::getMaxScrollAmount_26069_ID_;
jmethodID ScrollView::getTopFadingEdgeStrength_26067_ID_;
jmethodID ScrollView::isFillViewport_26074_ID_;
jmethodID ScrollView::isSmoothScrollingEnabled_26076_ID_;
jmethodID ScrollView::j_draw_26110_ID_;
jmethodID ScrollView::measureChild_26096_ID_;
jmethodID ScrollView::measureChildWithMargins_26097_ID_;
jmethodID ScrollView::onDetachedFromWindow_26104_ID_;
jmethodID ScrollView::onGenericMotionEvent_26084_ID_;
jmethodID ScrollView::onInitializeAccessibilityEvent_26088_ID_;
jmethodID ScrollView::onInitializeAccessibilityNodeInfo_26087_ID_;
jmethodID ScrollView::onInterceptTouchEvent_26082_ID_;
jmethodID ScrollView::onLayout_26105_ID_;
jmethodID ScrollView::onMeasure_26078_ID_;
jmethodID ScrollView::onOverScrolled_26085_ID_;
jmethodID ScrollView::onRequestFocusInDescendants_26101_ID_;
jmethodID ScrollView::onRestoreInstanceState_26111_ID_;
jmethodID ScrollView::onSaveInstanceState_26112_ID_;
jmethodID ScrollView::onSizeChanged_26106_ID_;
jmethodID ScrollView::onTouchEvent_26083_ID_;
jmethodID ScrollView::pageScroll_26089_ID_;
jmethodID ScrollView::performAccessibilityAction_26086_ID_;
jmethodID ScrollView::requestChildFocus_26100_ID_;
jmethodID ScrollView::requestChildRectangleOnScreen_26102_ID_;
jmethodID ScrollView::requestDisallowInterceptTouchEvent_26081_ID_;
jmethodID ScrollView::requestLayout_26103_ID_;
jmethodID ScrollView::scrollTo_26108_ID_;
jmethodID ScrollView::ScrollView_26063_ID_c_;
jmethodID ScrollView::ScrollView_26064_ID_c_;
jmethodID ScrollView::ScrollView_26065_ID_c_;
jmethodID ScrollView::setFillViewport_26075_ID_;
jmethodID ScrollView::setOverScrollMode_26109_ID_;
jmethodID ScrollView::setSmoothScrollingEnabled_26077_ID_;
jmethodID ScrollView::shouldDelayChildPressedState_26066_ID_;
jmethodID ScrollView::smoothScrollBy_26092_ID_;
jmethodID ScrollView::smoothScrollTo_26093_ID_;

// public ScrollView(Android.android.content.Context arg0) [instance] :21328
void ScrollView::ctor_16(::g::Android::android::content::Context* arg0)
{
    ctor_15(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());;
    CACHE_METHOD(ScrollView::ScrollView_26063_ID_c(),ScrollView::_javaClass5(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(ScrollView::_javaClass5(), ScrollView::ScrollView_26063_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public ScrollView(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [instance] :21344
void ScrollView::ctor_17(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    ctor_15(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());;
    CACHE_METHOD(ScrollView::ScrollView_26064_ID_c(),ScrollView::_javaClass5(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(ScrollView::_javaClass5(), ScrollView::ScrollView_26064_ID_c(), _obArg0, _obArg1);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public ScrollView(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [instance] :21361
void ScrollView::ctor_18(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    ctor_15(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());;
    CACHE_METHOD(ScrollView::ScrollView_26065_ID_c(),ScrollView::_javaClass5(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.ScrollView.<init> could not be cached",75);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(ScrollView::_javaClass5(), ScrollView::ScrollView_26065_ID_c(), _obArg0, _obArg1, ((jint)arg2));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public ScrollView(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :21326
void ScrollView::ctor_19(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_15(obj, utype, hasFallbackClass, resolveType);
}

// public bool arrowScroll(int arg0) [instance] :21528
bool ScrollView::arrowScroll(int arg0)
{
    int arg0_ = arg0;
    return ScrollView::arrowScroll_IMPL_26091(_subclassed, _javaObject, arg0_);
}

// public bool executeKeyEvent(Android.android.view.KeyEvent arg0) [instance] :21462
bool ScrollView::executeKeyEvent(::g::Android::android::view::KeyEvent* arg0)
{
    return ScrollView::executeKeyEvent_IMPL_26080(_subclassed, _javaObject, (uObject*)arg0);
}

// public void fling(int arg0) [instance] :21624
void ScrollView::fling(int arg0)
{
    int arg0_ = arg0;
    ScrollView::fling_IMPL_26107(_subclassed, _javaObject, arg0_);
}

// public bool fullScroll(int arg0) [instance] :21522
bool ScrollView::fullScroll(int arg0)
{
    int arg0_ = arg0;
    return ScrollView::fullScroll_IMPL_26090(_subclassed, _javaObject, arg0_);
}

// public int getMaxScrollAmount() [instance] :21396
int ScrollView::getMaxScrollAmount()
{
    return ScrollView::getMaxScrollAmount_IMPL_26069(_subclassed, _javaObject);
}

// public bool isFillViewport() [instance] :21426
bool ScrollView::isFillViewport()
{
    return ScrollView::isFillViewport_IMPL_26074(_subclassed, _javaObject);
}

// public bool isSmoothScrollingEnabled() [instance] :21438
bool ScrollView::isSmoothScrollingEnabled()
{
    return ScrollView::isSmoothScrollingEnabled_IMPL_26076(_subclassed, _javaObject);
}

// public bool pageScroll(int arg0) [instance] :21516
bool ScrollView::pageScroll(int arg0)
{
    int arg0_ = arg0;
    return ScrollView::pageScroll_IMPL_26089(_subclassed, _javaObject, arg0_);
}

// public void setFillViewport(bool arg0) [instance] :21432
void ScrollView::setFillViewport(bool arg0)
{
    bool arg0_ = arg0;
    ScrollView::setFillViewport_IMPL_26075(_subclassed, _javaObject, arg0_);
}

// public void setSmoothScrollingEnabled(bool arg0) [instance] :21444
void ScrollView::setSmoothScrollingEnabled(bool arg0)
{
    bool arg0_ = arg0;
    ScrollView::setSmoothScrollingEnabled_IMPL_26077(_subclassed, _javaObject, arg0_);
}

// public void smoothScrollBy(int arg0, int arg1) [instance] :21534
void ScrollView::smoothScrollBy(int arg0, int arg1)
{
    int arg0_ = arg0;
    int arg1_ = arg1;
    ScrollView::smoothScrollBy_IMPL_26092(_subclassed, _javaObject, arg0_, arg1_);
}

// public void smoothScrollTo(int arg0, int arg1) [instance] :21540
void ScrollView::smoothScrollTo(int arg0, int arg1)
{
    int arg0_ = arg0;
    int arg1_ = arg1;
    ScrollView::smoothScrollTo_IMPL_26093(_subclassed, _javaObject, arg0_, arg1_);
}

// public static extern new void _Init() [static] :21325
void ScrollView::_Init5()
{
    if (ScrollView::_javaClass5()) { return; }
    INIT_JNI;
    ScrollView::_javaClass5() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/ScrollView"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!ScrollView::_javaClass5()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.ScrollView'", 49);; }
}

// public static extern void addView_IMPL_26070(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :21676
void ScrollView::addView_IMPL_26070(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ScrollView::addView_26070_ID(),ScrollView::_javaClass5(),"addView","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.addView could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::addView_26070_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::addView_26070_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void addView_IMPL_26071(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :21679
void ScrollView::addView_IMPL_26071(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ScrollView::addView_26071_ID(),ScrollView::_javaClass5(),"addView","(Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.widget.ScrollView.addView could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::addView_26071_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::addView_26071_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void addView_IMPL_26072(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :21682
void ScrollView::addView_IMPL_26072(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ScrollView::addView_26072_ID(),ScrollView::_javaClass5(),"addView","(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.addView could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::addView_26072_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::addView_26072_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void addView_IMPL_26073(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :21685
void ScrollView::addView_IMPL_26073(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ScrollView::addView_26073_ID(),ScrollView::_javaClass5(),"addView","(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.addView could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::addView_26073_ID(), _obArg2, ((jint)arg3_), _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::addView_26073_ID(), _obArg2, ((jint)arg3_), _obArg4);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool arrowScroll_IMPL_26091(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :21739
bool ScrollView::arrowScroll_IMPL_26091(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    bool result;
    CACHE_METHOD(ScrollView::arrowScroll_26091_ID(),ScrollView::_javaClass5(),"arrowScroll","(I)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.arrowScroll could not be cached",80);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::arrowScroll_26091_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::arrowScroll_26091_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void computeScroll_IMPL_26098(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21760
void ScrollView::computeScroll_IMPL_26098(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::computeScroll_26098_ID(),ScrollView::_javaClass5(),"computeScroll","()V",GetMethodID,"Id for fallback method android.widget.ScrollView.computeScroll could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::computeScroll_26098_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::computeScroll_26098_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern int computeScrollDeltaToGetChildRectOnScreen_IMPL_26099(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :21763
int ScrollView::computeScrollDeltaToGetChildRectOnScreen_IMPL_26099(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    CACHE_METHOD(ScrollView::computeScrollDeltaToGetChildRectOnScreen_26099_ID(),ScrollView::_javaClass5(),"computeScrollDeltaToGetChildRectOnScreen","(Landroid/graphics/Rect;)I",GetMethodID,"Id for fallback method android.widget.ScrollView.computeScrollDeltaToGetChildRectOnScreen could not be cached",109);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ScrollView::_javaClass5(), ScrollView::computeScrollDeltaToGetChildRectOnScreen_26099_ID(), _obArg2));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ScrollView::computeScrollDeltaToGetChildRectOnScreen_26099_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int computeVerticalScrollOffset_IMPL_26095(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21751
int ScrollView::computeVerticalScrollOffset_IMPL_26095(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    int result;
    CACHE_METHOD(ScrollView::computeVerticalScrollOffset_26095_ID(),ScrollView::_javaClass5(),"computeVerticalScrollOffset","()I",GetMethodID,"Id for fallback method android.widget.ScrollView.computeVerticalScrollOffset could not be cached",96);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ScrollView::_javaClass5(), ScrollView::computeVerticalScrollOffset_26095_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ScrollView::computeVerticalScrollOffset_26095_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int computeVerticalScrollRange_IMPL_26094(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21748
int ScrollView::computeVerticalScrollRange_IMPL_26094(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    int result;
    CACHE_METHOD(ScrollView::computeVerticalScrollRange_26094_ID(),ScrollView::_javaClass5(),"computeVerticalScrollRange","()I",GetMethodID,"Id for fallback method android.widget.ScrollView.computeVerticalScrollRange could not be cached",95);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ScrollView::_javaClass5(), ScrollView::computeVerticalScrollRange_26094_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ScrollView::computeVerticalScrollRange_26094_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool dispatchKeyEvent_IMPL_26079(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :21703
bool ScrollView::dispatchKeyEvent_IMPL_26079(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ScrollView::dispatchKeyEvent_26079_ID(),ScrollView::_javaClass5(),"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.dispatchKeyEvent could not be cached",85);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::dispatchKeyEvent_26079_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::dispatchKeyEvent_26079_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool executeKeyEvent_IMPL_26080(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :21706
bool ScrollView::executeKeyEvent_IMPL_26080(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ScrollView::executeKeyEvent_26080_ID(),ScrollView::_javaClass5(),"executeKeyEvent","(Landroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.executeKeyEvent could not be cached",84);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::executeKeyEvent_26080_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::executeKeyEvent_26080_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void fling_IMPL_26107(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :21787
void ScrollView::fling_IMPL_26107(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::fling_26107_ID(),ScrollView::_javaClass5(),"fling","(I)V",GetMethodID,"Id for fallback method android.widget.ScrollView.fling could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::fling_26107_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::fling_26107_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool fullScroll_IMPL_26090(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :21736
bool ScrollView::fullScroll_IMPL_26090(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    bool result;
    CACHE_METHOD(ScrollView::fullScroll_26090_ID(),ScrollView::_javaClass5(),"fullScroll","(I)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.fullScroll could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::fullScroll_26090_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::fullScroll_26090_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern float getBottomFadingEdgeStrength_IMPL_26068(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21670
float ScrollView::getBottomFadingEdgeStrength_IMPL_26068(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    float result;
    CACHE_METHOD(ScrollView::getBottomFadingEdgeStrength_26068_ID(),ScrollView::_javaClass5(),"getBottomFadingEdgeStrength","()F",GetMethodID,"Id for fallback method android.widget.ScrollView.getBottomFadingEdgeStrength could not be cached",96);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, ScrollView::_javaClass5(), ScrollView::getBottomFadingEdgeStrength_26068_ID()));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ScrollView::getBottomFadingEdgeStrength_26068_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getMaxScrollAmount_IMPL_26069(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21673
int ScrollView::getMaxScrollAmount_IMPL_26069(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    int result;
    CACHE_METHOD(ScrollView::getMaxScrollAmount_26069_ID(),ScrollView::_javaClass5(),"getMaxScrollAmount","()I",GetMethodID,"Id for fallback method android.widget.ScrollView.getMaxScrollAmount could not be cached",87);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ScrollView::_javaClass5(), ScrollView::getMaxScrollAmount_26069_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ScrollView::getMaxScrollAmount_26069_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern float getTopFadingEdgeStrength_IMPL_26067(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21667
float ScrollView::getTopFadingEdgeStrength_IMPL_26067(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    float result;
    CACHE_METHOD(ScrollView::getTopFadingEdgeStrength_26067_ID(),ScrollView::_javaClass5(),"getTopFadingEdgeStrength","()F",GetMethodID,"Id for fallback method android.widget.ScrollView.getTopFadingEdgeStrength could not be cached",93);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, ScrollView::_javaClass5(), ScrollView::getTopFadingEdgeStrength_26067_ID()));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ScrollView::getTopFadingEdgeStrength_26067_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isFillViewport_IMPL_26074(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21688
bool ScrollView::isFillViewport_IMPL_26074(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    bool result;
    CACHE_METHOD(ScrollView::isFillViewport_26074_ID(),ScrollView::_javaClass5(),"isFillViewport","()Z",GetMethodID,"Id for fallback method android.widget.ScrollView.isFillViewport could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::isFillViewport_26074_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::isFillViewport_26074_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isSmoothScrollingEnabled_IMPL_26076(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21694
bool ScrollView::isSmoothScrollingEnabled_IMPL_26076(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    bool result;
    CACHE_METHOD(ScrollView::isSmoothScrollingEnabled_26076_ID(),ScrollView::_javaClass5(),"isSmoothScrollingEnabled","()Z",GetMethodID,"Id for fallback method android.widget.ScrollView.isSmoothScrollingEnabled could not be cached",93);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::isSmoothScrollingEnabled_26076_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::isSmoothScrollingEnabled_26076_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void j_draw_IMPL_26110(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :21796
void ScrollView::j_draw_IMPL_26110(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ScrollView::j_draw_26110_ID(),ScrollView::_javaClass5(),"draw","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.draw could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::j_draw_26110_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::j_draw_26110_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void measureChild_IMPL_26096(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) [static] :21754
void ScrollView::measureChild_IMPL_26096(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ScrollView::measureChild_26096_ID(),ScrollView::_javaClass5(),"measureChild","(Landroid/view/View;II)V",GetMethodID,"Id for fallback method android.widget.ScrollView.measureChild could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::measureChild_26096_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::measureChild_26096_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void measureChildWithMargins_IMPL_26097(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4, int arg5, int arg6) [static] :21757
void ScrollView::measureChildWithMargins_IMPL_26097(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ScrollView::measureChildWithMargins_26097_ID(),ScrollView::_javaClass5(),"measureChildWithMargins","(Landroid/view/View;IIII)V",GetMethodID,"Id for fallback method android.widget.ScrollView.measureChildWithMargins could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::measureChildWithMargins_26097_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::measureChildWithMargins_26097_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public ScrollView New(Android.android.content.Context arg0) [static] :21328
ScrollView* ScrollView::New13(::g::Android::android::content::Context* arg0)
{
    ScrollView* obj2 = (ScrollView*)uNew(ScrollView_typeof());
    obj2->ctor_16(arg0);
    return obj2;
}

// public ScrollView New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [static] :21344
ScrollView* ScrollView::New14(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    ScrollView* obj3 = (ScrollView*)uNew(ScrollView_typeof());
    obj3->ctor_17(arg0, arg1);
    return obj3;
}

// public ScrollView New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [static] :21361
ScrollView* ScrollView::New15(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    ScrollView* obj4 = (ScrollView*)uNew(ScrollView_typeof());
    obj4->ctor_18(arg0, arg1, arg2);
    return obj4;
}

// public ScrollView New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [static] :21326
ScrollView* ScrollView::New16(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_19(obj, utype, hasFallbackClass, resolveType);
    return obj1;
}

// public static extern void onDetachedFromWindow_IMPL_26104(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21778
void ScrollView::onDetachedFromWindow_IMPL_26104(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::onDetachedFromWindow_26104_ID(),ScrollView::_javaClass5(),"onDetachedFromWindow","()V",GetMethodID,"Id for fallback method android.widget.ScrollView.onDetachedFromWindow could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onDetachedFromWindow_26104_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::onDetachedFromWindow_26104_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onGenericMotionEvent_IMPL_26084(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :21718
bool ScrollView::onGenericMotionEvent_IMPL_26084(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ScrollView::onGenericMotionEvent_26084_ID(),ScrollView::_javaClass5(),"onGenericMotionEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.onGenericMotionEvent could not be cached",89);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onGenericMotionEvent_26084_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::onGenericMotionEvent_26084_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onInitializeAccessibilityEvent_IMPL_26088(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :21730
void ScrollView::onInitializeAccessibilityEvent_IMPL_26088(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ScrollView::onInitializeAccessibilityEvent_26088_ID(),ScrollView::_javaClass5(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onInitializeAccessibilityEvent could not be cached",99);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onInitializeAccessibilityEvent_26088_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::onInitializeAccessibilityEvent_26088_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_26087(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :21727
void ScrollView::onInitializeAccessibilityNodeInfo_IMPL_26087(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ScrollView::onInitializeAccessibilityNodeInfo_26087_ID(),ScrollView::_javaClass5(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onInitializeAccessibilityNodeInfo could not be cached",102);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onInitializeAccessibilityNodeInfo_26087_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::onInitializeAccessibilityNodeInfo_26087_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onInterceptTouchEvent_IMPL_26082(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :21712
bool ScrollView::onInterceptTouchEvent_IMPL_26082(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ScrollView::onInterceptTouchEvent_26082_ID(),ScrollView::_javaClass5(),"onInterceptTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.onInterceptTouchEvent could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onInterceptTouchEvent_26082_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::onInterceptTouchEvent_26082_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onLayout_IMPL_26105(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2, int arg3, int arg4, int arg5, int arg6) [static] :21781
void ScrollView::onLayout_IMPL_26105(bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::onLayout_26105_ID(),ScrollView::_javaClass5(),"onLayout","(ZIIII)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onLayout could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onLayout_26105_ID(), ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::onLayout_26105_ID(), ((jboolean)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_), ((jint)arg6_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onMeasure_IMPL_26078(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :21700
void ScrollView::onMeasure_IMPL_26078(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::onMeasure_26078_ID(),ScrollView::_javaClass5(),"onMeasure","(II)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onMeasure could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onMeasure_26078_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::onMeasure_26078_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onOverScrolled_IMPL_26085(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, bool arg4, bool arg5) [static] :21721
void ScrollView::onOverScrolled_IMPL_26085(bool arg0_, jobject arg1_, int arg2_, int arg3_, bool arg4_, bool arg5_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::onOverScrolled_26085_ID(),ScrollView::_javaClass5(),"onOverScrolled","(IIZZ)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onOverScrolled could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onOverScrolled_26085_ID(), ((jint)arg2_), ((jint)arg3_), ((jboolean)arg4_), ((jboolean)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::onOverScrolled_26085_ID(), ((jint)arg2_), ((jint)arg3_), ((jboolean)arg4_), ((jboolean)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onRequestFocusInDescendants_IMPL_26101(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :21769
bool ScrollView::onRequestFocusInDescendants_IMPL_26101(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ScrollView::onRequestFocusInDescendants_26101_ID(),ScrollView::_javaClass5(),"onRequestFocusInDescendants","(ILandroid/graphics/Rect;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.onRequestFocusInDescendants could not be cached",96);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onRequestFocusInDescendants_26101_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::onRequestFocusInDescendants_26101_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onRestoreInstanceState_IMPL_26111(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :21799
void ScrollView::onRestoreInstanceState_IMPL_26111(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ScrollView::onRestoreInstanceState_26111_ID(),ScrollView::_javaClass5(),"onRestoreInstanceState","(Landroid/os/Parcelable;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onRestoreInstanceState could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onRestoreInstanceState_26111_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::onRestoreInstanceState_26111_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper onSaveInstanceState_IMPL_26112(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21802
uObject* ScrollView::onSaveInstanceState_IMPL_26112(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    uObject* result;
    CACHE_METHOD(ScrollView::onSaveInstanceState_26112_ID(),ScrollView::_javaClass5(),"onSaveInstanceState","()Landroid/os/Parcelable;",GetMethodID,"Id for fallback method android.widget.ScrollView.onSaveInstanceState could not be cached",88);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onSaveInstanceState_26112_ID()),result,::g::Android::Fallbacks::Android_android_os_Parcelable_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ScrollView::onSaveInstanceState_26112_ID()),result,::g::Android::Fallbacks::Android_android_os_Parcelable_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onSizeChanged_IMPL_26106(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :21784
void ScrollView::onSizeChanged_IMPL_26106(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::onSizeChanged_26106_ID(),ScrollView::_javaClass5(),"onSizeChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.ScrollView.onSizeChanged could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onSizeChanged_26106_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::onSizeChanged_26106_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onTouchEvent_IMPL_26083(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :21715
bool ScrollView::onTouchEvent_IMPL_26083(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ScrollView::onTouchEvent_26083_ID(),ScrollView::_javaClass5(),"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.onTouchEvent could not be cached",81);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::onTouchEvent_26083_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::onTouchEvent_26083_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool pageScroll_IMPL_26089(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :21733
bool ScrollView::pageScroll_IMPL_26089(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    bool result;
    CACHE_METHOD(ScrollView::pageScroll_26089_ID(),ScrollView::_javaClass5(),"pageScroll","(I)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.pageScroll could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::pageScroll_26089_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::pageScroll_26089_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performAccessibilityAction_IMPL_26086(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :21724
bool ScrollView::performAccessibilityAction_IMPL_26086(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ScrollView::performAccessibilityAction_26086_ID(),ScrollView::_javaClass5(),"performAccessibilityAction","(ILandroid/os/Bundle;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.performAccessibilityAction could not be cached",95);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::performAccessibilityAction_26086_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::performAccessibilityAction_26086_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void requestChildFocus_IMPL_26100(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :21766
void ScrollView::requestChildFocus_IMPL_26100(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(ScrollView::requestChildFocus_26100_ID(),ScrollView::_javaClass5(),"requestChildFocus","(Landroid/view/View;Landroid/view/View;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.requestChildFocus could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::requestChildFocus_26100_ID(), _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::requestChildFocus_26100_ID(), _obArg2, _obArg3);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool requestChildRectangleOnScreen_IMPL_26102(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, bool arg4) [static] :21772
bool ScrollView::requestChildRectangleOnScreen_IMPL_26102(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(ScrollView::requestChildRectangleOnScreen_26102_ID(),ScrollView::_javaClass5(),"requestChildRectangleOnScreen","(Landroid/view/View;Landroid/graphics/Rect;Z)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.requestChildRectangleOnScreen could not be cached",98);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::requestChildRectangleOnScreen_26102_ID(), _obArg2, _obArg3, ((jboolean)arg4_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::requestChildRectangleOnScreen_26102_ID(), _obArg2, _obArg3, ((jboolean)arg4_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void requestDisallowInterceptTouchEvent_IMPL_26081(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :21709
void ScrollView::requestDisallowInterceptTouchEvent_IMPL_26081(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::requestDisallowInterceptTouchEvent_26081_ID(),ScrollView::_javaClass5(),"requestDisallowInterceptTouchEvent","(Z)V",GetMethodID,"Id for fallback method android.widget.ScrollView.requestDisallowInterceptTouchEvent could not be cached",103);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::requestDisallowInterceptTouchEvent_26081_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::requestDisallowInterceptTouchEvent_26081_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void requestLayout_IMPL_26103(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21775
void ScrollView::requestLayout_IMPL_26103(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::requestLayout_26103_ID(),ScrollView::_javaClass5(),"requestLayout","()V",GetMethodID,"Id for fallback method android.widget.ScrollView.requestLayout could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::requestLayout_26103_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::requestLayout_26103_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void scrollTo_IMPL_26108(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :21790
void ScrollView::scrollTo_IMPL_26108(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::scrollTo_26108_ID(),ScrollView::_javaClass5(),"scrollTo","(II)V",GetMethodID,"Id for fallback method android.widget.ScrollView.scrollTo could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::scrollTo_26108_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::scrollTo_26108_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setFillViewport_IMPL_26075(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :21691
void ScrollView::setFillViewport_IMPL_26075(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::setFillViewport_26075_ID(),ScrollView::_javaClass5(),"setFillViewport","(Z)V",GetMethodID,"Id for fallback method android.widget.ScrollView.setFillViewport could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::setFillViewport_26075_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::setFillViewport_26075_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOverScrollMode_IMPL_26109(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :21793
void ScrollView::setOverScrollMode_IMPL_26109(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::setOverScrollMode_26109_ID(),ScrollView::_javaClass5(),"setOverScrollMode","(I)V",GetMethodID,"Id for fallback method android.widget.ScrollView.setOverScrollMode could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::setOverScrollMode_26109_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::setOverScrollMode_26109_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setSmoothScrollingEnabled_IMPL_26077(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :21697
void ScrollView::setSmoothScrollingEnabled_IMPL_26077(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::setSmoothScrollingEnabled_26077_ID(),ScrollView::_javaClass5(),"setSmoothScrollingEnabled","(Z)V",GetMethodID,"Id for fallback method android.widget.ScrollView.setSmoothScrollingEnabled could not be cached",94);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::setSmoothScrollingEnabled_26077_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::setSmoothScrollingEnabled_26077_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool shouldDelayChildPressedState_IMPL_26066(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :21664
bool ScrollView::shouldDelayChildPressedState_IMPL_26066(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    bool result;
    CACHE_METHOD(ScrollView::shouldDelayChildPressedState_26066_ID(),ScrollView::_javaClass5(),"shouldDelayChildPressedState","()Z",GetMethodID,"Id for fallback method android.widget.ScrollView.shouldDelayChildPressedState could not be cached",97);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ScrollView::_javaClass5(), ScrollView::shouldDelayChildPressedState_26066_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ScrollView::shouldDelayChildPressedState_26066_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void smoothScrollBy_IMPL_26092(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :21742
void ScrollView::smoothScrollBy_IMPL_26092(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::smoothScrollBy_26092_ID(),ScrollView::_javaClass5(),"smoothScrollBy","(II)V",GetMethodID,"Id for fallback method android.widget.ScrollView.smoothScrollBy could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::smoothScrollBy_26092_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::smoothScrollBy_26092_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void smoothScrollTo_IMPL_26093(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :21745
void ScrollView::smoothScrollTo_IMPL_26093(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(ScrollView::_javaClass5(),ScrollView::_Init5());
    
    CACHE_METHOD(ScrollView::smoothScrollTo_26093_ID(),ScrollView::_javaClass5(),"smoothScrollTo","(II)V",GetMethodID,"Id for fallback method android.widget.ScrollView.smoothScrollTo could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ScrollView::_javaClass5(), ScrollView::smoothScrollTo_26093_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ScrollView::smoothScrollTo_26093_ID(), ((jint)arg2_), ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(22440)
// ------------------------------------------------------------------------------

// public extern class SeekBar :22440
// {
::g::Android::android::widget::ProgressBar_type* SeekBar_typeof()
{
    static uSStrong< ::g::Android::android::widget::ProgressBar_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SeekBar);
    options.TypeSize = sizeof(::g::Android::android::widget::ProgressBar_type);
    type = (::g::Android::android::widget::ProgressBar_type*)uClassType::New("Android.android.widget.SeekBar", options);
    type->SetBase(::g::Android::android::widget::AbsSeekBar_typeof());
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))SeekBar__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))SeekBar__onInitializeAccessibilityNodeInfo_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::widget::ProgressBar_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::widget::ProgressBar_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::SeekBar::_javaClass5_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::SeekBar::onInitializeAccessibilityEvent_26188_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::SeekBar::onInitializeAccessibilityNodeInfo_26189_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::SeekBar::SeekBar_26184_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::SeekBar::SeekBar_26185_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::SeekBar::SeekBar_26186_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::SeekBar::setOnSeekBarChangeListener_26187_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(9,
        new uFunction("_Init", NULL, (void*)SeekBar___Init5_fn, 0, true, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)SeekBar__New13_fn, 0, true, SeekBar_typeof(), 1, ::g::Android::android::content::Context_typeof()),
        new uFunction(".ctor", NULL, (void*)SeekBar__New14_fn, 0, true, SeekBar_typeof(), 2, ::g::Android::android::content::Context_typeof(), ::g::Android::android::util::AttributeSet_typeof()),
        new uFunction(".ctor", NULL, (void*)SeekBar__New15_fn, 0, true, SeekBar_typeof(), 3, ::g::Android::android::content::Context_typeof(), ::g::Android::android::util::AttributeSet_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)SeekBar__New16_fn, 0, true, SeekBar_typeof(), 4, ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Type_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_26188", NULL, (void*)SeekBar__onInitializeAccessibilityEvent_IMPL_26188_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_26189", NULL, (void*)SeekBar__onInitializeAccessibilityNodeInfo_IMPL_26189_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setOnSeekBarChangeListener", NULL, (void*)SeekBar__setOnSeekBarChangeListener_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener_typeof()),
        new uFunction("setOnSeekBarChangeListener_IMPL_26187", NULL, (void*)SeekBar__setOnSeekBarChangeListener_IMPL_26187_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public SeekBar(Android.android.content.Context arg0) :22447
void SeekBar__ctor_16_fn(SeekBar* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_16(arg0);
}

// public SeekBar(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :22463
void SeekBar__ctor_17_fn(SeekBar* __this, ::g::Android::android::content::Context* arg0, uObject* arg1)
{
    __this->ctor_17(arg0, arg1);
}

// public SeekBar(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :22480
void SeekBar__ctor_18_fn(SeekBar* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2)
{
    __this->ctor_18(arg0, arg1, *arg2);
}

// public SeekBar(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :22445
void SeekBar__ctor_19_fn(SeekBar* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_19(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :22444
void SeekBar___Init5_fn()
{
    SeekBar::_Init5();
}

// public SeekBar New(Android.android.content.Context arg0) :22447
void SeekBar__New13_fn(::g::Android::android::content::Context* arg0, SeekBar** __retval)
{
    *__retval = SeekBar::New13(arg0);
}

// public SeekBar New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) :22463
void SeekBar__New14_fn(::g::Android::android::content::Context* arg0, uObject* arg1, SeekBar** __retval)
{
    *__retval = SeekBar::New14(arg0, arg1);
}

// public SeekBar New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) :22480
void SeekBar__New15_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, SeekBar** __retval)
{
    *__retval = SeekBar::New15(arg0, arg1, *arg2);
}

// public SeekBar New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :22445
void SeekBar__New16_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, SeekBar** __retval)
{
    *__retval = SeekBar::New16(*obj, utype, *hasFallbackClass, *resolveType);
}

// public override sealed void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :22503
void SeekBar__onInitializeAccessibilityEvent_fn(SeekBar* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    SeekBar::onInitializeAccessibilityEvent_IMPL_26188(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_26188(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :22522
void SeekBar__onInitializeAccessibilityEvent_IMPL_26188_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    SeekBar::onInitializeAccessibilityEvent_IMPL_26188(*arg0_, *arg1_, arg2_);
}

// public override sealed void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :22509
void SeekBar__onInitializeAccessibilityNodeInfo_fn(SeekBar* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    SeekBar::onInitializeAccessibilityNodeInfo_IMPL_26189(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_26189(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :22525
void SeekBar__onInitializeAccessibilityNodeInfo_IMPL_26189_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    SeekBar::onInitializeAccessibilityNodeInfo_IMPL_26189(*arg0_, *arg1_, arg2_);
}

// public void setOnSeekBarChangeListener(Android.android.widget.SeekBarDLROnSeekBarChangeListener arg0) :22497
void SeekBar__setOnSeekBarChangeListener_fn(SeekBar* __this, uObject* arg0)
{
    __this->setOnSeekBarChangeListener(arg0);
}

// public static extern void setOnSeekBarChangeListener_IMPL_26187(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :22519
void SeekBar__setOnSeekBarChangeListener_IMPL_26187_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    SeekBar::setOnSeekBarChangeListener_IMPL_26187(*arg0_, *arg1_, arg2_);
}

jclass SeekBar::_javaClass5_;
jmethodID SeekBar::onInitializeAccessibilityEvent_26188_ID_;
jmethodID SeekBar::onInitializeAccessibilityNodeInfo_26189_ID_;
jmethodID SeekBar::SeekBar_26184_ID_c_;
jmethodID SeekBar::SeekBar_26185_ID_c_;
jmethodID SeekBar::SeekBar_26186_ID_c_;
jmethodID SeekBar::setOnSeekBarChangeListener_26187_ID_;

// public SeekBar(Android.android.content.Context arg0) [instance] :22447
void SeekBar::ctor_16(::g::Android::android::content::Context* arg0)
{
    ctor_15(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(SeekBar::_javaClass5(),SeekBar::_Init5());;
    CACHE_METHOD(SeekBar::SeekBar_26184_ID_c(),SeekBar::_javaClass5(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.SeekBar.<init> could not be cached",72);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(SeekBar::_javaClass5(), SeekBar::SeekBar_26184_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public SeekBar(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [instance] :22463
void SeekBar::ctor_17(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    ctor_15(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(SeekBar::_javaClass5(),SeekBar::_Init5());;
    CACHE_METHOD(SeekBar::SeekBar_26185_ID_c(),SeekBar::_javaClass5(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V",GetMethodID,"Id for fallback method android.widget.SeekBar.<init> could not be cached",72);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(SeekBar::_javaClass5(), SeekBar::SeekBar_26185_ID_c(), _obArg0, _obArg1);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public SeekBar(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [instance] :22480
void SeekBar::ctor_18(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    ctor_15(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(SeekBar::_javaClass5(),SeekBar::_Init5());;
    CACHE_METHOD(SeekBar::SeekBar_26186_ID_c(),SeekBar::_javaClass5(),"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V",GetMethodID,"Id for fallback method android.widget.SeekBar.<init> could not be cached",72);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject _obArg1 = ((!arg1) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg1, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(SeekBar::_javaClass5(), SeekBar::SeekBar_26186_ID_c(), _obArg0, _obArg1, ((jint)arg2));;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public SeekBar(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :22445
void SeekBar::ctor_19(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_15(obj, utype, hasFallbackClass, resolveType);
}

// public void setOnSeekBarChangeListener(Android.android.widget.SeekBarDLROnSeekBarChangeListener arg0) [instance] :22497
void SeekBar::setOnSeekBarChangeListener(uObject* arg0)
{
    SeekBar::setOnSeekBarChangeListener_IMPL_26187(_subclassed, _javaObject, arg0);
}

// public static extern new void _Init() [static] :22444
void SeekBar::_Init5()
{
    if (SeekBar::_javaClass5()) { return; }
    INIT_JNI;
    SeekBar::_javaClass5() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/SeekBar"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!SeekBar::_javaClass5()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.SeekBar'", 46);; }
}

// public SeekBar New(Android.android.content.Context arg0) [static] :22447
SeekBar* SeekBar::New13(::g::Android::android::content::Context* arg0)
{
    SeekBar* obj2 = (SeekBar*)uNew(SeekBar_typeof());
    obj2->ctor_16(arg0);
    return obj2;
}

// public SeekBar New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1) [static] :22463
SeekBar* SeekBar::New14(::g::Android::android::content::Context* arg0, uObject* arg1)
{
    SeekBar* obj3 = (SeekBar*)uNew(SeekBar_typeof());
    obj3->ctor_17(arg0, arg1);
    return obj3;
}

// public SeekBar New(Android.android.content.Context arg0, Android.android.util.AttributeSet arg1, int arg2) [static] :22480
SeekBar* SeekBar::New15(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2)
{
    SeekBar* obj4 = (SeekBar*)uNew(SeekBar_typeof());
    obj4->ctor_18(arg0, arg1, arg2);
    return obj4;
}

// public SeekBar New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [static] :22445
SeekBar* SeekBar::New16(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    SeekBar* obj1 = (SeekBar*)uNew(SeekBar_typeof());
    obj1->ctor_19(obj, utype, hasFallbackClass, resolveType);
    return obj1;
}

// public static extern void onInitializeAccessibilityEvent_IMPL_26188(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :22522
void SeekBar::onInitializeAccessibilityEvent_IMPL_26188(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(SeekBar::_javaClass5(),SeekBar::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(SeekBar::onInitializeAccessibilityEvent_26188_ID(),SeekBar::_javaClass5(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.SeekBar.onInitializeAccessibilityEvent could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, SeekBar::_javaClass5(), SeekBar::onInitializeAccessibilityEvent_26188_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, SeekBar::onInitializeAccessibilityEvent_26188_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_26189(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :22525
void SeekBar::onInitializeAccessibilityNodeInfo_IMPL_26189(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(SeekBar::_javaClass5(),SeekBar::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(SeekBar::onInitializeAccessibilityNodeInfo_26189_ID(),SeekBar::_javaClass5(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.SeekBar.onInitializeAccessibilityNodeInfo could not be cached",99);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, SeekBar::_javaClass5(), SeekBar::onInitializeAccessibilityNodeInfo_26189_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, SeekBar::onInitializeAccessibilityNodeInfo_26189_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOnSeekBarChangeListener_IMPL_26187(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :22519
void SeekBar::setOnSeekBarChangeListener_IMPL_26187(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(SeekBar::_javaClass5(),SeekBar::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(SeekBar::setOnSeekBarChangeListener_26187_ID(),SeekBar::_javaClass5(),"setOnSeekBarChangeListener","(Landroid/widget/SeekBar$OnSeekBarChangeListener;)V",GetMethodID,"Id for fallback method android.widget.SeekBar.setOnSeekBarChangeListener could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, SeekBar::_javaClass5(), SeekBar::setOnSeekBarChangeListener_26187_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, SeekBar::setOnSeekBarChangeListener_26187_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(28740)
// ------------------------------------------------------------------------------

// public abstract extern interface SeekBarDLROnSeekBarChangeListener :28740
// {
uInterfaceType* SeekBarDLROnSeekBarChangeListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.widget.SeekBarDLROnSeekBarChangeListener", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("onProgressChanged", NULL, NULL, offsetof(SeekBarDLROnSeekBarChangeListener, fp_onProgressChanged), false, uVoid_typeof(), 3, ::g::Android::android::widget::SeekBar_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("onStartTrackingTouch", NULL, NULL, offsetof(SeekBarDLROnSeekBarChangeListener, fp_onStartTrackingTouch), false, uVoid_typeof(), 1, ::g::Android::android::widget::SeekBar_typeof()),
        new uFunction("onStopTrackingTouch", NULL, NULL, offsetof(SeekBarDLROnSeekBarChangeListener, fp_onStopTrackingTouch), false, uVoid_typeof(), 1, ::g::Android::android::widget::SeekBar_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(24124)
// ------------------------------------------------------------------------------

// public sealed extern class Switch :24124
// {
::g::Android::android::widget::CompoundButton_type* Switch_typeof()
{
    static uSStrong< ::g::Android::android::widget::CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(::g::Android::android::widget::CompoundButton_type);
    type = (::g::Android::android::widget::CompoundButton_type*)uClassType::New("Android.android.widget.Switch", options);
    type->SetBase(::g::Android::android::widget::CompoundButton_typeof());
    type->fp_jumpDrawablesToCurrentState = (void(*)(::g::Android::android::view::View*))Switch__jumpDrawablesToCurrentState_fn;
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))Switch__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))Switch__onInitializeAccessibilityNodeInfo_fn;
    type->fp_onPopulateAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))Switch__onPopulateAccessibilityEvent_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))Switch__onTouchEvent_fn;
    type->fp_setChecked = (void(*)(::g::Android::android::widget::CompoundButton*, bool*))Switch__setChecked_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::widget::CompoundButton_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::widget::CompoundButton_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::Switch::_javaClass6_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Switch::jumpDrawablesToCurrentState_26374_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Switch::onInitializeAccessibilityEvent_26375_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Switch::onInitializeAccessibilityNodeInfo_26376_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Switch::onPopulateAccessibilityEvent_26364_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Switch::onTouchEvent_26365_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Switch::setChecked_26366_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Switch::Switch_26341_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("_Init", NULL, (void*)Switch___Init6_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("jumpDrawablesToCurrentState_IMPL_26374", NULL, (void*)Switch__jumpDrawablesToCurrentState_IMPL_26374_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction(".ctor", NULL, (void*)Switch__New17_fn, 0, true, Switch_typeof(), 1, ::g::Android::android::content::Context_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_26375", NULL, (void*)Switch__onInitializeAccessibilityEvent_IMPL_26375_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_26376", NULL, (void*)Switch__onInitializeAccessibilityNodeInfo_IMPL_26376_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onPopulateAccessibilityEvent_IMPL_26364", NULL, (void*)Switch__onPopulateAccessibilityEvent_IMPL_26364_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onTouchEvent_IMPL_26365", NULL, (void*)Switch__onTouchEvent_IMPL_26365_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setChecked_IMPL_26366", NULL, (void*)Switch__setChecked_IMPL_26366_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public Switch(Android.android.content.Context arg0) :24131
void Switch__ctor_20_fn(Switch* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_20(arg0);
}

// public static extern new void _Init() :24128
void Switch___Init6_fn()
{
    Switch::_Init6();
}

// public override sealed void jumpDrawablesToCurrentState() :24361
void Switch__jumpDrawablesToCurrentState_fn(Switch* __this)
{
    Switch::jumpDrawablesToCurrentState_IMPL_26374(__this->_subclassed, __this->_javaObject);
}

// public static extern void jumpDrawablesToCurrentState_IMPL_26374(bool arg0, Android.Base.Primitives.ujobject arg1) :24473
void Switch__jumpDrawablesToCurrentState_IMPL_26374_fn(bool* arg0_, jobject* arg1_)
{
    Switch::jumpDrawablesToCurrentState_IMPL_26374(*arg0_, *arg1_);
}

// public Switch New(Android.android.content.Context arg0) :24131
void Switch__New17_fn(::g::Android::android::content::Context* arg0, Switch** __retval)
{
    *__retval = Switch::New17(arg0);
}

// public override sealed void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :24367
void Switch__onInitializeAccessibilityEvent_fn(Switch* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    Switch::onInitializeAccessibilityEvent_IMPL_26375(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_26375(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :24476
void Switch__onInitializeAccessibilityEvent_IMPL_26375_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Switch::onInitializeAccessibilityEvent_IMPL_26375(*arg0_, *arg1_, arg2_);
}

// public override sealed void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :24373
void Switch__onInitializeAccessibilityNodeInfo_fn(Switch* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    Switch::onInitializeAccessibilityNodeInfo_IMPL_26376(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_26376(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :24479
void Switch__onInitializeAccessibilityNodeInfo_IMPL_26376_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Switch::onInitializeAccessibilityNodeInfo_IMPL_26376(*arg0_, *arg1_, arg2_);
}

// public override sealed void onPopulateAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :24301
void Switch__onPopulateAccessibilityEvent_fn(Switch* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    Switch::onPopulateAccessibilityEvent_IMPL_26364(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onPopulateAccessibilityEvent_IMPL_26364(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :24443
void Switch__onPopulateAccessibilityEvent_IMPL_26364_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Switch::onPopulateAccessibilityEvent_IMPL_26364(*arg0_, *arg1_, arg2_);
}

// public override sealed bool onTouchEvent(Android.android.view.MotionEvent arg0) :24307
void Switch__onTouchEvent_fn(Switch* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = Switch::onTouchEvent_IMPL_26365(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onTouchEvent_IMPL_26365(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :24446
void Switch__onTouchEvent_IMPL_26365_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Switch::onTouchEvent_IMPL_26365(*arg0_, *arg1_, arg2_);
}

// public override sealed void setChecked(bool arg0) :24313
void Switch__setChecked_fn(Switch* __this, bool* arg0)
{
    bool arg0_ = *arg0;
    Switch::setChecked_IMPL_26366(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setChecked_IMPL_26366(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :24449
void Switch__setChecked_IMPL_26366_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    Switch::setChecked_IMPL_26366(*arg0_, *arg1_, *arg2_);
}

jclass Switch::_javaClass6_;
jmethodID Switch::jumpDrawablesToCurrentState_26374_ID_;
jmethodID Switch::onInitializeAccessibilityEvent_26375_ID_;
jmethodID Switch::onInitializeAccessibilityNodeInfo_26376_ID_;
jmethodID Switch::onPopulateAccessibilityEvent_26364_ID_;
jmethodID Switch::onTouchEvent_26365_ID_;
jmethodID Switch::setChecked_26366_ID_;
jmethodID Switch::Switch_26341_ID_c_;

// public Switch(Android.android.content.Context arg0) [instance] :24131
void Switch::ctor_20(::g::Android::android::content::Context* arg0)
{
    ctor_19(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(Switch::_javaClass6(),Switch::_Init6());;
    CACHE_METHOD(Switch::Switch_26341_ID_c(),Switch::_javaClass6(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.Switch.<init> could not be cached",71);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(Switch::_javaClass6(), Switch::Switch_26341_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public static extern new void _Init() [static] :24128
void Switch::_Init6()
{
    if (Switch::_javaClass6()) { return; }
    INIT_JNI;
    Switch::_javaClass6() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/Switch"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Switch::_javaClass6()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.Switch'", 45);; }
}

// public static extern void jumpDrawablesToCurrentState_IMPL_26374(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :24473
void Switch::jumpDrawablesToCurrentState_IMPL_26374(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Switch::_javaClass6(),Switch::_Init6());
    
    CACHE_METHOD(Switch::jumpDrawablesToCurrentState_26374_ID(),Switch::_javaClass6(),"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.Switch.jumpDrawablesToCurrentState could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Switch::_javaClass6(), Switch::jumpDrawablesToCurrentState_26374_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Switch::jumpDrawablesToCurrentState_26374_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public Switch New(Android.android.content.Context arg0) [static] :24131
Switch* Switch::New17(::g::Android::android::content::Context* arg0)
{
    Switch* obj2 = (Switch*)uNew(Switch_typeof());
    obj2->ctor_20(arg0);
    return obj2;
}

// public static extern void onInitializeAccessibilityEvent_IMPL_26375(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :24476
void Switch::onInitializeAccessibilityEvent_IMPL_26375(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Switch::_javaClass6(),Switch::_Init6());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Switch::onInitializeAccessibilityEvent_26375_ID(),Switch::_javaClass6(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.Switch.onInitializeAccessibilityEvent could not be cached",95);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Switch::_javaClass6(), Switch::onInitializeAccessibilityEvent_26375_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Switch::onInitializeAccessibilityEvent_26375_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_26376(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :24479
void Switch::onInitializeAccessibilityNodeInfo_IMPL_26376(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Switch::_javaClass6(),Switch::_Init6());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Switch::onInitializeAccessibilityNodeInfo_26376_ID(),Switch::_javaClass6(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.Switch.onInitializeAccessibilityNodeInfo could not be cached",98);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Switch::_javaClass6(), Switch::onInitializeAccessibilityNodeInfo_26376_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Switch::onInitializeAccessibilityNodeInfo_26376_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onPopulateAccessibilityEvent_IMPL_26364(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :24443
void Switch::onPopulateAccessibilityEvent_IMPL_26364(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Switch::_javaClass6(),Switch::_Init6());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Switch::onPopulateAccessibilityEvent_26364_ID(),Switch::_javaClass6(),"onPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.Switch.onPopulateAccessibilityEvent could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Switch::_javaClass6(), Switch::onPopulateAccessibilityEvent_26364_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Switch::onPopulateAccessibilityEvent_26364_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onTouchEvent_IMPL_26365(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :24446
bool Switch::onTouchEvent_IMPL_26365(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Switch::_javaClass6(),Switch::_Init6());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(Switch::onTouchEvent_26365_ID(),Switch::_javaClass6(),"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.Switch.onTouchEvent could not be cached",77);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, Switch::_javaClass6(), Switch::onTouchEvent_26365_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Switch::onTouchEvent_26365_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void setChecked_IMPL_26366(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :24449
void Switch::setChecked_IMPL_26366(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(Switch::_javaClass6(),Switch::_Init6());
    
    CACHE_METHOD(Switch::setChecked_26366_ID(),Switch::_javaClass6(),"setChecked","(Z)V",GetMethodID,"Id for fallback method android.widget.Switch.setChecked could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Switch::_javaClass6(), Switch::setChecked_26366_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Switch::setChecked_26366_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(3399)
// -----------------------------------------------------------------------------

// public extern class TextView :3399
// {
TextView_type* TextView_typeof()
{
    static uSStrong<TextView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 60;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Android.android.widget.TextView", options);
    type->SetBase(::g::Android::android::view::View_typeof());
    type->fp_cancelLongPress = (void(*)(::g::Android::android::view::View*))TextView__cancelLongPress_fn;
    type->fp_computeScroll = (void(*)(::g::Android::android::view::View*))TextView__computeScroll_fn;
    type->fp_findViewsWithText = (void(*)(::g::Android::android::view::View*, ::g::Android::java::util::ArrayList*, uObject*, int*))TextView__findViewsWithText_fn;
    type->fp_getBaseline = (void(*)(::g::Android::android::view::View*, int*))TextView__getBaseline_fn;
    type->fp_getFocusedRect = (void(*)(::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*))TextView__getFocusedRect_fn;
    type->fp_hasOverlappingRendering = (void(*)(::g::Android::android::view::View*, bool*))TextView__hasOverlappingRendering_fn;
    type->fp_invalidateDrawable = (void(*)(::g::Android::android::view::View*, ::g::Android::android::graphics::drawable::Drawable*))TextView__invalidateDrawable_fn;
    type->fp_jumpDrawablesToCurrentState = (void(*)(::g::Android::android::view::View*))TextView__jumpDrawablesToCurrentState_fn;
    type->fp_onCheckIsTextEditor = (void(*)(::g::Android::android::view::View*, bool*))TextView__onCheckIsTextEditor_fn;
    type->fp_onCreateInputConnection = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::inputmethod::EditorInfo*, uObject**))TextView__onCreateInputConnection_fn;
    type->fp_onDragEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::DragEvent*, bool*))TextView__onDragEvent_fn;
    type->fp_onFinishTemporaryDetach = (void(*)(::g::Android::android::view::View*))TextView__onFinishTemporaryDetach_fn;
    type->fp_onGenericMotionEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))TextView__onGenericMotionEvent_fn;
    type->fp_onInitializeAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))TextView__onInitializeAccessibilityEvent_fn;
    type->fp_onInitializeAccessibilityNodeInfo = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*))TextView__onInitializeAccessibilityNodeInfo_fn;
    type->fp_onKeyDown = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::view::KeyEvent*, bool*))TextView__onKeyDown_fn;
    type->fp_onKeyMultiple = (void(*)(::g::Android::android::view::View*, int*, int*, ::g::Android::android::view::KeyEvent*, bool*))TextView__onKeyMultiple_fn;
    type->fp_onKeyPreIme = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::view::KeyEvent*, bool*))TextView__onKeyPreIme_fn;
    type->fp_onKeyShortcut = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::view::KeyEvent*, bool*))TextView__onKeyShortcut_fn;
    type->fp_onKeyUp = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::view::KeyEvent*, bool*))TextView__onKeyUp_fn;
    type->fp_onPopulateAccessibilityEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*))TextView__onPopulateAccessibilityEvent_fn;
    type->fp_onRtlPropertiesChanged = (void(*)(::g::Android::android::view::View*, int*))TextView__onRtlPropertiesChanged_fn;
    type->fp_onScreenStateChanged = (void(*)(::g::Android::android::view::View*, int*))TextView__onScreenStateChanged_fn;
    type->fp_onScrollChanged = (void(*)(::g::Android::android::view::View*, int*, int*, int*, int*))TextView__onScrollChanged_fn;
    type->fp_onStartTemporaryDetach = (void(*)(::g::Android::android::view::View*))TextView__onStartTemporaryDetach_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))TextView__onTouchEvent_fn;
    type->fp_onTrackballEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))TextView__onTrackballEvent_fn;
    type->fp_onWindowFocusChanged = (void(*)(::g::Android::android::view::View*, bool*))TextView__onWindowFocusChanged_fn;
    type->fp_performAccessibilityAction = (void(*)(::g::Android::android::view::View*, int*, ::g::Android::android::os::Bundle*, bool*))TextView__performAccessibilityAction_fn;
    type->fp_performLongClick = (void(*)(::g::Android::android::view::View*, bool*))TextView__performLongClick_fn;
    type->fp_sendAccessibilityEvent = (void(*)(::g::Android::android::view::View*, int*))TextView__sendAccessibilityEvent_fn;
    type->fp_setEllipsize = TextView__setEllipsize_fn;
    type->fp_setEnabled = (void(*)(::g::Android::android::view::View*, bool*))TextView__setEnabled_fn;
    type->fp_setPadding = (void(*)(::g::Android::android::view::View*, int*, int*, int*, int*))TextView__setPadding_fn;
    type->fp_setPaddingRelative = (void(*)(::g::Android::android::view::View*, int*, int*, int*, int*))TextView__setPaddingRelative_fn;
    type->fp_setSelected = (void(*)(::g::Android::android::view::View*, bool*))TextView__setSelected_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[8] = ::g::Android::android::content::res::ColorStateList_typeof();
    ::TYPES[9] = ::g::Android::android::view::inputmethod::InputConnection_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::addTextChangedListener_26729_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::cancelLongPress_26741_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::computeScroll_26712_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::findViewsWithText_26749_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::getBaseline_26690_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::getFocusedRect_26687_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::getTextColors_26582_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::hasOverlappingRendering_26682_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::invalidateDrawable_26681_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::jumpDrawablesToCurrentState_26680_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onCheckIsTextEditor_26695_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onCreateInputConnection_26696_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onDragEvent_26766_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onFinishTemporaryDetach_26732_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onGenericMotionEvent_26739_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onInitializeAccessibilityEvent_26754_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onInitializeAccessibilityNodeInfo_26755_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onKeyDown_26692_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onKeyMultiple_26693_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onKeyPreIme_26691_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onKeyShortcut_26752_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onKeyUp_26694_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onPopulateAccessibilityEvent_26753_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onRtlPropertiesChanged_26767_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onScreenStateChanged_26673_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onScrollChanged_26761_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onStartTemporaryDetach_26731_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onTouchEvent_26738_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onTrackballEvent_26742_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onWindowFocusChanged_26734_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::performAccessibilityAction_26756_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::performLongClick_26760_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::removeTextChangedListener_26730_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::sendAccessibilityEvent_26757_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setEllipsize_26720_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setEnabled_26528_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setGravity_26603_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setHint_26647_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setHintTextColor_26596_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setHorizontallyScrolling_26607_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setImeOptions_26653_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setIncludeFontPadding_26706_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setInputType_26650_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setLineSpacing_26628_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setMaxLines_26612_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setOnEditorActionListener_26658_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setPadding_26567_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setPaddingRelative_26568_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setSelected_26737_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setText_26640_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setTextColor_26580_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setTextSize_26575_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setTypeface_26578_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::TextView_26525_ID_c_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(73,
        new uFunction("_Init", NULL, (void*)TextView___Init3_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("addTextChangedListener", NULL, (void*)TextView__addTextChangedListener_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::text::TextWatcher_typeof()),
        new uFunction("addTextChangedListener_IMPL_26729", NULL, (void*)TextView__addTextChangedListener_IMPL_26729_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("cancelLongPress_IMPL_26741", NULL, (void*)TextView__cancelLongPress_IMPL_26741_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("computeScroll_IMPL_26712", NULL, (void*)TextView__computeScroll_IMPL_26712_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("findViewsWithText_IMPL_26749", NULL, (void*)TextView__findViewsWithText_IMPL_26749_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("getBaseline_IMPL_26690", NULL, (void*)TextView__getBaseline_IMPL_26690_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getFocusedRect_IMPL_26687", NULL, (void*)TextView__getFocusedRect_IMPL_26687_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("getTextColors", NULL, (void*)TextView__getTextColors_fn, 0, false, ::g::Android::android::content::res::ColorStateList_typeof(), 0),
        new uFunction("getTextColors_IMPL_26582", NULL, (void*)TextView__getTextColors_IMPL_26582_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("hasOverlappingRendering_IMPL_26682", NULL, (void*)TextView__hasOverlappingRendering_IMPL_26682_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("invalidateDrawable_IMPL_26681", NULL, (void*)TextView__invalidateDrawable_IMPL_26681_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("jumpDrawablesToCurrentState_IMPL_26680", NULL, (void*)TextView__jumpDrawablesToCurrentState_IMPL_26680_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction(".ctor", NULL, (void*)TextView__New9_fn, 0, true, TextView_typeof(), 1, ::g::Android::android::content::Context_typeof()),
        new uFunction("onCheckIsTextEditor_IMPL_26695", NULL, (void*)TextView__onCheckIsTextEditor_IMPL_26695_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onCreateInputConnection_IMPL_26696", NULL, (void*)TextView__onCreateInputConnection_IMPL_26696_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onDragEvent_IMPL_26766", NULL, (void*)TextView__onDragEvent_IMPL_26766_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onFinishTemporaryDetach_IMPL_26732", NULL, (void*)TextView__onFinishTemporaryDetach_IMPL_26732_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onGenericMotionEvent_IMPL_26739", NULL, (void*)TextView__onGenericMotionEvent_IMPL_26739_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityEvent_IMPL_26754", NULL, (void*)TextView__onInitializeAccessibilityEvent_IMPL_26754_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onInitializeAccessibilityNodeInfo_IMPL_26755", NULL, (void*)TextView__onInitializeAccessibilityNodeInfo_IMPL_26755_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onKeyDown_IMPL_26692", NULL, (void*)TextView__onKeyDown_IMPL_26692_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onKeyMultiple_IMPL_26693", NULL, (void*)TextView__onKeyMultiple_IMPL_26693_fn, 0, true, ::g::Uno::Bool_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onKeyPreIme_IMPL_26691", NULL, (void*)TextView__onKeyPreIme_IMPL_26691_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onKeyShortcut_IMPL_26752", NULL, (void*)TextView__onKeyShortcut_IMPL_26752_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onKeyUp_IMPL_26694", NULL, (void*)TextView__onKeyUp_IMPL_26694_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onPopulateAccessibilityEvent_IMPL_26753", NULL, (void*)TextView__onPopulateAccessibilityEvent_IMPL_26753_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onRtlPropertiesChanged_IMPL_26767", NULL, (void*)TextView__onRtlPropertiesChanged_IMPL_26767_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onScreenStateChanged_IMPL_26673", NULL, (void*)TextView__onScreenStateChanged_IMPL_26673_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onScrollChanged_IMPL_26761", NULL, (void*)TextView__onScrollChanged_IMPL_26761_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("onStartTemporaryDetach_IMPL_26731", NULL, (void*)TextView__onStartTemporaryDetach_IMPL_26731_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("onTouchEvent_IMPL_26738", NULL, (void*)TextView__onTouchEvent_IMPL_26738_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onTrackballEvent_IMPL_26742", NULL, (void*)TextView__onTrackballEvent_IMPL_26742_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("onWindowFocusChanged_IMPL_26734", NULL, (void*)TextView__onWindowFocusChanged_IMPL_26734_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("performAccessibilityAction_IMPL_26756", NULL, (void*)TextView__performAccessibilityAction_IMPL_26756_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("performLongClick_IMPL_26760", NULL, (void*)TextView__performLongClick_IMPL_26760_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("removeTextChangedListener", NULL, (void*)TextView__removeTextChangedListener_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::text::TextWatcher_typeof()),
        new uFunction("removeTextChangedListener_IMPL_26730", NULL, (void*)TextView__removeTextChangedListener_IMPL_26730_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("sendAccessibilityEvent_IMPL_26757", NULL, (void*)TextView__sendAccessibilityEvent_IMPL_26757_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setEllipsize", NULL, NULL, offsetof(TextView_type, fp_setEllipsize), false, uVoid_typeof(), 1, ::g::Android::android::text::TextUtilsDLRTruncateAt_typeof()),
        new uFunction("setEllipsize_IMPL_26720", NULL, (void*)TextView__setEllipsize_IMPL_26720_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setEnabled_IMPL_26528", NULL, (void*)TextView__setEnabled_IMPL_26528_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setGravity", NULL, (void*)TextView__setGravity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setGravity_IMPL_26603", NULL, (void*)TextView__setGravity_IMPL_26603_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setHint", NULL, (void*)TextView__setHint_fn, 0, false, uVoid_typeof(), 1, ::g::Android::java::lang::CharSequence_typeof()),
        new uFunction("setHint_IMPL_26647", NULL, (void*)TextView__setHint_IMPL_26647_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setHintTextColor", NULL, (void*)TextView__setHintTextColor1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setHintTextColor_IMPL_26596", NULL, (void*)TextView__setHintTextColor_IMPL_26596_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setHorizontallyScrolling", NULL, (void*)TextView__setHorizontallyScrolling_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setHorizontallyScrolling_IMPL_26607", NULL, (void*)TextView__setHorizontallyScrolling_IMPL_26607_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setImeOptions", NULL, (void*)TextView__setImeOptions_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setImeOptions_IMPL_26653", NULL, (void*)TextView__setImeOptions_IMPL_26653_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setIncludeFontPadding", NULL, (void*)TextView__setIncludeFontPadding_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("setIncludeFontPadding_IMPL_26706", NULL, (void*)TextView__setIncludeFontPadding_IMPL_26706_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setInputType", NULL, (void*)TextView__setInputType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setInputType_IMPL_26650", NULL, (void*)TextView__setInputType_IMPL_26650_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setLineSpacing", NULL, (void*)TextView__setLineSpacing_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("setLineSpacing_IMPL_26628", NULL, (void*)TextView__setLineSpacing_IMPL_26628_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("setMaxLines", NULL, (void*)TextView__setMaxLines_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setMaxLines_IMPL_26612", NULL, (void*)TextView__setMaxLines_IMPL_26612_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setOnEditorActionListener", NULL, (void*)TextView__setOnEditorActionListener_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::widget::TextViewDLROnEditorActionListener_typeof()),
        new uFunction("setOnEditorActionListener_IMPL_26658", NULL, (void*)TextView__setOnEditorActionListener_IMPL_26658_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setPadding_IMPL_26567", NULL, (void*)TextView__setPadding_IMPL_26567_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setPaddingRelative_IMPL_26568", NULL, (void*)TextView__setPaddingRelative_IMPL_26568_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setSelected_IMPL_26737", NULL, (void*)TextView__setSelected_IMPL_26737_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("setText", NULL, (void*)TextView__setText_fn, 0, false, uVoid_typeof(), 1, ::g::Android::java::lang::CharSequence_typeof()),
        new uFunction("setText_IMPL_26640", NULL, (void*)TextView__setText_IMPL_26640_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setTextColor", NULL, (void*)TextView__setTextColor1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setTextColor_IMPL_26580", NULL, (void*)TextView__setTextColor_IMPL_26580_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setTextSize", NULL, (void*)TextView__setTextSize1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("setTextSize_IMPL_26575", NULL, (void*)TextView__setTextSize_IMPL_26575_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("setTypeface", NULL, (void*)TextView__setTypeface_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::graphics::Typeface_typeof()),
        new uFunction("setTypeface_IMPL_26578", NULL, (void*)TextView__setTypeface_IMPL_26578_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public TextView(Android.android.content.Context arg0) :3406
void TextView__ctor_8_fn(TextView* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_8(arg0);
}

// public TextView(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :3404
void TextView__ctor_11_fn(TextView* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_11(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :3403
void TextView___Init3_fn()
{
    TextView::_Init3();
}

// public void addTextChangedListener(Android.android.text.TextWatcher arg0) :4662
void TextView__addTextChangedListener_fn(TextView* __this, uObject* arg0)
{
    __this->addTextChangedListener(arg0);
}

// public static extern void addTextChangedListener_IMPL_26729(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5503
void TextView__addTextChangedListener_IMPL_26729_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextView::addTextChangedListener_IMPL_26729(*arg0_, *arg1_, arg2_);
}

// public override sealed void cancelLongPress() :4734
void TextView__cancelLongPress_fn(TextView* __this)
{
    TextView::cancelLongPress_IMPL_26741(__this->_subclassed, __this->_javaObject);
}

// public static extern void cancelLongPress_IMPL_26741(bool arg0, Android.Base.Primitives.ujobject arg1) :5539
void TextView__cancelLongPress_IMPL_26741_fn(bool* arg0_, jobject* arg1_)
{
    TextView::cancelLongPress_IMPL_26741(*arg0_, *arg1_);
}

// public override sealed void computeScroll() :4560
void TextView__computeScroll_fn(TextView* __this)
{
    TextView::computeScroll_IMPL_26712(__this->_subclassed, __this->_javaObject);
}

// public static extern void computeScroll_IMPL_26712(bool arg0, Android.Base.Primitives.ujobject arg1) :5452
void TextView__computeScroll_IMPL_26712_fn(bool* arg0_, jobject* arg1_)
{
    TextView::computeScroll_IMPL_26712(*arg0_, *arg1_);
}

// public override sealed void findViewsWithText(Android.java.util.ArrayList arg0, Android.java.lang.CharSequence arg1, int arg2) :4782
void TextView__findViewsWithText_fn(TextView* __this, ::g::Android::java::util::ArrayList* arg0, uObject* arg1, int* arg2)
{
    int arg2_ = *arg2;
    TextView::findViewsWithText_IMPL_26749(__this->_subclassed, __this->_javaObject, (uObject*)arg0, arg1, arg2_);
}

// public static extern void findViewsWithText_IMPL_26749(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) :5563
void TextView__findViewsWithText_IMPL_26749_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_)
{
    TextView::findViewsWithText_IMPL_26749(*arg0_, *arg1_, arg2_, arg3_, *arg4_);
}

// public override sealed int getBaseline() :4428
void TextView__getBaseline_fn(TextView* __this, int* __retval)
{
    return *__retval = TextView::getBaseline_IMPL_26690(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int getBaseline_IMPL_26690(bool arg0, Android.Base.Primitives.ujobject arg1) :5386
void TextView__getBaseline_IMPL_26690_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = TextView::getBaseline_IMPL_26690(*arg0_, *arg1_);
}

// public override sealed void getFocusedRect(Android.android.graphics.Rect arg0) :4410
void TextView__getFocusedRect_fn(TextView* __this, ::g::Android::android::graphics::Rect* arg0)
{
    TextView::getFocusedRect_IMPL_26687(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void getFocusedRect_IMPL_26687(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5377
void TextView__getFocusedRect_IMPL_26687_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextView::getFocusedRect_IMPL_26687(*arg0_, *arg1_, arg2_);
}

// public Android.android.content.res.ColorStateList getTextColors() :3780
void TextView__getTextColors_fn(TextView* __this, ::g::Android::android::content::res::ColorStateList** __retval)
{
    *__retval = __this->getTextColors();
}

// public static extern Android.Base.Wrappers.IJWrapper getTextColors_IMPL_26582(bool arg0, Android.Base.Primitives.ujobject arg1) :5062
void TextView__getTextColors_IMPL_26582_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = TextView::getTextColors_IMPL_26582(*arg0_, *arg1_);
}

// public override sealed bool hasOverlappingRendering() :4380
void TextView__hasOverlappingRendering_fn(TextView* __this, bool* __retval)
{
    return *__retval = TextView::hasOverlappingRendering_IMPL_26682(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool hasOverlappingRendering_IMPL_26682(bool arg0, Android.Base.Primitives.ujobject arg1) :5362
void TextView__hasOverlappingRendering_IMPL_26682_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = TextView::hasOverlappingRendering_IMPL_26682(*arg0_, *arg1_);
}

// public override sealed void invalidateDrawable(Android.android.graphics.drawable.Drawable arg0) :4374
void TextView__invalidateDrawable_fn(TextView* __this, ::g::Android::android::graphics::drawable::Drawable* arg0)
{
    TextView::invalidateDrawable_IMPL_26681(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void invalidateDrawable_IMPL_26681(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5359
void TextView__invalidateDrawable_IMPL_26681_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextView::invalidateDrawable_IMPL_26681(*arg0_, *arg1_, arg2_);
}

// public override void jumpDrawablesToCurrentState() :4368
void TextView__jumpDrawablesToCurrentState_fn(TextView* __this)
{
    TextView::jumpDrawablesToCurrentState_IMPL_26680(__this->_subclassed, __this->_javaObject);
}

// public static extern void jumpDrawablesToCurrentState_IMPL_26680(bool arg0, Android.Base.Primitives.ujobject arg1) :5356
void TextView__jumpDrawablesToCurrentState_IMPL_26680_fn(bool* arg0_, jobject* arg1_)
{
    TextView::jumpDrawablesToCurrentState_IMPL_26680(*arg0_, *arg1_);
}

// public TextView New(Android.android.content.Context arg0) :3406
void TextView__New9_fn(::g::Android::android::content::Context* arg0, TextView** __retval)
{
    *__retval = TextView::New9(arg0);
}

// public override sealed bool onCheckIsTextEditor() :4458
void TextView__onCheckIsTextEditor_fn(TextView* __this, bool* __retval)
{
    return *__retval = TextView::onCheckIsTextEditor_IMPL_26695(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool onCheckIsTextEditor_IMPL_26695(bool arg0, Android.Base.Primitives.ujobject arg1) :5401
void TextView__onCheckIsTextEditor_IMPL_26695_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = TextView::onCheckIsTextEditor_IMPL_26695(*arg0_, *arg1_);
}

// public override sealed Android.android.view.inputmethod.InputConnection onCreateInputConnection(Android.android.view.inputmethod.EditorInfo arg0) :4464
void TextView__onCreateInputConnection_fn(TextView* __this, ::g::Android::android::view::inputmethod::EditorInfo* arg0, uObject** __retval)
{
    return *__retval = TextView::onCreateInputConnection_IMPL_26696(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern Android.Base.Wrappers.IJWrapper onCreateInputConnection_IMPL_26696(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5404
void TextView__onCreateInputConnection_IMPL_26696_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = TextView::onCreateInputConnection_IMPL_26696(*arg0_, *arg1_, arg2_);
}

// public override sealed bool onDragEvent(Android.android.view.DragEvent arg0) :4884
void TextView__onDragEvent_fn(TextView* __this, ::g::Android::android::view::DragEvent* arg0, bool* __retval)
{
    return *__retval = TextView::onDragEvent_IMPL_26766(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onDragEvent_IMPL_26766(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5614
void TextView__onDragEvent_IMPL_26766_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = TextView::onDragEvent_IMPL_26766(*arg0_, *arg1_, arg2_);
}

// public override sealed void onFinishTemporaryDetach() :4680
void TextView__onFinishTemporaryDetach_fn(TextView* __this)
{
    TextView::onFinishTemporaryDetach_IMPL_26732(__this->_subclassed, __this->_javaObject);
}

// public static extern void onFinishTemporaryDetach_IMPL_26732(bool arg0, Android.Base.Primitives.ujobject arg1) :5512
void TextView__onFinishTemporaryDetach_IMPL_26732_fn(bool* arg0_, jobject* arg1_)
{
    TextView::onFinishTemporaryDetach_IMPL_26732(*arg0_, *arg1_);
}

// public override sealed bool onGenericMotionEvent(Android.android.view.MotionEvent arg0) :4722
void TextView__onGenericMotionEvent_fn(TextView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = TextView::onGenericMotionEvent_IMPL_26739(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onGenericMotionEvent_IMPL_26739(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5533
void TextView__onGenericMotionEvent_IMPL_26739_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = TextView::onGenericMotionEvent_IMPL_26739(*arg0_, *arg1_, arg2_);
}

// public override void onInitializeAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :4812
void TextView__onInitializeAccessibilityEvent_fn(TextView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    TextView::onInitializeAccessibilityEvent_IMPL_26754(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityEvent_IMPL_26754(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5578
void TextView__onInitializeAccessibilityEvent_IMPL_26754_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextView::onInitializeAccessibilityEvent_IMPL_26754(*arg0_, *arg1_, arg2_);
}

// public override void onInitializeAccessibilityNodeInfo(Android.android.view.accessibility.AccessibilityNodeInfo arg0) :4818
void TextView__onInitializeAccessibilityNodeInfo_fn(TextView* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0)
{
    TextView::onInitializeAccessibilityNodeInfo_IMPL_26755(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_26755(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5581
void TextView__onInitializeAccessibilityNodeInfo_IMPL_26755_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextView::onInitializeAccessibilityNodeInfo_IMPL_26755(*arg0_, *arg1_, arg2_);
}

// public override sealed bool onKeyDown(int arg0, Android.android.view.KeyEvent arg1) :4440
void TextView__onKeyDown_fn(TextView* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = TextView::onKeyDown_IMPL_26692(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool onKeyDown_IMPL_26692(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :5392
void TextView__onKeyDown_IMPL_26692_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = TextView::onKeyDown_IMPL_26692(*arg0_, *arg1_, *arg2_, arg3_);
}

// public override sealed bool onKeyMultiple(int arg0, int arg1, Android.android.view.KeyEvent arg2) :4446
void TextView__onKeyMultiple_fn(TextView* __this, int* arg0, int* arg1, ::g::Android::android::view::KeyEvent* arg2, bool* __retval)
{
    int arg0_ = *arg0;
    int arg1_ = *arg1;
    return *__retval = TextView::onKeyMultiple_IMPL_26693(__this->_subclassed, __this->_javaObject, arg0_, arg1_, (uObject*)arg2), void();
}

// public static extern bool onKeyMultiple_IMPL_26693(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) :5395
void TextView__onKeyMultiple_IMPL_26693_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, bool* __retval)
{
    *__retval = TextView::onKeyMultiple_IMPL_26693(*arg0_, *arg1_, *arg2_, *arg3_, arg4_);
}

// public override sealed bool onKeyPreIme(int arg0, Android.android.view.KeyEvent arg1) :4434
void TextView__onKeyPreIme_fn(TextView* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = TextView::onKeyPreIme_IMPL_26691(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool onKeyPreIme_IMPL_26691(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :5389
void TextView__onKeyPreIme_IMPL_26691_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = TextView::onKeyPreIme_IMPL_26691(*arg0_, *arg1_, *arg2_, arg3_);
}

// public override sealed bool onKeyShortcut(int arg0, Android.android.view.KeyEvent arg1) :4800
void TextView__onKeyShortcut_fn(TextView* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = TextView::onKeyShortcut_IMPL_26752(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool onKeyShortcut_IMPL_26752(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :5572
void TextView__onKeyShortcut_IMPL_26752_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = TextView::onKeyShortcut_IMPL_26752(*arg0_, *arg1_, *arg2_, arg3_);
}

// public override sealed bool onKeyUp(int arg0, Android.android.view.KeyEvent arg1) :4452
void TextView__onKeyUp_fn(TextView* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = TextView::onKeyUp_IMPL_26694(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool onKeyUp_IMPL_26694(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :5398
void TextView__onKeyUp_IMPL_26694_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = TextView::onKeyUp_IMPL_26694(*arg0_, *arg1_, *arg2_, arg3_);
}

// public override void onPopulateAccessibilityEvent(Android.android.view.accessibility.AccessibilityEvent arg0) :4806
void TextView__onPopulateAccessibilityEvent_fn(TextView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0)
{
    TextView::onPopulateAccessibilityEvent_IMPL_26753(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void onPopulateAccessibilityEvent_IMPL_26753(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5575
void TextView__onPopulateAccessibilityEvent_IMPL_26753_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextView::onPopulateAccessibilityEvent_IMPL_26753(*arg0_, *arg1_, arg2_);
}

// public override sealed void onRtlPropertiesChanged(int arg0) :4890
void TextView__onRtlPropertiesChanged_fn(TextView* __this, int* arg0)
{
    int arg0_ = *arg0;
    TextView::onRtlPropertiesChanged_IMPL_26767(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void onRtlPropertiesChanged_IMPL_26767(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :5617
void TextView__onRtlPropertiesChanged_IMPL_26767_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    TextView::onRtlPropertiesChanged_IMPL_26767(*arg0_, *arg1_, *arg2_);
}

// public override sealed void onScreenStateChanged(int arg0) :4326
void TextView__onScreenStateChanged_fn(TextView* __this, int* arg0)
{
    int arg0_ = *arg0;
    TextView::onScreenStateChanged_IMPL_26673(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void onScreenStateChanged_IMPL_26673(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :5335
void TextView__onScreenStateChanged_IMPL_26673_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    TextView::onScreenStateChanged_IMPL_26673(*arg0_, *arg1_, *arg2_);
}

// protected override sealed void onScrollChanged(int arg0, int arg1, int arg2, int arg3) :4854
void TextView__onScrollChanged_fn(TextView* __this, int* arg0, int* arg1, int* arg2, int* arg3)
{
    int arg0_ = *arg0;
    int arg1_ = *arg1;
    int arg2_ = *arg2;
    int arg3_ = *arg3;
    TextView::onScrollChanged_IMPL_26761(__this->_subclassed, __this->_javaObject, arg0_, arg1_, arg2_, arg3_);
}

// public static extern void onScrollChanged_IMPL_26761(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :5599
void TextView__onScrollChanged_IMPL_26761_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    TextView::onScrollChanged_IMPL_26761(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public override sealed void onStartTemporaryDetach() :4674
void TextView__onStartTemporaryDetach_fn(TextView* __this)
{
    TextView::onStartTemporaryDetach_IMPL_26731(__this->_subclassed, __this->_javaObject);
}

// public static extern void onStartTemporaryDetach_IMPL_26731(bool arg0, Android.Base.Primitives.ujobject arg1) :5509
void TextView__onStartTemporaryDetach_IMPL_26731_fn(bool* arg0_, jobject* arg1_)
{
    TextView::onStartTemporaryDetach_IMPL_26731(*arg0_, *arg1_);
}

// public override bool onTouchEvent(Android.android.view.MotionEvent arg0) :4716
void TextView__onTouchEvent_fn(TextView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = TextView::onTouchEvent_IMPL_26738(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onTouchEvent_IMPL_26738(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5530
void TextView__onTouchEvent_IMPL_26738_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = TextView::onTouchEvent_IMPL_26738(*arg0_, *arg1_, arg2_);
}

// public override sealed bool onTrackballEvent(Android.android.view.MotionEvent arg0) :4740
void TextView__onTrackballEvent_fn(TextView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval)
{
    return *__retval = TextView::onTrackballEvent_IMPL_26742(__this->_subclassed, __this->_javaObject, (uObject*)arg0), void();
}

// public static extern bool onTrackballEvent_IMPL_26742(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5542
void TextView__onTrackballEvent_IMPL_26742_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = TextView::onTrackballEvent_IMPL_26742(*arg0_, *arg1_, arg2_);
}

// public override sealed void onWindowFocusChanged(bool arg0) :4692
void TextView__onWindowFocusChanged_fn(TextView* __this, bool* arg0)
{
    bool arg0_ = *arg0;
    TextView::onWindowFocusChanged_IMPL_26734(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void onWindowFocusChanged_IMPL_26734(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :5518
void TextView__onWindowFocusChanged_IMPL_26734_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    TextView::onWindowFocusChanged_IMPL_26734(*arg0_, *arg1_, *arg2_);
}

// public override sealed bool performAccessibilityAction(int arg0, Android.android.os.Bundle arg1) :4824
void TextView__performAccessibilityAction_fn(TextView* __this, int* arg0, ::g::Android::android::os::Bundle* arg1, bool* __retval)
{
    int arg0_ = *arg0;
    return *__retval = TextView::performAccessibilityAction_IMPL_26756(__this->_subclassed, __this->_javaObject, arg0_, (uObject*)arg1), void();
}

// public static extern bool performAccessibilityAction_IMPL_26756(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) :5584
void TextView__performAccessibilityAction_IMPL_26756_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval)
{
    *__retval = TextView::performAccessibilityAction_IMPL_26756(*arg0_, *arg1_, *arg2_, arg3_);
}

// public override sealed bool performLongClick() :4848
void TextView__performLongClick_fn(TextView* __this, bool* __retval)
{
    return *__retval = TextView::performLongClick_IMPL_26760(__this->_subclassed, __this->_javaObject), void();
}

// public static extern bool performLongClick_IMPL_26760(bool arg0, Android.Base.Primitives.ujobject arg1) :5596
void TextView__performLongClick_IMPL_26760_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = TextView::performLongClick_IMPL_26760(*arg0_, *arg1_);
}

// public void removeTextChangedListener(Android.android.text.TextWatcher arg0) :4668
void TextView__removeTextChangedListener_fn(TextView* __this, uObject* arg0)
{
    __this->removeTextChangedListener(arg0);
}

// public static extern void removeTextChangedListener_IMPL_26730(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5506
void TextView__removeTextChangedListener_IMPL_26730_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextView::removeTextChangedListener_IMPL_26730(*arg0_, *arg1_, arg2_);
}

// public override sealed void sendAccessibilityEvent(int arg0) :4830
void TextView__sendAccessibilityEvent_fn(TextView* __this, int* arg0)
{
    int arg0_ = *arg0;
    TextView::sendAccessibilityEvent_IMPL_26757(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void sendAccessibilityEvent_IMPL_26757(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :5587
void TextView__sendAccessibilityEvent_IMPL_26757_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    TextView::sendAccessibilityEvent_IMPL_26757(*arg0_, *arg1_, *arg2_);
}

// public virtual void setEllipsize(Android.android.text.TextUtilsDLRTruncateAt arg0) :4608
void TextView__setEllipsize_fn(TextView* __this, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg0)
{
    TextView::setEllipsize_IMPL_26720(__this->_subclassed, __this->_javaObject, (uObject*)arg0);
}

// public static extern void setEllipsize_IMPL_26720(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5476
void TextView__setEllipsize_IMPL_26720_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextView::setEllipsize_IMPL_26720(*arg0_, *arg1_, arg2_);
}

// public override sealed void setEnabled(bool arg0) :3456
void TextView__setEnabled_fn(TextView* __this, bool* arg0)
{
    bool arg0_ = *arg0;
    TextView::setEnabled_IMPL_26528(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setEnabled_IMPL_26528(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :4900
void TextView__setEnabled_IMPL_26528_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    TextView::setEnabled_IMPL_26528(*arg0_, *arg1_, *arg2_);
}

// public void setGravity(int arg0) :3906
void TextView__setGravity_fn(TextView* __this, int* arg0)
{
    __this->setGravity(*arg0);
}

// public static extern void setGravity_IMPL_26603(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :5125
void TextView__setGravity_IMPL_26603_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    TextView::setGravity_IMPL_26603(*arg0_, *arg1_, *arg2_);
}

// public void setHint(Android.java.lang.CharSequence arg0) :4170
void TextView__setHint_fn(TextView* __this, uObject* arg0)
{
    __this->setHint(arg0);
}

// public static extern void setHint_IMPL_26647(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5257
void TextView__setHint_IMPL_26647_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextView::setHint_IMPL_26647(*arg0_, *arg1_, arg2_);
}

// public void setHintTextColor(int arg0) :3864
void TextView__setHintTextColor1_fn(TextView* __this, int* arg0)
{
    __this->setHintTextColor1(*arg0);
}

// public static extern void setHintTextColor_IMPL_26596(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :5104
void TextView__setHintTextColor_IMPL_26596_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    TextView::setHintTextColor_IMPL_26596(*arg0_, *arg1_, *arg2_);
}

// public void setHorizontallyScrolling(bool arg0) :3930
void TextView__setHorizontallyScrolling_fn(TextView* __this, bool* arg0)
{
    __this->setHorizontallyScrolling(*arg0);
}

// public static extern void setHorizontallyScrolling_IMPL_26607(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :5137
void TextView__setHorizontallyScrolling_IMPL_26607_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    TextView::setHorizontallyScrolling_IMPL_26607(*arg0_, *arg1_, *arg2_);
}

// public void setImeOptions(int arg0) :4206
void TextView__setImeOptions_fn(TextView* __this, int* arg0)
{
    __this->setImeOptions(*arg0);
}

// public static extern void setImeOptions_IMPL_26653(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :5275
void TextView__setImeOptions_IMPL_26653_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    TextView::setImeOptions_IMPL_26653(*arg0_, *arg1_, *arg2_);
}

// public void setIncludeFontPadding(bool arg0) :4524
void TextView__setIncludeFontPadding_fn(TextView* __this, bool* arg0)
{
    __this->setIncludeFontPadding(*arg0);
}

// public static extern void setIncludeFontPadding_IMPL_26706(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :5434
void TextView__setIncludeFontPadding_IMPL_26706_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    TextView::setIncludeFontPadding_IMPL_26706(*arg0_, *arg1_, *arg2_);
}

// public void setInputType(int arg0) :4188
void TextView__setInputType_fn(TextView* __this, int* arg0)
{
    __this->setInputType(*arg0);
}

// public static extern void setInputType_IMPL_26650(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :5266
void TextView__setInputType_IMPL_26650_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    TextView::setInputType_IMPL_26650(*arg0_, *arg1_, *arg2_);
}

// public void setLineSpacing(float arg0, float arg1) :4056
void TextView__setLineSpacing_fn(TextView* __this, float* arg0, float* arg1)
{
    __this->setLineSpacing(*arg0, *arg1);
}

// public static extern void setLineSpacing_IMPL_26628(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2, float arg3) :5200
void TextView__setLineSpacing_IMPL_26628_fn(bool* arg0_, jobject* arg1_, float* arg2_, float* arg3_)
{
    TextView::setLineSpacing_IMPL_26628(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setMaxLines(int arg0) :3960
void TextView__setMaxLines_fn(TextView* __this, int* arg0)
{
    __this->setMaxLines(*arg0);
}

// public static extern void setMaxLines_IMPL_26612(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :5152
void TextView__setMaxLines_IMPL_26612_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    TextView::setMaxLines_IMPL_26612(*arg0_, *arg1_, *arg2_);
}

// public void setOnEditorActionListener(Android.android.widget.TextViewDLROnEditorActionListener arg0) :4236
void TextView__setOnEditorActionListener_fn(TextView* __this, uObject* arg0)
{
    __this->setOnEditorActionListener(arg0);
}

// public static extern void setOnEditorActionListener_IMPL_26658(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5290
void TextView__setOnEditorActionListener_IMPL_26658_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextView::setOnEditorActionListener_IMPL_26658(*arg0_, *arg1_, arg2_);
}

// public override sealed void setPadding(int arg0, int arg1, int arg2, int arg3) :3690
void TextView__setPadding_fn(TextView* __this, int* arg0, int* arg1, int* arg2, int* arg3)
{
    int arg0_ = *arg0;
    int arg1_ = *arg1;
    int arg2_ = *arg2;
    int arg3_ = *arg3;
    TextView::setPadding_IMPL_26567(__this->_subclassed, __this->_javaObject, arg0_, arg1_, arg2_, arg3_);
}

// public static extern void setPadding_IMPL_26567(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :5017
void TextView__setPadding_IMPL_26567_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    TextView::setPadding_IMPL_26567(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public override sealed void setPaddingRelative(int arg0, int arg1, int arg2, int arg3) :3696
void TextView__setPaddingRelative_fn(TextView* __this, int* arg0, int* arg1, int* arg2, int* arg3)
{
    int arg0_ = *arg0;
    int arg1_ = *arg1;
    int arg2_ = *arg2;
    int arg3_ = *arg3;
    TextView::setPaddingRelative_IMPL_26568(__this->_subclassed, __this->_javaObject, arg0_, arg1_, arg2_, arg3_);
}

// public static extern void setPaddingRelative_IMPL_26568(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :5020
void TextView__setPaddingRelative_IMPL_26568_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    TextView::setPaddingRelative_IMPL_26568(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public override sealed void setSelected(bool arg0) :4710
void TextView__setSelected_fn(TextView* __this, bool* arg0)
{
    bool arg0_ = *arg0;
    TextView::setSelected_IMPL_26737(__this->_subclassed, __this->_javaObject, arg0_);
}

// public static extern void setSelected_IMPL_26737(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) :5527
void TextView__setSelected_IMPL_26737_fn(bool* arg0_, jobject* arg1_, bool* arg2_)
{
    TextView::setSelected_IMPL_26737(*arg0_, *arg1_, *arg2_);
}

// public void setText(Android.java.lang.CharSequence arg0) :4128
void TextView__setText_fn(TextView* __this, uObject* arg0)
{
    __this->setText(arg0);
}

// public static extern void setText_IMPL_26640(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5236
void TextView__setText_IMPL_26640_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextView::setText_IMPL_26640(*arg0_, *arg1_, arg2_);
}

// public void setTextColor(int arg0) :3768
void TextView__setTextColor1_fn(TextView* __this, int* arg0)
{
    __this->setTextColor1(*arg0);
}

// public static extern void setTextColor_IMPL_26580(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :5056
void TextView__setTextColor_IMPL_26580_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    TextView::setTextColor_IMPL_26580(*arg0_, *arg1_, *arg2_);
}

// public void setTextSize(int arg0, float arg1) :3738
void TextView__setTextSize1_fn(TextView* __this, int* arg0, float* arg1)
{
    __this->setTextSize1(*arg0, *arg1);
}

// public static extern void setTextSize_IMPL_26575(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, float arg3) :5041
void TextView__setTextSize_IMPL_26575_fn(bool* arg0_, jobject* arg1_, int* arg2_, float* arg3_)
{
    TextView::setTextSize_IMPL_26575(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void setTypeface(Android.android.graphics.Typeface arg0) :3756
void TextView__setTypeface_fn(TextView* __this, ::g::Android::android::graphics::Typeface* arg0)
{
    __this->setTypeface(arg0);
}

// public static extern void setTypeface_IMPL_26578(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :5050
void TextView__setTypeface_IMPL_26578_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    TextView::setTypeface_IMPL_26578(*arg0_, *arg1_, arg2_);
}

jclass TextView::_javaClass3_;
jmethodID TextView::addTextChangedListener_26729_ID_;
jmethodID TextView::cancelLongPress_26741_ID_;
jmethodID TextView::computeScroll_26712_ID_;
jmethodID TextView::findViewsWithText_26749_ID_;
jmethodID TextView::getBaseline_26690_ID_;
jmethodID TextView::getFocusedRect_26687_ID_;
jmethodID TextView::getTextColors_26582_ID_;
jmethodID TextView::hasOverlappingRendering_26682_ID_;
jmethodID TextView::invalidateDrawable_26681_ID_;
jmethodID TextView::jumpDrawablesToCurrentState_26680_ID_;
jmethodID TextView::onCheckIsTextEditor_26695_ID_;
jmethodID TextView::onCreateInputConnection_26696_ID_;
jmethodID TextView::onDragEvent_26766_ID_;
jmethodID TextView::onFinishTemporaryDetach_26732_ID_;
jmethodID TextView::onGenericMotionEvent_26739_ID_;
jmethodID TextView::onInitializeAccessibilityEvent_26754_ID_;
jmethodID TextView::onInitializeAccessibilityNodeInfo_26755_ID_;
jmethodID TextView::onKeyDown_26692_ID_;
jmethodID TextView::onKeyMultiple_26693_ID_;
jmethodID TextView::onKeyPreIme_26691_ID_;
jmethodID TextView::onKeyShortcut_26752_ID_;
jmethodID TextView::onKeyUp_26694_ID_;
jmethodID TextView::onPopulateAccessibilityEvent_26753_ID_;
jmethodID TextView::onRtlPropertiesChanged_26767_ID_;
jmethodID TextView::onScreenStateChanged_26673_ID_;
jmethodID TextView::onScrollChanged_26761_ID_;
jmethodID TextView::onStartTemporaryDetach_26731_ID_;
jmethodID TextView::onTouchEvent_26738_ID_;
jmethodID TextView::onTrackballEvent_26742_ID_;
jmethodID TextView::onWindowFocusChanged_26734_ID_;
jmethodID TextView::performAccessibilityAction_26756_ID_;
jmethodID TextView::performLongClick_26760_ID_;
jmethodID TextView::removeTextChangedListener_26730_ID_;
jmethodID TextView::sendAccessibilityEvent_26757_ID_;
jmethodID TextView::setEllipsize_26720_ID_;
jmethodID TextView::setEnabled_26528_ID_;
jmethodID TextView::setGravity_26603_ID_;
jmethodID TextView::setHint_26647_ID_;
jmethodID TextView::setHintTextColor_26596_ID_;
jmethodID TextView::setHorizontallyScrolling_26607_ID_;
jmethodID TextView::setImeOptions_26653_ID_;
jmethodID TextView::setIncludeFontPadding_26706_ID_;
jmethodID TextView::setInputType_26650_ID_;
jmethodID TextView::setLineSpacing_26628_ID_;
jmethodID TextView::setMaxLines_26612_ID_;
jmethodID TextView::setOnEditorActionListener_26658_ID_;
jmethodID TextView::setPadding_26567_ID_;
jmethodID TextView::setPaddingRelative_26568_ID_;
jmethodID TextView::setSelected_26737_ID_;
jmethodID TextView::setText_26640_ID_;
jmethodID TextView::setTextColor_26580_ID_;
jmethodID TextView::setTextSize_26575_ID_;
jmethodID TextView::setTypeface_26578_ID_;
jmethodID TextView::TextView_26525_ID_c_;

// public TextView(Android.android.content.Context arg0) [instance] :3406
void TextView::ctor_8(::g::Android::android::content::Context* arg0)
{
    ctor_7(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());;
    CACHE_METHOD(TextView::TextView_26525_ID_c(),TextView::_javaClass3(),"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.TextView.<init> could not be cached",73);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(TextView::_javaClass3(), TextView::TextView_26525_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public TextView(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :3404
void TextView::ctor_11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_7(obj, utype, hasFallbackClass, resolveType);
}

// public void addTextChangedListener(Android.android.text.TextWatcher arg0) [instance] :4662
void TextView::addTextChangedListener(uObject* arg0)
{
    TextView::addTextChangedListener_IMPL_26729(_subclassed, _javaObject, arg0);
}

// public Android.android.content.res.ColorStateList getTextColors() [instance] :3780
::g::Android::android::content::res::ColorStateList* TextView::getTextColors()
{
    return uCast< ::g::Android::android::content::res::ColorStateList*>(TextView::getTextColors_IMPL_26582(_subclassed, _javaObject), ::TYPES[8/*Android.android.content.res.ColorStateList*/]);
}

// public void removeTextChangedListener(Android.android.text.TextWatcher arg0) [instance] :4668
void TextView::removeTextChangedListener(uObject* arg0)
{
    TextView::removeTextChangedListener_IMPL_26730(_subclassed, _javaObject, arg0);
}

// public void setGravity(int arg0) [instance] :3906
void TextView::setGravity(int arg0)
{
    int arg0_ = arg0;
    TextView::setGravity_IMPL_26603(_subclassed, _javaObject, arg0_);
}

// public void setHint(Android.java.lang.CharSequence arg0) [instance] :4170
void TextView::setHint(uObject* arg0)
{
    TextView::setHint_IMPL_26647(_subclassed, _javaObject, arg0);
}

// public void setHintTextColor(int arg0) [instance] :3864
void TextView::setHintTextColor1(int arg0)
{
    int arg0_ = arg0;
    TextView::setHintTextColor_IMPL_26596(_subclassed, _javaObject, arg0_);
}

// public void setHorizontallyScrolling(bool arg0) [instance] :3930
void TextView::setHorizontallyScrolling(bool arg0)
{
    bool arg0_ = arg0;
    TextView::setHorizontallyScrolling_IMPL_26607(_subclassed, _javaObject, arg0_);
}

// public void setImeOptions(int arg0) [instance] :4206
void TextView::setImeOptions(int arg0)
{
    int arg0_ = arg0;
    TextView::setImeOptions_IMPL_26653(_subclassed, _javaObject, arg0_);
}

// public void setIncludeFontPadding(bool arg0) [instance] :4524
void TextView::setIncludeFontPadding(bool arg0)
{
    bool arg0_ = arg0;
    TextView::setIncludeFontPadding_IMPL_26706(_subclassed, _javaObject, arg0_);
}

// public void setInputType(int arg0) [instance] :4188
void TextView::setInputType(int arg0)
{
    int arg0_ = arg0;
    TextView::setInputType_IMPL_26650(_subclassed, _javaObject, arg0_);
}

// public void setLineSpacing(float arg0, float arg1) [instance] :4056
void TextView::setLineSpacing(float arg0, float arg1)
{
    float arg0_ = arg0;
    float arg1_ = arg1;
    TextView::setLineSpacing_IMPL_26628(_subclassed, _javaObject, arg0_, arg1_);
}

// public void setMaxLines(int arg0) [instance] :3960
void TextView::setMaxLines(int arg0)
{
    int arg0_ = arg0;
    TextView::setMaxLines_IMPL_26612(_subclassed, _javaObject, arg0_);
}

// public void setOnEditorActionListener(Android.android.widget.TextViewDLROnEditorActionListener arg0) [instance] :4236
void TextView::setOnEditorActionListener(uObject* arg0)
{
    TextView::setOnEditorActionListener_IMPL_26658(_subclassed, _javaObject, arg0);
}

// public void setText(Android.java.lang.CharSequence arg0) [instance] :4128
void TextView::setText(uObject* arg0)
{
    TextView::setText_IMPL_26640(_subclassed, _javaObject, arg0);
}

// public void setTextColor(int arg0) [instance] :3768
void TextView::setTextColor1(int arg0)
{
    int arg0_ = arg0;
    TextView::setTextColor_IMPL_26580(_subclassed, _javaObject, arg0_);
}

// public void setTextSize(int arg0, float arg1) [instance] :3738
void TextView::setTextSize1(int arg0, float arg1)
{
    int arg0_ = arg0;
    float arg1_ = arg1;
    TextView::setTextSize_IMPL_26575(_subclassed, _javaObject, arg0_, arg1_);
}

// public void setTypeface(Android.android.graphics.Typeface arg0) [instance] :3756
void TextView::setTypeface(::g::Android::android::graphics::Typeface* arg0)
{
    TextView::setTypeface_IMPL_26578(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern new void _Init() [static] :3403
void TextView::_Init3()
{
    if (TextView::_javaClass3()) { return; }
    INIT_JNI;
    TextView::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/TextView"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!TextView::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.TextView'", 47);; }
}

// public static extern void addTextChangedListener_IMPL_26729(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5503
void TextView::addTextChangedListener_IMPL_26729(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::addTextChangedListener_26729_ID(),TextView::_javaClass3(),"addTextChangedListener","(Landroid/text/TextWatcher;)V",GetMethodID,"Id for fallback method android.widget.TextView.addTextChangedListener could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::addTextChangedListener_26729_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::addTextChangedListener_26729_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void cancelLongPress_IMPL_26741(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5539
void TextView::cancelLongPress_IMPL_26741(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::cancelLongPress_26741_ID(),TextView::_javaClass3(),"cancelLongPress","()V",GetMethodID,"Id for fallback method android.widget.TextView.cancelLongPress could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::cancelLongPress_26741_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::cancelLongPress_26741_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void computeScroll_IMPL_26712(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5452
void TextView::computeScroll_IMPL_26712(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::computeScroll_26712_ID(),TextView::_javaClass3(),"computeScroll","()V",GetMethodID,"Id for fallback method android.widget.TextView.computeScroll could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::computeScroll_26712_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::computeScroll_26712_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void findViewsWithText_IMPL_26749(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, int arg4) [static] :5563
void TextView::findViewsWithText_IMPL_26749(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::findViewsWithText_26749_ID(),TextView::_javaClass3(),"findViewsWithText","(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V",GetMethodID,"Id for fallback method android.widget.TextView.findViewsWithText could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::findViewsWithText_26749_ID(), _obArg2, _obArg3, ((jint)arg4_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::findViewsWithText_26749_ID(), _obArg2, _obArg3, ((jint)arg4_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern int getBaseline_IMPL_26690(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5386
int TextView::getBaseline_IMPL_26690(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    int result;
    CACHE_METHOD(TextView::getBaseline_26690_ID(),TextView::_javaClass3(),"getBaseline","()I",GetMethodID,"Id for fallback method android.widget.TextView.getBaseline could not be cached",78);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, TextView::_javaClass3(), TextView::getBaseline_26690_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, TextView::getBaseline_26690_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void getFocusedRect_IMPL_26687(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5377
void TextView::getFocusedRect_IMPL_26687(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::getFocusedRect_26687_ID(),TextView::_javaClass3(),"getFocusedRect","(Landroid/graphics/Rect;)V",GetMethodID,"Id for fallback method android.widget.TextView.getFocusedRect could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::getFocusedRect_26687_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::getFocusedRect_26687_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern Android.Base.Wrappers.IJWrapper getTextColors_IMPL_26582(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5062
uObject* TextView::getTextColors_IMPL_26582(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    uObject* result;
    CACHE_METHOD(TextView::getTextColors_26582_ID(),TextView::_javaClass3(),"getTextColors","()Landroid/content/res/ColorStateList;",GetMethodID,"Id for fallback method android.widget.TextView.getTextColors could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, TextView::_javaClass3(), TextView::getTextColors_26582_ID()),result,::g::Android::android::content::res::ColorStateList_typeof(),::g::Android::android::content::res::ColorStateList*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, TextView::getTextColors_26582_ID()),result,::g::Android::android::content::res::ColorStateList_typeof(),::g::Android::android::content::res::ColorStateList*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool hasOverlappingRendering_IMPL_26682(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5362
bool TextView::hasOverlappingRendering_IMPL_26682(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    bool result;
    CACHE_METHOD(TextView::hasOverlappingRendering_26682_ID(),TextView::_javaClass3(),"hasOverlappingRendering","()Z",GetMethodID,"Id for fallback method android.widget.TextView.hasOverlappingRendering could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::hasOverlappingRendering_26682_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::hasOverlappingRendering_26682_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void invalidateDrawable_IMPL_26681(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5359
void TextView::invalidateDrawable_IMPL_26681(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::invalidateDrawable_26681_ID(),TextView::_javaClass3(),"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.widget.TextView.invalidateDrawable could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::invalidateDrawable_26681_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::invalidateDrawable_26681_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void jumpDrawablesToCurrentState_IMPL_26680(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5356
void TextView::jumpDrawablesToCurrentState_IMPL_26680(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::jumpDrawablesToCurrentState_26680_ID(),TextView::_javaClass3(),"jumpDrawablesToCurrentState","()V",GetMethodID,"Id for fallback method android.widget.TextView.jumpDrawablesToCurrentState could not be cached",94);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::jumpDrawablesToCurrentState_26680_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::jumpDrawablesToCurrentState_26680_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public TextView New(Android.android.content.Context arg0) [static] :3406
TextView* TextView::New9(::g::Android::android::content::Context* arg0)
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_8(arg0);
    return obj2;
}

// public static extern bool onCheckIsTextEditor_IMPL_26695(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5401
bool TextView::onCheckIsTextEditor_IMPL_26695(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    bool result;
    CACHE_METHOD(TextView::onCheckIsTextEditor_26695_ID(),TextView::_javaClass3(),"onCheckIsTextEditor","()Z",GetMethodID,"Id for fallback method android.widget.TextView.onCheckIsTextEditor could not be cached",86);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::onCheckIsTextEditor_26695_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::onCheckIsTextEditor_26695_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper onCreateInputConnection_IMPL_26696(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5404
uObject* TextView::onCreateInputConnection_IMPL_26696(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(TextView::onCreateInputConnection_26696_ID(),TextView::_javaClass3(),"onCreateInputConnection","(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;",GetMethodID,"Id for fallback method android.widget.TextView.onCreateInputConnection could not be cached",90);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, TextView::_javaClass3(), TextView::onCreateInputConnection_26696_ID(), _obArg2),result,::g::Android::Fallbacks::Android_android_view_inputmethod_InputConnection_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, TextView::onCreateInputConnection_26696_ID(), _obArg2),result,::g::Android::Fallbacks::Android_android_view_inputmethod_InputConnection_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onDragEvent_IMPL_26766(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5614
bool TextView::onDragEvent_IMPL_26766(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(TextView::onDragEvent_26766_ID(),TextView::_javaClass3(),"onDragEvent","(Landroid/view/DragEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onDragEvent could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::onDragEvent_26766_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::onDragEvent_26766_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onFinishTemporaryDetach_IMPL_26732(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5512
void TextView::onFinishTemporaryDetach_IMPL_26732(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::onFinishTemporaryDetach_26732_ID(),TextView::_javaClass3(),"onFinishTemporaryDetach","()V",GetMethodID,"Id for fallback method android.widget.TextView.onFinishTemporaryDetach could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::onFinishTemporaryDetach_26732_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::onFinishTemporaryDetach_26732_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onGenericMotionEvent_IMPL_26739(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5533
bool TextView::onGenericMotionEvent_IMPL_26739(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(TextView::onGenericMotionEvent_26739_ID(),TextView::_javaClass3(),"onGenericMotionEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onGenericMotionEvent could not be cached",87);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::onGenericMotionEvent_26739_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::onGenericMotionEvent_26739_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onInitializeAccessibilityEvent_IMPL_26754(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5578
void TextView::onInitializeAccessibilityEvent_IMPL_26754(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::onInitializeAccessibilityEvent_26754_ID(),TextView::_javaClass3(),"onInitializeAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.TextView.onInitializeAccessibilityEvent could not be cached",97);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::onInitializeAccessibilityEvent_26754_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::onInitializeAccessibilityEvent_26754_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onInitializeAccessibilityNodeInfo_IMPL_26755(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5581
void TextView::onInitializeAccessibilityNodeInfo_IMPL_26755(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::onInitializeAccessibilityNodeInfo_26755_ID(),TextView::_javaClass3(),"onInitializeAccessibilityNodeInfo","(Landroid/view/accessibility/AccessibilityNodeInfo;)V",GetMethodID,"Id for fallback method android.widget.TextView.onInitializeAccessibilityNodeInfo could not be cached",100);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::onInitializeAccessibilityNodeInfo_26755_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::onInitializeAccessibilityNodeInfo_26755_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onKeyDown_IMPL_26692(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :5392
bool TextView::onKeyDown_IMPL_26692(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(TextView::onKeyDown_26692_ID(),TextView::_javaClass3(),"onKeyDown","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onKeyDown could not be cached",76);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::onKeyDown_26692_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::onKeyDown_26692_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onKeyMultiple_IMPL_26693(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :5395
bool TextView::onKeyMultiple_IMPL_26693(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(TextView::onKeyMultiple_26693_ID(),TextView::_javaClass3(),"onKeyMultiple","(IILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onKeyMultiple could not be cached",80);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::onKeyMultiple_26693_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::onKeyMultiple_26693_ID(), ((jint)arg2_), ((jint)arg3_), _obArg4));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onKeyPreIme_IMPL_26691(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :5389
bool TextView::onKeyPreIme_IMPL_26691(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(TextView::onKeyPreIme_26691_ID(),TextView::_javaClass3(),"onKeyPreIme","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onKeyPreIme could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::onKeyPreIme_26691_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::onKeyPreIme_26691_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onKeyShortcut_IMPL_26752(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :5572
bool TextView::onKeyShortcut_IMPL_26752(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(TextView::onKeyShortcut_26752_ID(),TextView::_javaClass3(),"onKeyShortcut","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onKeyShortcut could not be cached",80);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::onKeyShortcut_26752_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::onKeyShortcut_26752_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onKeyUp_IMPL_26694(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :5398
bool TextView::onKeyUp_IMPL_26694(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(TextView::onKeyUp_26694_ID(),TextView::_javaClass3(),"onKeyUp","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onKeyUp could not be cached",74);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::onKeyUp_26694_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::onKeyUp_26694_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onPopulateAccessibilityEvent_IMPL_26753(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5575
void TextView::onPopulateAccessibilityEvent_IMPL_26753(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::onPopulateAccessibilityEvent_26753_ID(),TextView::_javaClass3(),"onPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)V",GetMethodID,"Id for fallback method android.widget.TextView.onPopulateAccessibilityEvent could not be cached",95);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::onPopulateAccessibilityEvent_26753_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::onPopulateAccessibilityEvent_26753_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onRtlPropertiesChanged_IMPL_26767(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :5617
void TextView::onRtlPropertiesChanged_IMPL_26767(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::onRtlPropertiesChanged_26767_ID(),TextView::_javaClass3(),"onRtlPropertiesChanged","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.onRtlPropertiesChanged could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::onRtlPropertiesChanged_26767_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::onRtlPropertiesChanged_26767_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onScreenStateChanged_IMPL_26673(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :5335
void TextView::onScreenStateChanged_IMPL_26673(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::onScreenStateChanged_26673_ID(),TextView::_javaClass3(),"onScreenStateChanged","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.onScreenStateChanged could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::onScreenStateChanged_26673_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::onScreenStateChanged_26673_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onScrollChanged_IMPL_26761(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :5599
void TextView::onScrollChanged_IMPL_26761(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::onScrollChanged_26761_ID(),TextView::_javaClass3(),"onScrollChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.TextView.onScrollChanged could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::onScrollChanged_26761_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::onScrollChanged_26761_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void onStartTemporaryDetach_IMPL_26731(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5509
void TextView::onStartTemporaryDetach_IMPL_26731(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::onStartTemporaryDetach_26731_ID(),TextView::_javaClass3(),"onStartTemporaryDetach","()V",GetMethodID,"Id for fallback method android.widget.TextView.onStartTemporaryDetach could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::onStartTemporaryDetach_26731_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::onStartTemporaryDetach_26731_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool onTouchEvent_IMPL_26738(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5530
bool TextView::onTouchEvent_IMPL_26738(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(TextView::onTouchEvent_26738_ID(),TextView::_javaClass3(),"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onTouchEvent could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::onTouchEvent_26738_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::onTouchEvent_26738_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool onTrackballEvent_IMPL_26742(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5542
bool TextView::onTrackballEvent_IMPL_26742(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(TextView::onTrackballEvent_26742_ID(),TextView::_javaClass3(),"onTrackballEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onTrackballEvent could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::onTrackballEvent_26742_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::onTrackballEvent_26742_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void onWindowFocusChanged_IMPL_26734(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :5518
void TextView::onWindowFocusChanged_IMPL_26734(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::onWindowFocusChanged_26734_ID(),TextView::_javaClass3(),"onWindowFocusChanged","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.onWindowFocusChanged could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::onWindowFocusChanged_26734_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::onWindowFocusChanged_26734_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern bool performAccessibilityAction_IMPL_26756(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, Android.Base.Wrappers.IJWrapper arg3) [static] :5584
bool TextView::performAccessibilityAction_IMPL_26756(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(TextView::performAccessibilityAction_26756_ID(),TextView::_javaClass3(),"performAccessibilityAction","(ILandroid/os/Bundle;)Z",GetMethodID,"Id for fallback method android.widget.TextView.performAccessibilityAction could not be cached",93);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::performAccessibilityAction_26756_ID(), ((jint)arg2_), _obArg3));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::performAccessibilityAction_26756_ID(), ((jint)arg2_), _obArg3));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool performLongClick_IMPL_26760(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5596
bool TextView::performLongClick_IMPL_26760(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    bool result;
    CACHE_METHOD(TextView::performLongClick_26760_ID(),TextView::_javaClass3(),"performLongClick","()Z",GetMethodID,"Id for fallback method android.widget.TextView.performLongClick could not be cached",83);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, TextView::_javaClass3(), TextView::performLongClick_26760_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, TextView::performLongClick_26760_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void removeTextChangedListener_IMPL_26730(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5506
void TextView::removeTextChangedListener_IMPL_26730(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::removeTextChangedListener_26730_ID(),TextView::_javaClass3(),"removeTextChangedListener","(Landroid/text/TextWatcher;)V",GetMethodID,"Id for fallback method android.widget.TextView.removeTextChangedListener could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::removeTextChangedListener_26730_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::removeTextChangedListener_26730_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void sendAccessibilityEvent_IMPL_26757(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :5587
void TextView::sendAccessibilityEvent_IMPL_26757(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::sendAccessibilityEvent_26757_ID(),TextView::_javaClass3(),"sendAccessibilityEvent","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.sendAccessibilityEvent could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::sendAccessibilityEvent_26757_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::sendAccessibilityEvent_26757_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setEllipsize_IMPL_26720(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5476
void TextView::setEllipsize_IMPL_26720(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::setEllipsize_26720_ID(),TextView::_javaClass3(),"setEllipsize","(Landroid/text/TextUtils$TruncateAt;)V",GetMethodID,"Id for fallback method android.widget.TextView.setEllipsize could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setEllipsize_26720_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setEllipsize_26720_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setEnabled_IMPL_26528(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :4900
void TextView::setEnabled_IMPL_26528(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setEnabled_26528_ID(),TextView::_javaClass3(),"setEnabled","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.setEnabled could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setEnabled_26528_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setEnabled_26528_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setGravity_IMPL_26603(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :5125
void TextView::setGravity_IMPL_26603(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setGravity_26603_ID(),TextView::_javaClass3(),"setGravity","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setGravity could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setGravity_26603_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setGravity_26603_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setHint_IMPL_26647(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5257
void TextView::setHint_IMPL_26647(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::setHint_26647_ID(),TextView::_javaClass3(),"setHint","(Ljava/lang/CharSequence;)V",GetMethodID,"Id for fallback method android.widget.TextView.setHint could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setHint_26647_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setHint_26647_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setHintTextColor_IMPL_26596(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :5104
void TextView::setHintTextColor_IMPL_26596(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setHintTextColor_26596_ID(),TextView::_javaClass3(),"setHintTextColor","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setHintTextColor could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setHintTextColor_26596_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setHintTextColor_26596_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setHorizontallyScrolling_IMPL_26607(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :5137
void TextView::setHorizontallyScrolling_IMPL_26607(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setHorizontallyScrolling_26607_ID(),TextView::_javaClass3(),"setHorizontallyScrolling","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.setHorizontallyScrolling could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setHorizontallyScrolling_26607_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setHorizontallyScrolling_26607_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setImeOptions_IMPL_26653(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :5275
void TextView::setImeOptions_IMPL_26653(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setImeOptions_26653_ID(),TextView::_javaClass3(),"setImeOptions","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setImeOptions could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setImeOptions_26653_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setImeOptions_26653_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setIncludeFontPadding_IMPL_26706(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :5434
void TextView::setIncludeFontPadding_IMPL_26706(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setIncludeFontPadding_26706_ID(),TextView::_javaClass3(),"setIncludeFontPadding","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.setIncludeFontPadding could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setIncludeFontPadding_26706_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setIncludeFontPadding_26706_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setInputType_IMPL_26650(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :5266
void TextView::setInputType_IMPL_26650(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setInputType_26650_ID(),TextView::_javaClass3(),"setInputType","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setInputType could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setInputType_26650_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setInputType_26650_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setLineSpacing_IMPL_26628(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2, float arg3) [static] :5200
void TextView::setLineSpacing_IMPL_26628(bool arg0_, jobject arg1_, float arg2_, float arg3_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setLineSpacing_26628_ID(),TextView::_javaClass3(),"setLineSpacing","(FF)V",GetMethodID,"Id for fallback method android.widget.TextView.setLineSpacing could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setLineSpacing_26628_ID(), ((jfloat)arg2_), ((jfloat)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setLineSpacing_26628_ID(), ((jfloat)arg2_), ((jfloat)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setMaxLines_IMPL_26612(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :5152
void TextView::setMaxLines_IMPL_26612(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setMaxLines_26612_ID(),TextView::_javaClass3(),"setMaxLines","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setMaxLines could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setMaxLines_26612_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setMaxLines_26612_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOnEditorActionListener_IMPL_26658(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5290
void TextView::setOnEditorActionListener_IMPL_26658(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::setOnEditorActionListener_26658_ID(),TextView::_javaClass3(),"setOnEditorActionListener","(Landroid/widget/TextView$OnEditorActionListener;)V",GetMethodID,"Id for fallback method android.widget.TextView.setOnEditorActionListener could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setOnEditorActionListener_26658_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setOnEditorActionListener_26658_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setPadding_IMPL_26567(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :5017
void TextView::setPadding_IMPL_26567(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setPadding_26567_ID(),TextView::_javaClass3(),"setPadding","(IIII)V",GetMethodID,"Id for fallback method android.widget.TextView.setPadding could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setPadding_26567_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setPadding_26567_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setPaddingRelative_IMPL_26568(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) [static] :5020
void TextView::setPaddingRelative_IMPL_26568(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setPaddingRelative_26568_ID(),TextView::_javaClass3(),"setPaddingRelative","(IIII)V",GetMethodID,"Id for fallback method android.widget.TextView.setPaddingRelative could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setPaddingRelative_26568_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setPaddingRelative_26568_ID(), ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setSelected_IMPL_26737(bool arg0, Android.Base.Primitives.ujobject arg1, bool arg2) [static] :5527
void TextView::setSelected_IMPL_26737(bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setSelected_26737_ID(),TextView::_javaClass3(),"setSelected","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.setSelected could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setSelected_26737_ID(), ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setSelected_26737_ID(), ((jboolean)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setText_IMPL_26640(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5236
void TextView::setText_IMPL_26640(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::setText_26640_ID(),TextView::_javaClass3(),"setText","(Ljava/lang/CharSequence;)V",GetMethodID,"Id for fallback method android.widget.TextView.setText could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setText_26640_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setText_26640_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setTextColor_IMPL_26580(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :5056
void TextView::setTextColor_IMPL_26580(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setTextColor_26580_ID(),TextView::_javaClass3(),"setTextColor","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setTextColor could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setTextColor_26580_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setTextColor_26580_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setTextSize_IMPL_26575(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, float arg3) [static] :5041
void TextView::setTextSize_IMPL_26575(bool arg0_, jobject arg1_, int arg2_, float arg3_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    
    CACHE_METHOD(TextView::setTextSize_26575_ID(),TextView::_javaClass3(),"setTextSize","(IF)V",GetMethodID,"Id for fallback method android.widget.TextView.setTextSize could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setTextSize_26575_ID(), ((jint)arg2_), ((jfloat)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setTextSize_26575_ID(), ((jint)arg2_), ((jfloat)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setTypeface_IMPL_26578(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :5050
void TextView::setTypeface_IMPL_26578(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(TextView::_javaClass3(),TextView::_Init3());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(TextView::setTypeface_26578_ID(),TextView::_javaClass3(),"setTypeface","(Landroid/graphics/Typeface;)V",GetMethodID,"Id for fallback method android.widget.TextView.setTypeface could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, TextView::_javaClass3(), TextView::setTypeface_26578_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, TextView::setTypeface_26578_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(28922)
// ------------------------------------------------------------------------------

// public abstract extern interface TextViewDLROnEditorActionListener :28922
// {
uInterfaceType* TextViewDLROnEditorActionListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.widget.TextViewDLROnEditorActionListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("onEditorAction", NULL, NULL, offsetof(TextViewDLROnEditorActionListener, fp_onEditorAction), false, ::g::Uno::Bool_typeof(), 3, ::g::Android::android::widget::TextView_typeof(), ::g::Uno::Int_typeof(), ::g::Android::android::view::KeyEvent_typeof()));
    return type;
}
// }

}}}} // ::g::Android::android::widget
