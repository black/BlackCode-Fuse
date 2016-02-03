// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace text{struct LayoutDLRAlignment;}}}}

namespace g{
namespace Android{
namespace android{
namespace text{

// public sealed extern class LayoutDLRAlignment :673
// {
::g::Android::java::lang::Object_type* LayoutDLRAlignment_typeof();
void LayoutDLRAlignment___Init3_fn();
void LayoutDLRAlignment__get_ALIGN_CENTER_fn(LayoutDLRAlignment** __retval);
void LayoutDLRAlignment__get_ALIGN_NORMAL_fn(LayoutDLRAlignment** __retval);
void LayoutDLRAlignment__get_ALIGN_OPPOSITE_fn(LayoutDLRAlignment** __retval);

struct LayoutDLRAlignment : ::g::Android::java::lang::Object
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jfieldID ALIGN_CENTER_19884_ID_;
    static jfieldID& ALIGN_CENTER_19884_ID() { return ALIGN_CENTER_19884_ID_; }
    static jfieldID ALIGN_NORMAL_19885_ID_;
    static jfieldID& ALIGN_NORMAL_19885_ID() { return ALIGN_NORMAL_19885_ID_; }
    static jfieldID ALIGN_OPPOSITE_19886_ID_;
    static jfieldID& ALIGN_OPPOSITE_19886_ID() { return ALIGN_OPPOSITE_19886_ID_; }

    static void _Init3();
    static LayoutDLRAlignment* ALIGN_CENTER();
    static LayoutDLRAlignment* ALIGN_NORMAL();
    static LayoutDLRAlignment* ALIGN_OPPOSITE();
};
// }

}}}} // ::g::Android::android::text
