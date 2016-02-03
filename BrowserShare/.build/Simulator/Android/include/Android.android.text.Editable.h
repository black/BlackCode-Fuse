// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.text.GetChars.h>
#include <Android.android.text.Spannable.h>
#include <Android.android.text.Spanned.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.CharSequence.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace android{
namespace text{

// public abstract extern interface Editable :4477
// {
uInterfaceType* Editable_typeof();

struct Editable
{
    void(*fp_append)(uObject*, uObject*, uObject**);
    void(*fp_append1)(uObject*, uObject*, int*, int*, uObject**);
    void(*fp_append2)(uObject*, uChar*, uObject**);
    void(*fp_clear)(uObject*);
    void(*fp_clearSpans)(uObject*);
    void(*fp_getFilters)(uObject*, ::g::Android::Runtime::ObjectArray**);
    void(*fp_insert)(uObject*, int*, uObject*, uObject**);
    void(*fp_insert1)(uObject*, int*, uObject*, int*, int*, uObject**);
    void(*fp_j_delete)(uObject*, int*, int*, uObject**);
    void(*fp_replace)(uObject*, int*, int*, uObject*, uObject**);
    void(*fp_replace1)(uObject*, int*, int*, uObject*, int*, int*, uObject**);
    void(*fp_setFilters)(uObject*, ::g::Android::Runtime::ObjectArray*);
    static uObject* append(const uInterface& __this, uObject* arg0) { uObject* __retval; return __this.VTable<Editable>()->fp_append(__this, arg0, &__retval), __retval; }
    static uObject* append1(const uInterface& __this, uObject* arg0, int arg1, int arg2) { uObject* __retval; return __this.VTable<Editable>()->fp_append1(__this, arg0, &arg1, &arg2, &__retval), __retval; }
    static uObject* append2(const uInterface& __this, uChar arg0) { uObject* __retval; return __this.VTable<Editable>()->fp_append2(__this, &arg0, &__retval), __retval; }
    static void clear(const uInterface& __this) { __this.VTable<Editable>()->fp_clear(__this); }
    static void clearSpans(const uInterface& __this) { __this.VTable<Editable>()->fp_clearSpans(__this); }
    static ::g::Android::Runtime::ObjectArray* getFilters(const uInterface& __this) { ::g::Android::Runtime::ObjectArray* __retval; return __this.VTable<Editable>()->fp_getFilters(__this, &__retval), __retval; }
    static uObject* insert(const uInterface& __this, int arg0, uObject* arg1) { uObject* __retval; return __this.VTable<Editable>()->fp_insert(__this, &arg0, arg1, &__retval), __retval; }
    static uObject* insert1(const uInterface& __this, int arg0, uObject* arg1, int arg2, int arg3) { uObject* __retval; return __this.VTable<Editable>()->fp_insert1(__this, &arg0, arg1, &arg2, &arg3, &__retval), __retval; }
    static uObject* j_delete(const uInterface& __this, int arg0, int arg1) { uObject* __retval; return __this.VTable<Editable>()->fp_j_delete(__this, &arg0, &arg1, &__retval), __retval; }
    static uObject* replace(const uInterface& __this, int arg0, int arg1, uObject* arg2) { uObject* __retval; return __this.VTable<Editable>()->fp_replace(__this, &arg0, &arg1, arg2, &__retval), __retval; }
    static uObject* replace1(const uInterface& __this, int arg0, int arg1, uObject* arg2, int arg3, int arg4) { uObject* __retval; return __this.VTable<Editable>()->fp_replace1(__this, &arg0, &arg1, arg2, &arg3, &arg4, &__retval), __retval; }
    static void setFilters(const uInterface& __this, ::g::Android::Runtime::ObjectArray* arg0) { __this.VTable<Editable>()->fp_setFilters(__this, arg0); }
};
// }

}}}} // ::g::Android::android::text
