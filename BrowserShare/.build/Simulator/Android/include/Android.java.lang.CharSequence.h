// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace java{
namespace lang{

// public abstract extern interface CharSequence :18744
// {
uInterfaceType* CharSequence_typeof();

struct CharSequence
{
    void(*fp_charAt)(uObject*, int*, uChar*);
    void(*fp_length)(uObject*, int*);
    void(*fp_subSequence)(uObject*, int*, int*, uObject**);
    void(*fp_toString)(uObject*, ::g::Android::java::lang::String**);
    static uChar charAt(const uInterface& __this, int arg0) { uChar __retval; return __this.VTable<CharSequence>()->fp_charAt(__this, &arg0, &__retval), __retval; }
    static int length(const uInterface& __this) { int __retval; return __this.VTable<CharSequence>()->fp_length(__this, &__retval), __retval; }
    static uObject* subSequence(const uInterface& __this, int arg0, int arg1) { uObject* __retval; return __this.VTable<CharSequence>()->fp_subSequence(__this, &arg0, &arg1, &__retval), __retval; }
    static ::g::Android::java::lang::String* toString(const uInterface& __this) { ::g::Android::java::lang::String* __retval; return __this.VTable<CharSequence>()->fp_toString(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Android::java::lang
