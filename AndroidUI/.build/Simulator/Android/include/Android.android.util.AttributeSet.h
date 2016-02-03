// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace android{
namespace util{

// public abstract extern interface AttributeSet :6179
// {
uInterfaceType* AttributeSet_typeof();

struct AttributeSet
{
    void(*fp_getAttributeBooleanValue)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, bool*, bool*);
    void(*fp_getAttributeBooleanValue1)(uObject*, int*, bool*, bool*);
    void(*fp_getAttributeCount)(uObject*, int*);
    void(*fp_getAttributeFloatValue)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, float*, float*);
    void(*fp_getAttributeFloatValue1)(uObject*, int*, float*, float*);
    void(*fp_getAttributeIntValue)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, int*, int*);
    void(*fp_getAttributeIntValue1)(uObject*, int*, int*, int*);
    void(*fp_getAttributeListValue)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, ::g::Android::Runtime::ObjectArray*, int*, int*);
    void(*fp_getAttributeListValue1)(uObject*, int*, ::g::Android::Runtime::ObjectArray*, int*, int*);
    void(*fp_getAttributeName)(uObject*, int*, ::g::Android::java::lang::String**);
    void(*fp_getAttributeNameResource)(uObject*, int*, int*);
    void(*fp_getAttributeResourceValue)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, int*, int*);
    void(*fp_getAttributeResourceValue1)(uObject*, int*, int*, int*);
    void(*fp_getAttributeUnsignedIntValue)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, int*, int*);
    void(*fp_getAttributeUnsignedIntValue1)(uObject*, int*, int*, int*);
    void(*fp_getAttributeValue)(uObject*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String*, ::g::Android::java::lang::String**);
    void(*fp_getAttributeValue1)(uObject*, int*, ::g::Android::java::lang::String**);
    void(*fp_getClassAttribute)(uObject*, ::g::Android::java::lang::String**);
    void(*fp_getIdAttribute)(uObject*, ::g::Android::java::lang::String**);
    void(*fp_getIdAttributeResourceValue)(uObject*, int*, int*);
    void(*fp_getPositionDescription)(uObject*, ::g::Android::java::lang::String**);
    void(*fp_getStyleAttribute)(uObject*, int*);
    static bool getAttributeBooleanValue(const uInterface& __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, bool arg2) { bool __retval; return __this.VTable<AttributeSet>()->fp_getAttributeBooleanValue(__this, arg0, arg1, &arg2, &__retval), __retval; }
    static bool getAttributeBooleanValue1(const uInterface& __this, int arg0, bool arg1) { bool __retval; return __this.VTable<AttributeSet>()->fp_getAttributeBooleanValue1(__this, &arg0, &arg1, &__retval), __retval; }
    static int getAttributeCount(const uInterface& __this) { int __retval; return __this.VTable<AttributeSet>()->fp_getAttributeCount(__this, &__retval), __retval; }
    static float getAttributeFloatValue(const uInterface& __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, float arg2) { float __retval; return __this.VTable<AttributeSet>()->fp_getAttributeFloatValue(__this, arg0, arg1, &arg2, &__retval), __retval; }
    static float getAttributeFloatValue1(const uInterface& __this, int arg0, float arg1) { float __retval; return __this.VTable<AttributeSet>()->fp_getAttributeFloatValue1(__this, &arg0, &arg1, &__retval), __retval; }
    static int getAttributeIntValue(const uInterface& __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int arg2) { int __retval; return __this.VTable<AttributeSet>()->fp_getAttributeIntValue(__this, arg0, arg1, &arg2, &__retval), __retval; }
    static int getAttributeIntValue1(const uInterface& __this, int arg0, int arg1) { int __retval; return __this.VTable<AttributeSet>()->fp_getAttributeIntValue1(__this, &arg0, &arg1, &__retval), __retval; }
    static int getAttributeListValue(const uInterface& __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, ::g::Android::Runtime::ObjectArray* arg2, int arg3) { int __retval; return __this.VTable<AttributeSet>()->fp_getAttributeListValue(__this, arg0, arg1, arg2, &arg3, &__retval), __retval; }
    static int getAttributeListValue1(const uInterface& __this, int arg0, ::g::Android::Runtime::ObjectArray* arg1, int arg2) { int __retval; return __this.VTable<AttributeSet>()->fp_getAttributeListValue1(__this, &arg0, arg1, &arg2, &__retval), __retval; }
    static ::g::Android::java::lang::String* getAttributeName(const uInterface& __this, int arg0) { ::g::Android::java::lang::String* __retval; return __this.VTable<AttributeSet>()->fp_getAttributeName(__this, &arg0, &__retval), __retval; }
    static int getAttributeNameResource(const uInterface& __this, int arg0) { int __retval; return __this.VTable<AttributeSet>()->fp_getAttributeNameResource(__this, &arg0, &__retval), __retval; }
    static int getAttributeResourceValue(const uInterface& __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int arg2) { int __retval; return __this.VTable<AttributeSet>()->fp_getAttributeResourceValue(__this, arg0, arg1, &arg2, &__retval), __retval; }
    static int getAttributeResourceValue1(const uInterface& __this, int arg0, int arg1) { int __retval; return __this.VTable<AttributeSet>()->fp_getAttributeResourceValue1(__this, &arg0, &arg1, &__retval), __retval; }
    static int getAttributeUnsignedIntValue(const uInterface& __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1, int arg2) { int __retval; return __this.VTable<AttributeSet>()->fp_getAttributeUnsignedIntValue(__this, arg0, arg1, &arg2, &__retval), __retval; }
    static int getAttributeUnsignedIntValue1(const uInterface& __this, int arg0, int arg1) { int __retval; return __this.VTable<AttributeSet>()->fp_getAttributeUnsignedIntValue1(__this, &arg0, &arg1, &__retval), __retval; }
    static ::g::Android::java::lang::String* getAttributeValue(const uInterface& __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::String* arg1) { ::g::Android::java::lang::String* __retval; return __this.VTable<AttributeSet>()->fp_getAttributeValue(__this, arg0, arg1, &__retval), __retval; }
    static ::g::Android::java::lang::String* getAttributeValue1(const uInterface& __this, int arg0) { ::g::Android::java::lang::String* __retval; return __this.VTable<AttributeSet>()->fp_getAttributeValue1(__this, &arg0, &__retval), __retval; }
    static ::g::Android::java::lang::String* getClassAttribute(const uInterface& __this) { ::g::Android::java::lang::String* __retval; return __this.VTable<AttributeSet>()->fp_getClassAttribute(__this, &__retval), __retval; }
    static ::g::Android::java::lang::String* getIdAttribute(const uInterface& __this) { ::g::Android::java::lang::String* __retval; return __this.VTable<AttributeSet>()->fp_getIdAttribute(__this, &__retval), __retval; }
    static int getIdAttributeResourceValue(const uInterface& __this, int arg0) { int __retval; return __this.VTable<AttributeSet>()->fp_getIdAttributeResourceValue(__this, &arg0, &__retval), __retval; }
    static ::g::Android::java::lang::String* getPositionDescription(const uInterface& __this) { ::g::Android::java::lang::String* __retval; return __this.VTable<AttributeSet>()->fp_getPositionDescription(__this, &__retval), __retval; }
    static int getStyleAttribute(const uInterface& __this) { int __retval; return __this.VTable<AttributeSet>()->fp_getStyleAttribute(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::util
