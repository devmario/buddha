#include <app/Fuse.Camera.PictureResult.h>
#include <app/Fuse.Scripting.Array.h>
#include <app/Fuse.Scripting.BoolChangedArgs.h>
#include <app/Fuse.Scripting.Callback.h>
#include <app/Fuse.Scripting.Context.h>
#include <app/Fuse.Scripting.DoubleChangedArgs.h>
#include <app/Fuse.Scripting.Error.h>
#include <app/Fuse.Scripting.FileModule.h>
#include <app/Fuse.Scripting.Function.h>
#include <app/Fuse.Scripting.FutureFactory__bool.h>
#include <app/Fuse.Scripting.FutureFactory__Fuse_Camera_PictureResult.h>
#include <app/Fuse.Scripting.FutureFactory__string.h>
#include <app/Fuse.Scripting.IDispatcher.h>
#include <app/Fuse.Scripting.IEventSerializer.h>
#include <app/Fuse.Scripting.IModule.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Scripting.IScriptEvent.h>
#include <app/Fuse.Scripting.NameRegistry.h>
#include <app/Fuse.Scripting.NativeCallback.h>
#include <app/Fuse.Scripting.NativeEvent.h>
#include <app/Fuse.Scripting.NativeEvent_EventClosure.h>
#include <app/Fuse.Scripting.NativeFunction.h>
#include <app/Fuse.Scripting.NativeFunctionClosure.h>
#include <app/Fuse.Scripting.NativeMember.h>
#include <app/Fuse.Scripting.NativeModule.h>
#include <app/Fuse.Scripting.Object.h>
#include <app/Fuse.Scripting.ResultConverter__bool__bool.h>
#include <app/Fuse.Scripting.ResultConverter__Fuse_Camera_PictureResult__Fuse-b2e369a5.h>
#include <app/Fuse.Scripting.ResultConverter__string__string.h>
#include <app/Fuse.Scripting.ResultFactory__string.h>
#include <app/Fuse.Scripting.ScriptException.h>
#include <app/Fuse.Scripting.StringChangedArgs.h>
#include <app/Fuse.Scripting.TaskPriority.h>
#include <app/Fuse.Scripting.Value.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__object__string.h>
#include <app/Uno.Collections.Dictionary__string__object.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_Fuse_S-3c8f0cc7.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__string__Uno_Collec-a1b9f09b.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-e0f70c48.h>
#include <app/Uno.Collections.List__Fuse_Scripting_INameListener.h>
#include <app/Uno.Collections.List__Fuse_Scripting_NativeMember.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Scripting_NativeMember.h>
#include <app/Uno.Collections.Queue__object__.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Threading.Future__bool.h>
#include <app/Uno.Threading.Future__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Future__string.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Fuse {
namespace Scripting {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Array__uType* Array__typeof()
{
    static ::uStaticStrong<Array__uType*> type;
    if (type != NULL) return type;

    type = (Array__uType*)::uAllocClassType(sizeof(Array__uType), "Fuse.Scripting.Array", false, 0, 0, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Array__Equals;

    return type;
}

void Array___ObjInit(Array* __this)
{
}

bool Array__Equals(Array* __this, ::uObject* o)
{
    Array* a = ::uAs< Array*>(o, Array__typeof());

    if (a == NULL)
    {
        return false;
    }

    return __this->Equals_2(a);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BoolChangedArgs__uType* BoolChangedArgs__typeof()
{
    static ::uStaticStrong<BoolChangedArgs__uType*> type;
    if (type != NULL) return type;

    type = (BoolChangedArgs__uType*)::uAllocClassType(sizeof(BoolChangedArgs__uType), "Fuse.Scripting.BoolChangedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::UX::ValueChangedArgs__bool__typeof());
    type->__interface_0.__fp_Serialize = (void(*)(void*, ::uObject*))BoolChangedArgs__Fuse_Scripting_IScriptEvent_Serialize;

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(BoolChangedArgs__uType, __interface_0));

    return type;
}

void BoolChangedArgs___ObjInit_2(BoolChangedArgs* __this, bool value, ::uObject* origin)
{
    ::app::Uno::UX::ValueChangedArgs__bool___ObjInit_1(__this, value, origin);
}

void BoolChangedArgs__Fuse_Scripting_IScriptEvent_Serialize(BoolChangedArgs* __this, ::uObject* s)
{
    ::app::Fuse::Scripting::IEventSerializer::AddBool(::uPtr< ::uObject*>(s), ::uGetConstString("value"), __this->Value());
}

BoolChangedArgs* BoolChangedArgs__New_3(::uStatic* __this, bool value, ::uObject* origin)
{
    BoolChangedArgs* inst = (BoolChangedArgs*)::uAllocObject(sizeof(BoolChangedArgs), BoolChangedArgs__typeof());
    inst->_ObjInit_2(value, origin);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Callback__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Scripting.Callback", 1);

    type->SetSignature(::uObject__typeof(),
        ::uGetArrayType(::uObject__typeof()));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Context__uType* Context__typeof()
{
    static ::uStaticStrong<Context__uType*> type;
    if (type != NULL) return type;

    type = (Context__uType*)::uAllocClassType(sizeof(Context__uType), "Fuse.Scripting.Context", false, 1, 2, 0);

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Context__uType, __interface_0));

    type->SetStrongRefs(
        "_moduleResults", offsetof(Context, _moduleResults),
        "_ownerThread", offsetof(Context, _ownerThread));

    return type;
}

void Context___ObjInit(Context* __this, ::uObject* ownerThread)
{
    __this->_moduleResults = ::app::Uno::Collections::Dictionary__string__object__New_1(NULL);
    __this->_ownerThread = ownerThread;
}

bool Context__Acceptor(Context* __this, ::uObject* obj)
{
    return ::uIs(obj, ::app::Fuse::Scripting::IModule__typeof());
}

::uObject* Context__Evaluate_1(Context* __this, ::uObject* src, ::uString* id)
{
    ::uArray* array_123;
    ::uString* code = ::app::Fuse::Scripting::IModule::Code(::uPtr< ::uObject*>(src));
    ::uArray* newlines = ::uNewArray(::app::Uno::Char__typeof(), ::app::Fuse::Scripting::IModule::LineNumberOffset(src));

    for (int i = 0; i < ::app::Fuse::Scripting::IModule::LineNumberOffset(src); ++i)
    {
        ::uPtr< ::uArray*>(newlines)->Item< ::uChar>(i) = 10;
    }

    ::uString* wrappedCode = ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("(function(require) { var module = { id: '"), id), ::uGetConstString("', exports: {} }; var exports = module.exports; { ")), ::uNewStringFromArray(newlines)), code), ::uGetConstString("\n } return module.exports; })"));
    ::app::Fuse::Scripting::Function* moduleFunc = ::uCast< ::app::Fuse::Scripting::Function*>(__this->Evaluate(::app::Fuse::Scripting::IModule::FileName(src), wrappedCode), ::app::Fuse::Scripting::Function__typeof());

    if (moduleFunc == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Could not evaluate module '"), id), ::uGetConstString("': JavaScript code contains errors"))));
    }

    return ::uPtr< ::app::Fuse::Scripting::Function*>(moduleFunc)->Call((array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)Context__Require_1, __this), array_123));
}

