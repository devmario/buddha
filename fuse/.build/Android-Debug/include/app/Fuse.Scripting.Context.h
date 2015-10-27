// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_CONTEXT_H__
#define __APP_FUSE_SCRIPTING_CONTEXT_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__object; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct Context;

struct Context__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
    void(*__fp_Dispose)(Context*);
    ::uObject*(*__fp_Evaluate)(Context*, ::uString*, ::uString*);
    ::app::Fuse::Scripting::Object*(*__fp_get_GlobalObject)(Context*);
};

Context__uType* Context__typeof();

void Context___ObjInit(Context* __this, ::uObject* ownerThread);
bool Context__Acceptor(Context* __this, ::uObject* obj);
::uObject* Context__Evaluate_1(Context* __this, ::uObject* src, ::uString* id);
::uObject* Context__get_Dispatcher(Context* __this);
::app::Fuse::Scripting::Object* Context__NewObject(Context* __this);
::uObject* Context__Require(Context* __this, ::uString* id);
::uObject* Context__Require_1(Context* __this, ::uArray* args);
void Context__ResetModule(Context* __this, ::uString* id);

struct Context : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__object*> _moduleResults;
    ::uStrong< ::uObject*> _ownerThread;

    void _ObjInit(::uObject* ownerThread) { Context___ObjInit(this, ownerThread); }
    bool Acceptor(::uObject* obj) { return Context__Acceptor(this, obj); }
    void Dispose() { (((Context__uType*)this->__obj_type)->__fp_Dispose)(this); }
    ::uObject* Evaluate(::uString* fileName, ::uString* code) { return (((Context__uType*)this->__obj_type)->__fp_Evaluate)(this, fileName, code); }
    ::uObject* Evaluate_1(::uObject* src, ::uString* id) { return Context__Evaluate_1(this, src, id); }
    ::uObject* Dispatcher() { return Context__get_Dispatcher(this); }
    ::app::Fuse::Scripting::Object* GlobalObject() { return (((Context__uType*)this->__obj_type)->__fp_get_GlobalObject)(this); }
    ::app::Fuse::Scripting::Object* NewObject() { return Context__NewObject(this); }
    ::uObject* Require(::uString* id) { return Context__Require(this, id); }
    ::uObject* Require_1(::uArray* args) { return Context__Require_1(this, args); }
    void ResetModule(::uString* id) { Context__ResetModule(this, id); }
};

}}}


#endif
