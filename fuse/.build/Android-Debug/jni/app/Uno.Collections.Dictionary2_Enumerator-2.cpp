#include <app/Fuse.Input.Pointer_PointerRecord.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Pointer_Poi-66af8f6a.h>
#include <app/Uno.Collections.Dictionary2_BucketState.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Pointer-8e8b3a50.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__typeof()
{
    static ::uStaticStrong<Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType*)::uAllocStructType(sizeof(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType), "Uno.Collections.Dictionary2_Enumerator<int,Fuse.Input.Pointer_PointerRecord>", sizeof(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType, __interface_1));

    type->SetStrongRefs(
        "_current._value", offsetof(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord, _current._value),
        "_source", offsetof(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord, _source));

    return type;
}

void Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord___ObjInit(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Dispose(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this)
{
}

::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__get_Current(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    return __this->_current;
}

bool Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__MoveNext(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord>(__this->_iterator);
    __this->_current = ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__New_1(NULL, bucket.Key, bucket.Value);
    return true;
}

Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source)
{
    Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord inst = ::uDefault< Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord>();
    inst._ObjInit(source);
    return inst;
}

}}}
