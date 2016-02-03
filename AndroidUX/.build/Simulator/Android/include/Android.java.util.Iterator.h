// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\java\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}

namespace g{
namespace Android{
namespace java{
namespace util{

// public abstract extern interface Iterator :14649
// {
uInterfaceType* Iterator_typeof();

struct Iterator
{
    void(*fp_hasNext)(uObject*, bool*);
    void(*fp_next)(uObject*, ::g::Android::java::lang::Object**);
    void(*fp_remove)(uObject*);
    static bool hasNext(const uInterface& __this) { bool __retval; return __this.VTable<Iterator>()->fp_hasNext(__this, &__retval), __retval; }
    static ::g::Android::java::lang::Object* next(const uInterface& __this) { ::g::Android::java::lang::Object* __retval; return __this.VTable<Iterator>()->fp_next(__this, &__retval), __retval; }
    static void remove(const uInterface& __this) { __this.VTable<Iterator>()->fp_remove(__this); }
};
// }

}}}} // ::g::Android::java::util
