// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.Context.h>
#include <Android.android.content.res.ColorStateList.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.Matrix.h>
#include <Android.android.graphics.Typeface.h>
#include <Android.android.text.TextUtilsDLRTruncateAt.h>
#include <Android.android.text.TextWatcher.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.View.h>
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
#include <Android.Fallbacks.Android_android_widget_AbsSeekBar.h>
#include <Android.Fallbacks.Android_android_widget_CompoundButton.h>
#include <Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h>
#include <Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h>
#include <Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h>
#include <Android.java.lang.CharSequence.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Type.h>
static uType* TYPES[3];

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
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AbsoluteLayout);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Android.android.widget.AbsoluteLayout", options);
    type->SetBase(::g::Android::android::view::ViewGroup_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1));
    type->SetFields(5);
    return type;
}

// public AbsoluteLayout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :7539
void AbsoluteLayout__ctor_15_fn(AbsoluteLayout* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_15(*obj, utype, *hasFallbackClass, *resolveType);
}

// public AbsoluteLayout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :7539
void AbsoluteLayout::ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_11(obj, utype, hasFallbackClass, resolveType);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(2238)
// -----------------------------------------------------------------------------

// public abstract extern class AbsSeekBar :2238
// {
::g::Android::android::view::View_type* AbsSeekBar_typeof()
{
    static uSStrong< ::g::Android::android::view::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AbsSeekBar);
    options.TypeSize = sizeof(::g::Android::android::view::View_type);
    type = (::g::Android::android::view::View_type*)uClassType::New("Android.android.widget.AbsSeekBar", options);
    type->SetBase(::g::Android::android::widget::ProgressBar_typeof());
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))AbsSeekBar__onTouchEvent_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::View_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::onTouchEvent_24551_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::AbsSeekBar::setMax_24544_ID_, uFieldFlagsStatic);
    return type;
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

// public void setMax(int arg0) :2331
void AbsSeekBar__setMax_fn(AbsSeekBar* __this, int* arg0)
{
    __this->setMax(*arg0);
}

// public static extern void setMax_IMPL_24544(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :2431
void AbsSeekBar__setMax_IMPL_24544_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    AbsSeekBar::setMax_IMPL_24544(*arg0_, *arg1_, *arg2_);
}

jclass AbsSeekBar::_javaClass4_;
jmethodID AbsSeekBar::onTouchEvent_24551_ID_;
jmethodID AbsSeekBar::setMax_24544_ID_;

// protected AbsSeekBar(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :2243
void AbsSeekBar::ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_11(obj, utype, hasFallbackClass, resolveType);
}

// public void setMax(int arg0) [instance] :2331
void AbsSeekBar::setMax(int arg0)
{
    int arg0_ = arg0;
    AbsSeekBar::setMax_IMPL_24544(_subclassed, _javaObject, arg0_);
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
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Android::android::widget::TextView_type);
    type = (::g::Android::android::widget::TextView_type*)uClassType::New("Android.android.widget.Button", options);
    type->SetBase(::g::Android::android::widget::TextView_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::widget::TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::widget::TextView_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::Button::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Button::Button_24840_ID_c_, uFieldFlagsStatic);
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

jclass Button::_javaClass4_;
jmethodID Button::Button_24840_ID_c_;

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
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CompoundButton);
    options.TypeSize = sizeof(CompoundButton_type);
    type = (CompoundButton_type*)uClassType::New("Android.android.widget.CompoundButton", options);
    type->SetBase(::g::Android::android::widget::Button_typeof());
    type->fp_setChecked = CompoundButton__setChecked_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(CompoundButton_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(CompoundButton_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::CompoundButton::_javaClass5_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::CompoundButton::setChecked_24931_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::CompoundButton::setOnCheckedChangeListener_24932_ID_, uFieldFlagsStatic);
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
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EditText);
    options.TypeSize = sizeof(::g::Android::android::widget::TextView_type);
    type = (::g::Android::android::widget::TextView_type*)uClassType::New("Android.android.widget.EditText", options);
    type->SetBase(::g::Android::android::widget::TextView_typeof());
    type->fp_setEllipsize = (void(*)(::g::Android::android::widget::TextView*, ::g::Android::android::text::TextUtilsDLRTruncateAt*))EditText__setEllipsize_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::widget::TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::widget::TextView_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::EditText::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::EditText::EditText_25066_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::EditText::setEllipsize_25077_ID_, uFieldFlagsStatic);
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
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(FrameLayout);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Android.android.widget.FrameLayout", options);
    type->SetBase(::g::Android::android::view::ViewGroup_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayout::FrameLayout_25171_ID_c_, uFieldFlagsStatic);
    return type;
}

