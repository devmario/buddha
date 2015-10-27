// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.10.5/$.uno'.
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

void* duktape__duk_create_heap_default(::uStatic* __this);
bool duktape__duk_del_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key);
void duktape__duk_destroy_heap(::uStatic* __this, void* ctx);
void duktape__duk_enum(::uStatic* __this, void* ctx, int index, int flags);
void duktape__duk_error(::uStatic* __this, void* ctx, ::uString* message);
bool duktape__duk_get_boolean(::uStatic* __this, void* ctx, int index);
void* duktape__duk_get_heapptr(::uStatic* __this, void* ctx, int index);
int duktape__duk_get_int(::uStatic* __this, void* ctx, int index);
::uLong duktape__duk_get_length(::uStatic* __this, void* ctx, int index);
double duktape__duk_get_number(::uStatic* __this, void* ctx, int index);
bool duktape__duk_get_prop_index(::uStatic* __this, void* ctx, int index, int arr_index);
bool duktape__duk_get_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key);
::uString* duktape__duk_get_string(::uStatic* __this, void* ctx, int index);
int duktape__duk_get_top(::uStatic* __this, void* ctx);
bool duktape__duk_has_prop_string(::uStatic* __this, void* ctx, int index, ::uString* key);
bool duktape__duk_is_array(::uStatic* __this, void* ctx, int index);
bool duktape__duk_is_boolean(::uStatic* __this, void* ctx, int index);
bool duktape__duk_is_function(::uStatic* __this, void* ctx, int index);
bool duktape__duk_is_null_or_undefined(::uStatic* __this, void* ctx, int index);
bool duktape__duk_is_number(::uStatic* __this, void* ctx, int index);
bool duktape__duk_is_object(::uStatic* __this, void* ctx, int index);
bool duktape__duk_is_string(::uStatic* __this, void* ctx, int index);
void duktape__duk_new(::uStatic* __this, void* ctx, int nargs);
bool duktape__duk_next(::uStatic* __this, void* ctx, int index, bool getValue);
int duktape__duk_pcall(::uStatic* __this, void* ctx, int nargs);
int duktape__duk_pcall_method(::uStatic* __this, void* ctx, int nargs);
int duktape__duk_pcompile(::uStatic* __this, void* ctx, ::uUInt flags);
int duktape__duk_pcompile_string(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src);
int duktape__duk_peval_string(::uStatic* __this, void* ctx, ::uString* code);
void duktape__duk_pop(::uStatic* __this, void* ctx);
void duktape__duk_pop_2(::uStatic* __this, void* ctx);
void duktape__duk_push_boolean(::uStatic* __this, void* ctx, bool value);
void duktape__duk_push_global_object(::uStatic* __this, void* ctx);
void duktape__duk_push_global_stash(::uStatic* __this, void* ctx);
int duktape__duk_push_heapptr(::uStatic* __this, void* ctx, void* ptr);
void duktape__duk_push_int(::uStatic* __this, void* ctx, int val);
void duktape__duk_push_null(::uStatic* __this, void* ctx);
void duktape__duk_push_number(::uStatic* __this, void* ctx, double val);
void duktape__duk_push_string(::uStatic* __this, void* ctx, ::uString* str);
bool duktape__duk_put_prop_index(::uStatic* __this, void* ctx, int index, int arr_index);
bool duktape__duk_put_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key);
::uString* duktape__duk_safe_to_string(::uStatic* __this, void* ctx, int index);
void duktape__push_callback_proxy(::uStatic* __this, void* ctx, int argc);
void duktape__push_delegate(::uStatic* __this, void* ctx, ::uDelegate* del);

}}}}


#endif
