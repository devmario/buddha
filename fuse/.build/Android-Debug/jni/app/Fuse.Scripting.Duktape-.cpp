#include <app/Fuse.Scripting.Callback.h>
#include <app/Fuse.Scripting.Duktape.CallbackClosure.h>
#include <app/Fuse.Scripting.Duktape.CompileFlag.h>
#include <app/Fuse.Scripting.Duktape.Context.h>
#include <app/Fuse.Scripting.Duktape.duktape.h>
#include <app/Fuse.Scripting.Duktape.EnumFlags.h>
#include <app/Fuse.Scripting.Duktape.JSArray.h>
#include <app/Fuse.Scripting.Duktape.JSFunction.h>
#include <app/Fuse.Scripting.Duktape.JSObject.h>
#include <app/Fuse.Scripting.Function.h>
#include <app/Fuse.Scripting.IDispatcher.h>
#include <app/Fuse.Scripting.Object.h>
#include <app/Fuse.Scripting.ScriptException.h>
#include <app/Uno.Action__Uno_IntPtr.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Scripting_Callback.h>
#include <app/Uno.Collections.List__string.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.IntPtr.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <duktape.c>
#include <duktape_helpers.h>

namespace app {
namespace Fuse {
namespace Scripting {
namespace Duktape {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CallbackClosure__uType* CallbackClosure__typeof()
{
    static ::uStaticStrong<CallbackClosure__uType*> type;
    if (type != NULL) return type;

    type = (CallbackClosure__uType*)::uAllocClassType(sizeof(CallbackClosure__uType), "Fuse.Scripting.Duktape.CallbackClosure", false, 0, 1, 0);

    type->SetStrongRefs(
        "_callback", offsetof(CallbackClosure, _callback));

    return type;
}

void CallbackClosure___ObjInit(CallbackClosure* __this, void* context, ::uDelegate* callback)
{
    __this->_context = context;
    __this->_callback = callback;
}

CallbackClosure* CallbackClosure__New_1(::uStatic* __this, void* context, ::uDelegate* callback)
{
    CallbackClosure* inst = (CallbackClosure*)::uAllocObject(sizeof(CallbackClosure), CallbackClosure__typeof());
    inst->_ObjInit(context, callback);
    return inst;
}

::uObject* CallbackClosure__Proxy(CallbackClosure* __this, ::uArray* args)
{
    try
    {
        ::uObject* res = ::uPtr< ::uDelegate*>(__this->_callback)->Invoke< ::uObject*, ::uArray*>(args);
        return res;
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Fuse::Scripting::ScriptException__typeof()))
        {
            ::app::Fuse::Scripting::ScriptException* e = (::app::Fuse::Scripting::ScriptException*)__t.Exception;
            ::app::Fuse::Scripting::Duktape::duktape__duk_error(NULL, __this->_context, ::uPtr< ::app::Fuse::Scripting::ScriptException*>(e)->Message());
            return NULL;
        }
        else
        {
            throw __t;
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* CompileFlag__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Scripting.Duktape.CompileFlag", ::app::Uno::UInt__typeof(), 7);

    type->SetLiterals(
        "DUK_COMPILE_EVAL", 1LL,
        "DUK_COMPILE_FUNCTION", 2LL,
        "DUK_COMPILE_STRICT", 4LL,
        "DUK_COMPILE_SAFE", 8LL,
        "DUK_COMPILE_NORESULT", 16LL,
        "DUK_COMPILE_NOSOURCE", 32LL,
        "DUK_COMPILE_STRLEN", 64LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uArray*> Context___emptyArgs;

Context__uType* Context__typeof()
{
    static ::uStaticStrong<Context__uType*> type;
    if (type != NULL) return type;

    type = (Context__uType*)::uAllocClassType(sizeof(Context__uType), "Fuse.Scripting.Duktape.Context", false, 1, 3, 0);

    type->SetBaseType(::app::Fuse::Scripting::Context__typeof());
    type->__fp_Dispose = (void(*)(::app::Fuse::Scripting::Context*))Context__Dispose;
    type->__fp_Evaluate = (::uObject*(*)(::app::Fuse::Scripting::Context*, ::uString*, ::uString*))Context__Evaluate;
    type->__fp_get_GlobalObject = (::app::Fuse::Scripting::Object*(*)(::app::Fuse::Scripting::Context*))Context__get_GlobalObject;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Context__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Context__uType, __interface_0));

    type->SetStrongRefs(
        "_callbacks", offsetof(Context, _callbacks),
        "_globalObject", offsetof(Context, _globalObject),
        "_proxyCallback", offsetof(Context, _proxyCallback));

    return type;
}

void Context___ObjInit_1(Context* __this, ::uObject* dispatcher)
{
    ::app::Fuse::Scripting::Context___ObjInit(__this, dispatcher);
    __this->_isAlive = true;
    __this->_handle = ::app::Fuse::Scripting::Duktape::duktape__duk_create_heap_default(NULL);
    __this->_callbacks = ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback__New_1(NULL);
    __this->EvaluateNoResult(::uGetConstString("var __global_object__ = (1,eval)('this');"));
    __this->InitCallbacks();
}

void Context___TypeInit(::uStatic* __this)
{
    Context___emptyArgs = ::uNewArray(::uObject__typeof(), 0);
}

int Context__AddCallback(Context* __this, ::uDelegate* callback)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*>(__this->_callbacks)->Add(__this->_callbacksCount, ::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)::app::Fuse::Scripting::Duktape::CallbackClosure__Proxy, ::app::Fuse::Scripting::Duktape::CallbackClosure__New_1(NULL, __this->_handle, callback)));
    return __this->_callbacksCount++;
}

void Context__CheckError(Context* __this, int errorCode)
{
    if (errorCode != 0)
    {
        ::app::Fuse::Scripting::ScriptException* e = __this->GetError(__this->GetTop() - 1);
        __this->Pop();
        U_THROW(e);
    }
}

void Context__Construct(Context* __this, int argc)
{
    ::app::Fuse::Scripting::Duktape::duktape__duk_new(NULL, __this->_handle, argc);
}

bool Context__DelProperty_2(Context* __this, int index, ::uString* key)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_del_prop_string(NULL, __this->_handle, index, key);
}