// public FrameLayout(Android.android.content.Context arg0) :9244
void FrameLayout__ctor_12_fn(FrameLayout* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_12(arg0);
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

// public FrameLayout New(Android.android.content.Context arg0) :9244
void FrameLayout__New9_fn(::g::Android::android::content::Context* arg0, FrameLayout** __retval)
{
    *__retval = FrameLayout::New9(arg0);
}

jclass FrameLayout::_javaClass4_;
jmethodID FrameLayout::FrameLayout_25171_ID_c_;

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

// public FrameLayout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :9242
void FrameLayout::ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_11(obj, utype, hasFallbackClass, resolveType);
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

// public FrameLayout New(Android.android.content.Context arg0) [static] :9244
FrameLayout* FrameLayout::New9(::g::Android::android::content::Context* arg0)
{
    FrameLayout* obj2 = (FrameLayout*)uNew(FrameLayout_typeof());
    obj2->ctor_12(arg0);
    return obj2;
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
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayoutDLRLayoutParams::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::FrameLayoutDLRLayoutParams::FrameLayoutDLRLayoutParams_25166_ID_c_, uFieldFlagsStatic);
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
    options.FieldCount = 11;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(HorizontalScrollView);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Android.android.widget.HorizontalScrollView", options);
    type->SetBase(::g::Android::android::widget::FrameLayout_typeof());
    type->fp_addView = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*))HorizontalScrollView__addView_fn;
    type->fp_addView2 = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, int*))HorizontalScrollView__addView2_fn;
    type->fp_onInterceptTouchEvent = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::MotionEvent*, bool*))HorizontalScrollView__onInterceptTouchEvent_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))HorizontalScrollView__onTouchEvent_fn;
    type->fp_requestLayout = (void(*)(::g::Android::android::view::View*))HorizontalScrollView__requestLayout_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::_javaClass5_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::addView_25366_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::addView_25367_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onInterceptTouchEvent_25378_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::onTouchEvent_25379_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::HorizontalScrollView::requestLayout_25400_ID_, uFieldFlagsStatic);
    return type;
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

// public override sealed void addView(Android.android.view.View arg0, int arg1) :15130
void HorizontalScrollView__addView2_fn(HorizontalScrollView* __this, ::g::Android::android::view::View* arg0, int* arg1)
{
    int arg1_ = *arg1;
    HorizontalScrollView::addView_IMPL_25367(__this->_subclassed, __this->_javaObject, (uObject*)arg0, arg1_);
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

jclass HorizontalScrollView::_javaClass5_;
jmethodID HorizontalScrollView::addView_25366_ID_;
jmethodID HorizontalScrollView::addView_25367_ID_;
jmethodID HorizontalScrollView::onInterceptTouchEvent_25378_ID_;
jmethodID HorizontalScrollView::onTouchEvent_25379_ID_;
jmethodID HorizontalScrollView::requestLayout_25400_ID_;

// public HorizontalScrollView(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :15054
void HorizontalScrollView::ctor_19(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_15(obj, utype, hasFallbackClass, resolveType);
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
    options.FieldCount = 11;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ImageView);
    options.TypeSize = sizeof(::g::Android::android::view::View_type);
    type = (::g::Android::android::view::View_type*)uClassType::New("Android.android.widget.ImageView", options);
    type->SetBase(::g::Android::android::view::View_typeof());
    type->fp_setVisibility = (void(*)(::g::Android::android::view::View*, int*))ImageView__setVisibility_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::View_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::ImageView_25432_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::setImageBitmap_25450_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::setImageMatrix_25457_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::setScaleType_25454_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ImageView::setVisibility_25478_ID_, uFieldFlagsStatic);
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