::uObject* Context__get_Dispatcher(Context* __this)
{
    return __this->_ownerThread;
}

::app::Fuse::Scripting::Object* Context__NewObject(Context* __this)
{
    return ::uCast< ::app::Fuse::Scripting::Object*>(__this->Evaluate(::uGetConstString("(no file)"), ::uGetConstString("new Object()")), ::app::Fuse::Scripting::Object__typeof());
}

::uObject* Context__Require(Context* __this, ::uString* id)
{
    ::uObject* modRes;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__object*>(__this->_moduleResults)->TryGetValue(id, &modRes))
    {
        ::uObject* res;

        if (!::app::Uno::UX::Resource__TryFindGlobal(NULL, id, ::uNewDelegateNonVirt(::app::Uno::Predicate__object__typeof(), (const void*)Context__Acceptor, __this), &res))
        {
            U_THROW(::app::Fuse::Scripting::Error__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("require(): module not found: "), id)));
        }

        ::uObject* mod = (::uObject*)res;
        modRes = ::app::Fuse::Scripting::IModule::Evaluate(::uPtr< ::uObject*>(mod), id, __this);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__object*>(__this->_moduleResults)->Add(id, modRes);
    }

    return modRes;
}

::uObject* Context__Require_1(Context* __this, ::uArray* args)
{
    if (::uPtr< ::uArray*>(args)->Length() != 1)
    {
        U_THROW(::app::Fuse::Scripting::Error__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("require(): accepts exactly one argument, "), ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::uArray*>(args)->Length())), ::uGetConstString(" provided"))));
    }

    ::uString* id = ::uAs< ::uString*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Uno::String__typeof());

    if (::app::Uno::String__op_Equality(NULL, id, NULL))
    {
        U_THROW(::app::Fuse::Scripting::Error__New_3(NULL, ::uGetConstString("require(): argument must be a string")));
    }

    return __this->Require(id);
}

void Context__ResetModule(Context* __this, ::uString* id)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__string__object*>(__this->_moduleResults)->Remove(id);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DoubleChangedArgs__uType* DoubleChangedArgs__typeof()
{
    static ::uStaticStrong<DoubleChangedArgs__uType*> type;
    if (type != NULL) return type;

    type = (DoubleChangedArgs__uType*)::uAllocClassType(sizeof(DoubleChangedArgs__uType), "Fuse.Scripting.DoubleChangedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::UX::ValueChangedArgs__double__typeof());
    type->__interface_0.__fp_Serialize = (void(*)(void*, ::uObject*))DoubleChangedArgs__Fuse_Scripting_IScriptEvent_Serialize;

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(DoubleChangedArgs__uType, __interface_0));

    return type;
}

void DoubleChangedArgs___ObjInit_2(DoubleChangedArgs* __this, double value, ::uObject* origin)
{
    ::app::Uno::UX::ValueChangedArgs__double___ObjInit_1(__this, value, origin);
}

void DoubleChangedArgs__Fuse_Scripting_IScriptEvent_Serialize(DoubleChangedArgs* __this, ::uObject* s)
{
    ::app::Fuse::Scripting::IEventSerializer::AddDouble(::uPtr< ::uObject*>(s), ::uGetConstString("value"), __this->Value());
}

