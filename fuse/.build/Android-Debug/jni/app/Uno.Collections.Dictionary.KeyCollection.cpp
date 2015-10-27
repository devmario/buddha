#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection__string__string.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection__string__string__uType* Dictionary2_KeyCollection__string__string__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection__string__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection__string__string__uType*)::uAllocClassType(sizeof(Dictionary2_KeyCollection__string__string__uType), "Uno.Collections.Dictionary<string,string>.KeyCollection", false, 0, 1, 0);

    type->SetStrongRefs(
        "_source", offsetof(Dictionary2_KeyCollection__string__string, _source));

    return type;
}

void Dictionary2_KeyCollection__string__string___ObjInit(Dictionary2_KeyCollection__string__string* __this, ::app::Uno::Collections::Dictionary__string__string* source)
{
    __this->_source = source;
}

::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__string Dictionary2_KeyCollection__string__string__GetEnumerator(Dictionary2_KeyCollection__string__string* __this)
{
    return ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__string__New_1(NULL, __this->_source);
}

Dictionary2_KeyCollection__string__string* Dictionary2_KeyCollection__string__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__string* source)
{
    Dictionary2_KeyCollection__string__string* inst = (Dictionary2_KeyCollection__string__string*)::uAllocObject(sizeof(Dictionary2_KeyCollection__string__string), Dictionary2_KeyCollection__string__string__typeof());
    inst->_ObjInit(source);
    return inst;
}

}}}