// public ImageView New(Android.android.content.Context arg0) :15543
void ImageView__New9_fn(::g::Android::android::content::Context* arg0, ImageView** __retval)
{
    *__retval = ImageView::New9(arg0);
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
jmethodID ImageView::ImageView_25432_ID_c_;
jmethodID ImageView::setImageBitmap_25450_ID_;
jmethodID ImageView::setImageMatrix_25457_ID_;
jmethodID ImageView::setScaleType_25454_ID_;
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

// public ImageView New(Android.android.content.Context arg0) [static] :15543
ImageView* ImageView::New9(::g::Android::android::content::Context* arg0)
{
    ImageView* obj2 = (ImageView*)uNew(ImageView_typeof());
    obj2->ctor_8(arg0);
    return obj2;
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
::g::Android::android::view::View_type* ProgressBar_typeof()
{
    static uSStrong< ::g::Android::android::view::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ProgressBar);
    options.TypeSize = sizeof(::g::Android::android::view::View_type);
    type = (::g::Android::android::view::View_type*)uClassType::New("Android.android.widget.ProgressBar", options);
    type->SetBase(::g::Android::android::view::View_typeof());
    type->fp_setVisibility = (void(*)(::g::Android::android::view::View*, int*))ProgressBar__setVisibility_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::View_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::setProgress_25844_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ProgressBar::setVisibility_25855_ID_, uFieldFlagsStatic);
    return type;
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

jclass ProgressBar::_javaClass3_;
jmethodID ProgressBar::setProgress_25844_ID_;
jmethodID ProgressBar::setVisibility_25855_ID_;

// public ProgressBar(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :1873
void ProgressBar::ctor_11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_7(obj, utype, hasFallbackClass, resolveType);
}

// public void setProgress(int arg0) [instance] :1979
void ProgressBar::setProgress(int arg0)
{
    int arg0_ = arg0;
    ProgressBar::setProgress_IMPL_25844(_subclassed, _javaObject, arg0_);
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
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RelativeLayout);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Android.android.widget.RelativeLayout", options);
    type->SetBase(::g::Android::android::view::ViewGroup_typeof());
    type->fp_requestLayout = (void(*)(::g::Android::android::view::View*))RelativeLayout__requestLayout_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::RelativeLayout_25964_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayout::requestLayout_25974_ID_, uFieldFlagsStatic);
    return type;
}

// public RelativeLayout(Android.android.content.Context arg0) :11045
void RelativeLayout__ctor_12_fn(RelativeLayout* __this, ::g::Android::android::content::Context* arg0)
{
    __this->ctor_12(arg0);
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

// public RelativeLayout New(Android.android.content.Context arg0) :11045
void RelativeLayout__New9_fn(::g::Android::android::content::Context* arg0, RelativeLayout** __retval)
{
    *__retval = RelativeLayout::New9(arg0);
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

jclass RelativeLayout::_javaClass4_;
jmethodID RelativeLayout::RelativeLayout_25964_ID_c_;
jmethodID RelativeLayout::requestLayout_25974_ID_;

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

// public RelativeLayout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :10652
void RelativeLayout::ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_11(obj, utype, hasFallbackClass, resolveType);
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

// public RelativeLayout New(Android.android.content.Context arg0) [static] :11045
RelativeLayout* RelativeLayout::New9(::g::Android::android::content::Context* arg0)
{
    RelativeLayout* obj2 = (RelativeLayout*)uNew(RelativeLayout_typeof());
    obj2->ctor_12(arg0);
    return obj2;
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
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayoutDLRLayoutParams::_javaClass4_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::RelativeLayoutDLRLayoutParams::RelativeLayoutDLRLayoutParams_25931_ID_c_, uFieldFlagsStatic);
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
    options.FieldCount = 11;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Android.android.widget.ScrollView", options);
    type->SetBase(::g::Android::android::widget::FrameLayout_typeof());
    type->fp_addView = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*))ScrollView__addView_fn;
    type->fp_addView2 = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, int*))ScrollView__addView2_fn;
    type->fp_onInterceptTouchEvent = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::MotionEvent*, bool*))ScrollView__onInterceptTouchEvent_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))ScrollView__onTouchEvent_fn;
    type->fp_requestLayout = (void(*)(::g::Android::android::view::View*))ScrollView__requestLayout_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::_javaClass5_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::addView_26070_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::addView_26071_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onInterceptTouchEvent_26082_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::onTouchEvent_26083_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::ScrollView::requestLayout_26103_ID_, uFieldFlagsStatic);
    return type;
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

