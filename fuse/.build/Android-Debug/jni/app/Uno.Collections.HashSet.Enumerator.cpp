#include <app/Fuse.IFlush.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_Node__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Node__bool.h>
#include <app/Uno.Collections.Dictionary2_BucketState.h>
#include <app/Uno.Collections.HashSet1_Enumerator__Fuse_IFlush.h>
#include <app/Uno.Collections.HashSet1_Enumerator__Fuse_Node.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet1_Enumerator__Fuse_IFlush__uType* HashSet1_Enumerator__Fuse_IFlush__typeof()
{
    static ::uStaticStrong<HashSet1_Enumerator__Fuse_IFlush__uType*> type;
    if (type != NULL) return type;

    type = (HashSet1_Enumerator__Fuse_IFlush__uType*)::uAllocStructType(sizeof(HashSet1_Enumerator__Fuse_IFlush__uType), "Uno.Collections.HashSet<Fuse.IFlush>.Enumerator", sizeof(HashSet1_Enumerator__Fuse_IFlush), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))HashSet1_Enumerator__Fuse_IFlush__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))HashSet1_Enumerator__Fuse_IFlush__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(HashSet1_Enumerator__Fuse_IFlush__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(HashSet1_Enumerator__Fuse_IFlush__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(HashSet1_Enumerator__Fuse_IFlush, _current),
        "_source", offsetof(HashSet1_Enumerator__Fuse_IFlush, _source));

    return type;
}

void HashSet1_Enumerator__Fuse_IFlush___ObjInit(HashSet1_Enumerator__Fuse_IFlush* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(source)->_version;
    __this->_iterator = -1;
}

void HashSet1_Enumerator__Fuse_IFlush__Dispose(HashSet1_Enumerator__Fuse_IFlush* __this)
{
}

::uObject* HashSet1_Enumerator__Fuse_IFlush__get_Current(HashSet1_Enumerator__Fuse_IFlush* __this)
{
    return __this->_current;
}

bool HashSet1_Enumerator__Fuse_IFlush__MoveNext(HashSet1_Enumerator__Fuse_IFlush* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

HashSet1_Enumerator__Fuse_IFlush HashSet1_Enumerator__Fuse_IFlush__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source)
{
    HashSet1_Enumerator__Fuse_IFlush inst = ::uDefault< HashSet1_Enumerator__Fuse_IFlush>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet1_Enumerator__Fuse_Node__uType* HashSet1_Enumerator__Fuse_Node__typeof()
{
    static ::uStaticStrong<HashSet1_Enumerator__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (HashSet1_Enumerator__Fuse_Node__uType*)::uAllocStructType(sizeof(HashSet1_Enumerator__Fuse_Node__uType), "Uno.Collections.HashSet<Fuse.Node>.Enumerator", sizeof(HashSet1_Enumerator__Fuse_Node), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Node*(*)(void*))HashSet1_Enumerator__Fuse_Node__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))HashSet1_Enumerator__Fuse_Node__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))HashSet1_Enumerator__Fuse_Node__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Node__typeof(), offsetof(HashSet1_Enumerator__Fuse_Node__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(HashSet1_Enumerator__Fuse_Node__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(HashSet1_Enumerator__Fuse_Node__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(HashSet1_Enumerator__Fuse_Node, _current),
        "_source", offsetof(HashSet1_Enumerator__Fuse_Node, _source));

    return type;
}

void HashSet1_Enumerator__Fuse_Node___ObjInit(HashSet1_Enumerator__Fuse_Node* __this, ::app::Uno::Collections::Dictionary__Fuse_Node__bool* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(source)->_version;
    __this->_iterator = -1;
}

void HashSet1_Enumerator__Fuse_Node__Dispose(HashSet1_Enumerator__Fuse_Node* __this)
{
}

::app::Fuse::Node* HashSet1_Enumerator__Fuse_Node__get_Current(HashSet1_Enumerator__Fuse_Node* __this)
{
    return __this->_current;
}

bool HashSet1_Enumerator__Fuse_Node__MoveNext(HashSet1_Enumerator__Fuse_Node* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool>(__this->_iterator);
    __this->_current = bucket.Key;
    return true;
}

HashSet1_Enumerator__Fuse_Node HashSet1_Enumerator__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Node__bool* source)
{
    HashSet1_Enumerator__Fuse_Node inst = ::uDefault< HashSet1_Enumerator__Fuse_Node>();
    inst._ObjInit(source);
    return inst;
}

}}}
