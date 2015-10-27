#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.UnionEnumerable__float2.h>
#include <app/Uno.Collections.UnionEnumerator__float2.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UnionEnumerable__float2__uType* UnionEnumerable__float2__typeof()
{
    static ::uStaticStrong<UnionEnumerable__float2__uType*> type;
    if (type != NULL) return type;

    type = (UnionEnumerable__float2__uType*)::uAllocClassType(sizeof(UnionEnumerable__float2__uType), "Uno.Collections.UnionEnumerable<float2>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))UnionEnumerable__float2__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__float2__typeof(), offsetof(UnionEnumerable__float2__uType, __interface_0));

    type->SetStrongRefs(
        "_first", offsetof(UnionEnumerable__float2, _first),
        "_second", offsetof(UnionEnumerable__float2, _second));

    return type;
}

void UnionEnumerable__float2___ObjInit(UnionEnumerable__float2* __this, ::uObject* first, ::uObject* second)
{
    __this->_first = first;
    __this->_second = second;
}

::uObject* UnionEnumerable__float2__GetEnumerator(UnionEnumerable__float2* __this)
{
    return (::uObject*)::app::Uno::Collections::UnionEnumerator__float2__New_1(NULL, ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(__this->_first)), ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(__this->_second)));
}

UnionEnumerable__float2* UnionEnumerable__float2__New_1(::uStatic* __this, ::uObject* first, ::uObject* second)
{
    UnionEnumerable__float2* inst = (UnionEnumerable__float2*)::uAllocObject(sizeof(UnionEnumerable__float2), UnionEnumerable__float2__typeof());
    inst->_ObjInit(first, second);
    return inst;
}

}}}
