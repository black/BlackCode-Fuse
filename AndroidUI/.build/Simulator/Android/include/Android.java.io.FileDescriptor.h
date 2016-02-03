// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\java\io\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace io{struct FileDescriptor;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace java{
namespace io{

// public sealed extern class FileDescriptor :3684
// {
::g::Android::java::lang::Object_type* FileDescriptor_typeof();
void FileDescriptor___Init2_fn();
void FileDescriptor__toString_fn(FileDescriptor* __this, ::g::Android::java::lang::String** __retval);
void FileDescriptor__toString_IMPL_29625_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct FileDescriptor : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID toString_29625_ID_;
    static jmethodID& toString_29625_ID() { return toString_29625_ID_; }

    static void _Init2();
    static uObject* toString_IMPL_29625(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::java::io