void Context__Dispose(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__duk_destroy_heap(NULL, __this->_handle);
    __this->_isAlive = false;
}

bool Context__EnumeratorNext(Context* __this, int index, bool getValue)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_next(NULL, __this->_handle, index, getValue);
}

::uObject* Context__Evaluate(Context* __this, ::uString* fileName, ::uString* code)
{
    __this->Push_3(code);
    __this->Push_3(fileName);
    __this->CheckError(__this->SafeCompile(0));
    __this->CheckError(__this->SafeCall(0));
    ::uObject* result = __this->IndexToObject(__this->GetTop() - 1);
    __this->Pop();
    return result;
}

::uObject* Context__Evaluate_2(Context* __this, ::uString* code)
{
    __this->CheckError(__this->SafeEval(code));
    ::uObject* result = __this->IndexToObject(__this->GetTop() - 1);
    __this->Pop();
    return result;
}

void Context__EvaluateNoResult(Context* __this, ::uString* code)
{
    __this->CheckError(__this->SafeEval(code));
    __this->Pop();
}

::app::Fuse::Scripting::Object* Context__get_GlobalObject(Context* __this)
{
    if (__this->_globalObject == NULL)
    {
        __this->PushGlobalObject();
        void* handle = __this->GetHeapPtr(__this->GetTop() - 1);
        __this->Pop();
        __this->_globalObject = ::app::Fuse::Scripting::Duktape::JSObject__New_1(NULL, __this, handle);
    }

    return (::app::Fuse::Scripting::Object*)__this->_globalObject;
}

bool Context__GetBool(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_get_boolean(NULL, __this->_handle, index);
}

::app::Fuse::Scripting::ScriptException* Context__GetError(Context* __this, int index)
{
    ::uString* name = NULL;
    ::uString* message = NULL;
    ::uString* fileName = NULL;
    int lineNumber = -1;
    ::uString* stack = NULL;

    if (__this->IsObject(index))
    {
        __this->GetProperty_1(index, ::uGetConstString("name"));

        if (__this->IsString(-1))
        {
            name = __this->GetString(-1);
        }

        __this->Pop();
        __this->GetProperty_1(index, ::uGetConstString("message"));

        if (__this->IsString(-1))
        {
            message = __this->GetString(-1);
        }

        __this->Pop();
        __this->GetProperty_1(index, ::uGetConstString("fileName"));

        if (__this->IsString(-1))
        {
            fileName = __this->GetString(-1);
        }

        __this->Pop();
        __this->GetProperty_1(index, ::uGetConstString("lineNumber"));
        lineNumber = __this->GetInt(-1);
        __this->Pop();
        __this->GetProperty_1(index, ::uGetConstString("stack"));

        if (__this->IsString(-1))
        {
            stack = __this->GetString(-1);
        }

        __this->Pop();
    }
    else
    {
        message = __this->SafeToString(index);
    }

    return ::app::Fuse::Scripting::ScriptException__New_3(NULL, name, message, fileName, lineNumber, stack);
}

void* Context__GetHeapPtr(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_get_heapptr(NULL, __this->_handle, index);
}

int Context__GetInt(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_get_int(NULL, __this->_handle, index);
}

::uLong Context__GetLength(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_get_length(NULL, __this->_handle, index);
}