DoubleChangedArgs* DoubleChangedArgs__New_3(::uStatic* __this, double value, ::uObject* origin)
{
    DoubleChangedArgs* inst = (DoubleChangedArgs*)::uAllocObject(sizeof(DoubleChangedArgs), DoubleChangedArgs__typeof());
    inst->_ObjInit_2(value, origin);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Error__uType* Error__typeof()
{
    static ::uStaticStrong<Error__uType*> type;
    if (type != NULL) return type;

    type = (Error__uType*)::uAllocClassType(sizeof(Error__uType), "Fuse.Scripting.Error", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void Error___ObjInit_2(Error* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

Error* Error__New_3(::uStatic* __this, ::uString* message)
{
    Error* inst = (Error*)::uAllocObject(sizeof(Error), Error__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FileModule__uType* FileModule__typeof()
{
    static ::uStaticStrong<FileModule__uType*> type;
    if (type != NULL) return type;

    type = (FileModule__uType*)::uAllocClassType(sizeof(FileModule__uType), "Fuse.Scripting.FileModule", false, 1, 1, 0);

    type->__interface_0.__fp_Evaluate = (::uObject*(*)(void*, ::uString*, ::app::Fuse::Scripting::Context*))FileModule__Evaluate;
    type->__interface_0.__fp_get_Code = (::uString*(*)(void*))FileModule__get_Code;
    type->__interface_0.__fp_get_FileName = (::uString*(*)(void*))FileModule__get_FileName;
    type->__interface_0.__fp_get_LineNumberOffset = (int(*)(void*))FileModule__get_LineNumberOffset;

    type->SetInterfaces(
        ::app::Fuse::Scripting::IModule__typeof(), offsetof(FileModule__uType, __interface_0));

    type->SetStrongRefs(
        "_fs", offsetof(FileModule, _fs));

    return type;
}

void FileModule___ObjInit(FileModule* __this, ::app::Uno::UX::FileSource* fs)
{
    __this->_fs = fs;
}

::uObject* FileModule__Evaluate(FileModule* __this, ::uString* id, ::app::Fuse::Scripting::Context* c)
{
    return ::uPtr< ::app::Fuse::Scripting::Context*>(c)->Evaluate_1((::uObject*)__this, id);
}

::uString* FileModule__get_Code(FileModule* __this)
{
    return ::uPtr< ::app::Uno::UX::FileSource*>(__this->_fs)->ReadAllText();
}

::uString* FileModule__get_FileName(FileModule* __this)
{
    return ::uPtr< ::app::Uno::UX::FileSource*>(__this->_fs)->Name;
}

int FileModule__get_LineNumberOffset(FileModule* __this)
{
    return 0;
}

FileModule* FileModule__New_1(::uStatic* __this, ::app::Uno::UX::FileSource* fs)
{
    FileModule* inst = (FileModule*)::uAllocObject(sizeof(FileModule), FileModule__typeof());
    inst->_ObjInit(fs);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Function__uType* Function__typeof()
{
    static ::uStaticStrong<Function__uType*> type;
    if (type != NULL) return type;

    type = (Function__uType*)::uAllocClassType(sizeof(Function__uType), "Fuse.Scripting.Function", false, 0, 0, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Function__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))Function__GetHashCode;

    return type;
}

void Function___ObjInit(Function* __this)
{
}

bool Function__Equals(Function* __this, ::uObject* o)
{
    Function* a = ::uAs< Function*>(o, Function__typeof());

    if (a == NULL)
    {
        return false;
    }

    return __this->Equals_2(a);
}

int Function__GetHashCode(Function* __this)
{
    return ::app::Uno::Object__GetHashCode(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* FutureFactory__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Scripting.FutureFactory<bool>", 1);

    type->SetSignature(::app::Uno::Threading::Future__bool__typeof(),
        ::uGetArrayType(::uObject__typeof()));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* FutureFactory__Fuse_Camera_PictureResult__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Scripting.FutureFactory<Fuse.Camera.PictureResult>", 1);

    type->SetSignature(::app::Uno::Threading::Future__Fuse_Camera_PictureResult__typeof(),
        ::uGetArrayType(::uObject__typeof()));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* FutureFactory__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Scripting.FutureFactory<string>", 1);

    type->SetSignature(::app::Uno::Threading::Future__string__typeof(),
        ::uGetArrayType(::uObject__typeof()));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDispatcher__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Scripting.IDispatcher");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEventSerializer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Scripting.IEventSerializer");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IModule__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Scripting.IModule");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* INameListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Scripting.INameListener");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* INameScope__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Scripting.INameScope");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IScriptEvent__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Scripting.IScriptEvent");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*> NameRegistry___listeners;
::uStaticStrong< ::app::Uno::Collections::Dictionary__object__string*> NameRegistry___names;

NameRegistry__uType* NameRegistry__typeof()
{
    static ::uStaticStrong<NameRegistry__uType*> type;
    if (type != NULL) return type;

    type = (NameRegistry__uType*)::uAllocClassType(sizeof(NameRegistry__uType), "Fuse.Scripting.NameRegistry");

    return type;
}

void NameRegistry___TypeInit(::uStatic* __this)
{
    NameRegistry___names = ::app::Uno::Collections::Dictionary__object__string__New_1(NULL);
    NameRegistry___listeners = ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1(NULL);
}

void NameRegistry__AddListener(::uStatic* __this, ::uString* name, ::uObject* listener)
{
    if (!::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(NameRegistry___listeners)->ContainsKey(name))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(NameRegistry___listeners)->Add(name, ::app::Uno::Collections::List__Fuse_Scripting_INameListener__New_1(NULL));
    }

    if (!::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_INameListener*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(NameRegistry___listeners)->Item(name))->Contains(listener))
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_INameListener*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(NameRegistry___listeners)->Item(name))->Add(listener);
    }
}

void NameRegistry__ClearName(::uStatic* __this, ::uObject* obj)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(NameRegistry___names)->ContainsKey(obj))
    {
        ::uString* name = ::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(NameRegistry___names)->Item(obj);
        ::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(NameRegistry___names)->Remove(obj);
        NameRegistry__NotifyNameChanged(NULL, obj, name);
    }
}

