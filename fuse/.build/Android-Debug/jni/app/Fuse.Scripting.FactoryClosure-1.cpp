#include <app/Fuse.Scripting.FactoryClosure__string.h>
#include <app/Fuse.Scripting.ResultFactory__string.h>
#include <app/Uno.Exception.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Promise__string.h>

namespace app {
namespace Fuse {
namespace Scripting {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FactoryClosure__string__uType* FactoryClosure__string__typeof()
{
    static ::uStaticStrong<FactoryClosure__string__uType*> type;
    if (type != NULL) return type;

    type = (FactoryClosure__string__uType*)::uAllocClassType(sizeof(FactoryClosure__string__uType), "Fuse.Scripting.FactoryClosure<string>", false, 0, 3, 0);

    type->SetStrongRefs(
        "_args", offsetof(FactoryClosure__string, _args),
        "_factory", offsetof(FactoryClosure__string, _factory),
        "_promise", offsetof(FactoryClosure__string, _promise));

    return type;
}

void FactoryClosure__string___ObjInit(FactoryClosure__string* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__string* promise)
{
    __this->_factory = factory;
    __this->_args = args;
    __this->_promise = promise;
}

FactoryClosure__string* FactoryClosure__string__New_1(::uStatic* __this, ::uDelegate* factory, ::uArray* args, ::app::Uno::Threading::Promise__string* promise)
{
    FactoryClosure__string* inst = (FactoryClosure__string*)::uAllocObject(sizeof(FactoryClosure__string), FactoryClosure__string__typeof());
    inst->_ObjInit(factory, args, promise);
    return inst;
}

void FactoryClosure__string__Run(FactoryClosure__string* __this)
{
    ::uString* res = NULL;

    try
    {
        res = ::uPtr< ::uDelegate*>(__this->_factory)->Invoke< ::uString*, ::uArray*>(__this->_args);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Uno::Threading::Promise__string*>(__this->_promise)->Reject(e);
            return;
        }
        else
        {
            throw __t;
        }
    }

    ::uPtr< ::app::Uno::Threading::Promise__string*>(__this->_promise)->Resolve(res);
}

}}}
