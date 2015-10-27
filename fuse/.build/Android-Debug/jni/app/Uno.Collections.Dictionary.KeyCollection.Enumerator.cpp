#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__string.h>
#include <app/Uno.Collections.Dictionary2_BucketState.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__string.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_KeyCollection_Enumerator__string__string__uType* Dictionary2_KeyCollection_Enumerator__string__string__typeof()
{
    static ::uStaticStrong<Dictionary2_KeyCollection_Enumerator__string__string__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_KeyCollection_Enumerator__string__string__uType*)::uAllocStructType(sizeof(Dictionary2_KeyCollection_Enumerator__string__string__uType), "Uno.Collections.Dictionary<string,string>.KeyCollection.Enumerator", sizeof(Dictionary2_KeyCollection_Enumerator__string__string), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_KeyCollection_Enumerator__string__string__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_KeyCollection_Enumerator__string__string__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__string__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_KeyCollection_Enumerator__string__string__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_KeyCollection_Enumerator__string__string, _current),
        "_source", offsetof(Dictionary2_KeyCollection_Enumerator__string__string, _source));

    return type;
}

void Dictionary2_KeyCollection_Enumerator__string__string___ObjInit(Dictionary2_KeyCollection_Enumerator__string__string* __this, ::app::Uno::Collections::Dictionary__string__string* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_KeyCollection_Enumerator__string__string__Dispose(Dictionary2_KeyCollection_Enumerator__string__string* __this)
{
}

::uString* Dictionary2_KeyCollection_Enumerator__string__string__get_Current(Dictionary2_KeyCollection_Enumerator__string__string* __this)
{
    return __this->_current;
}

bool Dictionary2_KeyCollection_Enumerator__string__string__MoveNext(Dictionary2_KeyCollection_Enumerator__string__string* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__string bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__string>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

Dictionary2_KeyCollection_Enumerator__string__string Dictionary2_KeyCollection_Enumerator__string__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__string* source)
{
    Dictionary2_KeyCollection_Enumerator__string__string inst = ::uDefault< Dictionary2_KeyCollection_Enumerator__string__string>();
    inst._ObjInit(source);
    return inst;
}

}}}