// public override sealed void addView(Android.android.view.View arg0, int arg1) :21408
void ScrollView__addView2_fn(ScrollView* __this, ::g::Android::android::view::View* arg0, int* arg1)
{
    int arg1_ = *arg1;
    ScrollView::addView_IMPL_26071(__this->_subclassed, __this->_javaObject, (uObject*)arg0, arg1_);
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

jclass ScrollView::_javaClass5_;
jmethodID ScrollView::addView_26070_ID_;
jmethodID ScrollView::addView_26071_ID_;
jmethodID ScrollView::onInterceptTouchEvent_26082_ID_;
jmethodID ScrollView::onTouchEvent_26083_ID_;
jmethodID ScrollView::requestLayout_26103_ID_;

// public ScrollView(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :21326
void ScrollView::ctor_19(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_15(obj, utype, hasFallbackClass, resolveType);
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
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno(22440)
// ------------------------------------------------------------------------------

// public extern class SeekBar :22440
// {
::g::Android::android::view::View_type* SeekBar_typeof()
{
    static uSStrong< ::g::Android::android::view::View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SeekBar);
    options.TypeSize = sizeof(::g::Android::android::view::View_type);
    type = (::g::Android::android::view::View_type*)uClassType::New("Android.android.widget.SeekBar", options);
    type->SetBase(::g::Android::android::widget::AbsSeekBar_typeof());
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::View_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::View_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::SeekBar::_javaClass5_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::SeekBar::setOnSeekBarChangeListener_26187_ID_, uFieldFlagsStatic);
    return type;
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
jmethodID SeekBar::setOnSeekBarChangeListener_26187_ID_;

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
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(::g::Android::android::widget::CompoundButton_type);
    type = (::g::Android::android::widget::CompoundButton_type*)uClassType::New("Android.android.widget.Switch", options);
    type->SetBase(::g::Android::android::widget::CompoundButton_typeof());
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))Switch__onTouchEvent_fn;
    type->fp_setChecked = (void(*)(::g::Android::android::widget::CompoundButton*, bool*))Switch__setChecked_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::widget::CompoundButton_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::widget::CompoundButton_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::Switch::_javaClass6_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Switch::onTouchEvent_26365_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Switch::setChecked_26366_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::Switch::Switch_26341_ID_c_, uFieldFlagsStatic);
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