double Context__GetNumber(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_get_number(NULL, __this->_handle, index);
}

bool Context__GetProperty(Context* __this, int index, int arrIndex)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_get_prop_index(NULL, __this->_handle, index, arrIndex);
}

bool Context__GetProperty_1(Context* __this, int index, ::uString* key)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_get_prop_string(NULL, __this->_handle, index, key);
}

::uString* Context__GetString(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_get_string(NULL, __this->_handle, index);
}

int Context__GetTop(Context* __this)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_get_top(NULL, __this->_handle);
}

bool Context__HasProperty(Context* __this, int index, ::uString* key)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_has_prop_string(NULL, __this->_handle, index, key);
}

::uObject* Context__IndexToObject(Context* __this, int index)
{
    if (__this->IsFunction(index))
    {
        return (::uObject*)::app::Fuse::Scripting::Duktape::JSFunction__New_1(NULL, __this, __this->GetHeapPtr(index));
    }

    if (__this->IsArray(index))
    {
        return (::uObject*)::app::Fuse::Scripting::Duktape::JSArray__New_1(NULL, __this, __this->GetHeapPtr(index));
    }

    if (__this->IsObject(index))
    {
        return (::uObject*)::app::Fuse::Scripting::Duktape::JSObject__New_1(NULL, __this, __this->GetHeapPtr(index));
    }

    if (__this->IsNumber(index))
    {
        return ::uBox(::app::Uno::Double__typeof(), __this->GetNumber(index));
    }

    if (__this->IsString(index))
    {
        return (::uObject*)__this->GetString(index);
    }

    if (__this->IsBool(index))
    {
        return ::uBox(::app::Uno::Bool__typeof(), __this->GetBool(index));
    }

    if (__this->IsNullOrUndefined(index))
    {
        return NULL;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Could not convert index to object")));
}

void Context__InitCallbacks(Context* __this)
{
    __this->_proxyCallback = ::uNewDelegateNonVirt(::app::Uno::Action__Uno_IntPtr__typeof(), (const void*)Context__ProxyCallback, __this);
    __this->PushDelegate(__this->_proxyCallback);
    __this->PushGlobalObject();
    __this->PushCallbackProxy(-1);
    __this->PutProperty_1(__this->GetTop() - 2, ::uGetConstString("__callback_proxy__"));
    __this->Pop();
}

bool Context__IsArray(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_is_array(NULL, __this->_handle, index);
}

bool Context__IsBool(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_is_boolean(NULL, __this->_handle, index);
}

bool Context__IsFunction(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_is_function(NULL, __this->_handle, index);
}

bool Context__IsNullOrUndefined(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_is_null_or_undefined(NULL, __this->_handle, index);
}

bool Context__IsNumber(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_is_number(NULL, __this->_handle, index);
}

bool Context__IsObject(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_is_object(NULL, __this->_handle, index);
}

bool Context__IsString(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_is_string(NULL, __this->_handle, index);
}

Context* Context__New_1(::uStatic* __this, ::uObject* dispatcher)
{
    Context* inst = (Context*)::uAllocObject(sizeof(Context), Context__typeof());
    inst->_ObjInit_1(dispatcher);
    return inst;
}

void Context__Pop(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__duk_pop(NULL, __this->_handle);
}

void Context__Pop2(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__duk_pop_2(NULL, __this->_handle);
}

void Context__ProxyCallback(Context* __this, void* ctx)
{
    int argc = (int)__this->GetLength(0);
    ::uArray* args = Context___emptyArgs;

    if (argc != 0)
    {
        args = ::uNewArray(::uObject__typeof(), argc);

        for (int i = 0; i < argc; i++)
        {
            __this->GetProperty(0, i);
            ::uPtr< ::uArray*>(args)->ItemStrong< ::uObject*>(i) = __this->IndexToObject(__this->GetTop() - 1);
            __this->Pop();
        }
    }

    int index = __this->GetInt(__this->GetTop() - 1);
    ::uObject* result = ::uPtr< ::uDelegate*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*>(__this->_callbacks)->Item(index))->Invoke< ::uObject*, ::uArray*>(args);
    __this->Push_4(result);
}

void Context__Push(Context* __this, bool val)
{
    ::app::Fuse::Scripting::Duktape::duktape__duk_push_boolean(NULL, __this->_handle, val);
}

void Context__Push_1(Context* __this, double val)
{
    ::app::Fuse::Scripting::Duktape::duktape__duk_push_number(NULL, __this->_handle, val);
}

void Context__Push_2(Context* __this, int val)
{
    ::app::Fuse::Scripting::Duktape::duktape__duk_push_int(NULL, __this->_handle, val);
}

