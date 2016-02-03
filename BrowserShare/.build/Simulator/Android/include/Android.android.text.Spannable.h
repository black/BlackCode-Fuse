// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.text.Spanned.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.CharSequence.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}

namespace g{
namespace Android{
namespace android{
namespace text{

// public abstract extern interface Spannable :4459
// {
uInterfaceType* Spannable_typeof();

struct Spannable
{
    void(*fp_removeSpan)(uObject*, ::g::Android::java::lang::Object*);
    void(*fp_setSpan)(uObject*, ::g::Android::java::lang::Object*, int*, int*, int*);
    static void removeSpan(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { __this.VTable<Spannable>()->fp_removeSpan(__this, arg0); }
    static void setSpan(const uInterface& __this, ::g::Android::java::lang::Object* arg0, int arg1, int arg2, int arg3) { __this.VTable<Spannable>()->fp_setSpan(__this, arg0, &arg1, &arg2, &arg3); }
};
// }

}}}} // ::g::Android::android::text