void NameRegistry__NotifyNameChanged(::uStatic* __this, ::uObject* obj, ::uString* name)
{
    ::uArray* array_124;
    int index_125 = int();
    int length_126 = int();

    if (::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(NameRegistry___listeners)->ContainsKey(name))
    {
        for (array_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_INameListener*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(NameRegistry___listeners)->Item(name))->ToArray(), index_125 = 0, length_126 = ::uPtr< ::uArray*>(array_124)->Length(); index_125 < length_126; ++index_125)
        {
            ::uObject* listener = ::uPtr< ::uArray*>(array_124)->Item< ::uObject*>(index_125);
            ::app::Fuse::Scripting::INameListener::OnNameChanged(::uPtr< ::uObject*>(listener), obj, name);
        }
    }
}

void NameRegistry__RemoveListener(::uStatic* __this, ::uObject* listener)
{
    for (::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_ enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(NameRegistry___listeners)->Values())->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::List__Fuse_Scripting_INameListener* list = enum_123.Current();

        if (::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_INameListener*>(list)->Contains(listener))
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_INameListener*>(list)->Remove(listener);
            break;
        }
    }
}

void NameRegistry__SetName(::uStatic* __this, ::uObject* obj, ::uString* name)
{
    ::uString* oldName = NULL;

    if (::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(NameRegistry___names)->ContainsKey(obj))
    {
        oldName = ::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(NameRegistry___names)->Item(obj);
    }

    if (::app::Uno::String__op_Inequality(NULL, name, oldName))
    {
        if (::app::Uno::String__op_Equality(NULL, name, NULL))
        {
            NameRegistry__ClearName(NULL, obj);
        }
        else
        {
            ::uPtr< ::app::Uno::Collections::Dictionary__object__string*>(NameRegistry___names)->Item(obj, name);
            NameRegistry__NotifyNameChanged(NULL, obj, name);

            if (::app::Uno::String__op_Inequality(NULL, oldName, NULL))
            {
                NameRegistry__NotifyNameChanged(NULL, obj, oldName);
            }
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* NativeCallback__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Scripting.NativeCallback", 2);

    type->SetSignature(::uObject__typeof(),
        ::app::Fuse::Scripting::Context__typeof(),
        ::uGetArrayType(::uObject__typeof()));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeEvent__uType* NativeEvent__typeof()
{
    static ::uStaticStrong<NativeEvent__uType*> type;
    if (type != NULL) return type;

    type = (NativeEvent__uType*)::uAllocClassType(sizeof(NativeEvent__uType), "Fuse.Scripting.NativeEvent", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Scripting::NativeMember__typeof());
    type->__fp_CreateObject = (::uObject*(*)(::app::Fuse::Scripting::NativeMember*, ::app::Fuse::Scripting::Context*))NativeEvent__CreateObject;

    type->SetStrongRefs(
        "_context", offsetof(NativeEvent, _context),
        "_eventArgsQueue", offsetof(NativeEvent, _eventArgsQueue),
        "_jsFunction", offsetof(NativeEvent, _jsFunction));

    return type;
}

void NativeEvent___ObjInit_1(NativeEvent* __this, ::uString* name, bool queueEventsBeforeHandlerIsSet)
{
    ::app::Fuse::Scripting::NativeMember___ObjInit(__this, name);
    __this->_eventArgsQueue = ::app::Uno::Collections::Queue__object____New_1(NULL);
    __this->_queueEventsBeforeEvaluation = queueEventsBeforeHandlerIsSet;
}

::uObject* NativeEvent__CreateObject(NativeEvent* __this, ::app::Fuse::Scripting::Context* context)
{
    ::uArray* array_123;
    __this->_context = context;
    ::app::Fuse::Scripting::Function* defineProperty = ::uAs< ::app::Fuse::Scripting::Function*>(::uPtr< ::app::Fuse::Scripting::Context*>(__this->_context)->Evaluate(::uGetConstString(""), ::uGetConstString("(function(obj, name, setCallback, getCallback) { Object.defineProperty(obj, name, { get: getCallback, set: setCallback, enumerable: true, configurable: true }); })")), ::app::Fuse::Scripting::Function__typeof());
    ::uPtr< ::app::Fuse::Scripting::Function*>(defineProperty)->Call((array_123 = ::uNewArray(::uObject__typeof(), 4), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)__this->ModuleObject(), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)__this->Name(), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(2) = (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)NativeEvent__SetEvent, __this), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(3) = (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)NativeEvent__GetEvent, __this), array_123));
    return NULL;
}