void Context__Push_3(Context* __this, ::uString* str)
{
    ::app::Fuse::Scripting::Duktape::duktape__duk_push_string(NULL, __this->_handle, str);
}

void Context__Push_4(Context* __this, ::uObject* value)
{
    if (::uIs(value, ::app::Uno::Int__typeof()))
    {
        __this->Push_2(::uUnbox< int>(::app::Uno::Int__typeof(), value));
        return;
    }

    if (::uIs(value, ::app::Uno::Double__typeof()))
    {
        __this->Push_1(::uUnbox< double>(::app::Uno::Double__typeof(), value));
        return;
    }

    if (::uIs(value, ::app::Uno::String__typeof()))
    {
        __this->Push_3(::uCast< ::uString*>(value, ::app::Uno::String__typeof()));
        return;
    }

    if (::uIs(value, ::app::Uno::Bool__typeof()))
    {
        __this->Push(::uUnbox< bool>(::app::Uno::Bool__typeof(), value));
        return;
    }

    if (value == NULL)
    {
        __this->PushNull();
        return;
    }

    ::uDelegate* c = ::uAs< ::uDelegate*>(value, ::app::Fuse::Scripting::Callback__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)c, NULL))
    {
        __this->Push_5(c);
        return;
    }

    ::app::Fuse::Scripting::Duktape::JSFunction* f = ::uAs< ::app::Fuse::Scripting::Duktape::JSFunction*>(value, ::app::Fuse::Scripting::Duktape::JSFunction__typeof());

    if (f != NULL)
    {
        __this->PushHeapPtr(::uPtr< ::app::Fuse::Scripting::Duktape::JSFunction*>(f)->Handle());
        return;
    }

    ::app::Fuse::Scripting::Duktape::JSArray* a = ::uAs< ::app::Fuse::Scripting::Duktape::JSArray*>(value, ::app::Fuse::Scripting::Duktape::JSArray__typeof());

    if (a != NULL)
    {
        __this->PushHeapPtr(::uPtr< ::app::Fuse::Scripting::Duktape::JSArray*>(a)->Handle());
        return;
    }

    ::app::Fuse::Scripting::Duktape::JSObject* o = ::uAs< ::app::Fuse::Scripting::Duktape::JSObject*>(value, ::app::Fuse::Scripting::Duktape::JSObject__typeof());

    if (o != NULL)
    {
        __this->PushHeapPtr(::uPtr< ::app::Fuse::Scripting::Duktape::JSObject*>(o)->Handle());
        return;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Cannot push value: "), value)));
}

void Context__Push_5(Context* __this, ::uDelegate* callback)
{
    int index = __this->AddCallback(callback);
    int result = __this->SafeCompileFunction(::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("function() { return __global_object__.__callback_proxy__(arguments, "), ::app::Uno::Int::ToString(index)), ::uGetConstString("); }")));
    __this->CheckError(result);
}

void Context__PushCallbackProxy(Context* __this, int argc)
{
    ::app::Fuse::Scripting::Duktape::duktape__push_callback_proxy(NULL, __this->_handle, argc);
}

void Context__PushDelegate(Context* __this, ::uDelegate* del)
{
    ::app::Fuse::Scripting::Duktape::duktape__push_delegate(NULL, __this->_handle, del);
}

void Context__PushEnumerator(Context* __this, int index, int flags)
{
    ::app::Fuse::Scripting::Duktape::duktape__duk_enum(NULL, __this->_handle, index, flags);
}

void Context__PushGlobalObject(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__duk_push_global_object(NULL, __this->_handle);
}

void Context__PushGlobalStash(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__duk_push_global_stash(NULL, __this->_handle);
}

int Context__PushHeapPtr(Context* __this, void* ptr)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_push_heapptr(NULL, __this->_handle, ptr);
}

void Context__PushNull(Context* __this)
{
    ::app::Fuse::Scripting::Duktape::duktape__duk_push_null(NULL, __this->_handle);
}

bool Context__PutProperty(Context* __this, int index, int arrIndex)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_put_prop_index(NULL, __this->_handle, index, arrIndex);
}

bool Context__PutProperty_1(Context* __this, int index, ::uString* key)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_put_prop_string(NULL, __this->_handle, index, key);
}

int Context__SafeCall(Context* __this, int argc)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_pcall(NULL, __this->_handle, argc);
}

int Context__SafeCallMethod(Context* __this, int argc)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_pcall_method(NULL, __this->_handle, argc);
}

int Context__SafeCompile(Context* __this, ::uUInt flags)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_pcompile(NULL, __this->_handle, flags);
}

int Context__SafeCompileFunction(Context* __this, ::uString* source)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_pcompile_string(NULL, __this->_handle, 2u, source);
}

int Context__SafeEval(Context* __this, ::uString* code)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_peval_string(NULL, __this->_handle, code);
}

