// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Marshaller;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal static extern class Marshaller :192
// {
uClassType* Marshaller_typeof();
void Marshaller__AsJust_fn(::v8::Maybe< bool>* obj, ::v8::TryCatch** tryCatch, bool* __retval);
void Marshaller__AsJust1_fn(::v8::Maybe< double>* obj, ::v8::TryCatch** tryCatch, double* __retval);
void Marshaller__AsJust2_fn(::v8::Maybe< int>* obj, ::v8::TryCatch** tryCatch, int* __retval);
void Marshaller__FromJust_fn(::v8::MaybeLocal< ::v8::Array> * obj, ::v8::TryCatch** tryCatch, ::v8::Local< ::v8::Array>* __retval);
void Marshaller__FromJust1_fn(::v8::MaybeLocal< ::v8::Object> * obj, ::v8::TryCatch** tryCatch, ::v8::Local< ::v8::Object>* __retval);
void Marshaller__FromJust2_fn(::v8::MaybeLocal< ::v8::String> * obj, ::v8::TryCatch** tryCatch, ::v8::Local< ::v8::String>* __retval);
void Marshaller__FromJust3_fn(::v8::MaybeLocal< ::v8::Value> * obj, ::v8::TryCatch** tryCatch, ::v8::Local< ::v8::Value>* __retval);
void Marshaller__ThrowException_fn(::v8::TryCatch** tryCatch);
void Marshaller__Unwrap_fn(uObject* obj, ::v8::Local< ::v8::Value>* __retval);
void Marshaller__UnwrapArray_fn(uArray* objs, uArray** __retval);
void Marshaller__Wrap_fn(::v8::MaybeLocal< ::v8::Value> * maybeObj, ::v8::TryCatch** tryCatch, uObject** __retval);
void Marshaller__Wrap1_fn(::v8::Local< ::v8::Value>* obj, ::v8::TryCatch** tryCatch, uObject** __retval);

struct Marshaller : uObject
{
    static bool AsJust(::v8::Maybe< bool> obj, ::v8::TryCatch* tryCatch);
    static double AsJust1(::v8::Maybe< double> obj, ::v8::TryCatch* tryCatch);
    static int AsJust2(::v8::Maybe< int> obj, ::v8::TryCatch* tryCatch);
    static ::v8::Local< ::v8::Array> FromJust(::v8::MaybeLocal< ::v8::Array>  obj, ::v8::TryCatch* tryCatch);
    static ::v8::Local< ::v8::Object> FromJust1(::v8::MaybeLocal< ::v8::Object>  obj, ::v8::TryCatch* tryCatch);
    static ::v8::Local< ::v8::String> FromJust2(::v8::MaybeLocal< ::v8::String>  obj, ::v8::TryCatch* tryCatch);
    static ::v8::Local< ::v8::Value> FromJust3(::v8::MaybeLocal< ::v8::Value>  obj, ::v8::TryCatch* tryCatch);
    static void ThrowException(::v8::TryCatch* tryCatch);
    static ::v8::Local< ::v8::Value> Unwrap(uObject* obj);
    static uArray* UnwrapArray(uArray* objs);
    static uObject* Wrap(::v8::MaybeLocal< ::v8::Value>  maybeObj, ::v8::TryCatch* tryCatch);
    static uObject* Wrap1(::v8::Local< ::v8::Value> obj, ::v8::TryCatch* tryCatch);
};
// }

}}}} // ::g::Fuse::Scripting::V8