void NativeEvent__DispatchQueue(NativeEvent* __this)
{
    while ((::uPtr< ::app::Uno::Collections::Queue__object__*>(__this->_eventArgsQueue)->Count() > 0) && (__this->_jsFunction != NULL))
    {
        ::app::Fuse::Scripting::IDispatcher::Dispatch(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Scripting::Context*>(__this->_context)->Dispatcher()), 0, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Fuse::Scripting::NativeEvent_EventClosure__Call, ::app::Fuse::Scripting::NativeEvent_EventClosure__New_1(NULL, __this->_jsFunction, ::uPtr< ::app::Uno::Collections::Queue__object__*>(__this->_eventArgsQueue)->Dequeue())));
    }
}

::uObject* NativeEvent__GetEvent(NativeEvent* __this, ::uArray* args)
{
    return (::uObject*)__this->_jsFunction;
}

NativeEvent* NativeEvent__New_1(::uStatic* __this, ::uString* name, bool queueEventsBeforeHandlerIsSet)
{
    NativeEvent* inst = (NativeEvent*)::uAllocObject(sizeof(NativeEvent), NativeEvent__typeof());
    inst->_ObjInit_1(name, queueEventsBeforeHandlerIsSet);
    return inst;
}

void NativeEvent__RaiseAsync(NativeEvent* __this, ::uArray* args)
{
    if ((__this->_context != NULL) || __this->_queueEventsBeforeEvaluation)
    {
        ::uPtr< ::app::Uno::Collections::Queue__object__*>(__this->_eventArgsQueue)->Enqueue(args);
    }

    __this->DispatchQueue();
}

::uObject* NativeEvent__SetEvent(NativeEvent* __this, ::uArray* args)
{
    __this->_jsFunction = ::uAs< ::app::Fuse::Scripting::Function*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Scripting::Function__typeof());
    __this->DispatchQueue();
    return NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeEvent_EventClosure__uType* NativeEvent_EventClosure__typeof()
{
    static ::uStaticStrong<NativeEvent_EventClosure__uType*> type;
    if (type != NULL) return type;

    type = (NativeEvent_EventClosure__uType*)::uAllocClassType(sizeof(NativeEvent_EventClosure__uType), "Fuse.Scripting.NativeEvent.EventClosure", false, 0, 2, 0);

    type->SetStrongRefs(
        "_args", offsetof(NativeEvent_EventClosure, _args),
        "_jsFunction", offsetof(NativeEvent_EventClosure, _jsFunction));

    return type;
}

void NativeEvent_EventClosure___ObjInit(NativeEvent_EventClosure* __this, ::app::Fuse::Scripting::Function* jsFunction, ::uArray* args)
{
    __this->_jsFunction = jsFunction;
    __this->_args = (args != NULL) ? args : ::uNewArray(::uObject__typeof(), 0);
}

void NativeEvent_EventClosure__Call(NativeEvent_EventClosure* __this)
{
    if (__this->_jsFunction != NULL)
    {
        ::uPtr< ::app::Fuse::Scripting::Function*>(__this->_jsFunction)->Call(__this->_args);
    }
}