::uString* Context__SafeToString(Context* __this, int index)
{
    return ::app::Fuse::Scripting::Duktape::duktape__duk_safe_to_string(NULL, __this->_handle, index);
}

::uString* Context__Stash(Context* __this, void* heapPtr)
{
    ::uString* stashKey = ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("__stashKey"), ::app::Uno::Int::ToString(__this->_stashKey));
    __this->_stashKey++;
    __this->PushGlobalStash();
    __this->PushHeapPtr(heapPtr);
    __this->PutProperty_1(__this->GetTop() - 2, stashKey);
    __this->Pop();
    return stashKey;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

duktape__uType* duktape__typeof()
{
    static ::uStaticStrong<duktape__uType*> type;
    if (type != NULL) return type;

    type = (duktape__uType*)::uAllocClassType(sizeof(duktape__uType), "Fuse.Scripting.Duktape.duktape");

    return type;
}

void* duktape__duk_create_heap_default(::uStatic* __this)
{
    return duk_create_heap_default();
}

bool duktape__duk_del_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key)
{
    return duk_del_prop_string(ctx, obj_index, ::uStringToCStr(key));
}

void duktape__duk_destroy_heap(::uStatic* __this, void* ctx)
{
    duk_destroy_heap(ctx);
}

void duktape__duk_enum(::uStatic* __this, void* ctx, int index, int flags)
{
    duk_enum(ctx, index, flags);
}

void duktape__duk_error(::uStatic* __this, void* ctx, ::uString* message)
{
    duk_error(ctx, DUK_ERR_ERROR, ::uStringToCStr(message));
}

bool duktape__duk_get_boolean(::uStatic* __this, void* ctx, int index)
{
    return duk_get_boolean(ctx, index);
}

void* duktape__duk_get_heapptr(::uStatic* __this, void* ctx, int index)
{
    return duk_get_heapptr(ctx, index);
}

int duktape__duk_get_int(::uStatic* __this, void* ctx, int index)
{
    return duk_get_int(ctx, index);
}

::uLong duktape__duk_get_length(::uStatic* __this, void* ctx, int index)
{
    return duk_get_length(ctx, index);
}

double duktape__duk_get_number(::uStatic* __this, void* ctx, int index)
{
    return duk_get_number(ctx, index);
}

bool duktape__duk_get_prop_index(::uStatic* __this, void* ctx, int index, int arr_index)
{
    return duk_get_prop_index(ctx, index, arr_index);
}

bool duktape__duk_get_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key)
{
    return duk_get_prop_string(ctx, obj_index, ::uStringToCStr(key));
}

::uString* duktape__duk_get_string(::uStatic* __this, void* ctx, int index)
{
    return ::uNewStringUtf8(duk_get_string(ctx, index));
}

int duktape__duk_get_top(::uStatic* __this, void* ctx)
{
    return duk_get_top(ctx);
}

bool duktape__duk_has_prop_string(::uStatic* __this, void* ctx, int index, ::uString* key)
{
    return duk_has_prop_string(ctx, index, ::uStringToCStr(key));
}

bool duktape__duk_is_array(::uStatic* __this, void* ctx, int index)
{
    return duk_is_array(ctx, index);
}

bool duktape__duk_is_boolean(::uStatic* __this, void* ctx, int index)
{
    return duk_is_boolean(ctx, index);
}

bool duktape__duk_is_function(::uStatic* __this, void* ctx, int index)
{
    return duk_is_function(ctx, index);
}

bool duktape__duk_is_null_or_undefined(::uStatic* __this, void* ctx, int index)
{
    return duk_is_null_or_undefined(ctx, index);
}

bool duktape__duk_is_number(::uStatic* __this, void* ctx, int index)
{
    return duk_is_number(ctx, index);
}

bool duktape__duk_is_object(::uStatic* __this, void* ctx, int index)
{
    return duk_is_object(ctx, index);
}

bool duktape__duk_is_string(::uStatic* __this, void* ctx, int index)
{
    return duk_is_string(ctx, index);
}

void duktape__duk_new(::uStatic* __this, void* ctx, int nargs)
{
    duk_new(ctx, nargs);
}

bool duktape__duk_next(::uStatic* __this, void* ctx, int index, bool getValue)
{
    return duk_next(ctx, index, getValue);
}

int duktape__duk_pcall(::uStatic* __this, void* ctx, int nargs)
{
    return duk_pcall(ctx, nargs);
}

int duktape__duk_pcall_method(::uStatic* __this, void* ctx, int nargs)
{
    return duk_pcall_method(ctx, nargs);
}

int duktape__duk_pcompile(::uStatic* __this, void* ctx, ::uUInt flags)
{
    return duk_pcompile(ctx, flags);
}

