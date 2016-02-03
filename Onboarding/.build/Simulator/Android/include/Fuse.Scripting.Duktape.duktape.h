// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// internal static extern class duktape :571
// {
uClassType* duktape_typeof();
void duktape__create_heap_default_fn(void** __retval);
void duktape__del_prop_string_fn(void** ctx, int* obj_index, uString* key, bool* __retval);
void duktape__destroy_heap_fn(void** ctx);
void duktape__enum__fn(void** ctx, int* index, int* flags);
void duktape__error_fn(void** ctx, uString* message);
void duktape__get_boolean_fn(void** ctx, int* index, bool* __retval);
void duktape__get_heapptr_fn(void** ctx, int* index, void** __retval);
void duktape__get_int_fn(void** ctx, int* index, int* __retval);
void duktape__get_length_fn(void** ctx, int* index, int64_t* __retval);
void duktape__get_number_fn(void** ctx, int* index, double* __retval);
void duktape__get_prop_index_fn(void** ctx, int* index, int* arr_index, bool* __retval);
void duktape__get_prop_string_fn(void** ctx, int* obj_index, uString* key, bool* __retval);
void duktape__get_string_fn(void** ctx, int* index, uString** __retval);
void duktape__get_top_fn(void** ctx, int* __retval);
void duktape__has_prop_string_fn(void** ctx, int* index, uString* key, bool* __retval);
void duktape__is_array_fn(void** ctx, int* index, bool* __retval);
void duktape__is_boolean_fn(void** ctx, int* index, bool* __retval);
void duktape__is_function_fn(void** ctx, int* index, bool* __retval);
void duktape__is_null_or_undefined_fn(void** ctx, int* index, bool* __retval);
void duktape__is_number_fn(void** ctx, int* index, bool* __retval);
void duktape__is_object_fn(void** ctx, int* index, bool* __retval);
void duktape__is_string_fn(void** ctx, int* index, bool* __retval);
void duktape__new__fn(void** ctx, int* nargs);
void duktape__next_fn(void** ctx, int* index, bool* getValue, bool* __retval);
void duktape__pcall_fn(void** ctx, int* nargs, int* __retval);
void duktape__pcall_method_fn(void** ctx, int* nargs, int* __retval);
void duktape__pcompile_fn(void** ctx, uint32_t* flags, int* __retval);
void duktape__pcompile_string_fn(void** ctx, uint32_t* flags, uString* src, int* __retval);
void duktape__peval_string_fn(void** ctx, uString* code, int* __retval);
void duktape__pop_fn(void** ctx);
void duktape__pop_2_fn(void** ctx);
void duktape__push_array_fn(void** ctx, int* __retval);
void duktape__push_boolean_fn(void** ctx, bool* value);
void duktape__push_callback_proxy_fn(void** ctx, int* argc);
void duktape__push_delegate_fn(void** ctx, uDelegate* del);
void duktape__push_global_object_fn(void** ctx);
void duktape__push_global_stash_fn(void** ctx);
void duktape__push_heapptr_fn(void** ctx, void** ptr, int* __retval);
void duktape__push_int_fn(void** ctx, int* val);
void duktape__push_null_fn(void** ctx);
void duktape__push_number_fn(void** ctx, double* val);
void duktape__push_object_fn(void** ctx, int* __retval);
void duktape__push_string_fn(void** ctx, uString* str);
void duktape__put_prop_index_fn(void** ctx, int* index, int* arr_index, bool* __retval);
void duktape__put_prop_string_fn(void** ctx, int* obj_index, uString* key, bool* __retval);
void duktape__safe_to_string_fn(void** ctx, int* index, uString** __retval);

struct duktape : uObject
{
    static void* create_heap_default();
    static bool del_prop_string(void* ctx, int obj_index, uString* key);
    static void destroy_heap(void* ctx);
    static void enum_(void* ctx, int index, int flags);
    static void error(void* ctx, uString* message);
    static bool get_boolean(void* ctx, int index);
    static void* get_heapptr(void* ctx, int index);
    static int get_int(void* ctx, int index);
    static int64_t get_length(void* ctx, int index);
    static double get_number(void* ctx, int index);
    static bool get_prop_index(void* ctx, int index, int arr_index);
    static bool get_prop_string(void* ctx, int obj_index, uString* key);
    static uString* get_string(void* ctx, int index);
    static int get_top(void* ctx);
    static bool has_prop_string(void* ctx, int index, uString* key);
    static bool is_array(void* ctx, int index);
    static bool is_boolean(void* ctx, int index);
    static bool is_function(void* ctx, int index);
    static bool is_null_or_undefined(void* ctx, int index);
    static bool is_number(void* ctx, int index);
    static bool is_object(void* ctx, int index);
    static bool is_string(void* ctx, int index);
    static void new_(void* ctx, int nargs);
    static bool next(void* ctx, int index, bool getValue);
    static int pcall(void* ctx, int nargs);
    static int pcall_method(void* ctx, int nargs);
    static int pcompile(void* ctx, uint32_t flags);
    static int pcompile_string(void* ctx, uint32_t flags, uString* src);
    static int peval_string(void* ctx, uString* code);
    static void pop(void* ctx);
    static void pop_2(void* ctx);
    static int push_array(void* ctx);
    static void push_boolean(void* ctx, bool value);
    static void push_callback_proxy(void* ctx, int argc);
    static void push_delegate(void* ctx, uDelegate* del);
    static void push_global_object(void* ctx);
    static void push_global_stash(void* ctx);
    static int push_heapptr(void* ctx, void* ptr);
    static void push_int(void* ctx, int val);
    static void push_null(void* ctx);
    static void push_number(void* ctx, double val);
    static int push_object(void* ctx);
    static void push_string(void* ctx, uString* str);
    static bool put_prop_index(void* ctx, int index, int arr_index);
    static bool put_prop_string(void* ctx, int obj_index, uString* key);
    static uString* safe_to_string(void* ctx, int index);
};
// }

}}}} // ::g::Fuse::Scripting::Duktape