NativeEvent_EventClosure* NativeEvent_EventClosure__New_1(::uStatic* __this, ::app::Fuse::Scripting::Function* jsFunction, ::uArray* args)
{
    NativeEvent_EventClosure* inst = (NativeEvent_EventClosure*)::uAllocObject(sizeof(NativeEvent_EventClosure), NativeEvent_EventClosure__typeof());
    inst->_ObjInit(jsFunction, args);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeFunction__uType* NativeFunction__typeof()
{
    static ::uStaticStrong<NativeFunction__uType*> type;
    if (type != NULL) return type;

    type = (NativeFunction__uType*)::uAllocClassType(sizeof(NativeFunction__uType), "Fuse.Scripting.NativeFunction", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Scripting::NativeMember__typeof());
    type->__fp_CreateObject = (::uObject*(*)(::app::Fuse::Scripting::NativeMember*, ::app::Fuse::Scripting::Context*))NativeFunction__CreateObject;

    type->SetStrongRefs(
        "_nativeCallback", offsetof(NativeFunction, _nativeCallback));

    return type;
}

void NativeFunction___ObjInit_1(NativeFunction* __this, ::uString* name, ::uDelegate* callback)
{
    ::app::Fuse::Scripting::NativeMember___ObjInit(__this, name);
    __this->_nativeCallback = callback;
}

::uObject* NativeFunction__CreateObject(NativeFunction* __this, ::app::Fuse::Scripting::Context* c)
{
    return (::uObject*)::uNewDelegateNonVirt(::app::Fuse::Scripting::Callback__typeof(), (const void*)::app::Fuse::Scripting::NativeFunctionClosure__Callback, ::app::Fuse::Scripting::NativeFunctionClosure__New_1(NULL, __this->_nativeCallback, c));
}

NativeFunction* NativeFunction__New_1(::uStatic* __this, ::uString* name, ::uDelegate* callback)
{
    NativeFunction* inst = (NativeFunction*)::uAllocObject(sizeof(NativeFunction), NativeFunction__typeof());
    inst->_ObjInit_1(name, callback);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeFunctionClosure__uType* NativeFunctionClosure__typeof()
{
    static ::uStaticStrong<NativeFunctionClosure__uType*> type;
    if (type != NULL) return type;

    type = (NativeFunctionClosure__uType*)::uAllocClassType(sizeof(NativeFunctionClosure__uType), "Fuse.Scripting.NativeFunctionClosure", false, 0, 2, 0);

    type->SetStrongRefs(
        "_callback", offsetof(NativeFunctionClosure, _callback),
        "_context", offsetof(NativeFunctionClosure, _context));

    return type;
}

void NativeFunctionClosure___ObjInit(NativeFunctionClosure* __this, ::uDelegate* callback, ::app::Fuse::Scripting::Context* context)
{
    __this->_context = context;
    __this->_callback = callback;
}

::uObject* NativeFunctionClosure__Callback(NativeFunctionClosure* __this, ::uArray* args)
{
    return ::uPtr< ::uDelegate*>(__this->_callback)->Invoke< ::uObject*, ::app::Fuse::Scripting::Context*, ::uArray*>(__this->_context, args);
}

NativeFunctionClosure* NativeFunctionClosure__New_1(::uStatic* __this, ::uDelegate* callback, ::app::Fuse::Scripting::Context* context)
{
    NativeFunctionClosure* inst = (NativeFunctionClosure*)::uAllocObject(sizeof(NativeFunctionClosure), NativeFunctionClosure__typeof());
    inst->_ObjInit(callback, context);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeMember__uType* NativeMember__typeof()
{
    static ::uStaticStrong<NativeMember__uType*> type;
    if (type != NULL) return type;

    type = (NativeMember__uType*)::uAllocClassType(sizeof(NativeMember__uType), "Fuse.Scripting.NativeMember", false, 0, 2, 0);

    type->SetStrongRefs(
        "_ModuleObject", offsetof(NativeMember, _ModuleObject),
        "_Name", offsetof(NativeMember, _Name));

    return type;
}

void NativeMember___ObjInit(NativeMember* __this, ::uString* name)
{
    __this->Name(name);
}

void NativeMember__Create(NativeMember* __this, ::app::Fuse::Scripting::Object* obj, ::app::Fuse::Scripting::Context* context)
{
    __this->ModuleObject(obj);
    ::uObject* member = __this->CreateObject(context);

    if (member != NULL)
    {
        ::uPtr< ::app::Fuse::Scripting::Object*>(__this->ModuleObject())->Item(__this->Name(), member);
    }
}

::app::Fuse::Scripting::Object* NativeMember__get_ModuleObject(NativeMember* __this)
{
    return __this->_ModuleObject;
}

::uString* NativeMember__get_Name(NativeMember* __this)
{
    return __this->_Name;
}

void NativeMember__set_ModuleObject(NativeMember* __this, ::app::Fuse::Scripting::Object* value)
{
    __this->_ModuleObject = value;
}

void NativeMember__set_Name(NativeMember* __this, ::uString* value)
{
    __this->_Name = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeModule__uType* NativeModule__typeof()
{
    static ::uStaticStrong<NativeModule__uType*> type;
    if (type != NULL) return type;

    type = (NativeModule__uType*)::uAllocClassType(sizeof(NativeModule__uType), "Fuse.Scripting.NativeModule", false, 1, 2, 0);

    type->__interface_0.__fp_get_Code = (::uString*(*)(void*))NativeModule__Fuse_Scripting_IModule_get_Code;
    type->__interface_0.__fp_get_FileName = (::uString*(*)(void*))NativeModule__Fuse_Scripting_IModule_get_FileName;
    type->__interface_0.__fp_get_LineNumberOffset = (int(*)(void*))NativeModule__Fuse_Scripting_IModule_get_LineNumberOffset;
    type->__interface_0.__fp_Evaluate = (::uObject*(*)(void*, ::uString*, ::app::Fuse::Scripting::Context*))NativeModule__Evaluate;

    type->SetInterfaces(
        ::app::Fuse::Scripting::IModule__typeof(), offsetof(NativeModule__uType, __interface_0));

    type->SetStrongRefs(
        "_evaluated", offsetof(NativeModule, _evaluated),
        "_members", offsetof(NativeModule, _members));

    return type;
}

void NativeModule___ObjInit(NativeModule* __this, ::uArray* members)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    __this->_members = ::app::Uno::Collections::List__Fuse_Scripting_NativeMember__New_1(NULL);

    for (array_123 = members, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Fuse::Scripting::NativeMember* m = ::uPtr< ::uArray*>(array_123)->Item< ::app::Fuse::Scripting::NativeMember*>(index_124);
        __this->AddMember(m);
    }
}

void NativeModule__add_Evaluated(NativeModule* __this, ::uDelegate* value)
{
    if (__this->_isEvaluated)
    {
        ::uPtr< ::uDelegate*>(value)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>(NULL, ::app::Uno::EventArgs__Empty);
    }
    else
    {
        __this->_evaluated = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->_evaluated, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
    }
}

void NativeModule__AddMember(NativeModule* __this, ::app::Fuse::Scripting::NativeMember* member)
{
    if (__this->_isEvaluated)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("NativeModule(): Cannot add more members after first use")));
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*>(__this->_members)->Add(member);
}

::uObject* NativeModule__Evaluate(NativeModule* __this, ::uString* id, ::app::Fuse::Scripting::Context* c)
{
    ::app::Fuse::Scripting::Object* obj = ::uCast< ::app::Fuse::Scripting::Object*>(::uPtr< ::app::Fuse::Scripting::Context*>(c)->Evaluate(id, ::uGetConstString("new Object()")), ::app::Fuse::Scripting::Object__typeof());

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_NativeMember enum_126 = ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*>(__this->_members)->GetEnumerator(); enum_126.MoveNext(); )
    {
        ::app::Fuse::Scripting::NativeMember* m = enum_126.Current();
        ::uPtr< ::app::Fuse::Scripting::NativeMember*>(m)->Create(obj, c);
    }

    __this->_isEvaluated = true;
    ::uDelegate* handler = __this->_evaluated;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>(NULL, ::app::Uno::EventArgs__Empty);
        __this->_evaluated = NULL;
    }

    return (::uObject*)obj;
}

