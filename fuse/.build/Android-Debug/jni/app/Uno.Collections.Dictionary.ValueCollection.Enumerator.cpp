#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_P-f183901b.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_Fuse_S-3c8f0cc7.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_D-931b1144.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_Lis-466067fe.h>
#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.Dictionary2_BucketState.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__Fuse_Dr-d900373a.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-45ef4c4b.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-e0f70c48.h>
#include <app/Uno.Collections.List__Fuse_Scripting_INameListener.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType*)::uAllocStructType(sizeof(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType), "Uno.Collections.Dictionary<Fuse.Drawing.Stroke,Fuse.Drawing.PolygonFiller>.ValueCollection.Enumerator", sizeof(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _current),
        "_source", offsetof(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller, _source));

    return type;
}

void Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Dispose(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
}

::app::Fuse::Drawing::PolygonFiller* Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Current(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    return __this->_current;
}

bool Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__MoveNext(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>(__this->_iterator);
    __this->_current = bucket.Value;
    return true;
}

Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source)
{
    Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller inst = ::uDefault< Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType*)::uAllocStructType(sizeof(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<Fuse.Scripting.INameListener>>.ValueCollection.Enumerator", sizeof(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _current),
        "_source", offsetof(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_, _source));

    return type;
}

void Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___Dispose(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
}

::app::Uno::Collections::List__Fuse_Scripting_INameListener* Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Current(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    return __this->_current;
}

bool Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___MoveNext(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener_>(__this->_iterator);
    __this->_current = bucket.Value;
    return true;
}

Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_ Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* source)
{
    Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_ inst = ::uDefault< Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___uType* Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___typeof()
{
    static ::uStaticStrong<Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___uType*> type;
    if (type != NULL) return type;

    type = (Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___uType*)::uAllocStructType(sizeof(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___uType), "Uno.Collections.Dictionary<string,Uno.Collections.List<object>>.ValueCollection.Enumerator", sizeof(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_, _current),
        "_source", offsetof(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_, _source));

    return type;
}

void Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object____ObjInit(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(source)->_version;
    __this->_iterator = -1;
}

void Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___Dispose(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_* __this)
{
}

::app::Uno::Collections::List__object* Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___get_Current(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_* __this)
{
    return __this->_current;
}

bool Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___MoveNext(Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_* __this)
{
    if (__this->_version != ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    do
    {
        __this->_iterator++;

        if (__this->_iterator >= ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_buckets)->Length())
        {
            return false;
        }
    }
    while (::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(__this->_iterator).State != 1);

    ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_ bucket = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*>(__this->_source)->_buckets)->Item< ::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object_>(__this->_iterator);
    __this->_current = bucket.Value;
    return true;
}

Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_ Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source)
{
    Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_ inst = ::uDefault< Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object_>();
    inst._ObjInit(source);
    return inst;
}

}}}
