// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.CharSequence.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace java{namespace lang{struct Class;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace android{
namespace text{

// public abstract extern interface Spanned :4383
// {
uInterfaceType* Spanned_typeof();

struct Spanned
{
    void(*fp_getSpanEnd)(uObject*, ::g::Android::java::lang::Object*, int*);
    void(*fp_getSpanFlags)(uObject*, ::g::Android::java::lang::Object*, int*);
    void(*fp_getSpans)(uObject*, int*, int*, ::g::Android::java::lang::Class*, ::g::Android::Runtime::ObjectArray**);
    void(*fp_getSpanStart)(uObject*, ::g::Android::java::lang::Object*, int*);
    void(*fp_nextSpanTransition)(uObject*, int*, int*, ::g::Android::java::lang::Class*, int*);
    static int getSpanEnd(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { int __retval; return __this.VTable<Spanned>()->fp_getSpanEnd(__this, arg0, &__retval), __retval; }
    static int getSpanFlags(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { int __retval; return __this.VTable<Spanned>()->fp_getSpanFlags(__this, arg0, &__retval), __retval; }
    static ::g::Android::Runtime::ObjectArray* getSpans(const uInterface& __this, int arg0, int arg1, ::g::Android::java::lang::Class* arg2) { ::g::Android::Runtime::ObjectArray* __retval; return __this.VTable<Spanned>()->fp_getSpans(__this, &arg0, &arg1, arg2, &__retval), __retval; }
    static int getSpanStart(const uInterface& __this, ::g::Android::java::lang::Object* arg0) { int __retval; return __this.VTable<Spanned>()->fp_getSpanStart(__this, arg0, &__retval), __retval; }
    static int nextSpanTransition(const uInterface& __this, int arg0, int arg1, ::g::Android::java::lang::Class* arg2) { int __retval; return __this.VTable<Spanned>()->fp_nextSpanTransition(__this, &arg0, &arg1, arg2, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::text