::uString* NativeModule__Fuse_Scripting_IModule_get_Code(NativeModule* __this)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Cannot get Code from NativeModule")));
}

::uString* NativeModule__Fuse_Scripting_IModule_get_FileName(NativeModule* __this)
{
    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Cannot get FileName from NativeModule")));
}

int NativeModule__Fuse_Scripting_IModule_get_LineNumberOffset(NativeModule* __this)
{
    return 0;
}

NativeModule* NativeModule__New_1(::uStatic* __this, ::uArray* members)
{
    NativeModule* inst = (NativeModule*)::uAllocObject(sizeof(NativeModule), NativeModule__typeof());
    inst->_ObjInit(members);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Object__uType* Object__typeof()
{
    static ::uStaticStrong<Object__uType*> type;
    if (type != NULL) return type;

    type = (Object__uType*)::uAllocClassType(sizeof(Object__uType), "Fuse.Scripting.Object", false, 0, 0, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Object__Equals;

    return type;
}

void Object___ObjInit(Object* __this)
{
}

bool Object__Equals(Object* __this, ::uObject* o)
{
    Object* a = ::uAs< Object*>(o, Object__typeof());

    if (a == NULL)
    {
        return false;
    }

    return __this->Equals_2(a);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ResultConverter__bool__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Scripting.ResultConverter<bool,bool>", 2);

    type->SetSignature(::app::Uno::Bool__typeof(),
        ::app::Fuse::Scripting::Context__typeof(),
        ::app::Uno::Bool__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ResultConverter__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Scripting.ResultConverter<Fuse.Camera.PictureResult,Fuse.Scripting.Object>", 2);

    type->SetSignature(::app::Fuse::Scripting::Object__typeof(),
        ::app::Fuse::Scripting::Context__typeof(),
        ::app::Fuse::Camera::PictureResult__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ResultConverter__string__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Scripting.ResultConverter<string,string>", 2);

    type->SetSignature(::app::Uno::String__typeof(),
        ::app::Fuse::Scripting::Context__typeof(),
        ::app::Uno::String__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ResultFactory__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Scripting.ResultFactory<string>", 1);

    type->SetSignature(::app::Uno::String__typeof(),
        ::uGetArrayType(::uObject__typeof()));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ScriptException__uType* ScriptException__typeof()
{
    static ::uStaticStrong<ScriptException__uType*> type;
    if (type != NULL) return type;

    type = (ScriptException__uType*)::uAllocClassType(sizeof(ScriptException__uType), "Fuse.Scripting.ScriptException", false, 0, 4, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());
    type->__fp_get_Message = (::uString*(*)(::app::Uno::Exception*))ScriptException__get_Message;

    type->SetStrongRefs(
        "_ErrorMessage", offsetof(ScriptException, _ErrorMessage),
        "_FileName", offsetof(ScriptException, _FileName),
        "_JSStackTrace", offsetof(ScriptException, _JSStackTrace),
        "_Name", offsetof(ScriptException, _Name));

    return type;
}

void ScriptException___ObjInit_2(ScriptException* __this, ::uString* name, ::uString* errorMessage, ::uString* fileName, int lineNumber, ::uString* stackTrace)
{
    ::app::Uno::Exception___ObjInit(__this);
    __this->Name(name);
    __this->ErrorMessage(errorMessage);
    __this->FileName(fileName);
    __this->LineNumber(lineNumber);
    __this->JSStackTrace(stackTrace);
}

::uString* ScriptException__get_ErrorMessage(ScriptException* __this)
{
    return __this->_ErrorMessage;
}

::uString* ScriptException__get_FileName(ScriptException* __this)
{
    return __this->_FileName;
}

::uString* ScriptException__get_JSStackTrace(ScriptException* __this)
{
    return __this->_JSStackTrace;
}

int ScriptException__get_LineNumber(ScriptException* __this)
{
    return __this->_LineNumber;
}

::uString* ScriptException__get_Message(ScriptException* __this)
{
    ::app::Uno::Text::StringBuilder* stringBuilder = ::app::Uno::Text::StringBuilder__New_1(NULL);

    if (!::app::Uno::String__IsNullOrEmpty(NULL, __this->Name()))
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(stringBuilder)->Append_1(::uGetConstString("Name: "));
        stringBuilder->AppendLine(__this->Name());
    }

    if (!::app::Uno::String__IsNullOrEmpty(NULL, __this->ErrorMessage()))
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(stringBuilder)->Append_1(::uGetConstString("ErrorMessage: "));
        stringBuilder->AppendLine(__this->ErrorMessage());
    }

    if (!::app::Uno::String__IsNullOrEmpty(NULL, __this->FileName()))
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(stringBuilder)->Append_1(::uGetConstString("FileName: "));
        stringBuilder->AppendLine(__this->FileName());
    }

    if (__this->LineNumber() >= 0)
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(stringBuilder)->Append_1(::uGetConstString("LineNumber: "));
        stringBuilder->AppendLine(::app::Uno::Int::ToString(__this->LineNumber()));
    }

    if (!::app::Uno::String__IsNullOrEmpty(NULL, __this->JSStackTrace()))
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(stringBuilder)->Append_1(::uGetConstString("JS StackTrace: "));
        stringBuilder->AppendLine(__this->JSStackTrace());
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(stringBuilder)->ToString();
}

::uString* ScriptException__get_Name(ScriptException* __this)
{
    return __this->_Name;
}

ScriptException* ScriptException__New_3(::uStatic* __this, ::uString* name, ::uString* errorMessage, ::uString* fileName, int lineNumber, ::uString* stackTrace)
{
    ScriptException* inst = (ScriptException*)::uAllocObject(sizeof(ScriptException), ScriptException__typeof());
    inst->_ObjInit_2(name, errorMessage, fileName, lineNumber, stackTrace);
    return inst;
}

void ScriptException__set_ErrorMessage(ScriptException* __this, ::uString* value)
{
    __this->_ErrorMessage = value;
}

void ScriptException__set_FileName(ScriptException* __this, ::uString* value)
{
    __this->_FileName = value;
}

void ScriptException__set_JSStackTrace(ScriptException* __this, ::uString* value)
{
    __this->_JSStackTrace = value;
}

void ScriptException__set_LineNumber(ScriptException* __this, int value)
{
    __this->_LineNumber = value;
}

void ScriptException__set_Name(ScriptException* __this, ::uString* value)
{
    __this->_Name = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StringChangedArgs__uType* StringChangedArgs__typeof()
{
    static ::uStaticStrong<StringChangedArgs__uType*> type;
    if (type != NULL) return type;

    type = (StringChangedArgs__uType*)::uAllocClassType(sizeof(StringChangedArgs__uType), "Fuse.Scripting.StringChangedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::UX::ValueChangedArgs__string__typeof());
    type->__interface_0.__fp_Serialize = (void(*)(void*, ::uObject*))StringChangedArgs__Fuse_Scripting_IScriptEvent_Serialize;

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(StringChangedArgs__uType, __interface_0));

    return type;
}

void StringChangedArgs___ObjInit_2(StringChangedArgs* __this, ::uString* newValue, ::uObject* origin)
{
    ::app::Uno::UX::ValueChangedArgs__string___ObjInit_1(__this, newValue, origin);
}

void StringChangedArgs__Fuse_Scripting_IScriptEvent_Serialize(StringChangedArgs* __this, ::uObject* s)
{
    ::app::Fuse::Scripting::IEventSerializer::AddString(::uPtr< ::uObject*>(s), ::uGetConstString("value"), __this->Value());
}

StringChangedArgs* StringChangedArgs__New_3(::uStatic* __this, ::uString* newValue, ::uObject* origin)
{
    StringChangedArgs* inst = (StringChangedArgs*)::uAllocObject(sizeof(StringChangedArgs), StringChangedArgs__typeof());
    inst->_ObjInit_2(newValue, origin);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TaskPriority__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Scripting.TaskPriority", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Async", 0LL,
        "AttemptSync", 1LL,
        "ForceSync", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Value__uType* Value__typeof()
{
    static ::uStaticStrong<Value__uType*> type;
    if (type != NULL) return type;

    type = (Value__uType*)::uAllocClassType(sizeof(Value__uType), "Fuse.Scripting.Value");

    return type;
}

double Value__ToNumber(::uStatic* __this, ::uObject* obj)
{
    if (::uIs(obj, ::app::Uno::Double__typeof()))
    {
        return ::uUnbox< double>(::app::Uno::Double__typeof(), obj);
    }

    if (::uIs(obj, ::app::Uno::Float__typeof()))
    {
        return (double)::uUnbox< float>(::app::Uno::Float__typeof(), obj);
    }

    if (::uIs(obj, ::app::Uno::Int__typeof()))
    {
        return (double)::uUnbox< int>(::app::Uno::Int__typeof(), obj);
    }

    if (::uIs(obj, ::app::Uno::UInt__typeof()))
    {
        return (double)::uUnbox< ::uUInt>(::app::Uno::UInt__typeof(), obj);
    }

    return 0.0;
}

}}}
