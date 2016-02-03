// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_DUKTAPE_DUKTAPE_H__
#define __APP_FUSE_SCRIPTING_DUKTAPE_DUKTAPE_H__

#include <Uno.h>

namespace app {
namespace Fuse {
namespace Scripting {
namespace Duktape {

struct duktape__uType : ::uClassType
{
};

duktape__uType* duktape__typeof();

void* duktape__alloc(::uStatic* __this, void* ctx, ::uUInt size);
void* duktape__alloc_raw(::uStatic* __this, void* ctx, ::uUInt size);
void duktape__base64_decode(::uStatic* __this, void* ctx, int index);
::uString* duktape__base64_encode(::uStatic* __this, void* ctx, int index);
void duktape__call(::uStatic* __this, void* ctx, int nargs);
void duktape__call_method(::uStatic* __this, void* ctx, int nargs);
int duktape__char_code_at(::uStatic* __this, void* ctx, int index, ::uUInt char_offset);
bool duktape__check_stack(::uStatic* __this, void* ctx, int extra);
bool duktape__check_stack_top(::uStatic* __this, void* ctx, int top);
bool duktape__check_type(::uStatic* __this, void* ctx, int index, int type);
bool duktape__check_type_mask(::uStatic* __this, void* ctx, int index, ::uUInt mask);
void duktape__compact(::uStatic* __this, void* ctx, int obj_index);
void duktape__compile(::uStatic* __this, void* ctx, ::uUInt flags);
void duktape__compile_file(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* path);
void duktape__compile_lstring(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src, ::uUInt len);
void duktape__compile_lstring_filename(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src, ::uUInt len);
void duktape__compile_string(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src);
void duktape__compile_string_filename(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src);
void duktape__concat(::uStatic* __this, void* ctx, int count);
void duktape__copy(::uStatic* __this, void* ctx, int from_index, int to_index);
void* duktape__create_heap_default(::uStatic* __this);
void duktape__def_prop(::uStatic* __this, void* ctx, int obj_index, ::uUInt flags);
bool duktape__del_prop(::uStatic* __this, void* ctx, int obj_index);
bool duktape__del_prop_index(::uStatic* __this, void* ctx, int obj_index, int arr_index);
bool duktape__del_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key);
void duktape__destroy_heap(::uStatic* __this, void* ctx);
void duktape__dump_context_stderr(::uStatic* __this, void* ctx);
void duktape__dump_context_stdout(::uStatic* __this, void* ctx);
void duktape__dup(::uStatic* __this, void* ctx, int from_index);
void duktape__dup_top(::uStatic* __this, void* ctx);
void duktape__enum_(::uStatic* __this, void* ctx, int index, int flags);
void duktape__enum__1(::uStatic* __this, void* ctx, int obj_index, ::uUInt enum_flags);
bool duktape__equals(::uStatic* __this, void* ctx, int index1, int index2);
void duktape__error(::uStatic* __this, void* ctx, ::uString* message);
void duktape__eval(::uStatic* __this, void* ctx);
void duktape__eval_file(::uStatic* __this, void* ctx, ::uString* path);
void duktape__eval_file_noresult(::uStatic* __this, void* ctx, ::uString* path);
bool duktape__get_boolean(::uStatic* __this, void* ctx, int index);
void* duktape__get_heapptr(::uStatic* __this, void* ctx, int index);
int duktape__get_int(::uStatic* __this, void* ctx, int index);
::uLong duktape__get_length(::uStatic* __this, void* ctx, int index);
double duktape__get_number(::uStatic* __this, void* ctx, int index);
bool duktape__get_prop_index(::uStatic* __this, void* ctx, int index, int arr_index);
bool duktape__get_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key);
::uString* duktape__get_string(::uStatic* __this, void* ctx, int index);
int duktape__get_top(::uStatic* __this, void* ctx);
bool duktape__has_prop_string(::uStatic* __this, void* ctx, int index, ::uString* key);
bool duktape__is_array(::uStatic* __this, void* ctx, int index);
bool duktape__is_boolean(::uStatic* __this, void* ctx, int index);
bool duktape__is_callable(::uStatic* __this, void* ctx, int index);
bool duktape__is_function(::uStatic* __this, void* ctx, int index);
bool duktape__is_nan(::uStatic* __this, void* ctx, int index);
bool duktape__is_null(::uStatic* __this, void* ctx, int index);
bool duktape__is_null_or_undefined(::uStatic* __this, void* ctx, int index);
bool duktape__is_number(::uStatic* __this, void* ctx, int index);
bool duktape__is_object(::uStatic* __this, void* ctx, int index);
bool duktape__is_string(::uStatic* __this, void* ctx, int index);
void duktape__json_decode(::uStatic* __this, void* ctx, int index);
::uString* duktape__json_encode(::uStatic* __this, void* ctx, int index);
void duktape__new_(::uStatic* __this, void* ctx, int nargs);
bool duktape__next(::uStatic* __this, void* ctx, int index, bool getValue);
int duktape__pcall(::uStatic* __this, void* ctx, int nargs);
int duktape__pcall_method(::uStatic* __this, void* ctx, int nargs);
int duktape__pcall_prop(::uStatic* __this, void* ctx, int obj_index, int nargs);
int duktape__pcompile(::uStatic* __this, void* ctx, ::uUInt flags);
int duktape__pcompile_string(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src);
int duktape__peval_string(::uStatic* __this, void* ctx, ::uString* code);
int duktape__peval_string_noresult(::uStatic* __this, void* ctx, ::uString* str);
void duktape__pop(::uStatic* __this, void* ctx);
void duktape__pop_2(::uStatic* __this, void* ctx);
void duktape__pop_3(::uStatic* __this, void* ctx);
int duktape__push_array(::uStatic* __this, void* ctx);
void duktape__push_boolean(::uStatic* __this, void* ctx, bool value);
void duktape__push_callback_proxy(::uStatic* __this, void* ctx, int argc);
void duktape__push_delegate(::uStatic* __this, void* ctx, ::uDelegate* del);
void duktape__push_global_object(::uStatic* __this, void* ctx);
void duktape__push_global_stash(::uStatic* __this, void* ctx);
int duktape__push_heapptr(::uStatic* __this, void* ctx, void* ptr);
void duktape__push_int(::uStatic* __this, void* ctx, int val);
void duktape__push_null(::uStatic* __this, void* ctx);
void duktape__push_number(::uStatic* __this, void* ctx, double val);
int duktape__push_object(::uStatic* __this, void* ctx);
void duktape__push_string(::uStatic* __this, void* ctx, ::uString* str);
bool duktape__put_prop_index(::uStatic* __this, void* ctx, int index, int arr_index);
bool duktape__put_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key);
::uString* duktape__safe_to_string(::uStatic* __this, void* ctx, int index);
void duktape__swap_top(::uStatic* __this, void* ctx, int index);
double duktape__to_number(::uStatic* __this, void* ctx, int index);

}}}}


#endif