// public Switch New(Android.android.content.Context arg0) :24131
void Switch__New17_fn(::g::Android::android::content::Context* arg0, Switch** __retval)
{
    *__retval = Switch::New17(arg0);
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

// public Switch New(Android.android.content.Context arg0) [static] :24131
Switch* Switch::New17(::g::Android::android::content::Context* arg0)
{
    Switch* obj2 = (Switch*)uNew(Switch_typeof());
    obj2->ctor_20(arg0);
    return obj2;
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
    options.FieldCount = 30;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(TextView_type);
    type = (TextView_type*)uClassType::New("Android.android.widget.TextView", options);
    type->SetBase(::g::Android::android::view::View_typeof());
    type->fp_onScrollChanged = (void(*)(::g::Android::android::view::View*, int*, int*, int*, int*))TextView__onScrollChanged_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))TextView__onTouchEvent_fn;
    type->fp_setEllipsize = TextView__setEllipsize_fn;
    type->fp_setEnabled = (void(*)(::g::Android::android::view::View*, bool*))TextView__setEnabled_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[2] = ::g::Android::android::content::res::ColorStateList_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(TextView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextView_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::addTextChangedListener_26729_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::getTextColors_26582_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onScrollChanged_26761_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::onTouchEvent_26738_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::removeTextChangedListener_26730_ID_, uFieldFlagsStatic,
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
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setText_26640_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setTextColor_26580_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setTextSize_26575_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::setTypeface_26578_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::widget::TextView::TextView_26525_ID_c_, uFieldFlagsStatic);
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

// public TextView New(Android.android.content.Context arg0) :3406
void TextView__New9_fn(::g::Android::android::content::Context* arg0, TextView** __retval)
{
    *__retval = TextView::New9(arg0);
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

// public void setPadding(int arg0, int arg1, int arg2, int arg3) :3690
void TextView__setPadding_fn(TextView* __this, int* arg0, int* arg1, int* arg2, int* arg3)
{
    __this->setPadding(*arg0, *arg1, *arg2, *arg3);
}

// public static extern void setPadding_IMPL_26567(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :5017
void TextView__setPadding_IMPL_26567_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    TextView::setPadding_IMPL_26567(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
}

// public void setPaddingRelative(int arg0, int arg1, int arg2, int arg3) :3696
void TextView__setPaddingRelative_fn(TextView* __this, int* arg0, int* arg1, int* arg2, int* arg3)
{
    __this->setPaddingRelative(*arg0, *arg1, *arg2, *arg3);
}

// public static extern void setPaddingRelative_IMPL_26568(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3, int arg4, int arg5) :5020
void TextView__setPaddingRelative_IMPL_26568_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_)
{
    TextView::setPaddingRelative_IMPL_26568(*arg0_, *arg1_, *arg2_, *arg3_, *arg4_, *arg5_);
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
jmethodID TextView::getTextColors_26582_ID_;
jmethodID TextView::onScrollChanged_26761_ID_;
jmethodID TextView::onTouchEvent_26738_ID_;
jmethodID TextView::removeTextChangedListener_26730_ID_;
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
    return uCast< ::g::Android::android::content::res::ColorStateList*>(TextView::getTextColors_IMPL_26582(_subclassed, _javaObject), ::TYPES[2/*Android.android.content.res.ColorStateList*/]);
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

// public void setPadding(int arg0, int arg1, int arg2, int arg3) [instance] :3690
void TextView::setPadding(int arg0, int arg1, int arg2, int arg3)
{
    int arg0_ = arg0;
    int arg1_ = arg1;
    int arg2_ = arg2;
    int arg3_ = arg3;
    TextView::setPadding_IMPL_26567(_subclassed, _javaObject, arg0_, arg1_, arg2_, arg3_);
}

// public void setPaddingRelative(int arg0, int arg1, int arg2, int arg3) [instance] :3696
void TextView::setPaddingRelative(int arg0, int arg1, int arg2, int arg3)
{
    int arg0_ = arg0;
    int arg1_ = arg1;
    int arg2_ = arg2;
    int arg3_ = arg3;
    TextView::setPaddingRelative_IMPL_26568(_subclassed, _javaObject, arg0_, arg1_, arg2_, arg3_);
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

// public TextView New(Android.android.content.Context arg0) [static] :3406
TextView* TextView::New9(::g::Android::android::content::Context* arg0)
{
    TextView* obj2 = (TextView*)uNew(TextView_typeof());
    obj2->ctor_8(arg0);
    return obj2;
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
    return type;
}
// }

}}}} // ::g::Android::android::widget