int duktape__duk_pcompile_string(::uStatic* __this, void* ctx, ::uUInt flags, ::uString* src)
{
    return duk_pcompile_string(ctx, flags, ::uStringToCStr(src));
}

int duktape__duk_peval_string(::uStatic* __this, void* ctx, ::uString* code)
{
    return duk_peval_string(ctx, ::uStringToCStr(code));
}

void duktape__duk_pop(::uStatic* __this, void* ctx)
{
    duk_pop(ctx);
}

void duktape__duk_pop_2(::uStatic* __this, void* ctx)
{
    duk_pop_2(ctx);
}

void duktape__duk_push_boolean(::uStatic* __this, void* ctx, bool value)
{
    duk_push_boolean(ctx, value);
}

void duktape__duk_push_global_object(::uStatic* __this, void* ctx)
{
    duk_push_global_object(ctx);
}

void duktape__duk_push_global_stash(::uStatic* __this, void* ctx)
{
    duk_push_global_stash(ctx);
}

int duktape__duk_push_heapptr(::uStatic* __this, void* ctx, void* ptr)
{
    return duk_push_heapptr(ctx, ptr);
}

void duktape__duk_push_int(::uStatic* __this, void* ctx, int val)
{
    duk_push_int(ctx, val);
}

void duktape__duk_push_null(::uStatic* __this, void* ctx)
{
    duk_push_null(ctx);
}

void duktape__duk_push_number(::uStatic* __this, void* ctx, double val)
{
    duk_push_number(ctx, val);
}

void duktape__duk_push_string(::uStatic* __this, void* ctx, ::uString* str)
{
    ::duk_push_string(ctx, ::uStringToCStr(str));
}

bool duktape__duk_put_prop_index(::uStatic* __this, void* ctx, int index, int arr_index)
{
    return duk_put_prop_index(ctx, index, arr_index);
}

bool duktape__duk_put_prop_string(::uStatic* __this, void* ctx, int obj_index, ::uString* key)
{
    return duk_put_prop_string(ctx, obj_index, ::uStringToCStr(key));
}

::uString* duktape__duk_safe_to_string(::uStatic* __this, void* ctx, int index)
{
    return ::uNewStringUtf8(duk_safe_to_string(ctx, index));
}

void duktape__push_callback_proxy(::uStatic* __this, void* ctx, int argc)
{
    push_callback_proxy(ctx, argc);
}

void duktape__push_delegate(::uStatic* __this, void* ctx, ::uDelegate* del)
{
    push_delegate(ctx, del);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* EnumFlags__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Scripting.Duktape.EnumFlags", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "DUK_ENUM_INCLUDE_NONENUMERABLE", 1LL,
        "DUK_ENUM_INCLUDE_INTERNAL", 2LL,
        "DUK_ENUM_OWN_PROPERTIES_ONLY", 4LL,
        "DUK_ENUM_ARRAY_INDICES_ONLY", 8LL,
        "DUK_ENUM_SORT_ARRAY_INDICES", 16LL,
        "DUK_ENUM_NO_PROXY_BEHAVIOR", 32LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JSArray__uType* JSArray__typeof()
{
    static ::uStaticStrong<JSArray__uType*> type;
    if (type != NULL) return type;

    type = (JSArray__uType*)::uAllocClassType(sizeof(JSArray__uType), "Fuse.Scripting.Duktape.JSArray", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Scripting::Array__typeof());
    type->__fp_Equals_2 = (bool(*)(::app::Fuse::Scripting::Array*, ::app::Fuse::Scripting::Array*))JSArray__Equals_2;
    type->__fp_get_Item = (::uObject*(*)(::app::Fuse::Scripting::Array*, int))JSArray__get_Item;
    type->__fp_get_Length = (int(*)(::app::Fuse::Scripting::Array*))JSArray__get_Length;
    type->__fp_set_Item = (void(*)(::app::Fuse::Scripting::Array*, int, ::uObject*))JSArray__set_Item;

    type->SetStrongRefs(
        "_ctx", offsetof(JSArray, _ctx),
        "_stashKey", offsetof(JSArray, _stashKey));

    return type;
}

void JSArray___ObjInit_1(JSArray* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    ::app::Fuse::Scripting::Array___ObjInit(__this);
    __this->_ctx = ctx;
    __this->_handle = handle;
    __this->_stashKey = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Stash(__this->_handle);
}

bool JSArray__Equals_2(JSArray* __this, ::app::Fuse::Scripting::Array* a)
{
    JSArray* ja = ::uAs< JSArray*>(a, JSArray__typeof());

    if (ja == NULL)
    {
        return false;
    }

    return (__this->_ctx == ::uPtr< JSArray*>(ja)->_ctx) && ::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::uPtr< JSArray*>(ja)->_handle);
}

