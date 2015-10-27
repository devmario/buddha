#include <app/Uno.Bool.h>
#include <app/Uno.Collections.UnionEnumerator__float2.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UnionEnumerator__float2__uType* UnionEnumerator__float2__typeof()
{
    static ::uStaticStrong<UnionEnumerator__float2__uType*> type;
    if (type != NULL) return type;

    type = (UnionEnumerator__float2__uType*)::uAllocClassType(sizeof(UnionEnumerator__float2__uType), "Uno.Collections.UnionEnumerator<float2>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))UnionEnumerator__float2__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))UnionEnumerator__float2__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))UnionEnumerator__float2__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(UnionEnumerator__float2__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(UnionEnumerator__float2__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(UnionEnumerator__float2__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(UnionEnumerator__float2, _current),
        "_first", offsetof(UnionEnumerator__float2, _first),
        "_second", offsetof(UnionEnumerator__float2, _second));

    return type;
}

void UnionEnumerator__float2___ObjInit(UnionEnumerator__float2* __this, ::uObject* first, ::uObject* second)
{
    __this->_first = first;
    __this->_second = second;
    __this->_current = __this->_first;
}

void UnionEnumerator__float2__Dispose(UnionEnumerator__float2* __this)
{
}

::app::Uno::Float2 UnionEnumerator__float2__get_Current(UnionEnumerator__float2* __this)
{
    return ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(__this->_current));
}

bool UnionEnumerator__float2__MoveNext(UnionEnumerator__float2* __this)
{
    if (::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_current)))
    {
        return true;
    }

    if (__this->_current == __this->_first)
    {
        __this->_current = __this->_second;
        return __this->MoveNext();
    }

    return false;
}

UnionEnumerator__float2* UnionEnumerator__float2__New_1(::uStatic* __this, ::uObject* first, ::uObject* second)
{
    UnionEnumerator__float2* inst = (UnionEnumerator__float2*)::uAllocObject(sizeof(UnionEnumerator__float2), UnionEnumerator__float2__typeof());
    inst->_ObjInit(first, second);
    return inst;
}

}}}