::uObject* JSArray__Get(JSArray* __this, int index)
{
    int objIndex = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetProperty(objIndex, index);
    ::uObject* res = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->IndexToObject(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop2();
    return res;
}

void* JSArray__get_Handle(JSArray* __this)
{
    return __this->_handle;
}

::uObject* JSArray__get_Item(JSArray* __this, int index)
{
    return __this->Get(index);
}

int JSArray__get_Length(JSArray* __this)
{
    int index = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uLong l = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetLength(index);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
    return (int)l;
}

JSArray* JSArray__New_1(::uStatic* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    JSArray* inst = (JSArray*)::uAllocObject(sizeof(JSArray), JSArray__typeof());
    inst->_ObjInit_1(ctx, handle);
    return inst;
}

void JSArray__Set(JSArray* __this, int index, ::uObject* value)
{
    int objIndex = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Push_4(value);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PutProperty(objIndex, index);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
}

void JSArray__set_Item(JSArray* __this, int index, ::uObject* value)
{
    __this->Set(index, value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JSFunction__uType* JSFunction__typeof()
{
    static ::uStaticStrong<JSFunction__uType*> type;
    if (type != NULL) return type;

    type = (JSFunction__uType*)::uAllocClassType(sizeof(JSFunction__uType), "Fuse.Scripting.Duktape.JSFunction", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Scripting::Function__typeof());
    type->__fp_Call = (::uObject*(*)(::app::Fuse::Scripting::Function*, ::uArray*))JSFunction__Call;
    type->__fp_Construct = (::app::Fuse::Scripting::Object*(*)(::app::Fuse::Scripting::Function*, ::uArray*))JSFunction__Construct;
    type->__fp_Equals_2 = (bool(*)(::app::Fuse::Scripting::Function*, ::app::Fuse::Scripting::Function*))JSFunction__Equals_2;

    type->SetStrongRefs(
        "_ctx", offsetof(JSFunction, _ctx),
        "_stashKey", offsetof(JSFunction, _stashKey));

    return type;
}

void JSFunction___ObjInit_1(JSFunction* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    ::app::Fuse::Scripting::Function___ObjInit(__this);
    __this->_ctx = ctx;
    __this->_handle = handle;
    __this->_stashKey = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Stash(__this->_handle);
}

::uObject* JSFunction__Call(JSFunction* __this, ::uArray* args)
{
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    int argc = ::uPtr< ::uArray*>(args)->Length();

    for (int i = 0; i < argc; i++)
    {
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Push_4(::uPtr< ::uArray*>(args)->Item< ::uObject*>(i));
    }

    int result = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->SafeCall(argc);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->CheckError(result);
    int index = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1;
    ::uObject* returnValue = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->IndexToObject(index);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
    return returnValue;
}

::app::Fuse::Scripting::Object* JSFunction__Construct(JSFunction* __this, ::uArray* args)
{
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    int argc = ::uPtr< ::uArray*>(args)->Length();

    for (int i = 0; i < argc; i++)
    {
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Push_4(::uPtr< ::uArray*>(args)->Item< ::uObject*>(i));
    }

    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Construct(argc);
    ::uObject* returnValue = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->IndexToObject(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
    return ::uCast< ::app::Fuse::Scripting::Object*>(returnValue, ::app::Fuse::Scripting::Object__typeof());
}

bool JSFunction__Equals_2(JSFunction* __this, ::app::Fuse::Scripting::Function* a)
{
    JSFunction* f = ::uAs< JSFunction*>(a, JSFunction__typeof());

    if (f == NULL)
    {
        return false;
    }

    return (__this->_ctx == ::uPtr< JSFunction*>(f)->_ctx) && ::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::uPtr< JSFunction*>(f)->_handle);
}

void* JSFunction__get_Handle(JSFunction* __this)
{
    return __this->_handle;
}

JSFunction* JSFunction__New_1(::uStatic* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    JSFunction* inst = (JSFunction*)::uAllocObject(sizeof(JSFunction), JSFunction__typeof());
    inst->_ObjInit_1(ctx, handle);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting.Duktape/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JSObject__uType* JSObject__typeof()
{
    static ::uStaticStrong<JSObject__uType*> type;
    if (type != NULL) return type;

    type = (JSObject__uType*)::uAllocClassType(sizeof(JSObject__uType), "Fuse.Scripting.Duktape.JSObject", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Scripting::Object__typeof());
    type->__fp_CallMethod = (::uObject*(*)(::app::Fuse::Scripting::Object*, ::uString*, ::uArray*))JSObject__CallMethod;
    type->__fp_ContainsKey = (bool(*)(::app::Fuse::Scripting::Object*, ::uString*))JSObject__ContainsKey;
    type->__fp_Equals_2 = (bool(*)(::app::Fuse::Scripting::Object*, ::app::Fuse::Scripting::Object*))JSObject__Equals_2;
    type->__fp_get_Item = (::uObject*(*)(::app::Fuse::Scripting::Object*, ::uString*))JSObject__get_Item;
    type->__fp_get_Keys = (::uArray*(*)(::app::Fuse::Scripting::Object*))JSObject__get_Keys;
    type->__fp_InstanceOf = (bool(*)(::app::Fuse::Scripting::Object*, ::app::Fuse::Scripting::Function*))JSObject__InstanceOf;
    type->__fp_set_Item = (void(*)(::app::Fuse::Scripting::Object*, ::uString*, ::uObject*))JSObject__set_Item;

    type->SetStrongRefs(
        "_ctx", offsetof(JSObject, _ctx),
        "_stashKey", offsetof(JSObject, _stashKey));

    return type;
}

void JSObject___ObjInit_1(JSObject* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    ::app::Fuse::Scripting::Object___ObjInit(__this);
    __this->_ctx = ctx;
    __this->_handle = handle;
    __this->_stashKey = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Stash(__this->_handle);
}

::uObject* JSObject__CallMethod(JSObject* __this, ::uString* name, ::uArray* args)
{
    int index = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetProperty_1(index, name);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);

    for (int i = 0; i < ::uPtr< ::uArray*>(args)->Length(); i++)
    {
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Push_4(::uPtr< ::uArray*>(args)->Item< ::uObject*>(i));
    }

    int result = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->SafeCallMethod(args->Length());
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->CheckError(result);
    ::uObject* returnVal = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->IndexToObject(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop2();
    return returnVal;
}

bool JSObject__ContainsKey(JSObject* __this, ::uString* key)
{
    int index = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    bool result = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->HasProperty(index, key);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
    return result;
}

bool JSObject__Equals_2(JSObject* __this, ::app::Fuse::Scripting::Object* obj)
{
    JSObject* o = ::uAs< JSObject*>(obj, JSObject__typeof());

    if (o == NULL)
    {
        return false;
    }

    return (__this->_ctx == ::uPtr< JSObject*>(o)->_ctx) && ::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::uPtr< JSObject*>(o)->_handle);
}

void* JSObject__get_Handle(JSObject* __this)
{
    return __this->_handle;
}

::uObject* JSObject__get_Item(JSObject* __this, ::uString* key)
{
    int objIndex = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetProperty_1(objIndex, key);
    ::uObject* res = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->IndexToObject(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop2();
    return res;
}

::uArray* JSObject__get_Keys(JSObject* __this)
{
    ::app::Uno::Collections::List__string* keys = ::app::Uno::Collections::List__string__New_1(NULL);
    int index = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushEnumerator(index, 4);

    while (::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->EnumeratorNext(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1, false))
    {
        ::uString* key = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetString(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1);
        ::uPtr< ::app::Uno::Collections::List__string*>(keys)->Add(key);
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
    }

    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop2();
    return ::uPtr< ::app::Uno::Collections::List__string*>(keys)->ToArray();
}

bool JSObject__InstanceOf(JSObject* __this, ::app::Fuse::Scripting::Function* type)
{
    ::app::Fuse::Scripting::Duktape::JSFunction* func = ::uAs< ::app::Fuse::Scripting::Duktape::JSFunction*>(type, ::app::Fuse::Scripting::Duktape::JSFunction__typeof());

    if (func != NULL)
    {
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushGlobalObject();
        int index = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PutProperty_1(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 2, ::uGetConstString("__a__"));
        int k = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(::uPtr< ::app::Fuse::Scripting::Duktape::JSFunction*>(func)->Handle());
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PutProperty_1(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 2, ::uGetConstString("__b__"));
        bool res = ::uUnbox< bool>(::app::Uno::Bool__typeof(), ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Evaluate_2(::uGetConstString("__a__ instanceof __b__")));
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->DelProperty_2(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1, ::uGetConstString("__a__"));
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->DelProperty_2(::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->GetTop() - 1, ::uGetConstString("__b__"));
        ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
        return res;
    }

    return false;
}

JSObject* JSObject__New_1(::uStatic* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle)
{
    JSObject* inst = (JSObject*)::uAllocObject(sizeof(JSObject), JSObject__typeof());
    inst->_ObjInit_1(ctx, handle);
    return inst;
}

void JSObject__set_Item(JSObject* __this, ::uString* key, ::uObject* value)
{
    int objIndex = ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PushHeapPtr(__this->_handle);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Push_4(value);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->PutProperty_1(objIndex, key);
    ::uPtr< ::app::Fuse::Scripting::Duktape::Context*>(__this->_ctx)->Pop();
}

}}}}
